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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -2.0767249837536608, 0);
  sqcRZGate(q, -2.852333569039038, 0);
  sqcRYGate(q, -3.0570453459474534, 1);
  sqcRZGate(q, -2.2153240754815484, 1);
  sqcRYGate(q, 1.7129597468011148, 2);
  sqcRZGate(q, 1.9726025526843385, 2);
  sqcRYGate(q, 3.0913501586589716, 3);
  sqcRZGate(q, -2.928638007735603, 3);
  sqcRYGate(q, 0.08025705963306251, 4);
  sqcRZGate(q, 0.3795794087694473, 4);
  sqcRYGate(q, -0.7350919288437905, 5);
  sqcRZGate(q, 3.0377198708114523, 5);
  sqcRYGate(q, 0.683144809095949, 6);
  sqcRZGate(q, -2.3055597704476734, 6);
  sqcRYGate(q, -0.9501665947865207, 7);
  sqcRZGate(q, 3.0771690529114624, 7);
  sqcRYGate(q, 0.6828703417412615, 8);
  sqcRZGate(q, -2.6494330963127943, 8);
  sqcRYGate(q, 0.8944845999152241, 9);
  sqcRZGate(q, 0.22569570678206607, 9);
  sqcRYGate(q, 0.20468262946245108, 10);
  sqcRZGate(q, 0.8306348986522689, 10);
  sqcRYGate(q, 0.9573690808364425, 11);
  sqcRZGate(q, 1.909739444808399, 11);
  sqcRYGate(q, 2.4828636627674454, 12);
  sqcRZGate(q, -2.2941732474146477, 12);
  sqcRYGate(q, -0.03325720682513377, 13);
  sqcRZGate(q, -0.7666501146766577, 13);
  sqcRYGate(q, -3.0744257906397556, 14);
  sqcRZGate(q, 2.0765782544844327, 14);
  sqcRYGate(q, -0.2493507619893655, 15);
  sqcRZGate(q, -1.4127582556817666, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.29191271377654804, 0);
  sqcRZGate(q, -1.4040641185009104, 0);
  sqcRYGate(q, 2.8429188507643977, 1);
  sqcRZGate(q, 3.0135020332636473, 1);
  sqcRYGate(q, 0.5774874860461026, 2);
  sqcRZGate(q, 1.7815397701210545, 2);
  sqcRYGate(q, -3.0499745076490012, 3);
  sqcRZGate(q, 1.0517728771694355, 3);
  sqcRYGate(q, -0.9302938430895384, 4);
  sqcRZGate(q, 2.604030052177548, 4);
  sqcRYGate(q, 2.4027659650645323, 5);
  sqcRZGate(q, 0.09657473127336935, 5);
  sqcRYGate(q, -0.7733986675319846, 6);
  sqcRZGate(q, 0.3545509390741765, 6);
  sqcRYGate(q, 2.164131732866776, 7);
  sqcRZGate(q, -3.0116740374295587, 7);
  sqcRYGate(q, -1.4833422650473844, 8);
  sqcRZGate(q, -2.2116618058059387, 8);
  sqcRYGate(q, 2.8436263272040745, 9);
  sqcRZGate(q, 1.9922922068745226, 9);
  sqcRYGate(q, 0.6347483550691804, 10);
  sqcRZGate(q, -0.08612072935386102, 10);
  sqcRYGate(q, -2.305338990856156, 11);
  sqcRZGate(q, 2.5791352213552066, 11);
  sqcRYGate(q, -0.506404278959625, 12);
  sqcRZGate(q, -2.2600700397921543, 12);
  sqcRYGate(q, -0.8296614426956674, 13);
  sqcRZGate(q, -0.9212629847218121, 13);
  sqcRYGate(q, 0.08290743807081924, 14);
  sqcRZGate(q, 1.5458309281863212, 14);
  sqcRYGate(q, 2.6114852669828124, 15);
  sqcRZGate(q, -0.9836090328564373, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.21406687260438328, 0);
  sqcRZGate(q, -1.9333009020898464, 0);
  sqcRYGate(q, 3.0101563390070036, 1);
  sqcRZGate(q, 0.686550236748901, 1);
  sqcRYGate(q, 0.29456574499770216, 2);
  sqcRZGate(q, -0.6358199057167634, 2);
  sqcRYGate(q, 3.119638415607718, 3);
  sqcRZGate(q, 0.07860004065001838, 3);
  sqcRYGate(q, 0.6585538579778086, 4);
  sqcRZGate(q, 0.8863696412595162, 4);
  sqcRYGate(q, 1.7382860106058278, 5);
  sqcRZGate(q, 3.0420330429948903, 5);
  sqcRYGate(q, 1.139335082263144, 6);
  sqcRZGate(q, 0.6397754645001692, 6);
  sqcRYGate(q, -0.13941880582943444, 7);
  sqcRZGate(q, 0.11944451637043124, 7);
  sqcRYGate(q, -1.539068166419448, 8);
  sqcRZGate(q, -1.6878246707120395, 8);
  sqcRYGate(q, -2.2478444694878323, 9);
  sqcRZGate(q, -1.2278471813101213, 9);
  sqcRYGate(q, 1.0089073477448076, 10);
  sqcRZGate(q, 2.86233097519167, 10);
  sqcRYGate(q, -0.4094921431149687, 11);
  sqcRZGate(q, -0.0591945502064813, 11);
  sqcRYGate(q, 2.0965058551577807, 12);
  sqcRZGate(q, -1.382209020948652, 12);
  sqcRYGate(q, -0.08401502290478113, 13);
  sqcRZGate(q, -1.977790909721506, 13);
  sqcRYGate(q, -0.013746328902896987, 14);
  sqcRZGate(q, -0.5939429012341945, 14);
  sqcRYGate(q, -2.451089248582827, 15);
  sqcRZGate(q, -1.4851920594695762, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.3233952641098402, 0);
  sqcRZGate(q, 1.3765057527741003, 0);
  sqcRYGate(q, -0.7958928868331014, 1);
  sqcRZGate(q, 0.5376661498286949, 1);
  sqcRYGate(q, 1.1799645865373563, 2);
  sqcRZGate(q, 0.1726898131593945, 2);
  sqcRYGate(q, 2.093565169510029, 3);
  sqcRZGate(q, 1.7450727795916334, 3);
  sqcRYGate(q, -0.2823404626259718, 4);
  sqcRZGate(q, -0.778149107434401, 4);
  sqcRYGate(q, -1.9783436958692449, 5);
  sqcRZGate(q, -2.1001472763943436, 5);
  sqcRYGate(q, -2.9707753283029845, 6);
  sqcRZGate(q, -0.6929011290223012, 6);
  sqcRYGate(q, 3.1113824262629004, 7);
  sqcRZGate(q, -0.30286042745496483, 7);
  sqcRYGate(q, 3.1096271001251954, 8);
  sqcRZGate(q, 1.144304523943367, 8);
  sqcRYGate(q, -0.01848946547553672, 9);
  sqcRZGate(q, -1.9505071732957855, 9);
  sqcRYGate(q, 1.1662348041693225, 10);
  sqcRZGate(q, -2.678750222959381, 10);
  sqcRYGate(q, 2.882050659315364, 11);
  sqcRZGate(q, 1.0294309597381508, 11);
  sqcRYGate(q, 0.171001667851695, 12);
  sqcRZGate(q, 1.158369165778759, 12);
  sqcRYGate(q, -0.5068816699549685, 13);
  sqcRZGate(q, -1.8043745411932066, 13);
  sqcRYGate(q, -1.811311399830371, 14);
  sqcRZGate(q, 3.080334759130316, 14);
  sqcRYGate(q, 0.038263468650557186, 15);
  sqcRZGate(q, -3.046207669751511, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.320006857876348, 0);
  sqcRZGate(q, -1.6210825362468162, 0);
  sqcRYGate(q, -2.032291233311284, 1);
  sqcRZGate(q, -0.2718313237867497, 1);
  sqcRYGate(q, -0.020214532281677574, 2);
  sqcRZGate(q, 2.6902221007337412, 2);
  sqcRYGate(q, 2.917746430370499, 3);
  sqcRZGate(q, -3.050393319634669, 3);
  sqcRYGate(q, -1.634336561577781, 4);
  sqcRZGate(q, -0.4942678383046475, 4);
  sqcRYGate(q, 1.3741936304496996, 5);
  sqcRZGate(q, -1.4751927194076853, 5);
  sqcRYGate(q, -0.21508024798737324, 6);
  sqcRZGate(q, -0.7090070277946019, 6);
  sqcRYGate(q, -3.0509088110200198, 7);
  sqcRZGate(q, -1.3394380459228061, 7);
  sqcRYGate(q, 1.233294575226881, 8);
  sqcRZGate(q, 0.802209251959222, 8);
  sqcRYGate(q, 1.1564149760543714, 9);
  sqcRZGate(q, 2.3063459478894943, 9);
  sqcRYGate(q, 0.21143746480981498, 10);
  sqcRZGate(q, 1.3270226839264527, 10);
  sqcRYGate(q, -2.6487939364885262, 11);
  sqcRZGate(q, 0.5004274773176607, 11);
  sqcRYGate(q, 1.9863370119973014, 12);
  sqcRZGate(q, -1.3181815602813016, 12);
  sqcRYGate(q, -3.1376536496432053, 13);
  sqcRZGate(q, -1.5794073340692518, 13);
  sqcRYGate(q, 3.117079590882643, 14);
  sqcRZGate(q, 0.18766415974126627, 14);
  sqcRYGate(q, 3.041788016999047, 15);
  sqcRZGate(q, 1.6621110109197303, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.8366142097120124, 0);
  sqcRZGate(q, -0.5769800096463165, 0);
  sqcRYGate(q, 0.9744408218849073, 1);
  sqcRZGate(q, 1.17511974141692, 1);
  sqcRYGate(q, -0.0634397236071651, 2);
  sqcRZGate(q, -1.7589146526589707, 2);
  sqcRYGate(q, -2.866683414213434, 3);
  sqcRZGate(q, -0.6341645933763926, 3);
  sqcRYGate(q, 3.044535319345389, 4);
  sqcRZGate(q, -1.7377468987813798, 4);
  sqcRYGate(q, -3.133734531297035, 5);
  sqcRZGate(q, 0.5329925403314446, 5);
  sqcRYGate(q, 0.11981444830026255, 6);
  sqcRZGate(q, -0.8131846024798177, 6);
  sqcRYGate(q, 2.373303730850311, 7);
  sqcRZGate(q, 2.751257015604319, 7);
  sqcRYGate(q, -1.595960435113291, 8);
  sqcRZGate(q, -2.526682758395236, 8);
  sqcRYGate(q, 3.102513041745896, 9);
  sqcRZGate(q, -2.2802530510834824, 9);
  sqcRYGate(q, 0.18511062125687058, 10);
  sqcRZGate(q, 1.7576487582941933, 10);
  sqcRYGate(q, -1.1940134674073883, 11);
  sqcRZGate(q, -1.632699631015979, 11);
  sqcRYGate(q, 1.2414364129439266, 12);
  sqcRZGate(q, -0.040876403417321926, 12);
  sqcRYGate(q, 1.1092533390167285, 13);
  sqcRZGate(q, -2.6761845966827504, 13);
  sqcRYGate(q, -2.0869905120809866, 14);
  sqcRZGate(q, -1.9842554774989294, 14);
  sqcRYGate(q, 2.7461858878120355, 15);
  sqcRZGate(q, 2.5131721352107323, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.855188250654331, 0);
  sqcRZGate(q, -1.8909377107868472, 0);
  sqcRYGate(q, 0.08824064227832196, 1);
  sqcRZGate(q, -1.4163979914431142, 1);
  sqcRYGate(q, -3.1092194491864213, 2);
  sqcRZGate(q, 0.7017019205585272, 2);
  sqcRYGate(q, 0.8965328254926561, 3);
  sqcRZGate(q, -1.4670986028046311, 3);
  sqcRYGate(q, 1.048408838816913, 4);
  sqcRZGate(q, 1.2758435584216263, 4);
  sqcRYGate(q, 2.3585834819322677, 5);
  sqcRZGate(q, 0.17173163367213695, 5);
  sqcRYGate(q, -0.9564853973636809, 6);
  sqcRZGate(q, -2.880985571670718, 6);
  sqcRYGate(q, -1.5723289356083505, 7);
  sqcRZGate(q, 3.000264664543102, 7);
  sqcRYGate(q, -2.5531623549226143, 8);
  sqcRZGate(q, -2.8307361939604716, 8);
  sqcRYGate(q, 1.3814152197025997, 9);
  sqcRZGate(q, 0.16891676129676, 9);
  sqcRYGate(q, 3.0534575838534628, 10);
  sqcRZGate(q, -2.536868270976222, 10);
  sqcRYGate(q, 1.5872123785753256, 11);
  sqcRZGate(q, 0.1608008872579552, 11);
  sqcRYGate(q, 1.4019103712531198, 12);
  sqcRZGate(q, -1.7657008039637638, 12);
  sqcRYGate(q, -0.03634256435705507, 13);
  sqcRZGate(q, -1.6543453281400766, 13);
  sqcRYGate(q, -1.9601223983523446, 14);
  sqcRZGate(q, 2.745286404327086, 14);
  sqcRYGate(q, -2.7381954549625735, 15);
  sqcRZGate(q, -2.244459530718797, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.7764849623941243, 0);
  sqcRZGate(q, -3.016009097046242, 0);
  sqcRYGate(q, 3.0117464413134827, 1);
  sqcRZGate(q, 1.2738104532904688, 1);
  sqcRYGate(q, 3.1367408948430366, 2);
  sqcRZGate(q, -2.8985268397741493, 2);
  sqcRYGate(q, -1.560038833134691, 3);
  sqcRZGate(q, -2.5353690726025007, 3);
  sqcRYGate(q, 3.083313680908639, 4);
  sqcRZGate(q, 2.8362787953188664, 4);
  sqcRYGate(q, 0.6242796605511799, 5);
  sqcRZGate(q, 0.11549854765976963, 5);
  sqcRYGate(q, 1.5673767260248193, 6);
  sqcRZGate(q, 0.0573349654608899, 6);
  sqcRYGate(q, 0.2550727879930443, 7);
  sqcRZGate(q, -1.8228631616351363, 7);
  sqcRYGate(q, 0.45299362682034083, 8);
  sqcRZGate(q, -1.6473239211955393, 8);
  sqcRYGate(q, -0.07677584594683089, 9);
  sqcRZGate(q, -1.2198347777496137, 9);
  sqcRYGate(q, 3.0007626418436533, 10);
  sqcRZGate(q, 2.707301140462644, 10);
  sqcRYGate(q, -1.538760025310241, 11);
  sqcRZGate(q, 1.9816409528619614, 11);
  sqcRYGate(q, 1.1752246523082723, 12);
  sqcRZGate(q, -1.4642865873893471, 12);
  sqcRYGate(q, -2.4287057830670222, 13);
  sqcRZGate(q, -3.0339977030825627, 13);
  sqcRYGate(q, -2.0408298994090037, 14);
  sqcRZGate(q, 2.289205214274993, 14);
  sqcRYGate(q, 1.0763336483786923, 15);
  sqcRZGate(q, 1.6218508723426126, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.203621557294024, 0);
  sqcRZGate(q, 2.245817570482159, 0);
  sqcRYGate(q, 0.09082375595226555, 1);
  sqcRZGate(q, -2.987480298032984, 1);
  sqcRYGate(q, -2.973503810513408, 2);
  sqcRZGate(q, 2.0110934783356456, 2);
  sqcRYGate(q, 1.5617293861288957, 3);
  sqcRZGate(q, 1.823975730139065, 3);
  sqcRYGate(q, -2.42607493559036, 4);
  sqcRZGate(q, -1.8642268513069322, 4);
  sqcRYGate(q, 1.6079056658544395, 5);
  sqcRZGate(q, 3.129161252236171, 5);
  sqcRYGate(q, 3.017456287891623, 6);
  sqcRZGate(q, 3.086675899373326, 6);
  sqcRYGate(q, -0.04808114701144994, 7);
  sqcRZGate(q, 1.6593021243184278, 7);
  sqcRYGate(q, 0.2868684138751467, 8);
  sqcRZGate(q, 1.8395267891840283, 8);
  sqcRYGate(q, 0.4678009168188895, 9);
  sqcRZGate(q, -1.336706005397779, 9);
  sqcRYGate(q, 0.5920586344441991, 10);
  sqcRZGate(q, -1.053324280622185, 10);
  sqcRYGate(q, -1.2445359513025924, 11);
  sqcRZGate(q, -2.419236752370347, 11);
  sqcRYGate(q, -2.4515843537566733, 12);
  sqcRZGate(q, 2.77527839002804, 12);
  sqcRYGate(q, 1.3774544738100918, 13);
  sqcRZGate(q, 0.4282451386852477, 13);
  sqcRYGate(q, -1.685715976087919, 14);
  sqcRZGate(q, 0.29917466754386624, 14);
  sqcRYGate(q, 2.602900335522505, 15);
  sqcRZGate(q, -0.36110758098689894, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.4889070213386122, 0);
  sqcRZGate(q, -1.5316014456721587, 0);
  sqcRYGate(q, 1.8624373875871276, 1);
  sqcRZGate(q, -0.9726884969127242, 1);
  sqcRYGate(q, -1.1107160052597043, 2);
  sqcRZGate(q, -1.879857267995268, 2);
  sqcRYGate(q, -1.7906620069005321, 3);
  sqcRZGate(q, -0.33751821912140545, 3);
  sqcRYGate(q, 1.4192000103396114, 4);
  sqcRZGate(q, -1.4853057508449794, 4);
  sqcRYGate(q, 0.8714999869519877, 5);
  sqcRZGate(q, -3.1085611864937293, 5);
  sqcRYGate(q, 3.11517579508155, 6);
  sqcRZGate(q, -0.11449180043405692, 6);
  sqcRYGate(q, 3.1313073801631854, 7);
  sqcRZGate(q, -0.36808085962867687, 7);
  sqcRYGate(q, -0.510252234941686, 8);
  sqcRZGate(q, -2.546747741321105, 8);
  sqcRYGate(q, -0.06324507941935664, 9);
  sqcRZGate(q, 2.119775168911233, 9);
  sqcRYGate(q, 0.1574124709321941, 10);
  sqcRZGate(q, -2.283565815154178, 10);
  sqcRYGate(q, -0.10345616067403794, 11);
  sqcRZGate(q, -1.4374032239582313, 11);
  sqcRYGate(q, 3.0670044465682094, 12);
  sqcRZGate(q, -1.220204675188763, 12);
  sqcRYGate(q, -2.3284639327844254, 13);
  sqcRZGate(q, -2.878955159154277, 13);
  sqcRYGate(q, -2.36755549169832, 14);
  sqcRZGate(q, -0.9926827460509674, 14);
  sqcRYGate(q, -1.8980923436132018, 15);
  sqcRZGate(q, 0.22309571404826636, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.2048301433747177, 0);
  sqcRZGate(q, 2.849543677470112, 0);
  sqcRYGate(q, -3.072495075605816, 1);
  sqcRZGate(q, -1.4321169876191393, 1);
  sqcRYGate(q, 1.600930426816976, 2);
  sqcRZGate(q, 1.239576271502597, 2);
  sqcRYGate(q, 3.1407604570767576, 3);
  sqcRZGate(q, -1.0977381915757674, 3);
  sqcRYGate(q, -2.279015883907109, 4);
  sqcRZGate(q, 0.017983427831863352, 4);
  sqcRYGate(q, -2.9242372304829365, 5);
  sqcRZGate(q, -0.8877799438640102, 5);
  sqcRYGate(q, -0.29038692015423956, 6);
  sqcRZGate(q, 0.021919772452205773, 6);
  sqcRYGate(q, -2.6900588655811837, 7);
  sqcRZGate(q, 3.0574113154741416, 7);
  sqcRYGate(q, 2.8149511302498107, 8);
  sqcRZGate(q, 0.6568301292178762, 8);
  sqcRYGate(q, 1.1996869185348178, 9);
  sqcRZGate(q, 2.031554359058278, 9);
  sqcRYGate(q, 1.3970336105849934, 10);
  sqcRZGate(q, 1.3807545825857437, 10);
  sqcRYGate(q, -1.7918123644793535, 11);
  sqcRZGate(q, 2.2150565642686804, 11);
  sqcRYGate(q, 3.034165624305174, 12);
  sqcRZGate(q, -1.7091108962699686, 12);
  sqcRYGate(q, 2.322525043681045, 13);
  sqcRZGate(q, -2.7626978182387094, 13);
  sqcRYGate(q, -2.477744610605538, 14);
  sqcRZGate(q, -2.0902900097575277, 14);
  sqcRYGate(q, 0.7716422045455094, 15);
  sqcRZGate(q, 3.0216546194056746, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5652973760113706, 0);
  sqcRZGate(q, -1.8075918957405177, 0);
  sqcRYGate(q, -0.8506724732074545, 1);
  sqcRZGate(q, 0.050620210711123374, 1);
  sqcRYGate(q, -1.726038198764661, 2);
  sqcRZGate(q, 2.1899973420576, 2);
  sqcRYGate(q, 3.1397385457243043, 3);
  sqcRZGate(q, -2.1522808897060832, 3);
  sqcRYGate(q, 1.11431009306268, 4);
  sqcRZGate(q, 0.3474050852186576, 4);
  sqcRYGate(q, -3.1314699495318137, 5);
  sqcRZGate(q, 0.5952838551391189, 5);
  sqcRYGate(q, 2.6488273658283226, 6);
  sqcRZGate(q, -1.2789108368749647, 6);
  sqcRYGate(q, 0.6394830842777246, 7);
  sqcRZGate(q, -0.31455153009467274, 7);
  sqcRYGate(q, 0.15136483882044333, 8);
  sqcRZGate(q, 1.563143002413438, 8);
  sqcRYGate(q, -3.0747227107504655, 9);
  sqcRZGate(q, -2.678416113277894, 9);
  sqcRYGate(q, 2.6172312895327954, 10);
  sqcRZGate(q, -1.60404730299251, 10);
  sqcRYGate(q, 0.02489344179287353, 11);
  sqcRZGate(q, 2.319072602555752, 11);
  sqcRYGate(q, -3.114112753897692, 12);
  sqcRZGate(q, -0.4219019566634162, 12);
  sqcRYGate(q, -0.5425866731316997, 13);
  sqcRZGate(q, 1.5696307159816403, 13);
  sqcRYGate(q, 2.4519781216756047, 14);
  sqcRZGate(q, -0.5835713698176539, 14);
  sqcRYGate(q, -0.6770358132293338, 15);
  sqcRZGate(q, -2.74843275365026, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.2418342940211335, 0);
  sqcRZGate(q, 3.0140720832028447, 0);
  sqcRYGate(q, 0.8151949977045465, 1);
  sqcRZGate(q, 1.7283204909822434, 1);
  sqcRYGate(q, -0.5576199217636689, 2);
  sqcRZGate(q, -0.04391502854792603, 2);
  sqcRYGate(q, -1.5754219222047456, 3);
  sqcRZGate(q, -0.6884730123519684, 3);
  sqcRYGate(q, -2.3833392194765053, 4);
  sqcRZGate(q, -2.6737673060339264, 4);
  sqcRYGate(q, -1.473065602617719, 5);
  sqcRZGate(q, 1.2211868026065669, 5);
  sqcRYGate(q, -2.9655319230416284, 6);
  sqcRZGate(q, 0.19128557026431192, 6);
  sqcRYGate(q, 1.7039730749260888, 7);
  sqcRZGate(q, 3.1238410669018766, 7);
  sqcRYGate(q, 1.8821663637361148, 8);
  sqcRZGate(q, 2.2351510195065876, 8);
  sqcRYGate(q, -3.0874561328467216, 9);
  sqcRZGate(q, -1.7760968367644707, 9);
  sqcRYGate(q, 3.0457479908392195, 10);
  sqcRZGate(q, 1.3144859768559218, 10);
  sqcRYGate(q, 2.885436248325858, 11);
  sqcRZGate(q, 0.5829718862109897, 11);
  sqcRYGate(q, 3.06145732912936, 12);
  sqcRZGate(q, 2.84891870213777, 12);
  sqcRYGate(q, 1.324097162026189, 13);
  sqcRZGate(q, -2.9219076147065906, 13);
  sqcRYGate(q, -1.6324880140255087, 14);
  sqcRZGate(q, 1.8040340989483439, 14);
  sqcRYGate(q, 1.2400251062046908, 15);
  sqcRZGate(q, -2.7038446254474287, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.9037294855455025, 0);
  sqcRZGate(q, -0.04983335449540771, 0);
  sqcRYGate(q, 1.5656219518319725, 1);
  sqcRZGate(q, -0.7074536735265491, 1);
  sqcRYGate(q, -1.5682397538945656, 2);
  sqcRZGate(q, 0.029507988232650106, 2);
  sqcRYGate(q, 0.009362102210996426, 3);
  sqcRZGate(q, -2.443847219778072, 3);
  sqcRYGate(q, 3.0974587273666034, 4);
  sqcRZGate(q, 1.1213782536976629, 4);
  sqcRYGate(q, 0.04100301408332605, 5);
  sqcRZGate(q, 2.7014401997748627, 5);
  sqcRYGate(q, 0.12800725451670975, 6);
  sqcRZGate(q, 2.0519241748480375, 6);
  sqcRYGate(q, -3.0646913661229958, 7);
  sqcRZGate(q, 1.2329810005315398, 7);
  sqcRYGate(q, 3.1391135732978332, 8);
  sqcRZGate(q, 1.6932458978275413, 8);
  sqcRYGate(q, -0.07628519370618479, 9);
  sqcRZGate(q, -1.5005455586242178, 9);
  sqcRYGate(q, -0.5811366892725649, 10);
  sqcRZGate(q, 0.9193625138599455, 10);
  sqcRYGate(q, -3.089611016322289, 11);
  sqcRZGate(q, -2.5959549155352564, 11);
  sqcRYGate(q, -3.069579305244677, 12);
  sqcRZGate(q, 2.2441674624042167, 12);
  sqcRYGate(q, 1.3542653215990603, 13);
  sqcRZGate(q, 2.697184747019508, 13);
  sqcRYGate(q, 0.5156050786780488, 14);
  sqcRZGate(q, -0.29120741792296556, 14);
  sqcRYGate(q, 1.3148122325359406, 15);
  sqcRZGate(q, 0.5145534783645731, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.6063304381091728, 0);
  sqcRZGate(q, -1.130387126819162, 0);
  sqcRYGate(q, -1.5698380825303895, 1);
  sqcRZGate(q, 0.0013760045426121081, 1);
  sqcRYGate(q, 0.09050865700767474, 2);
  sqcRZGate(q, 1.5413872460005555, 2);
  sqcRYGate(q, 0.06414637941077306, 3);
  sqcRZGate(q, -2.2554580906800483, 3);
  sqcRYGate(q, 0.0948953942555622, 4);
  sqcRZGate(q, -1.7494408917429871, 4);
  sqcRYGate(q, -0.0949479246120948, 5);
  sqcRZGate(q, -0.22756390010020675, 5);
  sqcRYGate(q, 2.807294738901785, 6);
  sqcRZGate(q, 1.0417579082278712, 6);
  sqcRYGate(q, -1.8261531705022762, 7);
  sqcRZGate(q, 2.0913507556419315, 7);
  sqcRYGate(q, 0.2030409108613521, 8);
  sqcRZGate(q, -0.3735366159068833, 8);
  sqcRYGate(q, -1.585108827783694, 9);
  sqcRZGate(q, 1.7200394087106894, 9);
  sqcRYGate(q, -1.6757720007923478, 10);
  sqcRZGate(q, 1.652637011421465, 10);
  sqcRYGate(q, -0.5579814646822889, 11);
  sqcRZGate(q, 2.2796169842071032, 11);
  sqcRYGate(q, -2.995814869028733, 12);
  sqcRZGate(q, 1.3190349375872001, 12);
  sqcRYGate(q, 0.7485237285146925, 13);
  sqcRZGate(q, 0.3197401825248587, 13);
  sqcRYGate(q, -0.25804513901875553, 14);
  sqcRZGate(q, 0.2086173511394143, 14);
  sqcRYGate(q, 0.4586651825137679, 15);
  sqcRZGate(q, 2.4595242655700886, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5739318379050395, 0);
  sqcRZGate(q, -1.5706913210482534, 0);
  sqcRYGate(q, -0.6537603096813392, 1);
  sqcRZGate(q, -0.002123076514367343, 1);
  sqcRYGate(q, -1.5692258684679152, 2);
  sqcRZGate(q, 1.3262533411808348, 2);
  sqcRYGate(q, 3.1305052959641193, 3);
  sqcRZGate(q, -2.24430681817333, 3);
  sqcRYGate(q, 0.05397297529614134, 4);
  sqcRZGate(q, -2.23499638133945, 4);
  sqcRYGate(q, -3.0480898835671058, 5);
  sqcRZGate(q, 0.719554293805369, 5);
  sqcRYGate(q, -3.0860649988714743, 6);
  sqcRZGate(q, -0.9399387185642469, 6);
  sqcRYGate(q, 0.2796907077077462, 7);
  sqcRZGate(q, -0.8162112012134893, 7);
  sqcRYGate(q, -3.131113093828273, 8);
  sqcRZGate(q, 2.3752946468395284, 8);
  sqcRYGate(q, -3.0818330152866102, 9);
  sqcRZGate(q, -3.1325371292656423, 9);
  sqcRYGate(q, 2.936372334536735, 10);
  sqcRZGate(q, 3.102364115335617, 10);
  sqcRYGate(q, -3.0979411006301603, 11);
  sqcRZGate(q, 0.5478901765405503, 11);
  sqcRYGate(q, -0.11055610853539542, 12);
  sqcRZGate(q, 2.9315892707850395, 12);
  sqcRYGate(q, -1.3180087680475396, 13);
  sqcRZGate(q, 0.36119975024216466, 13);
  sqcRYGate(q, 2.1891669222348815, 14);
  sqcRZGate(q, -1.5313374907640167, 14);
  sqcRYGate(q, -0.5583255014776594, 15);
  sqcRZGate(q, -0.5037709683260156, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.56932640004466, 0);
  sqcRZGate(q, -2.502974687432302, 0);
  sqcRYGate(q, 1.5683821432558145, 1);
  sqcRZGate(q, 0.53902704559623, 1);
  sqcRYGate(q, -3.1382163904115195, 2);
  sqcRZGate(q, 1.8746816565930464, 2);
  sqcRYGate(q, 1.5700138009960065, 3);
  sqcRZGate(q, -2.489869540126302, 3);
  sqcRYGate(q, -3.098973743889821, 4);
  sqcRZGate(q, 2.040854689711497, 4);
  sqcRYGate(q, 0.039293312380801027, 5);
  sqcRZGate(q, 1.3376830342135024, 5);
  sqcRYGate(q, 1.517795707773069, 6);
  sqcRZGate(q, -2.5757901071029137, 6);
  sqcRYGate(q, -0.3330949861978034, 7);
  sqcRZGate(q, 2.067270545081667, 7);
  sqcRYGate(q, 0.08221915558136608, 8);
  sqcRZGate(q, -2.558938744752779, 8);
  sqcRYGate(q, 1.3600505794179556, 9);
  sqcRZGate(q, 0.24054332582780943, 9);
  sqcRYGate(q, -1.535465833027665, 10);
  sqcRZGate(q, 3.1031368537486093, 10);
  sqcRYGate(q, -2.80047692374222, 11);
  sqcRZGate(q, 2.641225829850814, 11);
  sqcRYGate(q, 0.9367955703137483, 12);
  sqcRZGate(q, -1.2516036749542316, 12);
  sqcRYGate(q, -0.9267831818860357, 13);
  sqcRZGate(q, 1.8984387595393073, 13);
  sqcRYGate(q, -2.9528933937203923, 14);
  sqcRZGate(q, 1.396907493034546, 14);
  sqcRYGate(q, -2.9527332806196163, 15);
  sqcRZGate(q, 2.216312365769779, 15);

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
