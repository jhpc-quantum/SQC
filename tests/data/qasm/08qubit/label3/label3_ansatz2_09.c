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

  sqcRYGate(q, -1.640718801062333, 0);
  sqcRZGate(q, 2.3232470820104063, 0);
  sqcRYGate(q, -1.8989006676775202e-05, 1);
  sqcRZGate(q, 1.8864961569109804, 1);
  sqcRYGate(q, -0.9549092027770546, 2);
  sqcRZGate(q, -1.7507029552435638, 2);
  sqcRYGate(q, -1.559379919573776, 3);
  sqcRZGate(q, 0.37924816437284337, 3);
  sqcRYGate(q, 3.140114322226214, 4);
  sqcRZGate(q, 2.9453789085545967, 4);
  sqcRYGate(q, 1.5654492519091987, 5);
  sqcRZGate(q, 3.141057989846714, 5);
  sqcRYGate(q, 1.6454318162347483, 6);
  sqcRZGate(q, 1.4065328767053096, 6);
  sqcRYGate(q, 1.5802840239813356, 7);
  sqcRZGate(q, 0.0005625822094810218, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.136599890179103, 0);
  sqcRZGate(q, 0.7489913832870161, 0);
  sqcRYGate(q, -3.1415591400768155, 1);
  sqcRZGate(q, -0.8778406327323375, 1);
  sqcRYGate(q, -2.879197600888709, 2);
  sqcRZGate(q, -0.20304171530550796, 2);
  sqcRYGate(q, 0.12188206644976596, 3);
  sqcRZGate(q, 1.1942798926830809, 3);
  sqcRYGate(q, -3.130874285395051, 4);
  sqcRZGate(q, 0.4133124642305637, 4);
  sqcRYGate(q, 1.1425032552910082, 5);
  sqcRZGate(q, 0.5891898005404537, 5);
  sqcRYGate(q, -1.8449888954243248, 6);
  sqcRZGate(q, -1.1672263900818054, 6);
  sqcRYGate(q, -0.8826880791438149, 7);
  sqcRZGate(q, 1.7133248767202653, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.08029855962236, 0);
  sqcRZGate(q, 0.07442435890682121, 0);
  sqcRYGate(q, -8.771942549223867e-06, 1);
  sqcRZGate(q, -2.215675058943333, 1);
  sqcRYGate(q, -2.651373284809944, 2);
  sqcRZGate(q, -0.030984288543845828, 2);
  sqcRYGate(q, 1.1543001472983931, 3);
  sqcRZGate(q, 0.10934818435647893, 3);
  sqcRYGate(q, -1.567786183749555, 4);
  sqcRZGate(q, 3.1410064265152613, 4);
  sqcRYGate(q, 3.126481742263427, 5);
  sqcRZGate(q, -2.585167681883425, 5);
  sqcRYGate(q, 2.9653410629098325, 6);
  sqcRZGate(q, -0.6240766025309643, 6);
  sqcRYGate(q, 3.0222201627351866, 7);
  sqcRZGate(q, -2.34119404362594, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.1331424177947267, 0);
  sqcRZGate(q, -3.067196434200222, 0);
  sqcRYGate(q, 3.1415557526572826, 1);
  sqcRZGate(q, -2.325824843525897, 1);
  sqcRYGate(q, -3.0128201051943675, 2);
  sqcRZGate(q, -0.014456254318993444, 2);
  sqcRYGate(q, -0.1452738977094374, 3);
  sqcRZGate(q, -1.6817330225164966, 3);
  sqcRYGate(q, 1.3802896734902035, 4);
  sqcRZGate(q, -3.139826333840036, 4);
  sqcRYGate(q, 1.5605367680526072, 5);
  sqcRZGate(q, 3.059405998454712, 5);
  sqcRYGate(q, -2.953384560843184, 6);
  sqcRZGate(q, 0.0002071597221420308, 6);
  sqcRYGate(q, 3.1412527084822384, 7);
  sqcRZGate(q, 0.6951539994493396, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.6245228081450638, 0);
  sqcRZGate(q, -1.6235493843198192, 0);
  sqcRYGate(q, -3.1415917770409156, 1);
  sqcRZGate(q, 2.946303599993325, 1);
  sqcRYGate(q, -1.5758334184278517, 2);
  sqcRZGate(q, 1.1411456957306256, 2);
  sqcRYGate(q, 1.6703830728986195, 3);
  sqcRZGate(q, -0.01367390100264581, 3);
  sqcRYGate(q, -1.565877146368824, 4);
  sqcRZGate(q, 1.4281992972072173, 4);
  sqcRYGate(q, 0.2852469239502282, 5);
  sqcRZGate(q, -3.054345422576281, 5);
  sqcRYGate(q, -1.5799970689498422, 6);
  sqcRZGate(q, -1.7790436556804363, 6);
  sqcRYGate(q, 1.5439904690700539, 7);
  sqcRZGate(q, 1.5810055576960635, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.3817998299704861, 0);
  sqcRZGate(q, 1.1973546387831817, 0);
  sqcRYGate(q, 0.00013725583880130896, 1);
  sqcRZGate(q, 0.7402296486261974, 1);
  sqcRYGate(q, 0.3124107469875663, 2);
  sqcRZGate(q, -1.7369977865929147, 2);
  sqcRYGate(q, 1.833589477983928, 3);
  sqcRZGate(q, 1.566062152147734, 3);
  sqcRYGate(q, 2.7765989684974546, 4);
  sqcRZGate(q, 0.39775532068142727, 4);
  sqcRYGate(q, -1.7099173694982603, 5);
  sqcRZGate(q, -3.1388363497521965, 5);
  sqcRYGate(q, 2.7553500626521923, 6);
  sqcRZGate(q, 0.681569151196423, 6);
  sqcRYGate(q, 0.1301377227194935, 7);
  sqcRZGate(q, 1.5656451102515772, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.1406090881085404, 0);
  sqcRZGate(q, -1.0311027987378667, 0);
  sqcRYGate(q, -1.5708186011390959, 1);
  sqcRZGate(q, -1.4786946923929287, 1);
  sqcRYGate(q, -0.0016580348594474258, 2);
  sqcRZGate(q, 1.8060116358758034, 2);
  sqcRYGate(q, 1.5761186500937612, 3);
  sqcRZGate(q, -2.8774077954975255, 3);
  sqcRYGate(q, -3.1407945376302813, 4);
  sqcRZGate(q, -2.188000026451503, 4);
  sqcRYGate(q, -2.2844398334265335, 5);
  sqcRZGate(q, 1.5745744684634964, 5);
  sqcRYGate(q, 0.003261548606295221, 6);
  sqcRZGate(q, -0.9366061858331562, 6);
  sqcRYGate(q, 1.5712313668502915, 7);
  sqcRZGate(q, -0.06002624268778334, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 3.14159072772286, 0);
  sqcRZGate(q, -1.649715877527576, 0);
  sqcRYGate(q, -0.0014447495384527454, 1);
  sqcRZGate(q, -0.09208333578344874, 1);
  sqcRYGate(q, 2.7907920486441842e-05, 2);
  sqcRZGate(q, -2.0346690378996604, 2);
  sqcRYGate(q, -3.1415752526641505, 3);
  sqcRZGate(q, -2.6497578059806535, 3);
  sqcRYGate(q, 3.141575021588161, 4);
  sqcRZGate(q, 2.6739365828260815, 4);
  sqcRYGate(q, 1.5707997444202233, 5);
  sqcRZGate(q, -1.8791793856367396, 5);
  sqcRYGate(q, 3.1415752739169513, 6);
  sqcRZGate(q, -0.8331693090509477, 6);
  sqcRYGate(q, -1.5708206446153172, 7);
  sqcRZGate(q, -3.1414289269859412, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.722658017374669, 0);
  sqcRZGate(q, 2.0736167624089523, 0);
  sqcRYGate(q, -1.7930139655274822, 1);
  sqcRZGate(q, 1.570725925778479, 1);
  sqcRYGate(q, 1.8024223356281635, 2);
  sqcRZGate(q, 0.030214145501733288, 2);
  sqcRYGate(q, 1.9773770501296672, 3);
  sqcRZGate(q, -0.9591004893278104, 3);
  sqcRYGate(q, 1.8118881342258837, 4);
  sqcRZGate(q, 0.6853523175367914, 4);
  sqcRYGate(q, -3.8998874670070904e-05, 5);
  sqcRZGate(q, 2.6119199964662076, 5);
  sqcRYGate(q, 2.428658129238361, 6);
  sqcRZGate(q, -0.30141588792725305, 6);
  sqcRYGate(q, 1.5708105919606092, 7);
  sqcRZGate(q, -3.031613966268928, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.025681356242690252, 0);
  sqcRZGate(q, -2.805636329711609, 0);
  sqcRYGate(q, -0.052817866492453014, 1);
  sqcRZGate(q, -1.5707127065540831, 1);
  sqcRYGate(q, 0.023954924714447046, 2);
  sqcRZGate(q, 2.8457530455988196, 2);
  sqcRYGate(q, -0.08063469370173419, 3);
  sqcRZGate(q, -1.9970645689390873, 3);
  sqcRYGate(q, -0.04677097057138769, 4);
  sqcRZGate(q, 2.6669623880230495, 4);
  sqcRYGate(q, 0.0004059791860795414, 5);
  sqcRZGate(q, 0.8323384291644681, 5);
  sqcRYGate(q, -1.411512507698239, 6);
  sqcRZGate(q, 1.815795324333396, 6);
  sqcRYGate(q, -7.646157574680842e-06, 7);
  sqcRZGate(q, 2.3768324339272735, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.5947226293608804, 0);
  sqcRZGate(q, -0.6157656485724704, 0);
  sqcRYGate(q, 0.5892586938191796, 1);
  sqcRZGate(q, 0.11658409011379778, 1);
  sqcRYGate(q, -2.5108902491492087, 2);
  sqcRZGate(q, -2.4861527143386852, 2);
  sqcRYGate(q, -2.3171114298195703, 3);
  sqcRZGate(q, 2.784522501169259, 3);
  sqcRYGate(q, -2.487917874722684, 4);
  sqcRZGate(q, 1.5247865774463376, 4);
  sqcRYGate(q, 3.140009182690573, 5);
  sqcRZGate(q, 3.1358466602436375, 5);
  sqcRYGate(q, -1.0179072216023375, 6);
  sqcRZGate(q, -2.8884372240345844, 6);
  sqcRYGate(q, -1.5708811665298343, 7);
  sqcRZGate(q, -3.1415548551565005, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.6124224581551126e-05, 0);
  sqcRZGate(q, 1.773352061356703, 0);
  sqcRYGate(q, 3.1413456378251903, 1);
  sqcRZGate(q, -3.0250070433564313, 1);
  sqcRYGate(q, 3.1415688641351927, 2);
  sqcRZGate(q, -1.2037474913496067, 2);
  sqcRYGate(q, 3.1415750417973975, 3);
  sqcRZGate(q, 1.4288891159965083, 3);
  sqcRYGate(q, -3.1415899738231423, 4);
  sqcRZGate(q, 2.641388139255032, 4);
  sqcRYGate(q, 1.5691208407068282, 5);
  sqcRZGate(q, -3.141550853567139, 5);
  sqcRYGate(q, -1.5030750982853893e-06, 6);
  sqcRZGate(q, 1.7307532190101842, 6);
  sqcRYGate(q, -1.5707742864920826, 7);
  sqcRZGate(q, -0.9321497797024633, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -3.1415343550552985, 0);
  sqcRZGate(q, 2.9831079688824054, 0);
  sqcRYGate(q, -1.5709120938939325, 1);
  sqcRZGate(q, -1.6517224075570853, 1);
  sqcRYGate(q, -7.140335420266021e-05, 2);
  sqcRZGate(q, 0.5178353389950283, 2);
  sqcRYGate(q, 3.14158764929221, 3);
  sqcRZGate(q, 0.407001385703314, 3);
  sqcRYGate(q, -3.1414336377339964, 4);
  sqcRZGate(q, 2.86119979515018, 4);
  sqcRYGate(q, 1.57082071847551, 5);
  sqcRZGate(q, -2.1889060770811577, 5);
  sqcRYGate(q, -3.1414453841056793, 6);
  sqcRZGate(q, -2.0084954917881497, 6);
  sqcRYGate(q, 3.141563628000365, 7);
  sqcRZGate(q, -0.15212518399998656, 7);

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
