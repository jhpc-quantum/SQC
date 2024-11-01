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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -2.4335296220683165, 0);
  sqcRYGate(q, -0.2536355154821699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1230309612681911, 0);
  sqcRYGate(q, -2.9704763134197316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.642938535819673, 2);
  sqcRYGate(q, -2.4784710673870562, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5178169554076598, 2);
  sqcRYGate(q, 2.9737420959893925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.621351643477051, 4);
  sqcRYGate(q, 2.9879516369607706, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.375664032264551, 4);
  sqcRYGate(q, 1.6536917955730757, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.66779292222542, 6);
  sqcRYGate(q, -2.6704027600001745, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4326323139465087, 6);
  sqcRYGate(q, -0.20101857473749368, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.791722205133811, 1);
  sqcRYGate(q, 2.8896676901075664, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17712300293450944, 1);
  sqcRYGate(q, 0.8169903413961698, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3440604684953704, 3);
  sqcRYGate(q, -0.13618364234512548, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6895295298171542, 3);
  sqcRYGate(q, -0.12858155051909093, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0029852787992181717, 5);
  sqcRYGate(q, 0.24477664221798093, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.2861703471072979, 5);
  sqcRYGate(q, -2.223596824265475, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.189664920030098, 0);
  sqcRYGate(q, -0.9683005298349885, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3661451972444902, 0);
  sqcRYGate(q, 0.4773152654161374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.98217457352035, 2);
  sqcRYGate(q, 2.7109768440185382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3009518225654437, 2);
  sqcRYGate(q, -1.9381282054158728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8728118090015147, 4);
  sqcRYGate(q, 2.063409839353622, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8695558110499324, 4);
  sqcRYGate(q, -0.9531891316504849, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1197644306127401, 6);
  sqcRYGate(q, -2.010193507968598, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.31044667979088597, 6);
  sqcRYGate(q, 2.3114029326220282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7011719495677633, 1);
  sqcRYGate(q, 2.8122228929516293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5652354676549758, 1);
  sqcRYGate(q, 2.7786702718270853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.735366234011549, 3);
  sqcRYGate(q, 1.599586593055541, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2969760965557593, 3);
  sqcRYGate(q, -1.7874662673204744, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8072692700285844, 5);
  sqcRYGate(q, -2.891921338733409, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6428133976391708, 5);
  sqcRYGate(q, -0.8540910989475761, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.6883404683146465, 0);
  sqcRYGate(q, -0.11888469273052937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.624163313016239, 0);
  sqcRYGate(q, 2.276993680231244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1384544410509383, 2);
  sqcRYGate(q, 0.7484933722099685, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9570360262148565, 2);
  sqcRYGate(q, -0.08904820694538884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.833225091829922, 4);
  sqcRYGate(q, -0.37766984852305274, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.91914607000229, 4);
  sqcRYGate(q, -0.13472484675596874, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6195493520739561, 6);
  sqcRYGate(q, -1.0679301157499257, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.727047464978593, 6);
  sqcRYGate(q, 0.6028159950177558, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.921791448044808, 1);
  sqcRYGate(q, -1.6962695356615471, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.567264368701029, 1);
  sqcRYGate(q, 2.6887035421128203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2057720272489805, 3);
  sqcRYGate(q, 1.2297309552942002, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.030186036183451, 3);
  sqcRYGate(q, 1.7384449475264652, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8746826639897565, 5);
  sqcRYGate(q, -1.325301509899596, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.03325708459251242, 5);
  sqcRYGate(q, 0.1736147221122152, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6134607796071325, 0);
  sqcRYGate(q, -0.8948283152975203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03941322176467052, 0);
  sqcRYGate(q, -0.41325707341894535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3662326160655258, 2);
  sqcRYGate(q, 2.9574726808535536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3874730959276294, 2);
  sqcRYGate(q, 0.48691232150721664, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9187827467747767, 4);
  sqcRYGate(q, 0.959770411293591, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1714226908477376, 4);
  sqcRYGate(q, 0.4698278947582839, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.48884776258936535, 6);
  sqcRYGate(q, -0.9973988642951872, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6405925425699568, 6);
  sqcRYGate(q, 1.8609122858432547, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7916857008732374, 1);
  sqcRYGate(q, 3.033452786731676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.624385598210139, 1);
  sqcRYGate(q, 3.0789376434538083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7981851497086927, 3);
  sqcRYGate(q, -2.4069080599896253, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.53964580957199, 3);
  sqcRYGate(q, -3.0384720081041108, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1866010812852137, 5);
  sqcRYGate(q, -0.7974352444270195, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.047273693896753, 5);
  sqcRYGate(q, -1.875539109579908, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4812015674341446, 0);
  sqcRYGate(q, -1.1518754774639692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3847570637284008, 0);
  sqcRYGate(q, -1.5727825151517818, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.827762798651855, 2);
  sqcRYGate(q, -2.860075178372828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5525206299291776, 2);
  sqcRYGate(q, -0.3050970390890282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7108519101357533, 4);
  sqcRYGate(q, 0.4980925897369417, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2544949062567274, 4);
  sqcRYGate(q, 2.8015720189858464, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5533335143699899, 6);
  sqcRYGate(q, -2.8761330244009224, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8698249633002382, 6);
  sqcRYGate(q, 3.085103212871487, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3694759512751067, 1);
  sqcRYGate(q, -1.9114275697239904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6840517751825868, 1);
  sqcRYGate(q, -0.5487024983270505, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2076317254013613, 3);
  sqcRYGate(q, -0.4966485582963644, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5024341484420916, 3);
  sqcRYGate(q, -0.861987711139947, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5089398185962176, 5);
  sqcRYGate(q, -1.5767049751528255, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.359640323400448, 5);
  sqcRYGate(q, 1.8939513167352944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8080396936864717, 0);
  sqcRYGate(q, 2.7495864573387867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5302402324653053, 0);
  sqcRYGate(q, 2.7377665567535683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2398273490609549, 2);
  sqcRYGate(q, -1.6157196265373486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6756027349435938, 2);
  sqcRYGate(q, -1.145995869023304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8524164848853485, 4);
  sqcRYGate(q, 1.0354512703816425, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2991405017186897, 4);
  sqcRYGate(q, -0.49863336217084786, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7127181191843992, 6);
  sqcRYGate(q, -0.03720056980457478, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8015714616427365, 6);
  sqcRYGate(q, 1.1946070657333108, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9445868227017442, 1);
  sqcRYGate(q, 2.684288792872867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0679722354920635, 1);
  sqcRYGate(q, 1.291725138274579, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.406100007463469, 3);
  sqcRYGate(q, -1.2018745409202394, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.40272192646678, 3);
  sqcRYGate(q, -1.738814644910371, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.308385540444819, 5);
  sqcRYGate(q, 2.2230501465650665, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.426118735885261, 5);
  sqcRYGate(q, -1.323177164119513, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.56510463440009, 0);
  sqcRYGate(q, 3.018708417532294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9240694836811415, 0);
  sqcRYGate(q, -1.8442198228152569, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5288417387079374, 2);
  sqcRYGate(q, -2.5625440036780036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0790776452798205, 2);
  sqcRYGate(q, -0.9711298392317509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5829388805220277, 4);
  sqcRYGate(q, -1.2858508225022334, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.07659833401087912, 4);
  sqcRYGate(q, 2.4186792973520306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1475256180325486, 6);
  sqcRYGate(q, -2.7156211909823686, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.597059354301723, 6);
  sqcRYGate(q, -1.5283028335669593, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6834859927689607, 1);
  sqcRYGate(q, -0.4109923190563114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05159480536966488, 1);
  sqcRYGate(q, -3.0982511991518793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12866201768794655, 3);
  sqcRYGate(q, -2.3692202027914737, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1885285255897342, 3);
  sqcRYGate(q, -1.7857753553091396, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1492565851294895, 5);
  sqcRYGate(q, 0.5579626615610529, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5727704372367528, 5);
  sqcRYGate(q, -1.0439625659906149, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0896494859514902, 0);
  sqcRYGate(q, 0.4043881946727046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6369805263643157, 0);
  sqcRYGate(q, -1.1208195928225342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8360975954767937, 2);
  sqcRYGate(q, -0.8653649187564882, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6200324411191103, 2);
  sqcRYGate(q, 1.5649797060345338, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1402056634449256, 4);
  sqcRYGate(q, 3.0400039899761913, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7551265067645717, 4);
  sqcRYGate(q, -0.2805620271356508, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5558507111934778, 6);
  sqcRYGate(q, -0.868312122013502, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.24599656089036, 6);
  sqcRYGate(q, -1.590919145350342, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.802779355631178, 1);
  sqcRYGate(q, -0.9659955059366369, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6062349418763198, 1);
  sqcRYGate(q, 0.090181616419744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0128728233337556, 3);
  sqcRYGate(q, 2.222810387941137, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.54828372382745, 3);
  sqcRYGate(q, 0.8197611977786403, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.45663912533461, 5);
  sqcRYGate(q, 0.54152976587411, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3640741339856444, 5);
  sqcRYGate(q, 2.146758578671312, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.27795806115621685, 0);
  sqcRYGate(q, -2.6188846335131095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4294987904255358, 0);
  sqcRYGate(q, -2.616248502578534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.506574625886878, 2);
  sqcRYGate(q, -1.3865497388061945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48088621258044184, 2);
  sqcRYGate(q, -2.6926624153156307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0480113130346984, 4);
  sqcRYGate(q, -2.160787344487227, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9359432724211834, 4);
  sqcRYGate(q, 2.650262150911581, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.273565329558665, 6);
  sqcRYGate(q, 2.913198469737421, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5864895159913, 6);
  sqcRYGate(q, 0.6041660574976169, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.39708794849419, 1);
  sqcRYGate(q, 2.5809619029879998, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7038491358423515, 1);
  sqcRYGate(q, 2.5420570885039737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8332328045151505, 3);
  sqcRYGate(q, 1.8088707860754898, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4579313786752035, 3);
  sqcRYGate(q, 0.014893012874557243, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8848470661630747, 5);
  sqcRYGate(q, 1.6027972518003235, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1937276373433714, 5);
  sqcRYGate(q, -2.8796623469977405, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6816653912602786, 0);
  sqcRYGate(q, -0.03128835421905052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8540680243291767, 0);
  sqcRYGate(q, 1.2232534228430625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.050057402550486074, 2);
  sqcRYGate(q, 2.4757870070118027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.033275446244817, 2);
  sqcRYGate(q, -1.9356755722420553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.47590433847292335, 4);
  sqcRYGate(q, 0.8391059738668141, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5121352419455265, 4);
  sqcRYGate(q, -2.236758106367867, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7501333952656888, 6);
  sqcRYGate(q, 1.3386288016791186, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6561969320171663, 6);
  sqcRYGate(q, 0.18418094532352836, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5397869755399336, 1);
  sqcRYGate(q, 1.2339350389475952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6680417663827125, 1);
  sqcRYGate(q, -1.6892058090635096, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.101843721972643, 3);
  sqcRYGate(q, -2.694500490407822, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0350433399797176, 3);
  sqcRYGate(q, 0.9004762296897445, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8172630043253104, 5);
  sqcRYGate(q, -2.762434232240351, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9432155157889873, 5);
  sqcRYGate(q, -1.7447325247679784, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2866505621146214, 0);
  sqcRYGate(q, -1.1555494535496311, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.070802728987286, 0);
  sqcRYGate(q, 0.25485736453217606, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6568162356585668, 2);
  sqcRYGate(q, 2.5367334499650207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06872558111765638, 2);
  sqcRYGate(q, 0.04331216183818309, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8009547583532592, 4);
  sqcRYGate(q, 2.7677568383849125, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.355367747139252, 4);
  sqcRYGate(q, -2.5562413066599694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.02748484884302993, 6);
  sqcRYGate(q, -1.6209651202479867, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0781481147713636, 6);
  sqcRYGate(q, 2.234370215102732, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4778046522136199, 1);
  sqcRYGate(q, -0.3131201311172802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6550089202381304, 1);
  sqcRYGate(q, -1.05083215409359, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3455294258211454, 3);
  sqcRYGate(q, -1.1491157586448226, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8758525390275773, 3);
  sqcRYGate(q, -1.730018842023826, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7135367876912653, 5);
  sqcRYGate(q, 0.9327351305143434, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7718046272376011, 5);
  sqcRYGate(q, -2.6677213808812064, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2282582818494836, 0);
  sqcRYGate(q, -2.042174468503409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1581610941510228, 0);
  sqcRYGate(q, 2.273797660698861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05838223881717875, 2);
  sqcRYGate(q, 2.0798172450261845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.097726221786038, 2);
  sqcRYGate(q, -3.0398043657334752, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03292893869206339, 4);
  sqcRYGate(q, 1.49146244107955, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.575184165733554, 4);
  sqcRYGate(q, -2.1577240829870408, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.955050102745954, 6);
  sqcRYGate(q, 2.7472398203167345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4529761775332514, 6);
  sqcRYGate(q, 1.3646885707461864, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.019250468585198, 1);
  sqcRYGate(q, -0.06680461034646523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8123513204631034, 1);
  sqcRYGate(q, -2.1006759470133787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2373907513998572, 3);
  sqcRYGate(q, 1.7834311816436133, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.16553036875771, 3);
  sqcRYGate(q, -0.5457556689556773, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7189970314073095, 5);
  sqcRYGate(q, -2.282993686091297, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8575923596910631, 5);
  sqcRYGate(q, -0.7761661026841188, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8419619343128426, 0);
  sqcRYGate(q, 2.553872154077547, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.183885665607156, 0);
  sqcRYGate(q, 0.8346472512557713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0009322978166106, 2);
  sqcRYGate(q, -2.766827844861111, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2400977166514724, 2);
  sqcRYGate(q, 1.4907290403900468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.35557170275238, 4);
  sqcRYGate(q, -0.25397207960980195, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8978239801393015, 4);
  sqcRYGate(q, -2.970539112711655, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8317320547505695, 6);
  sqcRYGate(q, 1.1530338112166894, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.08579679593784295, 6);
  sqcRYGate(q, -1.4363910920411316, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.591260591985533, 1);
  sqcRYGate(q, -1.263347141665732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6965542659946031, 1);
  sqcRYGate(q, -1.376721053870098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.799231361055659, 3);
  sqcRYGate(q, -0.7837562002315156, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5240045532191626, 3);
  sqcRYGate(q, -1.0833770407169485, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9839136414736132, 5);
  sqcRYGate(q, -0.09732221074634138, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2962574285330897, 5);
  sqcRYGate(q, -2.4420223114413893, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8796410018908416, 0);
  sqcRYGate(q, -1.6903596948281567, 1);
  sqcRYGate(q, -0.09695672067041539, 2);
  sqcRYGate(q, -1.7076026563646964, 3);
  sqcRYGate(q, 3.0485570068437005, 4);
  sqcRYGate(q, 1.6126108558623793, 5);
  sqcRYGate(q, -1.9747380868209767, 6);
  sqcRYGate(q, 2.517007580686186, 7);

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
