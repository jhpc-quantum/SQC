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

  sqcRYGate(q, -2.2006518887729585, 0);
  sqcRZGate(q, -1.1580928037609857, 0);
  sqcRYGate(q, 1.6394963497993442, 1);
  sqcRZGate(q, 1.1935241755730939, 1);
  sqcRYGate(q, -0.4402085407461884, 2);
  sqcRZGate(q, 2.4122926374924982, 2);
  sqcRYGate(q, 1.1210739279957556, 3);
  sqcRZGate(q, -1.895092703989202, 3);
  sqcRYGate(q, 2.9381801757687445, 4);
  sqcRZGate(q, 0.8784238632355049, 4);
  sqcRYGate(q, 0.6231320568038523, 5);
  sqcRZGate(q, -0.30571657884514103, 5);
  sqcRYGate(q, 1.3251917128863235, 6);
  sqcRZGate(q, 1.0852378626712094, 6);
  sqcRYGate(q, 2.073536492092818, 7);
  sqcRZGate(q, 0.6862439414061311, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.477101669392023, 0);
  sqcRZGate(q, -0.0626344935023748, 0);
  sqcRYGate(q, -2.7087670431897632, 1);
  sqcRZGate(q, -2.9600184112406827, 1);
  sqcRYGate(q, -0.9621466268070905, 2);
  sqcRZGate(q, -0.9545254085665701, 2);
  sqcRYGate(q, 1.4051312522224637, 3);
  sqcRZGate(q, -1.0214650722947285, 3);
  sqcRYGate(q, -1.1037659288904127, 4);
  sqcRZGate(q, -1.507331942789699, 4);
  sqcRYGate(q, -1.135336745686108, 5);
  sqcRZGate(q, -0.4299924557988897, 5);
  sqcRYGate(q, -1.650296968684395, 6);
  sqcRZGate(q, -0.8480697776283658, 6);
  sqcRYGate(q, 2.019593270366998, 7);
  sqcRZGate(q, 2.3425148274082734, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.187974958872764, 0);
  sqcRZGate(q, -0.9194987199276864, 0);
  sqcRYGate(q, 2.4792760850136553, 1);
  sqcRZGate(q, 0.5895947441051339, 1);
  sqcRYGate(q, -0.8489987401609768, 2);
  sqcRZGate(q, 1.5146343727561975, 2);
  sqcRYGate(q, -1.2449347309590506, 3);
  sqcRZGate(q, 1.1120039426266104, 3);
  sqcRYGate(q, 1.0944014692632393, 4);
  sqcRZGate(q, -2.628283623806734, 4);
  sqcRYGate(q, -2.0580957344864395, 5);
  sqcRZGate(q, -0.285266388780404, 5);
  sqcRYGate(q, -1.4518473371721434, 6);
  sqcRZGate(q, -0.1140368435500064, 6);
  sqcRYGate(q, -1.2993196495196786, 7);
  sqcRZGate(q, 1.146966995624522, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.3557938053501515, 0);
  sqcRZGate(q, -2.4419211906904246, 0);
  sqcRYGate(q, -1.904969669837354, 1);
  sqcRZGate(q, -0.6773974237273142, 1);
  sqcRYGate(q, -2.8673055246389705, 2);
  sqcRZGate(q, 1.3741176485608175, 2);
  sqcRYGate(q, 0.5521018498132075, 3);
  sqcRZGate(q, -2.5515392962247017, 3);
  sqcRYGate(q, 0.6936232072303676, 4);
  sqcRZGate(q, -1.9734388255958695, 4);
  sqcRYGate(q, 0.12976545225091077, 5);
  sqcRZGate(q, 0.6358708398252619, 5);
  sqcRYGate(q, -1.3333816216247971, 6);
  sqcRZGate(q, -1.2813576276491316, 6);
  sqcRYGate(q, 2.7364996822041996, 7);
  sqcRZGate(q, 0.9648423702810681, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.604196551591891, 0);
  sqcRZGate(q, 0.31121746453437205, 0);
  sqcRYGate(q, -1.3719949775814202, 1);
  sqcRZGate(q, -0.3557252017343133, 1);
  sqcRYGate(q, 1.65048483204675, 2);
  sqcRZGate(q, -0.8771059597906152, 2);
  sqcRYGate(q, 1.337646865149992, 3);
  sqcRZGate(q, 1.1169179024533908, 3);
  sqcRYGate(q, 0.1642345638813998, 4);
  sqcRZGate(q, -2.4370621332744293, 4);
  sqcRYGate(q, 2.199533600856408, 5);
  sqcRZGate(q, 1.9385506227140157, 5);
  sqcRYGate(q, 0.9605335283015393, 6);
  sqcRZGate(q, -2.5547163058179385, 6);
  sqcRYGate(q, -0.48393385035422065, 7);
  sqcRZGate(q, -1.2049678342103172, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.22455930821474293, 0);
  sqcRZGate(q, 2.683650478226668, 0);
  sqcRYGate(q, -1.1614780279035033, 1);
  sqcRZGate(q, 1.9438898486255043, 1);
  sqcRYGate(q, 2.2183889378222146, 2);
  sqcRZGate(q, 3.1043986381150557, 2);
  sqcRYGate(q, 2.0038176263107745, 3);
  sqcRZGate(q, -2.3505592977699306, 3);
  sqcRYGate(q, -0.6287000885654238, 4);
  sqcRZGate(q, -0.02536703559360909, 4);
  sqcRYGate(q, -0.939560421883308, 5);
  sqcRZGate(q, 0.727053475016627, 5);
  sqcRYGate(q, 2.3470265562306625, 6);
  sqcRZGate(q, -0.8824510078495, 6);
  sqcRYGate(q, -2.094531728391716, 7);
  sqcRZGate(q, -2.6254823296910126, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.5928401782354182, 0);
  sqcRZGate(q, 1.7682532969289557, 0);
  sqcRYGate(q, -2.3929504105937416, 1);
  sqcRZGate(q, 0.7309547226977017, 1);
  sqcRYGate(q, -0.4969681669536606, 2);
  sqcRZGate(q, 2.1919307905068717, 2);
  sqcRYGate(q, -1.82590890490657, 3);
  sqcRZGate(q, 1.794898217220464, 3);
  sqcRYGate(q, 0.6873671205407907, 4);
  sqcRZGate(q, -3.0438845136211543, 4);
  sqcRYGate(q, -1.9858785984251748, 5);
  sqcRZGate(q, 0.8965683716356416, 5);
  sqcRYGate(q, -0.7851092606009722, 6);
  sqcRZGate(q, 0.11629321515294999, 6);
  sqcRYGate(q, 1.1042007532353653, 7);
  sqcRZGate(q, -2.6008712626765575, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5928522977321933, 0);
  sqcRZGate(q, -2.693225975664648, 0);
  sqcRYGate(q, -2.301252924583503, 1);
  sqcRZGate(q, 1.7174325155029775, 1);
  sqcRYGate(q, -2.6496216220053475, 2);
  sqcRZGate(q, 2.9430400850980374, 2);
  sqcRYGate(q, 2.889489080006821, 3);
  sqcRZGate(q, 2.3677123324133778, 3);
  sqcRYGate(q, -1.4939690198104651, 4);
  sqcRZGate(q, 0.7731345609021072, 4);
  sqcRYGate(q, -1.188753401462912, 5);
  sqcRZGate(q, -2.822934496570415, 5);
  sqcRYGate(q, -2.582217750774507, 6);
  sqcRZGate(q, -0.9305301103506993, 6);
  sqcRYGate(q, -0.6812771960172448, 7);
  sqcRZGate(q, 0.7057360990097655, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.6834236494728745, 0);
  sqcRZGate(q, 0.9992590843493651, 0);
  sqcRYGate(q, -2.9421387750459305, 1);
  sqcRZGate(q, 0.9474750418247719, 1);
  sqcRYGate(q, 1.2168182436148687, 2);
  sqcRZGate(q, 2.8458180100411727, 2);
  sqcRYGate(q, 1.9866242885692085, 3);
  sqcRZGate(q, 3.0778427936122195, 3);
  sqcRYGate(q, -2.1923168286135324, 4);
  sqcRZGate(q, 1.0204592159873291, 4);
  sqcRYGate(q, 0.8915442556177204, 5);
  sqcRZGate(q, -2.877890835731628, 5);
  sqcRYGate(q, 2.2511058905321253, 6);
  sqcRZGate(q, -1.380904601285308, 6);
  sqcRYGate(q, -1.6078969257565188, 7);
  sqcRZGate(q, 1.2037634775808244, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.8768665812628353, 0);
  sqcRZGate(q, 1.623364458962972, 0);
  sqcRYGate(q, -1.8489082389787053, 1);
  sqcRZGate(q, 2.4846374172315033, 1);
  sqcRYGate(q, -2.304426911611343, 2);
  sqcRZGate(q, 0.08975780134735895, 2);
  sqcRYGate(q, -1.5691397198177823, 3);
  sqcRZGate(q, -1.7119705491127701, 3);
  sqcRYGate(q, 2.192874533429217, 4);
  sqcRZGate(q, -0.9787287599004593, 4);
  sqcRYGate(q, -1.4725649674568762, 5);
  sqcRZGate(q, 0.9883275742626615, 5);
  sqcRYGate(q, -2.7322691945610194, 6);
  sqcRZGate(q, -2.010622499491263, 6);
  sqcRYGate(q, 0.2704103557215385, 7);
  sqcRZGate(q, 1.6507820530236907, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.3061788499685563, 0);
  sqcRZGate(q, -0.4595677704800654, 0);
  sqcRYGate(q, -0.9187642848968743, 1);
  sqcRZGate(q, -1.0750133858489097, 1);
  sqcRYGate(q, 2.2972257298177725, 2);
  sqcRZGate(q, 0.9466640187525153, 2);
  sqcRYGate(q, -2.7318067947015394, 3);
  sqcRZGate(q, 2.9128284251125787, 3);
  sqcRYGate(q, -1.7819880778764128, 4);
  sqcRZGate(q, -2.4732636168186217, 4);
  sqcRYGate(q, 2.5509595762921156, 5);
  sqcRZGate(q, 0.7864967198855322, 5);
  sqcRYGate(q, 2.9866723095030383, 6);
  sqcRZGate(q, -0.09645784706644545, 6);
  sqcRYGate(q, -1.1814329904137477, 7);
  sqcRZGate(q, 2.052591598413746, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.5742548224909934, 0);
  sqcRZGate(q, 0.2771495906738721, 0);
  sqcRYGate(q, 0.5657296513390904, 1);
  sqcRZGate(q, -1.7654276927983785, 1);
  sqcRYGate(q, -0.684766179040568, 2);
  sqcRZGate(q, 0.5364332535009093, 2);
  sqcRYGate(q, -2.918664348590801, 3);
  sqcRZGate(q, -2.1880035806220146, 3);
  sqcRYGate(q, 2.26807970687567, 4);
  sqcRZGate(q, -0.13476751580376012, 4);
  sqcRYGate(q, -1.051773332486012, 5);
  sqcRZGate(q, 0.6620188499067937, 5);
  sqcRYGate(q, -2.686334830826295, 6);
  sqcRZGate(q, -0.2361962727955829, 6);
  sqcRYGate(q, -0.5145182779197395, 7);
  sqcRZGate(q, -0.4992341347208359, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.6984425648904073, 0);
  sqcRZGate(q, 1.1674833254333992, 0);
  sqcRYGate(q, 1.3175892367933804, 1);
  sqcRZGate(q, -0.5624244218748258, 1);
  sqcRYGate(q, 1.459199704852968, 2);
  sqcRZGate(q, -0.9787768555723589, 2);
  sqcRYGate(q, 1.379776396994055, 3);
  sqcRZGate(q, -0.6711872015995697, 3);
  sqcRYGate(q, 2.234742424508579, 4);
  sqcRZGate(q, 2.4728640050463957, 4);
  sqcRYGate(q, -2.707819465635939, 5);
  sqcRZGate(q, 1.5141667830494212, 5);
  sqcRYGate(q, 1.9164796727587277, 6);
  sqcRZGate(q, 0.10015001916659383, 6);
  sqcRYGate(q, -2.479605919712582, 7);
  sqcRZGate(q, 2.369330774985413, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.5607520618898816, 0);
  sqcRZGate(q, -0.6856693202995744, 0);
  sqcRYGate(q, 2.917723764107915, 1);
  sqcRZGate(q, -0.5119738113450505, 1);
  sqcRYGate(q, -0.6078811308108608, 2);
  sqcRZGate(q, 1.8406171368867346, 2);
  sqcRYGate(q, -2.2584837858597977, 3);
  sqcRZGate(q, -2.954758404524346, 3);
  sqcRYGate(q, 0.5253309830555466, 4);
  sqcRZGate(q, -0.08136449093181228, 4);
  sqcRYGate(q, -0.9390162337790082, 5);
  sqcRZGate(q, -2.7759934547980722, 5);
  sqcRYGate(q, 1.0873370419382196, 6);
  sqcRZGate(q, -0.37415510399036206, 6);
  sqcRYGate(q, -0.20681423008814692, 7);
  sqcRZGate(q, 1.2771239976616826, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.98498085529718, 0);
  sqcRZGate(q, -2.208541475579718, 0);
  sqcRYGate(q, -1.7434983693619255, 1);
  sqcRZGate(q, 2.216152612305091, 1);
  sqcRYGate(q, 2.666093008927693, 2);
  sqcRZGate(q, 0.2687549249583262, 2);
  sqcRYGate(q, -2.1747697954332503, 3);
  sqcRZGate(q, 1.9639049398414796, 3);
  sqcRYGate(q, 2.92399958675417, 4);
  sqcRZGate(q, -2.4020277333167, 4);
  sqcRYGate(q, -2.2194932403763152, 5);
  sqcRZGate(q, -1.222199323040691, 5);
  sqcRYGate(q, 1.6644260639160988, 6);
  sqcRZGate(q, -0.12435559944209906, 6);
  sqcRYGate(q, -2.6554969858011, 7);
  sqcRZGate(q, -1.910960414233555, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.3470478003688307, 0);
  sqcRZGate(q, -2.7031624041231113, 0);
  sqcRYGate(q, 0.7824396998509034, 1);
  sqcRZGate(q, 2.649012872362729, 1);
  sqcRYGate(q, 2.454332215450928, 2);
  sqcRZGate(q, 3.055979971392986, 2);
  sqcRYGate(q, 2.1922611624643, 3);
  sqcRZGate(q, -1.3911914850870783, 3);
  sqcRYGate(q, 1.3094912337094184, 4);
  sqcRZGate(q, -2.0459581832661238, 4);
  sqcRYGate(q, 0.9084937465546443, 5);
  sqcRZGate(q, -0.36962293627679976, 5);
  sqcRYGate(q, 2.0251277119860402, 6);
  sqcRZGate(q, 0.5926583782919597, 6);
  sqcRYGate(q, -1.5994384667771095, 7);
  sqcRZGate(q, -2.537537570321498, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.7618517607420183, 0);
  sqcRZGate(q, 2.4082923048584033, 0);
  sqcRYGate(q, -0.9206069664075729, 1);
  sqcRZGate(q, -2.9999448021219033, 1);
  sqcRYGate(q, 1.635240840946509, 2);
  sqcRZGate(q, 1.0551542010519706, 2);
  sqcRYGate(q, -0.19305464692554875, 3);
  sqcRZGate(q, -1.2363333657291444, 3);
  sqcRYGate(q, -2.234724540672153, 4);
  sqcRZGate(q, -0.4741831796857792, 4);
  sqcRYGate(q, -0.31309698004552633, 5);
  sqcRZGate(q, -0.9640405317946777, 5);
  sqcRYGate(q, -1.3697536141436357, 6);
  sqcRZGate(q, 0.12909004079053965, 6);
  sqcRYGate(q, -1.743438839647399, 7);
  sqcRZGate(q, -0.7156359315017281, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.2646181931803184, 0);
  sqcRZGate(q, 1.6458633384725554, 0);
  sqcRYGate(q, -2.3216083613041367, 1);
  sqcRZGate(q, 1.4225247491724744, 1);
  sqcRYGate(q, -1.789317787482337, 2);
  sqcRZGate(q, -2.6247649012734953, 2);
  sqcRYGate(q, -0.5986476246046856, 3);
  sqcRZGate(q, -2.4528055369960837, 3);
  sqcRYGate(q, 0.2734692484859194, 4);
  sqcRZGate(q, 0.4434533899245786, 4);
  sqcRYGate(q, -1.388041855514285, 5);
  sqcRZGate(q, -1.2809523943556567, 5);
  sqcRYGate(q, -2.408787040848374, 6);
  sqcRZGate(q, 1.3557988489585187, 6);
  sqcRYGate(q, -1.326429328050862, 7);
  sqcRZGate(q, -2.630091870658203, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.2267265792989166, 0);
  sqcRZGate(q, 1.0970337061575997, 0);
  sqcRYGate(q, -0.41072069872848527, 1);
  sqcRZGate(q, -3.0426056871598686, 1);
  sqcRYGate(q, 1.7533959954102327, 2);
  sqcRZGate(q, -3.1315015439144034, 2);
  sqcRYGate(q, -0.43437158045773305, 3);
  sqcRZGate(q, 1.6318493857113667, 3);
  sqcRYGate(q, 1.3449911742398957, 4);
  sqcRZGate(q, 1.5486200151260923, 4);
  sqcRYGate(q, 1.0894216176406608, 5);
  sqcRZGate(q, -1.5739504437282208, 5);
  sqcRYGate(q, 2.019792768481696, 6);
  sqcRZGate(q, -1.8907681213771148, 6);
  sqcRYGate(q, -0.479156677039631, 7);
  sqcRZGate(q, -2.974834326256717, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.0021919573471467, 0);
  sqcRZGate(q, 2.4604657150546223, 0);
  sqcRYGate(q, -0.6408720966413631, 1);
  sqcRZGate(q, -1.8821654397597793, 1);
  sqcRYGate(q, 1.875021276312637, 2);
  sqcRZGate(q, -2.1105215356652227, 2);
  sqcRYGate(q, 2.3618486790488804, 3);
  sqcRZGate(q, 0.9370474465433648, 3);
  sqcRYGate(q, 1.4624399426649317, 4);
  sqcRZGate(q, 1.527296305513206, 4);
  sqcRYGate(q, 1.2837021507235127, 5);
  sqcRZGate(q, -2.7788066966906966, 5);
  sqcRYGate(q, 1.0178987704520515, 6);
  sqcRZGate(q, 2.8000792247340063, 6);
  sqcRYGate(q, 0.30663454142182367, 7);
  sqcRZGate(q, -1.1580003966566397, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.4686389493463718, 0);
  sqcRZGate(q, -2.44295041725882, 0);
  sqcRYGate(q, -1.8975258574205522, 1);
  sqcRZGate(q, 3.0118279556773264, 1);
  sqcRYGate(q, -1.737098537178495, 2);
  sqcRZGate(q, 2.2847880174690194, 2);
  sqcRYGate(q, 0.916982495867094, 3);
  sqcRZGate(q, 2.3531205332529237, 3);
  sqcRYGate(q, 1.8470694041447708, 4);
  sqcRZGate(q, -1.5413560951643825, 4);
  sqcRYGate(q, 2.095531779251337, 5);
  sqcRZGate(q, -1.4933892246804163, 5);
  sqcRYGate(q, 0.8166305473844289, 6);
  sqcRZGate(q, 2.730574950117994, 6);
  sqcRYGate(q, -1.1866688077044696, 7);
  sqcRZGate(q, -1.75135651133973, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.1405085715521732, 0);
  sqcRZGate(q, -0.4158019000107856, 0);
  sqcRYGate(q, 1.9618465488301426, 1);
  sqcRZGate(q, -2.869107740330191, 1);
  sqcRYGate(q, -0.16350516499224907, 2);
  sqcRZGate(q, -2.3014097245846523, 2);
  sqcRYGate(q, 1.079347775837893, 3);
  sqcRZGate(q, 3.07629098689668, 3);
  sqcRYGate(q, -2.4734881996711944, 4);
  sqcRZGate(q, 2.85720785391993, 4);
  sqcRYGate(q, 0.28134473147859085, 5);
  sqcRZGate(q, -2.9694915023321267, 5);
  sqcRYGate(q, 0.3952083413835501, 6);
  sqcRZGate(q, -0.6573253990056529, 6);
  sqcRYGate(q, -1.152033449122424, 7);
  sqcRZGate(q, -1.5404275586659308, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.4937464066656156, 0);
  sqcRZGate(q, -1.2722537396640394, 0);
  sqcRYGate(q, 2.0004176569867695, 1);
  sqcRZGate(q, 2.984127477558686, 1);
  sqcRYGate(q, 0.6870750597546023, 2);
  sqcRZGate(q, 0.39217788001666687, 2);
  sqcRYGate(q, 2.3468842708414845, 3);
  sqcRZGate(q, -1.185929979969595, 3);
  sqcRYGate(q, 1.6641616553502623, 4);
  sqcRZGate(q, 1.4110954641481324, 4);
  sqcRYGate(q, -0.9298492320785662, 5);
  sqcRZGate(q, -0.23271439185639053, 5);
  sqcRYGate(q, -2.4224766182141098, 6);
  sqcRZGate(q, 3.0269182311572216, 6);
  sqcRYGate(q, 2.798027468566542, 7);
  sqcRZGate(q, -1.2101745543968399, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.075979603355465, 0);
  sqcRZGate(q, 0.38133494140202107, 0);
  sqcRYGate(q, 2.6448447971195495, 1);
  sqcRZGate(q, 0.09877069981840038, 1);
  sqcRYGate(q, 1.1448060854596642, 2);
  sqcRZGate(q, -2.7098617390648974, 2);
  sqcRYGate(q, 2.529037489830126, 3);
  sqcRZGate(q, -1.0129662123193774, 3);
  sqcRYGate(q, 1.966610620386064, 4);
  sqcRZGate(q, 3.1377059202961326, 4);
  sqcRYGate(q, 1.5307272002415013, 5);
  sqcRZGate(q, 2.264952480467369, 5);
  sqcRYGate(q, 0.11279060314247769, 6);
  sqcRZGate(q, -0.5261413079668547, 6);
  sqcRYGate(q, 0.6651207587988895, 7);
  sqcRZGate(q, 1.4318325677766122, 7);

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
