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

  sqcRYGate(q, -3.1258746402188504, 0);
  sqcRZGate(q, -0.45777683334024216, 0);
  sqcRYGate(q, -1.5707947832620766, 1);
  sqcRZGate(q, 4.9161795461216684e-05, 1);
  sqcRYGate(q, -1.5707996876605406, 2);
  sqcRZGate(q, 2.900633325193261, 2);
  sqcRYGate(q, -3.1415920639109096, 3);
  sqcRZGate(q, -0.6470294503897664, 3);
  sqcRYGate(q, -3.1415495642426277, 4);
  sqcRZGate(q, -1.3872645387885996, 4);
  sqcRYGate(q, 1.5708025113843829, 5);
  sqcRZGate(q, 3.140243760473641, 5);
  sqcRYGate(q, 1.570784635146895, 6);
  sqcRZGate(q, 1.6441788958852492, 6);
  sqcRYGate(q, -2.0864726396120417, 7);
  sqcRZGate(q, 0.709676951008939, 7);
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
  sqcRYGate(q, 9.376966956790723e-05, 0);
  sqcRZGate(q, 2.0287599070520486, 0);
  sqcRYGate(q, 1.1436576313674802, 1);
  sqcRZGate(q, -0.12776908539949458, 1);
  sqcRYGate(q, 1.017382654543324, 2);
  sqcRZGate(q, 0.12844028005493366, 2);
  sqcRYGate(q, -3.5753498117685467e-07, 3);
  sqcRZGate(q, 1.8144557453392887, 3);
  sqcRYGate(q, -1.570800441800429, 4);
  sqcRZGate(q, 0.5275087044445259, 4);
  sqcRYGate(q, -0.13950254217159944, 5);
  sqcRZGate(q, 0.6367627722413579, 5);
  sqcRYGate(q, -8.426260483302694e-05, 6);
  sqcRZGate(q, 2.6392725842201483, 6);
  sqcRYGate(q, -3.1415576072648324, 7);
  sqcRZGate(q, -0.8615774880966374, 7);
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
  sqcRYGate(q, 1.703873292595243, 0);
  sqcRZGate(q, 5.89556718320551e-06, 0);
  sqcRYGate(q, -1.2066072207596257, 1);
  sqcRZGate(q, -2.609670747188551, 1);
  sqcRYGate(q, -1.5707108694280931, 2);
  sqcRZGate(q, 2.680245903352112, 2);
  sqcRYGate(q, 3.141592566519685, 3);
  sqcRZGate(q, -1.8132269650722659, 3);
  sqcRYGate(q, 9.790068684623066e-06, 4);
  sqcRZGate(q, -1.314488206580105, 4);
  sqcRYGate(q, -0.3432727107332453, 5);
  sqcRZGate(q, 2.7852891709941163, 5);
  sqcRYGate(q, 0.034801337796424296, 6);
  sqcRZGate(q, -0.9911917768227321, 6);
  sqcRYGate(q, 3.1298710960484373, 7);
  sqcRZGate(q, -1.5712527412856474, 7);
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
  sqcRYGate(q, -1.5707774741709617, 0);
  sqcRZGate(q, 0.17627000292758183, 0);
  sqcRYGate(q, 1.509202570692846, 1);
  sqcRZGate(q, -0.13370023070214107, 1);
  sqcRYGate(q, 1.5708354849134258, 2);
  sqcRZGate(q, -3.1415182099889725, 2);
  sqcRYGate(q, 3.1415925818413286, 3);
  sqcRZGate(q, 1.9604830071664614, 3);
  sqcRYGate(q, -1.5707977881947937, 4);
  sqcRZGate(q, -1.2688700949131861, 4);
  sqcRYGate(q, 2.796728998588374, 5);
  sqcRZGate(q, 1.9443097941467002, 5);
  sqcRYGate(q, 2.3928821628651953, 6);
  sqcRZGate(q, -2.360983308107617, 6);
  sqcRYGate(q, 1.116154574652163, 7);
  sqcRZGate(q, -2.5218816473099137, 7);
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
  sqcRYGate(q, 1.5707941120627797, 0);
  sqcRZGate(q, -0.02869205870713021, 0);
  sqcRYGate(q, -0.03807304417661328, 1);
  sqcRZGate(q, -0.9993300664797412, 1);
  sqcRYGate(q, 1.8549460075933677, 2);
  sqcRZGate(q, 1.5617366206591665, 2);
  sqcRYGate(q, -3.1415924162222537, 3);
  sqcRZGate(q, 2.8978812859801564, 3);
  sqcRYGate(q, -3.1415603292930947, 4);
  sqcRZGate(q, 1.383756068586455, 4);
  sqcRYGate(q, -2.985390928414847, 5);
  sqcRZGate(q, 0.8690574204350111, 5);
  sqcRYGate(q, 2.858683711509994, 6);
  sqcRZGate(q, 2.120521033291814, 6);
  sqcRYGate(q, -2.9546084601150824e-07, 7);
  sqcRZGate(q, -2.19051218673071, 7);
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
  sqcRYGate(q, -3.141518971640497, 0);
  sqcRZGate(q, 1.5420969337358008, 0);
  sqcRYGate(q, -2.8006793861834467e-06, 1);
  sqcRZGate(q, -1.980416384208615, 1);
  sqcRYGate(q, 3.1415797989779177, 2);
  sqcRZGate(q, -1.5796564923615521, 2);
  sqcRYGate(q, -3.1415924655587433, 3);
  sqcRZGate(q, -2.1894894498378763, 3);
  sqcRYGate(q, 0.00013126088514514578, 4);
  sqcRZGate(q, 2.0597631133540855, 4);
  sqcRYGate(q, -3.141560697144198, 5);
  sqcRZGate(q, 1.804576138896497, 5);
  sqcRYGate(q, -3.141585802623361, 6);
  sqcRZGate(q, -1.922845046784037, 6);
  sqcRYGate(q, -1.569047440359073, 7);
  sqcRZGate(q, -3.1415459232161194, 7);
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
  sqcRYGate(q, -2.0511645792674793, 0);
  sqcRZGate(q, 1.5707831514505843, 0);
  sqcRYGate(q, -1.5000678891593306, 1);
  sqcRZGate(q, -0.6206449349475295, 1);
  sqcRYGate(q, 2.8348009514630754, 2);
  sqcRZGate(q, 3.1415504360499003, 2);
  sqcRYGate(q, -4.3333113135763574e-07, 3);
  sqcRZGate(q, -2.7038427427624923, 3);
  sqcRYGate(q, 1.5707848358973187, 4);
  sqcRZGate(q, -2.237220462594562, 4);
  sqcRYGate(q, 0.12575041623551872, 5);
  sqcRZGate(q, 2.894117812748038, 5);
  sqcRYGate(q, 1.5391393792217023, 6);
  sqcRZGate(q, 0.030098226414455805, 6);
  sqcRYGate(q, 0.1692915171607412, 7);
  sqcRZGate(q, 2.9326019231776845, 7);
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
  sqcRYGate(q, 1.570883038697437, 0);
  sqcRZGate(q, 1.570807466369347, 0);
  sqcRYGate(q, 3.4700886614835724e-05, 1);
  sqcRZGate(q, 1.949118708405864, 1);
  sqcRYGate(q, 0.10232045399783996, 2);
  sqcRZGate(q, 1.1023264608957257, 2);
  sqcRYGate(q, -2.7413365296825156e-07, 3);
  sqcRZGate(q, -2.2540560954333895, 3);
  sqcRYGate(q, -1.3141736960875503e-06, 4);
  sqcRZGate(q, -0.7379049501733462, 4);
  sqcRYGate(q, 3.1415446088236427, 5);
  sqcRZGate(q, -2.331680558746691, 5);
  sqcRYGate(q, -1.5708465120331407, 6);
  sqcRZGate(q, -1.5706019272655452, 6);
  sqcRYGate(q, 3.1415742987931097, 7);
  sqcRZGate(q, -0.2089177361362422, 7);
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
  sqcRYGate(q, 1.7910697770968884, 0);
  sqcRZGate(q, 1.9303136829934158, 0);
  sqcRYGate(q, 1.590235611456808, 1);
  sqcRZGate(q, 1.060825856706766, 1);
  sqcRYGate(q, 0.0010116801098210004, 2);
  sqcRZGate(q, -1.102131992720729, 2);
  sqcRYGate(q, -1.5707969684139529, 3);
  sqcRZGate(q, 1.5030639337183195e-06, 3);
  sqcRYGate(q, 1.5707991774809416, 4);
  sqcRZGate(q, 1.300814376519747e-05, 4);
  sqcRYGate(q, 1.6000072782431403, 5);
  sqcRZGate(q, 0.9022628826119932, 5);
  sqcRYGate(q, -0.7939704184838785, 6);
  sqcRZGate(q, 3.140932201475147, 6);
  sqcRYGate(q, 1.4767837770589154, 7);
  sqcRZGate(q, 2.5683537725029734e-05, 7);
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
  sqcRYGate(q, -3.1415901216029445, 0);
  sqcRZGate(q, 1.9305000728601842, 0);
  sqcRYGate(q, -3.6533897079587008e-06, 1);
  sqcRZGate(q, 2.4964200496231337, 1);
  sqcRYGate(q, -1.5707839243351631, 2);
  sqcRZGate(q, 1.9269458812325269, 2);
  sqcRYGate(q, 1.570793752506881, 3);
  sqcRZGate(q, 3.141364066367121, 3);
  sqcRYGate(q, -1.57079397368019, 4);
  sqcRZGate(q, -1.5707938555351435, 4);
  sqcRYGate(q, 1.5707927118802871, 5);
  sqcRZGate(q, -1.5708459629294154, 5);
  sqcRYGate(q, 1.5708949887137422, 6);
  sqcRZGate(q, -1.4387007452898317, 6);
  sqcRYGate(q, 1.5707981939130886, 7);
  sqcRZGate(q, 1.8412443206461098, 7);
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
  sqcRYGate(q, 3.1053342427508377, 0);
  sqcRZGate(q, -3.141387993492472, 0);
  sqcRYGate(q, -0.4718975795081004, 1);
  sqcRZGate(q, 2.7227021665549973, 1);
  sqcRYGate(q, 7.442197914490354e-05, 2);
  sqcRZGate(q, 2.5758382674828133, 2);
  sqcRYGate(q, -0.010778444799440123, 3);
  sqcRZGate(q, 0.00021852574437986047, 3);
  sqcRYGate(q, 0.03632570822053844, 4);
  sqcRZGate(q, 3.1415904311607252, 4);
  sqcRYGate(q, -3.117716048336908, 5);
  sqcRZGate(q, 3.1415453055717766, 5);
  sqcRYGate(q, -3.141579998124621, 6);
  sqcRZGate(q, 3.025717102511403, 6);
  sqcRYGate(q, -3.141590793021328, 7);
  sqcRZGate(q, 1.624380607493645, 7);
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
  sqcRYGate(q, 1.5707953662226126, 0);
  sqcRZGate(q, 2.8479620658331704, 0);
  sqcRYGate(q, -1.5707949307518048, 1);
  sqcRZGate(q, 2.9283547295398376, 1);
  sqcRYGate(q, 4.754007958362617e-05, 2);
  sqcRZGate(q, 3.057563148389477, 2);
  sqcRYGate(q, -1.5707988140246145, 3);
  sqcRZGate(q, -1.7840355011407523, 3);
  sqcRYGate(q, 1.5708080159641415, 4);
  sqcRZGate(q, 1.2771608901755664, 4);
  sqcRYGate(q, -0.6294678360906836, 5);
  sqcRZGate(q, -1.7840402248313962, 5);
  sqcRYGate(q, -0.0005279434159151108, 6);
  sqcRZGate(q, -0.045661911970642954, 6);
  sqcRYGate(q, -3.1415899117691146, 7);
  sqcRZGate(q, 1.140692755262915, 7);

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
