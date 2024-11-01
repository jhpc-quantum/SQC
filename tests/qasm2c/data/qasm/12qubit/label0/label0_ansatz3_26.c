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

  sqcRYGate(q, -1.6440124970912746, 0);
  sqcRZGate(q, -0.14872470255074255, 0);
  sqcRYGate(q, 2.955221759756905, 1);
  sqcRZGate(q, 2.158889012544768, 1);
  sqcRYGate(q, -0.5811667248870225, 2);
  sqcRZGate(q, -0.11076065963277237, 2);
  sqcRYGate(q, 0.5825583048301919, 3);
  sqcRZGate(q, -1.221827908079495, 3);
  sqcRYGate(q, -0.00037769281896796625, 4);
  sqcRZGate(q, -1.6710712819291862, 4);
  sqcRYGate(q, 1.023563864033716, 5);
  sqcRZGate(q, -0.7497771480697527, 5);
  sqcRYGate(q, -2.494147615947547, 6);
  sqcRZGate(q, 3.125833199683548, 6);
  sqcRYGate(q, 0.0008867026035259684, 7);
  sqcRZGate(q, -1.3008722852501544, 7);
  sqcRYGate(q, 0.6627309029443609, 8);
  sqcRZGate(q, -0.5181741932548761, 8);
  sqcRYGate(q, -1.6072573619045736, 9);
  sqcRZGate(q, -2.6109708238075915, 9);
  sqcRYGate(q, 1.6181122469389546, 10);
  sqcRZGate(q, 2.1267746802698055, 10);
  sqcRYGate(q, -2.4319681231859347, 11);
  sqcRZGate(q, -2.8142261388972982, 11);
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
  sqcRYGate(q, 0.5995543860954963, 0);
  sqcRZGate(q, 0.1696834412133157, 0);
  sqcRYGate(q, 0.5066845865681247, 1);
  sqcRZGate(q, -2.9032395479262827, 1);
  sqcRYGate(q, 0.9709371423136172, 2);
  sqcRZGate(q, 0.3017806512988687, 2);
  sqcRYGate(q, 2.9454533028460097, 3);
  sqcRZGate(q, -1.1439606006267482, 3);
  sqcRYGate(q, -0.005912255265019262, 4);
  sqcRZGate(q, -1.6643272277321302, 4);
  sqcRYGate(q, -2.9364613615401454, 5);
  sqcRZGate(q, -0.7195805710009509, 5);
  sqcRYGate(q, 1.7900660204811425, 6);
  sqcRZGate(q, 2.0026806937526116, 6);
  sqcRYGate(q, 3.140958452110585, 7);
  sqcRZGate(q, -1.608379640870068, 7);
  sqcRYGate(q, 2.69088263801265, 8);
  sqcRZGate(q, 1.360073241374364, 8);
  sqcRYGate(q, 2.05430551196296, 9);
  sqcRZGate(q, 1.9000576189710987, 9);
  sqcRYGate(q, -0.42528156552546437, 10);
  sqcRZGate(q, -1.56197361306788, 10);
  sqcRYGate(q, -2.4522678731395886, 11);
  sqcRZGate(q, 1.2917888492532004, 11);
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
  sqcRYGate(q, 3.039959237994221, 0);
  sqcRZGate(q, -3.0552427026481714, 0);
  sqcRYGate(q, -0.14884706572075324, 1);
  sqcRZGate(q, -0.44343371348849914, 1);
  sqcRYGate(q, -0.42795263896418023, 2);
  sqcRZGate(q, 1.2529488358925396, 2);
  sqcRYGate(q, 0.005499617757487689, 3);
  sqcRZGate(q, 3.0975655669858506, 3);
  sqcRYGate(q, -3.141526358413033, 4);
  sqcRZGate(q, 1.2490810357717288, 4);
  sqcRYGate(q, -2.480812273634798, 5);
  sqcRZGate(q, 0.9053348246100974, 5);
  sqcRYGate(q, 3.0618306834601468, 6);
  sqcRZGate(q, 0.9016267593425082, 6);
  sqcRYGate(q, 3.141175193967414, 7);
  sqcRZGate(q, 1.0796659657991305, 7);
  sqcRYGate(q, -1.2449260702817917, 8);
  sqcRZGate(q, 1.8169141649076623, 8);
  sqcRYGate(q, 2.922966646379617, 9);
  sqcRZGate(q, 2.650233783468018, 9);
  sqcRYGate(q, -1.0547876213948824, 10);
  sqcRZGate(q, -2.365434912417423, 10);
  sqcRYGate(q, 1.1681006813221888, 11);
  sqcRZGate(q, -0.10031712248030368, 11);
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
  sqcRYGate(q, -1.0610065442818382, 0);
  sqcRZGate(q, 3.0016067811009326, 0);
  sqcRYGate(q, 2.633148212855813, 1);
  sqcRZGate(q, 1.665109877813463, 1);
  sqcRYGate(q, 2.1803083978033646, 2);
  sqcRZGate(q, -0.6414935425748682, 2);
  sqcRYGate(q, 0.2645418957136103, 3);
  sqcRZGate(q, -0.7281464916275792, 3);
  sqcRYGate(q, -3.0512251535160426, 4);
  sqcRZGate(q, 2.5098919350995335, 4);
  sqcRYGate(q, 0.23800495503866267, 5);
  sqcRZGate(q, -0.7940456330979284, 5);
  sqcRYGate(q, -1.652811006076681, 6);
  sqcRZGate(q, 0.03737562261083492, 6);
  sqcRYGate(q, -3.1411179570450343, 7);
  sqcRZGate(q, -1.3479410627319055, 7);
  sqcRYGate(q, 1.638870421074847, 8);
  sqcRZGate(q, -1.6879446620734873, 8);
  sqcRYGate(q, 0.6970676771652915, 9);
  sqcRZGate(q, -0.8124119399580021, 9);
  sqcRYGate(q, -2.906239657330639, 10);
  sqcRZGate(q, 1.670497425724793, 10);
  sqcRYGate(q, -0.7942755796133429, 11);
  sqcRZGate(q, -2.7869943404403363, 11);
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
  sqcRYGate(q, -1.8376282673570445, 0);
  sqcRZGate(q, 1.6935722093954997, 0);
  sqcRYGate(q, 3.0642065094005853, 1);
  sqcRZGate(q, 0.6793960574371516, 1);
  sqcRYGate(q, 1.923680837647515, 2);
  sqcRZGate(q, 3.0415058919488507, 2);
  sqcRYGate(q, -2.8038477111978093, 3);
  sqcRZGate(q, -0.21818230916458528, 3);
  sqcRYGate(q, 0.018037389168563192, 4);
  sqcRZGate(q, -1.6204677609442193, 4);
  sqcRYGate(q, -1.7612717652548375, 5);
  sqcRZGate(q, -1.5125380766746412, 5);
  sqcRYGate(q, -0.0014697857829819405, 6);
  sqcRZGate(q, -2.0209755934160736, 6);
  sqcRYGate(q, 3.1411641525509792, 7);
  sqcRZGate(q, 0.184992677527422, 7);
  sqcRYGate(q, 0.3601693104145598, 8);
  sqcRZGate(q, -0.1430418772737563, 8);
  sqcRYGate(q, -2.1826045660963147, 9);
  sqcRZGate(q, -2.2582621979454336, 9);
  sqcRYGate(q, 0.4645990501776813, 10);
  sqcRZGate(q, 0.4177794977112938, 10);
  sqcRYGate(q, 2.154788313966197, 11);
  sqcRZGate(q, 2.666138244055732, 11);
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
  sqcRYGate(q, -1.3657316501745436, 0);
  sqcRZGate(q, 1.9493077100459308, 0);
  sqcRYGate(q, -3.139149654407774, 1);
  sqcRZGate(q, 2.363328280747917, 1);
  sqcRYGate(q, -2.7608874453058254, 2);
  sqcRZGate(q, -0.9191927689642825, 2);
  sqcRYGate(q, 3.09224877815089, 3);
  sqcRZGate(q, -1.1660476844751924, 3);
  sqcRYGate(q, 2.183895387727814, 4);
  sqcRZGate(q, 0.5843818930167015, 4);
  sqcRYGate(q, 2.761133618758511, 5);
  sqcRZGate(q, 3.063552218819861, 5);
  sqcRYGate(q, 0.008327157857173693, 6);
  sqcRZGate(q, 0.6004540950794829, 6);
  sqcRYGate(q, -2.6948869685480528, 7);
  sqcRZGate(q, 0.36277189328541226, 7);
  sqcRYGate(q, 2.019689770158708, 8);
  sqcRZGate(q, 1.4968646870002855, 8);
  sqcRYGate(q, -0.027734072083036253, 9);
  sqcRZGate(q, -0.6696044664352113, 9);
  sqcRYGate(q, 2.1179978526265155, 10);
  sqcRZGate(q, 2.8048767235909304, 10);
  sqcRYGate(q, 1.5498360235519888, 11);
  sqcRZGate(q, 2.0018032945075688, 11);
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
  sqcRYGate(q, 1.0235861121544905, 0);
  sqcRZGate(q, 2.973945965246457, 0);
  sqcRYGate(q, 0.10475585050945278, 1);
  sqcRZGate(q, -0.09557820401420802, 1);
  sqcRYGate(q, 0.7936236246243125, 2);
  sqcRZGate(q, -1.2232824990592355, 2);
  sqcRYGate(q, 1.4224722891971515, 3);
  sqcRZGate(q, -0.4210853756671404, 3);
  sqcRYGate(q, -0.0020296457065075314, 4);
  sqcRZGate(q, 0.7776403586721125, 4);
  sqcRYGate(q, -0.0010137059538548598, 5);
  sqcRZGate(q, -3.051768914573045, 5);
  sqcRYGate(q, -3.1415434381982865, 6);
  sqcRZGate(q, -1.655112762950047, 6);
  sqcRYGate(q, 3.1403855123510267, 7);
  sqcRZGate(q, -0.8120313482264446, 7);
  sqcRYGate(q, 1.727794372096474, 8);
  sqcRZGate(q, 3.0425169492772564, 8);
  sqcRYGate(q, -2.6224821349735277, 9);
  sqcRZGate(q, 1.6875313219277306, 9);
  sqcRYGate(q, 2.9621430623276757, 10);
  sqcRZGate(q, -3.1018268588921623, 10);
  sqcRYGate(q, 1.1973739239900538, 11);
  sqcRZGate(q, 1.7539996872480152, 11);
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
  sqcRYGate(q, -0.08806413584162787, 0);
  sqcRZGate(q, 2.054041373257102, 0);
  sqcRYGate(q, 0.022359426637758695, 1);
  sqcRZGate(q, 0.612536388431518, 1);
  sqcRYGate(q, 0.9476325663471988, 2);
  sqcRZGate(q, 0.8985362529406038, 2);
  sqcRYGate(q, 1.528014399166569, 3);
  sqcRZGate(q, 2.145881996776156, 3);
  sqcRYGate(q, 0.4685376769346262, 4);
  sqcRZGate(q, 0.7156746047415165, 4);
  sqcRYGate(q, -0.27651984189158946, 5);
  sqcRZGate(q, -0.8505426918290259, 5);
  sqcRYGate(q, 3.122712890078927, 6);
  sqcRZGate(q, 2.571703456510571, 6);
  sqcRYGate(q, -0.3982351317146378, 7);
  sqcRZGate(q, 0.3614780078970937, 7);
  sqcRYGate(q, -1.58909560577548, 8);
  sqcRZGate(q, -1.1375571492845875, 8);
  sqcRYGate(q, -2.0290177641566314, 9);
  sqcRZGate(q, 2.7627313873055392, 9);
  sqcRYGate(q, -2.46644902923989, 10);
  sqcRZGate(q, -1.2762049266426896, 10);
  sqcRYGate(q, -1.3612163213992947, 11);
  sqcRZGate(q, -0.2520827204340801, 11);
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
  sqcRYGate(q, -2.231639966858591, 0);
  sqcRZGate(q, 0.8239326737178079, 0);
  sqcRYGate(q, -3.1147305687101, 1);
  sqcRZGate(q, 0.0985910334993232, 1);
  sqcRYGate(q, 0.862604853968123, 2);
  sqcRZGate(q, 0.5487755991965839, 2);
  sqcRYGate(q, 0.334558124212399, 3);
  sqcRZGate(q, 1.3914585185325468, 3);
  sqcRYGate(q, -0.03618491339048908, 4);
  sqcRZGate(q, -0.046507736323388775, 4);
  sqcRYGate(q, -3.1412220470462655, 5);
  sqcRZGate(q, -1.7094220919787995, 5);
  sqcRYGate(q, 3.141538367289648, 6);
  sqcRZGate(q, 1.315797390091489, 6);
  sqcRYGate(q, 3.139243213074156, 7);
  sqcRZGate(q, 2.33521092273605, 7);
  sqcRYGate(q, 0.35015903264917014, 8);
  sqcRZGate(q, 0.7081594112676513, 8);
  sqcRYGate(q, 3.086078262968406, 9);
  sqcRZGate(q, -1.719885043747696, 9);
  sqcRYGate(q, 2.5982201928680793, 10);
  sqcRZGate(q, 2.826439149137452, 10);
  sqcRYGate(q, -1.0834025276529877, 11);
  sqcRZGate(q, 1.6646487162352284, 11);
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
  sqcRYGate(q, -0.520293273408698, 0);
  sqcRZGate(q, 2.3266022210054973, 0);
  sqcRYGate(q, 0.030379812156424, 1);
  sqcRZGate(q, 1.0731050984742698, 1);
  sqcRYGate(q, -0.7395100274173574, 2);
  sqcRZGate(q, 2.774727306326829, 2);
  sqcRYGate(q, -0.7037262445463159, 3);
  sqcRZGate(q, -2.2687551931123675, 3);
  sqcRYGate(q, -1.6823696086315973, 4);
  sqcRZGate(q, 2.501199051113786, 4);
  sqcRYGate(q, -0.35091688352578565, 5);
  sqcRZGate(q, -0.3355364345471756, 5);
  sqcRYGate(q, 3.1403265825817313, 6);
  sqcRZGate(q, 0.722511297221397, 6);
  sqcRYGate(q, -0.10277830259097621, 7);
  sqcRZGate(q, -0.5462648350619869, 7);
  sqcRYGate(q, -0.3760451453583986, 8);
  sqcRZGate(q, -2.30148320855879, 8);
  sqcRYGate(q, -2.159535737276404, 9);
  sqcRZGate(q, 1.0656349675626968, 9);
  sqcRYGate(q, -2.2569523675246215, 10);
  sqcRZGate(q, 2.1380357637239653, 10);
  sqcRYGate(q, -0.5264297374085869, 11);
  sqcRZGate(q, 3.0709416191189227, 11);
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
  sqcRYGate(q, 0.2702877549688704, 0);
  sqcRZGate(q, -0.48693831453556624, 0);
  sqcRYGate(q, 3.0025025775267338, 1);
  sqcRZGate(q, 2.281790936323865, 1);
  sqcRYGate(q, -1.4167121498027166, 2);
  sqcRZGate(q, 0.11746744143059651, 2);
  sqcRYGate(q, 1.9611901315841564, 3);
  sqcRZGate(q, 0.03570464177928838, 3);
  sqcRYGate(q, -1.2572630258059583, 4);
  sqcRZGate(q, 0.028908095585455484, 4);
  sqcRYGate(q, -0.0004454996364575692, 5);
  sqcRZGate(q, 0.7356844956923956, 5);
  sqcRYGate(q, -2.9959233360456954e-05, 6);
  sqcRZGate(q, -1.0944677686814184, 6);
  sqcRYGate(q, -0.0003930637564515393, 7);
  sqcRZGate(q, -0.7657446796890078, 7);
  sqcRYGate(q, 1.257744752295344, 8);
  sqcRZGate(q, -1.4620122093025762, 8);
  sqcRYGate(q, 2.6446815670675057, 9);
  sqcRZGate(q, -1.3226843170980151, 9);
  sqcRYGate(q, -1.0445703107259636, 10);
  sqcRZGate(q, 2.442513276069217, 10);
  sqcRYGate(q, 2.312255042442777, 11);
  sqcRZGate(q, -2.090071744037502, 11);
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
  sqcRYGate(q, -2.013381106935619, 0);
  sqcRZGate(q, -2.7953488002290086, 0);
  sqcRYGate(q, -0.20578320567384356, 1);
  sqcRZGate(q, -2.8361083848350295, 1);
  sqcRYGate(q, -0.004532747987225445, 2);
  sqcRZGate(q, 3.017963711949518, 2);
  sqcRYGate(q, -1.1213818624433323, 3);
  sqcRZGate(q, 3.0784533087349337, 3);
  sqcRYGate(q, 2.2782672586899073, 4);
  sqcRZGate(q, -0.8375611048857288, 4);
  sqcRYGate(q, 3.0905061938764637, 5);
  sqcRZGate(q, -0.1921470020050977, 5);
  sqcRYGate(q, 0.00011686377306332083, 6);
  sqcRZGate(q, -0.687080031777993, 6);
  sqcRYGate(q, -2.847806632965936, 7);
  sqcRZGate(q, 2.4484841457115083, 7);
  sqcRYGate(q, -1.482750996867716, 8);
  sqcRZGate(q, 2.4496155093955694, 8);
  sqcRYGate(q, -0.5679959515922013, 9);
  sqcRZGate(q, -2.9521910885582905, 9);
  sqcRYGate(q, -2.066942123364936, 10);
  sqcRZGate(q, 2.702370877621888, 10);
  sqcRYGate(q, 2.8930388139138894, 11);
  sqcRZGate(q, -1.1420773797181205, 11);
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
  sqcRYGate(q, 0.31043697728024, 0);
  sqcRZGate(q, 1.8637794150125515, 0);
  sqcRYGate(q, 3.0711260983483673, 1);
  sqcRZGate(q, 0.3570361560821184, 1);
  sqcRYGate(q, -0.3301818377809509, 2);
  sqcRZGate(q, -2.713663172259563, 2);
  sqcRYGate(q, -2.6969910713089784, 3);
  sqcRZGate(q, 0.1847694125518519, 3);
  sqcRYGate(q, 2.087412124616641, 4);
  sqcRZGate(q, 2.0524026780925904, 4);
  sqcRYGate(q, 3.139595741201623, 5);
  sqcRZGate(q, -1.1946486681136408, 5);
  sqcRYGate(q, 3.1415084982429256, 6);
  sqcRZGate(q, 0.7992987119663526, 6);
  sqcRYGate(q, 0.0007912237275853329, 7);
  sqcRZGate(q, -0.2930160461056692, 7);
  sqcRYGate(q, -1.818124141708731, 8);
  sqcRZGate(q, 3.1365733024249685, 8);
  sqcRYGate(q, 1.6365902293936725, 9);
  sqcRZGate(q, 1.0008261198259047, 9);
  sqcRYGate(q, -2.818727841361005, 10);
  sqcRZGate(q, 0.39521248552269717, 10);
  sqcRYGate(q, 2.9621855390751533, 11);
  sqcRZGate(q, -1.2891574541747077, 11);
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
  sqcRYGate(q, -2.040057317260827, 0);
  sqcRZGate(q, -2.6996876497401416, 0);
  sqcRYGate(q, -2.9061772691676824, 1);
  sqcRZGate(q, 2.32057263879447, 1);
  sqcRYGate(q, 0.027950188121285566, 2);
  sqcRZGate(q, -3.091068876714019, 2);
  sqcRYGate(q, -1.54348650226388, 3);
  sqcRZGate(q, 2.200773754725646, 3);
  sqcRYGate(q, -3.126424205930804, 4);
  sqcRZGate(q, 0.4024063914961431, 4);
  sqcRYGate(q, 2.786635361955773, 5);
  sqcRZGate(q, -0.41566308667201607, 5);
  sqcRYGate(q, -0.0002484434809160163, 6);
  sqcRZGate(q, 0.61356411559216, 6);
  sqcRYGate(q, -0.033884115782464086, 7);
  sqcRZGate(q, 2.77416611275918, 7);
  sqcRYGate(q, -2.2770596518263817, 8);
  sqcRZGate(q, 1.079598601905749, 8);
  sqcRYGate(q, 2.8802357688963167, 9);
  sqcRZGate(q, -1.540473096280418, 9);
  sqcRYGate(q, 2.9677570918311664, 10);
  sqcRZGate(q, 1.4809413869159367, 10);
  sqcRYGate(q, 1.8649647107124743, 11);
  sqcRZGate(q, 0.323761527504713, 11);
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
  sqcRYGate(q, 1.4946009466376369, 0);
  sqcRZGate(q, 1.6490781512945825, 0);
  sqcRYGate(q, -1.3437120661161295, 1);
  sqcRZGate(q, -1.3094443558965256, 1);
  sqcRYGate(q, -0.5052194130134184, 2);
  sqcRZGate(q, -2.3311835482230574, 2);
  sqcRYGate(q, 1.5919336109241256, 3);
  sqcRZGate(q, -3.0480028059713016, 3);
  sqcRYGate(q, 2.35463624699026, 4);
  sqcRZGate(q, -1.2960796880914607, 4);
  sqcRYGate(q, 0.00013800260174612333, 5);
  sqcRZGate(q, 1.965348183633347, 5);
  sqcRYGate(q, -0.0001413504167140554, 6);
  sqcRZGate(q, 1.7806078339975349, 6);
  sqcRYGate(q, -3.137866915456434, 7);
  sqcRZGate(q, 1.8860139020859057, 7);
  sqcRYGate(q, -2.8505861174891844, 8);
  sqcRZGate(q, -1.3625390193333535, 8);
  sqcRYGate(q, -0.4404605377817461, 9);
  sqcRZGate(q, -2.088950668381776, 9);
  sqcRYGate(q, -2.3025705692767042, 10);
  sqcRZGate(q, -2.5186864863009943, 10);
  sqcRYGate(q, 2.6631794753642883, 11);
  sqcRZGate(q, 0.05779771710081683, 11);
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
  sqcRYGate(q, -0.004308570479553855, 0);
  sqcRZGate(q, -2.049868087496579, 0);
  sqcRYGate(q, -3.1116061829933135, 1);
  sqcRZGate(q, -0.9890715681639852, 1);
  sqcRYGate(q, 0.32767460025901557, 2);
  sqcRZGate(q, 1.0461380315871402, 2);
  sqcRYGate(q, 0.10139491255962607, 3);
  sqcRZGate(q, -0.7033767241818016, 3);
  sqcRYGate(q, -1.3999463432663237, 4);
  sqcRZGate(q, 1.1471617391983937, 4);
  sqcRYGate(q, 2.919049636943963, 5);
  sqcRZGate(q, -0.964996335025028, 5);
  sqcRYGate(q, -0.01775244469157755, 6);
  sqcRZGate(q, 2.7673597415384883, 6);
  sqcRYGate(q, 0.05322746595546704, 7);
  sqcRZGate(q, -1.807166434598133, 7);
  sqcRYGate(q, 1.5373496570613048, 8);
  sqcRZGate(q, -2.059785943768862, 8);
  sqcRYGate(q, -2.409104494241769, 9);
  sqcRZGate(q, -1.3668865292478438, 9);
  sqcRYGate(q, -2.415654594106335, 10);
  sqcRZGate(q, -0.7369048066768195, 10);
  sqcRYGate(q, -3.096121485497279, 11);
  sqcRZGate(q, 2.4272757212734737, 11);
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
  sqcRYGate(q, 1.0278593176019868, 0);
  sqcRZGate(q, 2.9437350793109314, 0);
  sqcRYGate(q, -1.8485891030732304, 1);
  sqcRZGate(q, -1.3478589247562018, 1);
  sqcRYGate(q, 2.373254270517672, 2);
  sqcRZGate(q, -2.892964878756009, 2);
  sqcRYGate(q, -0.27538455895444347, 3);
  sqcRZGate(q, 0.6330213652767273, 3);
  sqcRYGate(q, 3.086977777084173, 4);
  sqcRZGate(q, -1.6916855030868412, 4);
  sqcRYGate(q, 3.1404576280302288, 5);
  sqcRZGate(q, -0.504201733755421, 5);
  sqcRYGate(q, 0.0004265671058760745, 6);
  sqcRZGate(q, 2.1437600357499895, 6);
  sqcRYGate(q, 3.1363700279188174, 7);
  sqcRZGate(q, -2.7900166641253374, 7);
  sqcRYGate(q, 0.5425897675365761, 8);
  sqcRZGate(q, -1.7098840723290223, 8);
  sqcRYGate(q, 1.2462867404868483, 9);
  sqcRZGate(q, -1.7971058630192764, 9);
  sqcRYGate(q, -0.7190921437871403, 10);
  sqcRZGate(q, -2.938526932839939, 10);
  sqcRYGate(q, -1.754825767937238, 11);
  sqcRZGate(q, -1.9528074729652367, 11);
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
  sqcRYGate(q, 0.17284180115938327, 0);
  sqcRZGate(q, 2.878758730317626, 0);
  sqcRYGate(q, -3.1266015542435754, 1);
  sqcRZGate(q, 1.2498958821005237, 1);
  sqcRYGate(q, -2.689084730810484, 2);
  sqcRZGate(q, -0.4147896134438058, 2);
  sqcRYGate(q, 2.998326256109954, 3);
  sqcRZGate(q, 0.030949030752668527, 3);
  sqcRYGate(q, 0.1536051229777849, 4);
  sqcRZGate(q, -0.072739379607207, 4);
  sqcRYGate(q, 3.0001525898728154, 5);
  sqcRZGate(q, 0.1931692448237312, 5);
  sqcRYGate(q, -3.1219731333411844, 6);
  sqcRZGate(q, 3.11288634080795, 6);
  sqcRYGate(q, -0.01988514815037945, 7);
  sqcRZGate(q, 0.8827724034969711, 7);
  sqcRYGate(q, 2.282764867211556, 8);
  sqcRZGate(q, -1.5063472649349774, 8);
  sqcRYGate(q, -0.3308424747667419, 9);
  sqcRZGate(q, 2.5813683624776647, 9);
  sqcRYGate(q, -0.3683898732695477, 10);
  sqcRZGate(q, 1.0312696066700884, 10);
  sqcRYGate(q, -1.4873095226661235, 11);
  sqcRZGate(q, -2.6224154085774356, 11);
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
  sqcRYGate(q, -2.4515548240080243, 0);
  sqcRZGate(q, -2.7501347415735546, 0);
  sqcRYGate(q, -0.2410766679169726, 1);
  sqcRZGate(q, -2.633707456165316, 1);
  sqcRYGate(q, -2.624843698307219, 2);
  sqcRZGate(q, 1.617855797046401, 2);
  sqcRYGate(q, 1.3108159274093611, 3);
  sqcRZGate(q, -2.919209324690675, 3);
  sqcRYGate(q, 3.098005802550744, 4);
  sqcRZGate(q, -1.0248266443799743, 4);
  sqcRYGate(q, -0.0023214279467326147, 5);
  sqcRZGate(q, -1.559308092433703, 5);
  sqcRYGate(q, -0.0009589845645328053, 6);
  sqcRZGate(q, -1.350080505666759, 6);
  sqcRYGate(q, -0.00028077140562507934, 7);
  sqcRZGate(q, 2.1273247824907235, 7);
  sqcRYGate(q, -0.5287901466585412, 8);
  sqcRZGate(q, 1.8150066524301018, 8);
  sqcRYGate(q, -0.071282849367021, 9);
  sqcRZGate(q, -1.4875244658372262, 9);
  sqcRYGate(q, -0.8980462708870581, 10);
  sqcRZGate(q, 1.1895326507222193, 10);
  sqcRYGate(q, -0.7006101405356402, 11);
  sqcRZGate(q, 0.23252459605787568, 11);
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
  sqcRYGate(q, 3.1241413299515433, 0);
  sqcRZGate(q, 1.5623335637985631, 0);
  sqcRYGate(q, 0.018660997747213217, 1);
  sqcRZGate(q, 2.4404201776026127, 1);
  sqcRYGate(q, 1.7222445784080351, 2);
  sqcRZGate(q, -1.5528097380987038, 2);
  sqcRYGate(q, -0.07806521820521167, 3);
  sqcRZGate(q, -0.2402248489206709, 3);
  sqcRYGate(q, 3.1266726546022885, 4);
  sqcRZGate(q, 1.3712443624192598, 4);
  sqcRYGate(q, 3.075060244069166, 5);
  sqcRZGate(q, 1.5113981913684977, 5);
  sqcRYGate(q, 0.0029616233562030393, 6);
  sqcRZGate(q, 1.266708680509303, 6);
  sqcRYGate(q, 0.08714445575003006, 7);
  sqcRZGate(q, 0.6356737007463439, 7);
  sqcRYGate(q, -3.052516559002681, 8);
  sqcRZGate(q, -0.914135701689571, 8);
  sqcRYGate(q, -1.7819465955869613, 9);
  sqcRZGate(q, 0.2133896593069471, 9);
  sqcRYGate(q, -2.8908240708997233, 10);
  sqcRZGate(q, -0.4329106842023416, 10);
  sqcRYGate(q, 2.116866355348829, 11);
  sqcRZGate(q, -2.0372824360085815, 11);
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
  sqcRYGate(q, 2.8660011224254425, 0);
  sqcRZGate(q, 3.110043652883911, 0);
  sqcRYGate(q, -0.3337360592191869, 1);
  sqcRZGate(q, 1.9595307190836364, 1);
  sqcRYGate(q, -1.8792926865349822, 2);
  sqcRZGate(q, 0.5969317255989486, 2);
  sqcRYGate(q, -0.8786662373828626, 3);
  sqcRZGate(q, 2.4281058258288812, 3);
  sqcRYGate(q, 3.1175317480461224, 4);
  sqcRZGate(q, 0.4474822017042843, 4);
  sqcRYGate(q, 0.00024939164962756166, 5);
  sqcRZGate(q, 2.7710476110725875, 5);
  sqcRYGate(q, -3.14066894231908, 6);
  sqcRZGate(q, 1.6826817033259331, 6);
  sqcRYGate(q, -3.1340916126504696, 7);
  sqcRZGate(q, -1.7614226574040313, 7);
  sqcRYGate(q, 1.0245621093788635, 8);
  sqcRZGate(q, -0.17427871236936185, 8);
  sqcRYGate(q, -2.823578809052049, 9);
  sqcRZGate(q, -2.2076552836243932, 9);
  sqcRYGate(q, -1.2077688858884021, 10);
  sqcRZGate(q, 1.0480728760179518, 10);
  sqcRYGate(q, -1.974834359018427, 11);
  sqcRZGate(q, 0.7581694014485052, 11);
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
  sqcRYGate(q, 2.2011596637874913, 0);
  sqcRZGate(q, 2.3796409328163297, 0);
  sqcRYGate(q, 0.23695403191197606, 1);
  sqcRZGate(q, 1.3173295028653147, 1);
  sqcRYGate(q, -1.2480725829275614, 2);
  sqcRZGate(q, 2.2196893683356733, 2);
  sqcRYGate(q, -0.9347073947125404, 3);
  sqcRZGate(q, -2.1561644259293864, 3);
  sqcRYGate(q, -2.5512392325996744, 4);
  sqcRZGate(q, -2.0562947312826085, 4);
  sqcRYGate(q, -0.9532687561168243, 5);
  sqcRZGate(q, 1.223346493375213, 5);
  sqcRYGate(q, 2.2927397454414673, 6);
  sqcRZGate(q, -1.525228223391946, 6);
  sqcRYGate(q, 2.9078683951935984, 7);
  sqcRZGate(q, 2.9555521301883587, 7);
  sqcRYGate(q, -2.003455803282348, 8);
  sqcRZGate(q, -0.7251299033193737, 8);
  sqcRYGate(q, 2.579940085420304, 9);
  sqcRZGate(q, -3.1215434798097577, 9);
  sqcRYGate(q, 0.4989393649259712, 10);
  sqcRZGate(q, -1.4917590394154079, 10);
  sqcRYGate(q, 2.1700292454388173, 11);
  sqcRZGate(q, -1.1241240991586186, 11);
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
  sqcRYGate(q, 0.31274004180461734, 0);
  sqcRZGate(q, -1.1402879187827448, 0);
  sqcRYGate(q, 2.6328746855594263, 1);
  sqcRZGate(q, 1.674576740822384, 1);
  sqcRYGate(q, 1.9685913128515935, 2);
  sqcRZGate(q, -1.7613678107659168, 2);
  sqcRYGate(q, 3.082178218101134, 3);
  sqcRZGate(q, -1.5735815724573818, 3);
  sqcRYGate(q, -0.00020274934899771436, 4);
  sqcRZGate(q, -2.4325936161025727, 4);
  sqcRYGate(q, -3.141487921926481, 5);
  sqcRZGate(q, -1.1345505604812476, 5);
  sqcRYGate(q, -3.140947708451928, 6);
  sqcRZGate(q, -1.5026719826800674, 6);
  sqcRYGate(q, -3.139586761080957, 7);
  sqcRZGate(q, -1.3294775454187728, 7);
  sqcRYGate(q, -0.04127137176358442, 8);
  sqcRZGate(q, 0.44542477545275555, 8);
  sqcRYGate(q, -2.174867791339673, 9);
  sqcRZGate(q, 2.6454259252669785, 9);
  sqcRYGate(q, 1.713585104289388, 10);
  sqcRZGate(q, 0.1903233203516805, 10);
  sqcRYGate(q, 2.3587866224097622, 11);
  sqcRZGate(q, -0.8938789977406483, 11);
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
  sqcRYGate(q, -1.2964139220328312, 0);
  sqcRZGate(q, 2.1544587408190656, 0);
  sqcRYGate(q, 0.9733187776155319, 1);
  sqcRZGate(q, 1.3054305919206746, 1);
  sqcRYGate(q, -1.3766036360000256, 2);
  sqcRZGate(q, 1.5190735507273179, 2);
  sqcRYGate(q, 2.6021378195605087, 3);
  sqcRZGate(q, -0.3669080447120532, 3);
  sqcRYGate(q, 2.1402335265253742, 4);
  sqcRZGate(q, 2.3793539133151715, 4);
  sqcRYGate(q, -0.44345188038662603, 5);
  sqcRZGate(q, 1.4153938012174256, 5);
  sqcRYGate(q, -0.839935359125585, 6);
  sqcRZGate(q, 1.8299767193841376, 6);
  sqcRYGate(q, 0.3641024650965962, 7);
  sqcRZGate(q, -2.1705766516515292, 7);
  sqcRYGate(q, 0.41417821203598737, 8);
  sqcRZGate(q, 1.8874584157892942, 8);
  sqcRYGate(q, 0.44208020845732676, 9);
  sqcRZGate(q, 1.813334172424574, 9);
  sqcRYGate(q, 0.3228406220040434, 10);
  sqcRZGate(q, -0.7967254110050677, 10);
  sqcRYGate(q, -0.41116033962670223, 11);
  sqcRZGate(q, 2.9496617898144954, 11);
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
  sqcRYGate(q, 0.06942239315447019, 0);
  sqcRZGate(q, -2.8010803763855403, 0);
  sqcRYGate(q, 0.6130014092532454, 1);
  sqcRZGate(q, 1.780494219448074, 1);
  sqcRYGate(q, -0.9827282526055311, 2);
  sqcRZGate(q, -1.8593662192537943, 2);
  sqcRYGate(q, -3.1396162107268113, 3);
  sqcRZGate(q, 2.294396430111463, 3);
  sqcRYGate(q, 1.7102144545537765, 4);
  sqcRZGate(q, 3.088551974394017, 4);
  sqcRYGate(q, -3.141347318556088, 5);
  sqcRZGate(q, 0.2172752098407788, 5);
  sqcRYGate(q, -0.00014666191467736556, 6);
  sqcRZGate(q, 2.5943849638312293, 6);
  sqcRYGate(q, 3.1378229660755252, 7);
  sqcRZGate(q, -1.1384574553542623, 7);
  sqcRYGate(q, -1.697834350270699, 8);
  sqcRZGate(q, -0.894507061355062, 8);
  sqcRYGate(q, 2.288279753738507, 9);
  sqcRZGate(q, -2.5580431526915643, 9);
  sqcRYGate(q, -2.8564988314952493, 10);
  sqcRZGate(q, -1.293797697045668, 10);
  sqcRYGate(q, 1.4406257641625662, 11);
  sqcRZGate(q, 2.403008035537746, 11);
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
  sqcRYGate(q, 3.0211822159146617, 0);
  sqcRZGate(q, 2.752742168070155, 0);
  sqcRYGate(q, -0.5675266281619348, 1);
  sqcRZGate(q, 1.6241774436492067, 1);
  sqcRYGate(q, -0.02156860082658836, 2);
  sqcRZGate(q, 0.24569090872122906, 2);
  sqcRYGate(q, 1.1910633573793667, 3);
  sqcRZGate(q, -0.7474013877447174, 3);
  sqcRYGate(q, -3.0404570423671267, 4);
  sqcRZGate(q, 3.0906553555155685, 4);
  sqcRYGate(q, -3.135779950921927, 5);
  sqcRZGate(q, -2.2581774075394003, 5);
  sqcRYGate(q, -3.141310431303213, 6);
  sqcRZGate(q, -0.573073165621869, 6);
  sqcRYGate(q, 1.5566227467409366, 7);
  sqcRZGate(q, 1.2017012101559907, 7);
  sqcRYGate(q, 0.5130616749393146, 8);
  sqcRZGate(q, -3.0737230943931646, 8);
  sqcRYGate(q, -1.2237286020267202, 9);
  sqcRZGate(q, -2.8093742401810897, 9);
  sqcRYGate(q, 1.378568063344512, 10);
  sqcRZGate(q, -1.3135446081689646, 10);
  sqcRYGate(q, 0.7392343462256082, 11);
  sqcRZGate(q, -0.9025344673396071, 11);
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
  sqcRYGate(q, -0.19448842453520357, 0);
  sqcRZGate(q, -0.004753225754467571, 0);
  sqcRYGate(q, 1.0492811961448103, 1);
  sqcRZGate(q, -1.576623138308259, 1);
  sqcRYGate(q, 0.034224367514129383, 2);
  sqcRZGate(q, 0.12160588055537945, 2);
  sqcRYGate(q, 3.0654693491006033, 3);
  sqcRZGate(q, 0.14355964124471038, 3);
  sqcRYGate(q, 1.4486300065817996, 4);
  sqcRZGate(q, -1.3305359032379813, 4);
  sqcRYGate(q, 3.1415411621505505, 5);
  sqcRZGate(q, 2.8580762975725804, 5);
  sqcRYGate(q, 0.0010037392031003733, 6);
  sqcRZGate(q, -2.630423561464393, 6);
  sqcRYGate(q, 3.1403424187369744, 7);
  sqcRZGate(q, 1.494923435952483, 7);
  sqcRYGate(q, -3.0191368859716077, 8);
  sqcRZGate(q, 3.0833428145530317, 8);
  sqcRYGate(q, 3.020779632329591, 9);
  sqcRZGate(q, -1.59836656040519, 9);
  sqcRYGate(q, 2.1752133512132517, 10);
  sqcRZGate(q, 2.7734345012120167, 10);
  sqcRYGate(q, -1.277796863288539, 11);
  sqcRZGate(q, 3.0236430411701885, 11);
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
  sqcRYGate(q, -0.41769305336434037, 0);
  sqcRZGate(q, 2.955912132708618, 0);
  sqcRYGate(q, 1.4658369171784713, 1);
  sqcRZGate(q, 2.359694761071789, 1);
  sqcRYGate(q, 3.0183953952095437, 2);
  sqcRZGate(q, -1.6170370395358937, 2);
  sqcRYGate(q, 0.5478051858218791, 3);
  sqcRZGate(q, 1.3242686888242048, 3);
  sqcRYGate(q, 0.06704192533631748, 4);
  sqcRZGate(q, 0.17736826920796833, 4);
  sqcRYGate(q, 0.8253536412125728, 5);
  sqcRZGate(q, -2.988218511828504, 5);
  sqcRYGate(q, -1.5492370330006562, 6);
  sqcRZGate(q, 2.305680467099669, 6);
  sqcRYGate(q, 1.325105019742869, 7);
  sqcRZGate(q, -1.2254934786273601, 7);
  sqcRYGate(q, 1.0890847242995108, 8);
  sqcRZGate(q, 0.6656142939947906, 8);
  sqcRYGate(q, 1.0822272256858587, 9);
  sqcRZGate(q, 0.6516298611989573, 9);
  sqcRYGate(q, 2.992474797623759, 10);
  sqcRZGate(q, -2.4325477558691273, 10);
  sqcRYGate(q, 0.8164547165949401, 11);
  sqcRZGate(q, 1.6682178625016892, 11);
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
  sqcRYGate(q, 2.3823301873828373, 0);
  sqcRZGate(q, 0.8388404622229126, 0);
  sqcRYGate(q, -1.3512458731311054, 1);
  sqcRZGate(q, -0.25476604121213575, 1);
  sqcRYGate(q, -2.85673752527944, 2);
  sqcRZGate(q, -0.7945253491643758, 2);
  sqcRYGate(q, 0.09146977933821177, 3);
  sqcRZGate(q, 2.5662653593718283, 3);
  sqcRYGate(q, -0.0004722440132223227, 4);
  sqcRZGate(q, 2.266546471672937, 4);
  sqcRYGate(q, 3.14156330788161, 5);
  sqcRZGate(q, 0.33451074994065433, 5);
  sqcRYGate(q, -3.13979275953117, 6);
  sqcRZGate(q, 2.295167280304912, 6);
  sqcRYGate(q, -3.1174786110352826, 7);
  sqcRZGate(q, -0.0359722654330028, 7);
  sqcRYGate(q, -0.002397512435081937, 8);
  sqcRZGate(q, -1.97451035601233, 8);
  sqcRYGate(q, 0.42091142872387016, 9);
  sqcRZGate(q, -2.8302852000582934, 9);
  sqcRYGate(q, 0.1121112765354386, 10);
  sqcRZGate(q, 1.9885207291854892, 10);
  sqcRYGate(q, -2.1861057499754444, 11);
  sqcRZGate(q, 0.17874579412949654, 11);
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
  sqcRYGate(q, -0.00986777790297403, 0);
  sqcRZGate(q, 0.7012505658381469, 0);
  sqcRYGate(q, 1.7052172859595274, 1);
  sqcRZGate(q, -2.891307065324214, 1);
  sqcRYGate(q, 3.0914925405297553, 2);
  sqcRZGate(q, -1.6931877215546125, 2);
  sqcRYGate(q, -3.1089809066985317, 3);
  sqcRZGate(q, 2.601723510050923, 3);
  sqcRYGate(q, 1.9787134033572, 4);
  sqcRZGate(q, 0.6188412452563029, 4);
  sqcRYGate(q, -2.973995683242127, 5);
  sqcRZGate(q, -0.07714351208030432, 5);
  sqcRYGate(q, -1.5586816950459341, 6);
  sqcRZGate(q, 3.1325314942723823, 6);
  sqcRYGate(q, -1.348314673654249, 7);
  sqcRZGate(q, 3.052841769757679, 7);
  sqcRYGate(q, -2.876703599823236, 8);
  sqcRZGate(q, 0.5009024324309559, 8);
  sqcRYGate(q, -1.5311615086229593, 9);
  sqcRZGate(q, -3.111931799861936, 9);
  sqcRYGate(q, -1.4447885543751464, 10);
  sqcRZGate(q, -0.7243331071363607, 10);
  sqcRYGate(q, 1.0405026270258537, 11);
  sqcRZGate(q, -2.4505070695752926, 11);

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
