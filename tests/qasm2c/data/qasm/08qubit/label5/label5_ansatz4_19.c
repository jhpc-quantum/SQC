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

  sqcRYGate(q, -2.2594047573038214, 0);
  sqcRZGate(q, 0.6570899159917215, 0);
  sqcRYGate(q, 1.0130372741907292, 1);
  sqcRZGate(q, 1.2755172768653253, 1);
  sqcRYGate(q, -2.676169214520275, 2);
  sqcRZGate(q, -2.395727031836904, 2);
  sqcRYGate(q, 1.2151758500349397, 3);
  sqcRZGate(q, -0.536846313843692, 3);
  sqcRYGate(q, 1.720420539382042, 4);
  sqcRZGate(q, -0.627021549108777, 4);
  sqcRYGate(q, -1.915714674937723, 5);
  sqcRZGate(q, -2.1577648660669775, 5);
  sqcRYGate(q, 0.23544098017417173, 6);
  sqcRZGate(q, 1.8973629104896856, 6);
  sqcRYGate(q, 2.0134953410748686, 7);
  sqcRZGate(q, -1.9240286150057724, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.217775489960095, 0);
  sqcRZGate(q, 0.9038458645465449, 0);
  sqcRYGate(q, 1.2411522489484552, 1);
  sqcRZGate(q, -0.7053548214821133, 1);
  sqcRYGate(q, 0.5332813862807955, 2);
  sqcRZGate(q, 1.575452215887653, 2);
  sqcRYGate(q, 1.6295717994500907, 3);
  sqcRZGate(q, 2.602265707888485, 3);
  sqcRYGate(q, -2.7526914616072813, 4);
  sqcRZGate(q, 2.455212753430549, 4);
  sqcRYGate(q, -2.0611325293896288, 5);
  sqcRZGate(q, -2.849808300262856, 5);
  sqcRYGate(q, -1.019795018844177, 6);
  sqcRZGate(q, -0.7608101568810096, 6);
  sqcRYGate(q, 1.0445466027690165, 7);
  sqcRZGate(q, -1.94371865420021, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.7452902201783524, 0);
  sqcRZGate(q, -2.280944452123527, 0);
  sqcRYGate(q, -0.6688437742897122, 1);
  sqcRZGate(q, -2.116297475433387, 1);
  sqcRYGate(q, 1.9909988854040819, 2);
  sqcRZGate(q, 2.1190373515831182, 2);
  sqcRYGate(q, -2.074586399838048, 3);
  sqcRZGate(q, -0.18826695872777768, 3);
  sqcRYGate(q, 0.31937695961321744, 4);
  sqcRZGate(q, 0.8748088981817052, 4);
  sqcRYGate(q, 1.483256891887919, 5);
  sqcRZGate(q, -2.8821429179623865, 5);
  sqcRYGate(q, -1.1656309100949303, 6);
  sqcRZGate(q, -2.3736689203304513, 6);
  sqcRYGate(q, 1.8730939083628035, 7);
  sqcRZGate(q, -1.7766693174028043, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6064734229493822, 0);
  sqcRZGate(q, -2.8244506283581674, 0);
  sqcRYGate(q, -1.9259180120587613, 1);
  sqcRZGate(q, 1.960182603033424, 1);
  sqcRYGate(q, 0.43674674005294367, 2);
  sqcRZGate(q, -1.9733541150040705, 2);
  sqcRYGate(q, 2.3519900601620987, 3);
  sqcRZGate(q, -0.03705906360816158, 3);
  sqcRYGate(q, 2.7660072660741815, 4);
  sqcRZGate(q, 0.6780676579736155, 4);
  sqcRYGate(q, -2.0389670661191914, 5);
  sqcRZGate(q, -0.6519486189734746, 5);
  sqcRYGate(q, -2.8773237918334553, 6);
  sqcRZGate(q, -2.3678595628600028, 6);
  sqcRYGate(q, -1.0680674291778152, 7);
  sqcRZGate(q, -1.1063051768831158, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.199652893466645, 0);
  sqcRZGate(q, 1.396702901937755, 0);
  sqcRYGate(q, -1.1729963241076122, 1);
  sqcRZGate(q, 1.0073871826601781, 1);
  sqcRYGate(q, -0.3048478346859538, 2);
  sqcRZGate(q, 3.074792166765194, 2);
  sqcRYGate(q, 1.9011992391142645, 3);
  sqcRZGate(q, 0.16548986079973815, 3);
  sqcRYGate(q, -0.8912682249255278, 4);
  sqcRZGate(q, 0.7327056757310711, 4);
  sqcRYGate(q, -1.113699328195644, 5);
  sqcRZGate(q, 1.4979618978862845, 5);
  sqcRYGate(q, -0.8272964927657549, 6);
  sqcRZGate(q, -2.0277013085724875, 6);
  sqcRYGate(q, 1.4822567191293008, 7);
  sqcRZGate(q, 1.1507651550999105, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5203118460440939, 0);
  sqcRZGate(q, -0.19257222527180937, 0);
  sqcRYGate(q, -1.2701552272921708, 1);
  sqcRZGate(q, -1.4727407126443435, 1);
  sqcRYGate(q, 1.3013463574222393, 2);
  sqcRZGate(q, -1.4685615440728714, 2);
  sqcRYGate(q, 2.3872604069230845, 3);
  sqcRZGate(q, -2.368724913399637, 3);
  sqcRYGate(q, -0.45136311650401073, 4);
  sqcRZGate(q, 0.8183212093497564, 4);
  sqcRYGate(q, -2.032296629040706, 5);
  sqcRZGate(q, 0.8348512426510832, 5);
  sqcRYGate(q, -2.7066075260413416, 6);
  sqcRZGate(q, -0.0730561984160234, 6);
  sqcRYGate(q, -1.3647605257566822, 7);
  sqcRZGate(q, 0.486909390216399, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8682769690773435, 0);
  sqcRZGate(q, -0.3625120059952284, 0);
  sqcRYGate(q, -2.013245400657268, 1);
  sqcRZGate(q, -1.1182985369884841, 1);
  sqcRYGate(q, 1.9309030652785435, 2);
  sqcRZGate(q, -0.39082031110391113, 2);
  sqcRYGate(q, -0.7499086902980149, 3);
  sqcRZGate(q, 0.3977513523884697, 3);
  sqcRYGate(q, 2.653465062528751, 4);
  sqcRZGate(q, 1.3686208241956948, 4);
  sqcRYGate(q, 1.5782756445724893, 5);
  sqcRZGate(q, 0.9371419573982355, 5);
  sqcRYGate(q, 1.625061664149174, 6);
  sqcRZGate(q, -2.918411648822177, 6);
  sqcRYGate(q, 0.9485084292110092, 7);
  sqcRZGate(q, -2.892355760876873, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.25633609092751, 0);
  sqcRZGate(q, 0.27389669911925635, 0);
  sqcRYGate(q, -2.5914542097326656, 1);
  sqcRZGate(q, 2.122788218516754, 1);
  sqcRYGate(q, 0.7016412793507703, 2);
  sqcRZGate(q, 3.0087170321663153, 2);
  sqcRYGate(q, 0.7816434405482439, 3);
  sqcRZGate(q, -1.857793106774599, 3);
  sqcRYGate(q, -0.2807756882080074, 4);
  sqcRZGate(q, -0.5952288283402583, 4);
  sqcRYGate(q, -2.3579231396763745, 5);
  sqcRZGate(q, -1.1430769246504635, 5);
  sqcRYGate(q, -1.2108415824746128, 6);
  sqcRZGate(q, -0.0867180015430615, 6);
  sqcRYGate(q, -1.8769630292471735, 7);
  sqcRZGate(q, 2.304689086677295, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.471373536583003, 0);
  sqcRZGate(q, -0.4510303161750899, 0);
  sqcRYGate(q, -2.7447688481718147, 1);
  sqcRZGate(q, -3.0922406008882604, 1);
  sqcRYGate(q, 2.9915756276561676, 2);
  sqcRZGate(q, -0.8923569923030445, 2);
  sqcRYGate(q, -2.3424698009428364, 3);
  sqcRZGate(q, -0.11934898528432125, 3);
  sqcRYGate(q, 0.8993436416596987, 4);
  sqcRZGate(q, 2.5235884523949004, 4);
  sqcRYGate(q, 1.0199288758739886, 5);
  sqcRZGate(q, 0.9888837452226049, 5);
  sqcRYGate(q, -2.863587207342324, 6);
  sqcRZGate(q, -0.9969287267320883, 6);
  sqcRYGate(q, -2.241369021741442, 7);
  sqcRZGate(q, 0.9810297083180685, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.608016325050271, 0);
  sqcRZGate(q, -1.9733658898097817, 0);
  sqcRYGate(q, 2.265988328569888, 1);
  sqcRZGate(q, 3.1358375851763927, 1);
  sqcRYGate(q, 1.7022018129094008, 2);
  sqcRZGate(q, -0.8545587555689387, 2);
  sqcRYGate(q, -1.7422779509175497, 3);
  sqcRZGate(q, -1.4938394757910467, 3);
  sqcRYGate(q, 0.7038089823954538, 4);
  sqcRZGate(q, -2.5917262992866696, 4);
  sqcRYGate(q, 2.7213823526714997, 5);
  sqcRZGate(q, -1.2525076370164854, 5);
  sqcRYGate(q, -1.364285091639701, 6);
  sqcRZGate(q, 2.4017045851445693, 6);
  sqcRYGate(q, -0.3544122034435775, 7);
  sqcRZGate(q, -0.09571439349863109, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1130171240749203, 0);
  sqcRZGate(q, 1.424790279272115, 0);
  sqcRYGate(q, -1.2101131879405767, 1);
  sqcRZGate(q, 2.348448329102835, 1);
  sqcRYGate(q, 3.0125556844307018, 2);
  sqcRZGate(q, 2.302089256512021, 2);
  sqcRYGate(q, 1.1463804709264673, 3);
  sqcRZGate(q, 0.9402994526637856, 3);
  sqcRYGate(q, -1.1824839274068062, 4);
  sqcRZGate(q, 0.5136896700836369, 4);
  sqcRYGate(q, 2.375058151897402, 5);
  sqcRZGate(q, -2.814556672968391, 5);
  sqcRYGate(q, -0.7607243329057777, 6);
  sqcRZGate(q, 1.9672462788197658, 6);
  sqcRYGate(q, 0.26648579532630745, 7);
  sqcRZGate(q, 2.249125490809765, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.204033760740084, 0);
  sqcRZGate(q, 1.4963457673366474, 0);
  sqcRYGate(q, -1.3744854707062162, 1);
  sqcRZGate(q, -0.2555988692928006, 1);
  sqcRYGate(q, 0.9446037670256775, 2);
  sqcRZGate(q, -1.12421750571959, 2);
  sqcRYGate(q, 0.7712292425700396, 3);
  sqcRZGate(q, 1.200804586131951, 3);
  sqcRYGate(q, -2.4465715205045533, 4);
  sqcRZGate(q, -3.0117246895593746, 4);
  sqcRYGate(q, -2.9381982147687706, 5);
  sqcRZGate(q, 3.070152615069616, 5);
  sqcRYGate(q, 2.315283702928782, 6);
  sqcRZGate(q, 2.6347061316649842, 6);
  sqcRYGate(q, -2.151936777149394, 7);
  sqcRZGate(q, 2.4575665140681315, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.653254588827152, 0);
  sqcRZGate(q, 0.36832862964230323, 0);
  sqcRYGate(q, 0.9801295516215289, 1);
  sqcRZGate(q, -2.7769098169520965, 1);
  sqcRYGate(q, -1.2500153510848662, 2);
  sqcRZGate(q, 1.4382179723567046, 2);
  sqcRYGate(q, -0.28950607033006936, 3);
  sqcRZGate(q, 3.002790956899543, 3);
  sqcRYGate(q, 1.3613167290112431, 4);
  sqcRZGate(q, 1.8423007060918843, 4);
  sqcRYGate(q, -1.5613657531317173, 5);
  sqcRZGate(q, -2.1644521101318626, 5);
  sqcRYGate(q, -0.9063854466091991, 6);
  sqcRZGate(q, 1.6539036355863155, 6);
  sqcRYGate(q, -0.39667458035967973, 7);
  sqcRZGate(q, -2.2639557600207105, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6961631651913853, 0);
  sqcRZGate(q, 2.168207305009566, 0);
  sqcRYGate(q, 2.3955342439341383, 1);
  sqcRZGate(q, -2.583461227707261, 1);
  sqcRYGate(q, -0.36154591457321295, 2);
  sqcRZGate(q, 1.6440218527218458, 2);
  sqcRYGate(q, 0.1462311084596344, 3);
  sqcRZGate(q, -0.5508909616624955, 3);
  sqcRYGate(q, 1.9015431116236052, 4);
  sqcRZGate(q, 2.3345435251705347, 4);
  sqcRYGate(q, -0.8808595390534528, 5);
  sqcRZGate(q, -2.796858964746582, 5);
  sqcRYGate(q, 3.027262963452311, 6);
  sqcRZGate(q, -1.5368261154514768, 6);
  sqcRYGate(q, 1.843959616188613, 7);
  sqcRZGate(q, 0.1486466919873224, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.967776866325785, 0);
  sqcRZGate(q, 0.42827527663204457, 0);
  sqcRYGate(q, 1.6982695070075602, 1);
  sqcRZGate(q, -1.5943706342107422, 1);
  sqcRYGate(q, -2.70373839132801, 2);
  sqcRZGate(q, 0.2649955670291826, 2);
  sqcRYGate(q, 1.8879094322194492, 3);
  sqcRZGate(q, -2.58419841666934, 3);
  sqcRYGate(q, 1.789218295477148, 4);
  sqcRZGate(q, 2.3005445658328085, 4);
  sqcRYGate(q, -0.3349662879586628, 5);
  sqcRZGate(q, -3.0442297711021853, 5);
  sqcRYGate(q, -1.302955138835917, 6);
  sqcRZGate(q, 0.07047119646587596, 6);
  sqcRYGate(q, 1.0371049026833958, 7);
  sqcRZGate(q, 2.189959839592344, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.0067297706662144, 0);
  sqcRZGate(q, -0.010038510554074745, 0);
  sqcRYGate(q, 1.2716913234304161, 1);
  sqcRZGate(q, 2.695922372061909, 1);
  sqcRYGate(q, 2.4812640647711146, 2);
  sqcRZGate(q, 1.944844724229804, 2);
  sqcRYGate(q, -2.3122732699911768, 3);
  sqcRZGate(q, -0.8537951781518567, 3);
  sqcRYGate(q, 1.063756537750697, 4);
  sqcRZGate(q, 2.1713801581668526, 4);
  sqcRYGate(q, -1.0966837732123604, 5);
  sqcRZGate(q, 1.309607491926025, 5);
  sqcRYGate(q, 1.7912423323170783, 6);
  sqcRZGate(q, -1.1566958833049572, 6);
  sqcRYGate(q, -0.35317485325780673, 7);
  sqcRZGate(q, -1.981566724886821, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.2261793698905343, 0);
  sqcRZGate(q, -0.17100751704068293, 0);
  sqcRYGate(q, -1.623538723088705, 1);
  sqcRZGate(q, -1.9384830264640325, 1);
  sqcRYGate(q, -2.446254129144619, 2);
  sqcRZGate(q, -2.468862763778246, 2);
  sqcRYGate(q, -0.8251199985278977, 3);
  sqcRZGate(q, 0.3694932544900738, 3);
  sqcRYGate(q, -0.8936293432919137, 4);
  sqcRZGate(q, -2.8406598328385875, 4);
  sqcRYGate(q, 1.0488003651622921, 5);
  sqcRZGate(q, -0.48818177409291125, 5);
  sqcRYGate(q, 0.9378269381594856, 6);
  sqcRZGate(q, 1.755443455114948, 6);
  sqcRYGate(q, 0.6831493655969414, 7);
  sqcRZGate(q, 0.253070642027791, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.261989049545172, 0);
  sqcRZGate(q, -2.782787139020139, 0);
  sqcRYGate(q, 0.8757350380394879, 1);
  sqcRZGate(q, 0.901238302203445, 1);
  sqcRYGate(q, 0.5339235204338708, 2);
  sqcRZGate(q, 2.755542677179112, 2);
  sqcRYGate(q, 1.7713616907682834, 3);
  sqcRZGate(q, -1.5067528490350335, 3);
  sqcRYGate(q, 2.0490281183196823, 4);
  sqcRZGate(q, 0.8928436333938016, 4);
  sqcRYGate(q, -1.1175618040345043, 5);
  sqcRZGate(q, 0.5680891151936827, 5);
  sqcRYGate(q, 1.4039751991590148, 6);
  sqcRZGate(q, -0.3416957065241146, 6);
  sqcRYGate(q, -2.445718811947133, 7);
  sqcRZGate(q, -0.04272113719246785, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7762234352128414, 0);
  sqcRZGate(q, -0.9729101498858216, 0);
  sqcRYGate(q, -2.6407483957003874, 1);
  sqcRZGate(q, -2.9247409602557486, 1);
  sqcRYGate(q, -0.6354534669259014, 2);
  sqcRZGate(q, 1.673564783953517, 2);
  sqcRYGate(q, 1.582502847603848, 3);
  sqcRZGate(q, -1.7424878318397694, 3);
  sqcRYGate(q, -2.030214896801083, 4);
  sqcRZGate(q, -1.4240658130833026, 4);
  sqcRYGate(q, -2.666332037024671, 5);
  sqcRZGate(q, 0.12973087450298015, 5);
  sqcRYGate(q, 1.0348200516639965, 6);
  sqcRZGate(q, 1.4488114470758109, 6);
  sqcRYGate(q, -2.529364229077349, 7);
  sqcRZGate(q, 1.525736910442794, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.8595784202640147, 0);
  sqcRZGate(q, 2.305577252855011, 0);
  sqcRYGate(q, -0.9686475990964514, 1);
  sqcRZGate(q, -1.2419436037104734, 1);
  sqcRYGate(q, -2.958621511883291, 2);
  sqcRZGate(q, -2.17335792008816, 2);
  sqcRYGate(q, -0.7421673480351799, 3);
  sqcRZGate(q, -0.00031379820224513167, 3);
  sqcRYGate(q, 1.7164673629075615, 4);
  sqcRZGate(q, -2.0908318224109426, 4);
  sqcRYGate(q, 1.020555272279059, 5);
  sqcRZGate(q, 1.6536913851588864, 5);
  sqcRYGate(q, -2.1925090421597497, 6);
  sqcRZGate(q, -2.69570275534111, 6);
  sqcRYGate(q, 2.108873633468881, 7);
  sqcRZGate(q, -3.1326323913801075, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6480009060907754, 0);
  sqcRZGate(q, -2.4206530824175996, 0);
  sqcRYGate(q, 0.4276965027182751, 1);
  sqcRZGate(q, 2.38235575467149, 1);
  sqcRYGate(q, -2.057953787759485, 2);
  sqcRZGate(q, 1.6230370573773567, 2);
  sqcRYGate(q, -1.2746617414664483, 3);
  sqcRZGate(q, -0.09887130653541877, 3);
  sqcRYGate(q, 1.3767846698583446, 4);
  sqcRZGate(q, -0.12599274570371286, 4);
  sqcRYGate(q, 0.8512067005925792, 5);
  sqcRZGate(q, -0.08588264886294628, 5);
  sqcRYGate(q, 1.1226634080709648, 6);
  sqcRZGate(q, -0.13324702547393397, 6);
  sqcRYGate(q, -2.3813746672660234, 7);
  sqcRZGate(q, 2.596728890704766, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.2644428879313736, 0);
  sqcRZGate(q, -1.4810352479061022, 0);
  sqcRYGate(q, -1.3975427956063593, 1);
  sqcRZGate(q, -0.32283202066971406, 1);
  sqcRYGate(q, 2.1455891995429672, 2);
  sqcRZGate(q, -0.23976660773895286, 2);
  sqcRYGate(q, -1.271679548999023, 3);
  sqcRZGate(q, -0.9002904894065346, 3);
  sqcRYGate(q, -0.2190765264802976, 4);
  sqcRZGate(q, -0.957459638516789, 4);
  sqcRYGate(q, -1.7755358089164501, 5);
  sqcRZGate(q, 1.4848301652963656, 5);
  sqcRYGate(q, 0.29235066667951504, 6);
  sqcRZGate(q, -1.6334541714211614, 6);
  sqcRYGate(q, -0.7733846941934148, 7);
  sqcRZGate(q, -0.30203950958338055, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2512718332330146, 0);
  sqcRZGate(q, 2.4155781068771276, 0);
  sqcRYGate(q, -2.344707075397732, 1);
  sqcRZGate(q, -0.3333408574836268, 1);
  sqcRYGate(q, -0.679913402130163, 2);
  sqcRZGate(q, -0.6325594773051961, 2);
  sqcRYGate(q, -0.6081977490276667, 3);
  sqcRZGate(q, 2.013111044267392, 3);
  sqcRYGate(q, -1.6898291565733206, 4);
  sqcRZGate(q, -0.14014141187719018, 4);
  sqcRYGate(q, -1.4480479606522039, 5);
  sqcRZGate(q, 2.3366334597688536, 5);
  sqcRYGate(q, -2.184179808550322, 6);
  sqcRZGate(q, 0.12955746781386152, 6);
  sqcRYGate(q, -2.011028361816153, 7);
  sqcRZGate(q, 0.6745589340176653, 7);

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
