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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 1.5707975920020063, 0);
  sqcRZGate(q, 2.776333549725507e-06, 0);
  sqcRYGate(q, 6.795591350172714e-05, 1);
  sqcRZGate(q, -0.10932456893602384, 1);
  sqcRYGate(q, -1.5712147016968538, 2);
  sqcRZGate(q, -3.112858259212168, 2);
  sqcRYGate(q, 1.5698577064922346, 3);
  sqcRZGate(q, 0.9247524692663601, 3);
  sqcRYGate(q, -1.5707898084851877, 4);
  sqcRZGate(q, 1.8226370905225204, 4);
  sqcRYGate(q, -0.22122890204467743, 5);
  sqcRZGate(q, -0.8504384292628808, 5);
  sqcRYGate(q, -5.200460887447391e-06, 6);
  sqcRZGate(q, 1.11074099615356, 6);
  sqcRYGate(q, -0.6057759630944668, 7);
  sqcRZGate(q, 2.123631618409771, 7);
  sqcRYGate(q, 2.77691509010783, 8);
  sqcRZGate(q, 1.5708452345011479, 8);
  sqcRYGate(q, -0.0001230632242756183, 9);
  sqcRZGate(q, -2.773920662762444, 9);
  sqcRYGate(q, -1.5708004492155494, 10);
  sqcRZGate(q, 3.1415682237493336, 10);
  sqcRYGate(q, 1.5707974821628916, 11);
  sqcRZGate(q, 2.5431508806085645, 11);
  sqcRYGate(q, -1.5707998397542413, 12);
  sqcRZGate(q, -1.0060341741518384, 12);
  sqcRYGate(q, 1.5707888892907942, 13);
  sqcRZGate(q, 3.1377992327579376, 13);
  sqcRYGate(q, 0.004621737686613823, 14);
  sqcRZGate(q, 3.030491457023372, 14);
  sqcRYGate(q, -3.141566654139131, 15);
  sqcRZGate(q, -1.5215840521964465, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -1.5706159452786437, 0);
  sqcRZGate(q, 0.04279240292164576, 0);
  sqcRYGate(q, 2.6802533563260926, 1);
  sqcRZGate(q, -1.997198626185334, 1);
  sqcRYGate(q, -1.5705210471623152, 2);
  sqcRZGate(q, 1.6256226996188534, 2);
  sqcRYGate(q, -0.0019998498426163636, 3);
  sqcRZGate(q, 0.6537832359332295, 3);
  sqcRYGate(q, 3.1415880523552064, 4);
  sqcRZGate(q, -2.889515734642251, 4);
  sqcRYGate(q, -9.926506852053762e-07, 5);
  sqcRZGate(q, -0.7226956091152175, 5);
  sqcRYGate(q, -7.146053966700094e-05, 6);
  sqcRZGate(q, -1.243658057621694, 6);
  sqcRYGate(q, -3.1415723401942945, 7);
  sqcRZGate(q, -2.5888364127164585, 7);
  sqcRYGate(q, -1.5707955662488136, 8);
  sqcRZGate(q, 0.02046682885352824, 8);
  sqcRYGate(q, 1.570797603095225, 9);
  sqcRZGate(q, 0.8995569147138887, 9);
  sqcRYGate(q, -0.6861147709016499, 10);
  sqcRZGate(q, -3.141577192478863, 10);
  sqcRYGate(q, -0.617550618484121, 11);
  sqcRZGate(q, 2.189908532315062, 11);
  sqcRYGate(q, -3.115060720190408, 12);
  sqcRZGate(q, 2.553921747865325, 12);
  sqcRYGate(q, -0.008239040573282175, 13);
  sqcRZGate(q, -1.2848690330872392, 13);
  sqcRYGate(q, -1.5707932102637088, 14);
  sqcRZGate(q, 8.860646228292524e-06, 14);
  sqcRYGate(q, -2.2137523957066927, 15);
  sqcRZGate(q, -2.4111405988978953e-05, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 3.141585322052313, 0);
  sqcRZGate(q, -3.098735842636892, 0);
  sqcRYGate(q, -3.141210442243279, 1);
  sqcRZGate(q, 2.7152324255824856, 1);
  sqcRYGate(q, 0.0014935690980466265, 2);
  sqcRZGate(q, 0.812210677708955, 2);
  sqcRYGate(q, -1.572329097450612, 3);
  sqcRZGate(q, 3.1415450153231714, 3);
  sqcRYGate(q, 2.496543997920749, 4);
  sqcRZGate(q, 0.0003283546968087052, 4);
  sqcRYGate(q, 0.2825750998208294, 5);
  sqcRZGate(q, -2.8832718004843776, 5);
  sqcRYGate(q, 1.5707998547843351, 6);
  sqcRZGate(q, 2.483782842351977, 6);
  sqcRYGate(q, 1.570788135273363, 7);
  sqcRZGate(q, 0.3334198591318751, 7);
  sqcRYGate(q, 3.131675960927664, 8);
  sqcRZGate(q, -1.5466955295757767, 8);
  sqcRYGate(q, -3.12600301821247, 9);
  sqcRZGate(q, 2.4736896297869984, 9);
  sqcRYGate(q, -1.5707878869646628, 10);
  sqcRZGate(q, 1.5710984016401666, 10);
  sqcRYGate(q, 3.1399672123561486, 11);
  sqcRZGate(q, -1.0447267854392848, 11);
  sqcRYGate(q, -1.570548402521296, 12);
  sqcRZGate(q, -3.1411398504724657, 12);
  sqcRYGate(q, -0.000525185744014554, 13);
  sqcRZGate(q, -1.8529350741242954, 13);
  sqcRYGate(q, 1.5786427623078136, 14);
  sqcRZGate(q, -1.999681037228926, 14);
  sqcRYGate(q, 1.5769430902011448, 15);
  sqcRZGate(q, -1.4178650441399432, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -1.575144373917034, 0);
  sqcRZGate(q, -3.141554482858934, 0);
  sqcRYGate(q, 1.5707900665435055, 1);
  sqcRZGate(q, -1.8735527451274665, 1);
  sqcRYGate(q, -3.141519765468198, 2);
  sqcRZGate(q, -2.274873906814467, 2);
  sqcRYGate(q, 1.5725309589706082, 3);
  sqcRZGate(q, -1.19503505511802, 3);
  sqcRYGate(q, -0.37588508371947593, 4);
  sqcRZGate(q, -1.570917670365569, 4);
  sqcRYGate(q, -8.837400125457339e-07, 5);
  sqcRZGate(q, 1.2511112500846782, 5);
  sqcRYGate(q, 3.14150465917185, 6);
  sqcRZGate(q, -0.6578132379307968, 6);
  sqcRYGate(q, -3.141467038879348, 7);
  sqcRZGate(q, -2.8081530689733785, 7);
  sqcRYGate(q, -0.022580388054200005, 8);
  sqcRZGate(q, -3.123842364425711, 8);
  sqcRYGate(q, -0.1034732465784387, 9);
  sqcRZGate(q, 0.0842935825776232, 9);
  sqcRYGate(q, 1.8757157120335037, 10);
  sqcRZGate(q, 1.6876015267073958, 10);
  sqcRYGate(q, -2.27010359906142e-05, 11);
  sqcRZGate(q, 1.9105958158270955, 11);
  sqcRYGate(q, 1.57077042568344, 12);
  sqcRZGate(q, 1.6651414453377225, 12);
  sqcRYGate(q, 1.5707984964835202, 13);
  sqcRZGate(q, 0.8382773260110108, 13);
  sqcRYGate(q, -1.8899522045145997e-05, 14);
  sqcRZGate(q, -1.1418772473322205, 14);
  sqcRYGate(q, 3.1415736582669873, 15);
  sqcRZGate(q, -1.293978722888676, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 1.5702145339960918, 0);
  sqcRZGate(q, -1.5620559944115566, 0);
  sqcRYGate(q, 2.972500885434215e-06, 1);
  sqcRZGate(q, -1.267950727909822, 1);
  sqcRYGate(q, 1.593167656625, 2);
  sqcRZGate(q, 1.5707689252178065, 2);
  sqcRYGate(q, -0.00020054586964169728, 3);
  sqcRZGate(q, 1.1949756255221304, 3);
  sqcRYGate(q, -1.570790107992467, 4);
  sqcRZGate(q, 2.826542374786524, 4);
  sqcRYGate(q, -3.1328462496072547, 5);
  sqcRZGate(q, 1.6977527227890172, 5);
  sqcRYGate(q, 1.5707939573894143, 6);
  sqcRZGate(q, 1.570870159375887, 6);
  sqcRYGate(q, -1.5709881927918996, 7);
  sqcRZGate(q, -8.953484403573242e-05, 7);
  sqcRYGate(q, 4.225343787371596e-05, 8);
  sqcRZGate(q, 3.120204104270972, 8);
  sqcRYGate(q, 3.1377338602560148, 9);
  sqcRZGate(q, -1.4862231265202857, 9);
  sqcRYGate(q, 3.1415748679035866, 10);
  sqcRZGate(q, -1.4539840993681254, 10);
  sqcRYGate(q, -0.43667785105309065, 11);
  sqcRZGate(q, -1.8810475818573045, 11);
  sqcRYGate(q, 3.141562903729482, 12);
  sqcRZGate(q, 0.09434535435893025, 12);
  sqcRYGate(q, -3.1029073394687536, 13);
  sqcRZGate(q, -1.3995089244950758, 13);
  sqcRYGate(q, 1.570798081573055, 14);
  sqcRZGate(q, -2.0229891255878716, 14);
  sqcRYGate(q, 9.47502364147768e-05, 15);
  sqcRZGate(q, 3.0227921426949873, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 1.561998281527569, 0);
  sqcRZGate(q, -0.08366488301786204, 0);
  sqcRYGate(q, -1.5707779936607533, 1);
  sqcRZGate(q, -1.5229887715320447, 1);
  sqcRYGate(q, -1.5713600363316367, 2);
  sqcRZGate(q, 0.1872496819239844, 2);
  sqcRYGate(q, 1.5708028878917957, 3);
  sqcRZGate(q, 2.8032877401512932, 3);
  sqcRYGate(q, 3.1409939563739795, 4);
  sqcRZGate(q, 1.097457876454195, 4);
  sqcRYGate(q, -3.141592516755426, 5);
  sqcRZGate(q, -2.9524482167546715, 5);
  sqcRYGate(q, 1.570811839420593, 6);
  sqcRZGate(q, -3.1414041133489694, 6);
  sqcRYGate(q, 1.5708193754744197, 7);
  sqcRZGate(q, -1.5692304625135887, 7);
  sqcRYGate(q, 1.5717085784631186, 8);
  sqcRZGate(q, -1.5769110929386903, 8);
  sqcRYGate(q, -1.4263983414109376, 9);
  sqcRZGate(q, -3.003882976345806, 9);
  sqcRYGate(q, 1.47504533856058, 10);
  sqcRZGate(q, -3.1405611375530476, 10);
  sqcRYGate(q, 2.9947401972953987e-05, 11);
  sqcRZGate(q, -2.064805563478725, 11);
  sqcRYGate(q, -1.5706030893393743, 12);
  sqcRZGate(q, 1.5707988655216434, 12);
  sqcRYGate(q, -3.1415913838682346, 13);
  sqcRZGate(q, -2.7246316676015154, 13);
  sqcRYGate(q, -0.00020663237915741206, 14);
  sqcRZGate(q, -0.9184809624074473, 14);
  sqcRYGate(q, 3.043198895236108, 15);
  sqcRZGate(q, -1.106262597919004, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 0.00036218278429878126, 0);
  sqcRZGate(q, -0.18753763311869862, 0);
  sqcRYGate(q, -1.7436060321231548e-07, 1);
  sqcRZGate(q, -1.2529248962295798, 1);
  sqcRYGate(q, -0.10118164873540547, 2);
  sqcRZGate(q, -2.0198831229584124, 2);
  sqcRYGate(q, -1.5707269221705271, 3);
  sqcRZGate(q, -1.5708174149484575, 3);
  sqcRYGate(q, -3.1415895684982265, 4);
  sqcRZGate(q, -1.4953688760772217, 4);
  sqcRYGate(q, 1.570823589889236, 5);
  sqcRZGate(q, -0.27838108915099596, 5);
  sqcRYGate(q, 2.2891920207492844, 6);
  sqcRZGate(q, 0.0001181620479387212, 6);
  sqcRYGate(q, -1.5692350947817886, 7);
  sqcRZGate(q, -2.3265397884874157, 7);
  sqcRYGate(q, 1.796593205645079e-06, 8);
  sqcRZGate(q, -3.1355244357274206, 8);
  sqcRYGate(q, 8.831385285290594e-07, 9);
  sqcRZGate(q, 2.479856016653757, 9);
  sqcRYGate(q, 1.5707957162646327, 10);
  sqcRZGate(q, -6.392511561909831e-06, 10);
  sqcRYGate(q, 1.574133052903125, 11);
  sqcRZGate(q, 0.0004891546704855418, 11);
  sqcRYGate(q, 1.5707987538301869, 12);
  sqcRZGate(q, -3.079722000821894, 12);
  sqcRYGate(q, -1.5707666852478521, 13);
  sqcRZGate(q, -0.6290110694029752, 13);
  sqcRYGate(q, -3.1415346788642817, 14);
  sqcRZGate(q, -1.401408454848117, 14);
  sqcRYGate(q, 3.141535782537071, 15);
  sqcRZGate(q, 0.45968469394002387, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, 6.394930863784509e-05, 0);
  sqcRZGate(q, -1.0237828106154332, 0);
  sqcRYGate(q, -2.9351914984368994, 1);
  sqcRZGate(q, -2.789820913258092, 1);
  sqcRYGate(q, 2.2313995137675526e-06, 2);
  sqcRZGate(q, 2.1687731120603235, 2);
  sqcRYGate(q, -0.12312234661645098, 3);
  sqcRZGate(q, -1.5707730570994416, 3);
  sqcRYGate(q, -1.1019662355948867e-06, 4);
  sqcRZGate(q, -0.23356088775080064, 4);
  sqcRYGate(q, 1.7181722968828694e-06, 5);
  sqcRZGate(q, -1.3466655702079853, 5);
  sqcRYGate(q, -1.5707995427402492, 6);
  sqcRZGate(q, 0.13938296961972707, 6);
  sqcRYGate(q, 1.570883038716067, 7);
  sqcRZGate(q, -1.547207040340368, 7);
  sqcRYGate(q, 0.3244641155847194, 8);
  sqcRZGate(q, 1.5708245377483592, 8);
  sqcRYGate(q, 5.539687125022397e-06, 9);
  sqcRZGate(q, -1.0477471738278399, 9);
  sqcRYGate(q, 1.5707972159776205, 10);
  sqcRZGate(q, 1.5701467640317799, 10);
  sqcRYGate(q, -1.570797699124438, 11);
  sqcRZGate(q, -6.924054970452302e-06, 11);
  sqcRYGate(q, -1.2527679994711605e-05, 12);
  sqcRZGate(q, -2.1685885756082435, 12);
  sqcRYGate(q, -9.51758568845662e-07, 13);
  sqcRZGate(q, 0.6288633999812978, 13);
  sqcRYGate(q, -2.9378352801290846, 14);
  sqcRZGate(q, -2.008712662321286, 14);
  sqcRYGate(q, -1.5074762234020116, 15);
  sqcRZGate(q, -3.1415750094302264, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
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
  sqcRYGate(q, -3.1400685321588226, 0);
  sqcRZGate(q, -1.4773666422328466, 0);
  sqcRYGate(q, -5.034356847843924e-06, 1);
  sqcRZGate(q, -2.873043779401826, 1);
  sqcRYGate(q, 3.0802116568544333, 2);
  sqcRZGate(q, 0.15273658967042358, 2);
  sqcRYGate(q, 1.570743240196503, 3);
  sqcRZGate(q, 0.5924774415740347, 3);
  sqcRYGate(q, 1.5707946802365012, 4);
  sqcRZGate(q, 1.3723293801018686, 4);
  sqcRYGate(q, 6.443798011623869e-06, 5);
  sqcRZGate(q, 1.879237076675886, 5);
  sqcRYGate(q, -1.5712246675794133, 6);
  sqcRZGate(q, 1.367577988396036, 6);
  sqcRYGate(q, -3.1414177247471384, 7);
  sqcRZGate(q, 1.848684823662109, 7);
  sqcRYGate(q, -1.5708152696147089, 8);
  sqcRZGate(q, -1.7739030513745138, 8);
  sqcRYGate(q, 1.5707917244700766, 9);
  sqcRZGate(q, -2.887128996336024, 9);
  sqcRYGate(q, 2.9896878907632054, 10);
  sqcRZGate(q, 2.9379541263868942, 10);
  sqcRYGate(q, 1.5708049605285024, 11);
  sqcRZGate(q, 0.2541421572603887, 11);
  sqcRYGate(q, 3.141592487411331, 12);
  sqcRZGate(q, 0.831972621389939, 12);
  sqcRYGate(q, -1.5707133239009776, 13);
  sqcRZGate(q, 0.253550758771168, 13);
  sqcRYGate(q, 1.5707786293533916, 14);
  sqcRZGate(q, 1.3679978304882459, 14);
  sqcRYGate(q, 1.5708439565837615, 15);
  sqcRZGate(q, -1.3172392097244625, 15);

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
