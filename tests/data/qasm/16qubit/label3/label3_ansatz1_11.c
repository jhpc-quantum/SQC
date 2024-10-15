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

  sqcRYGate(q, -0.567573743585556, 0);
  sqcRZGate(q, 3.133026332825511, 0);
  sqcRYGate(q, -2.7283120988374714, 1);
  sqcRZGate(q, -0.7580037426057924, 1);
  sqcRYGate(q, 2.7630345928105875, 2);
  sqcRZGate(q, -1.8161679272886109, 2);
  sqcRYGate(q, 3.0190767882656804, 3);
  sqcRZGate(q, 2.10778478375088, 3);
  sqcRYGate(q, 1.1341094372317562, 4);
  sqcRZGate(q, -1.1170345064421365, 4);
  sqcRYGate(q, 3.1205539702177467, 5);
  sqcRZGate(q, -2.3301595512477813, 5);
  sqcRYGate(q, -3.0606090989139503, 6);
  sqcRZGate(q, -0.0018301882868455425, 6);
  sqcRYGate(q, -1.5702576162539466, 7);
  sqcRZGate(q, 3.123476200906475, 7);
  sqcRYGate(q, -1.5707539611674943, 8);
  sqcRZGate(q, -1.359365905527803, 8);
  sqcRYGate(q, -1.5947933817314275, 9);
  sqcRZGate(q, 8.215984708875234e-05, 9);
  sqcRYGate(q, -0.04665062356166469, 10);
  sqcRZGate(q, -0.005527385305951151, 10);
  sqcRYGate(q, -3.0898894601398723, 11);
  sqcRZGate(q, -0.7158164616536226, 11);
  sqcRYGate(q, -1.394335269451876, 12);
  sqcRZGate(q, 1.6528904025040614, 12);
  sqcRYGate(q, 2.9805856051403437, 13);
  sqcRZGate(q, -0.3009879016010588, 13);
  sqcRYGate(q, 0.1818108252462577, 14);
  sqcRZGate(q, 0.7743337268169929, 14);
  sqcRYGate(q, 2.7905752584197416, 15);
  sqcRZGate(q, 0.4375365525531262, 15);
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
  sqcRYGate(q, 1.6541559319392976, 0);
  sqcRZGate(q, -2.4694507395572027, 0);
  sqcRYGate(q, 0.46623945893785823, 1);
  sqcRZGate(q, 2.888774355867552, 1);
  sqcRYGate(q, 2.788813697374855, 2);
  sqcRZGate(q, -2.146940569840038, 2);
  sqcRYGate(q, -3.1412374556968365, 3);
  sqcRZGate(q, 0.022895758120538012, 3);
  sqcRYGate(q, 2.570992362667633, 4);
  sqcRZGate(q, 1.748476166241921, 4);
  sqcRYGate(q, 2.0418925330138316, 5);
  sqcRZGate(q, 0.35686029017264614, 5);
  sqcRYGate(q, -1.571354444277496, 6);
  sqcRZGate(q, 3.1342351798960166, 6);
  sqcRYGate(q, 1.5663757242813294, 7);
  sqcRZGate(q, -1.934051772401615, 7);
  sqcRYGate(q, -1.3111041333284255, 8);
  sqcRZGate(q, 2.3252375828775698, 8);
  sqcRYGate(q, -1.5710036008183625, 9);
  sqcRZGate(q, -3.0872959117544823, 9);
  sqcRYGate(q, -1.7231262721046876, 10);
  sqcRZGate(q, -0.48921071541756556, 10);
  sqcRYGate(q, -1.5308314775679186, 11);
  sqcRZGate(q, 3.0464113612938375, 11);
  sqcRYGate(q, 1.2535906867055044, 12);
  sqcRZGate(q, -2.9460986154124473, 12);
  sqcRYGate(q, -0.24161994443946797, 13);
  sqcRZGate(q, -0.7404263774645773, 13);
  sqcRYGate(q, 2.777794010795785, 14);
  sqcRZGate(q, -0.6307101044593417, 14);
  sqcRYGate(q, 1.213461463227988, 15);
  sqcRZGate(q, 0.8860999386366896, 15);
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
  sqcRYGate(q, -0.9783345746380032, 0);
  sqcRZGate(q, 1.1692976871088712, 0);
  sqcRYGate(q, 1.5891356533676715, 1);
  sqcRZGate(q, 1.2772261234264466, 1);
  sqcRYGate(q, 2.9818176756373824, 2);
  sqcRZGate(q, 2.5025246582540333, 2);
  sqcRYGate(q, 0.07182578361053871, 3);
  sqcRZGate(q, -1.415640444967778, 3);
  sqcRYGate(q, 0.031212066399329812, 4);
  sqcRZGate(q, 2.4597119530554923, 4);
  sqcRYGate(q, 0.0034320809979394816, 5);
  sqcRZGate(q, 2.7906096366273574, 5);
  sqcRYGate(q, 2.622391095476738, 6);
  sqcRZGate(q, -2.835682302268857, 6);
  sqcRYGate(q, -1.174939347899609, 7);
  sqcRZGate(q, 0.8906674698991721, 7);
  sqcRYGate(q, 2.098647745566332, 8);
  sqcRZGate(q, 2.8504339387822877, 8);
  sqcRYGate(q, -0.42407302429694305, 9);
  sqcRZGate(q, -2.1430527594247044, 9);
  sqcRYGate(q, 1.5732997362139614, 10);
  sqcRZGate(q, 1.574625647415574, 10);
  sqcRYGate(q, 1.6918993141882457, 11);
  sqcRZGate(q, -0.4033442742594012, 11);
  sqcRYGate(q, -0.09441399106511561, 12);
  sqcRZGate(q, -0.43398944504568154, 12);
  sqcRYGate(q, -1.7426854947776054, 13);
  sqcRZGate(q, -0.07623974803311297, 13);
  sqcRYGate(q, -2.5609349881673, 14);
  sqcRZGate(q, 2.982368783083174, 14);
  sqcRYGate(q, -1.174190071514684, 15);
  sqcRZGate(q, 0.796761695241914, 15);
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
  sqcRYGate(q, -2.8408685170064407, 0);
  sqcRZGate(q, -2.2258166538620197, 0);
  sqcRYGate(q, 0.18461285481086964, 1);
  sqcRZGate(q, 2.54676441923208, 1);
  sqcRYGate(q, -1.5546087222230112, 2);
  sqcRZGate(q, -3.0710383558075693, 2);
  sqcRYGate(q, -3.108959180014062, 3);
  sqcRZGate(q, 1.087020056209595, 3);
  sqcRYGate(q, -0.4121061771442393, 4);
  sqcRZGate(q, -2.226860186389561, 4);
  sqcRYGate(q, 1.1711318613515793, 5);
  sqcRZGate(q, -3.139496255554207, 5);
  sqcRYGate(q, 3.1414494765499597, 6);
  sqcRZGate(q, 2.147707281592134, 6);
  sqcRYGate(q, 3.133559655455474, 7);
  sqcRZGate(q, 0.8512339933412119, 7);
  sqcRYGate(q, -1.3093926114035033, 8);
  sqcRZGate(q, 1.6020404954074947, 8);
  sqcRYGate(q, 0.0015720194880792509, 9);
  sqcRZGate(q, 0.36604547288921196, 9);
  sqcRYGate(q, -1.8258684409578736, 10);
  sqcRZGate(q, -0.006037493506664048, 10);
  sqcRYGate(q, -0.025095542381879277, 11);
  sqcRZGate(q, 0.2012570011530137, 11);
  sqcRYGate(q, 0.3596477371930442, 12);
  sqcRZGate(q, -1.6720839360264756, 12);
  sqcRYGate(q, 1.392149982785723, 13);
  sqcRZGate(q, 1.521667309632791, 13);
  sqcRYGate(q, 0.03997472564265436, 14);
  sqcRZGate(q, -0.7416709734737518, 14);
  sqcRYGate(q, -2.895869774287009, 15);
  sqcRZGate(q, 2.477745497477857, 15);
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
  sqcRYGate(q, -0.10341136497049508, 0);
  sqcRZGate(q, 1.718182774627616, 0);
  sqcRYGate(q, 0.3166748152798996, 1);
  sqcRZGate(q, 0.09110103408951482, 1);
  sqcRYGate(q, -3.0092311872702933, 2);
  sqcRZGate(q, 1.8815686905884796, 2);
  sqcRYGate(q, 0.009670007817073945, 3);
  sqcRZGate(q, -1.6244979570791012, 3);
  sqcRYGate(q, 2.182841592065003, 4);
  sqcRZGate(q, -0.0001604606010655851, 4);
  sqcRYGate(q, -1.568130008110649, 5);
  sqcRZGate(q, 3.1403948206297927, 5);
  sqcRYGate(q, 2.3971266407679708, 6);
  sqcRZGate(q, 1.990230274998622, 6);
  sqcRYGate(q, 1.082533556465041, 7);
  sqcRZGate(q, -3.0599964685922787, 7);
  sqcRYGate(q, 1.1111169713792384, 8);
  sqcRZGate(q, -2.5824104715437715, 8);
  sqcRYGate(q, -0.0008300559571229708, 9);
  sqcRZGate(q, 1.0497633830350601, 9);
  sqcRYGate(q, 0.5033470091548189, 10);
  sqcRZGate(q, 0.01346386754806995, 10);
  sqcRYGate(q, 1.5958500273877885, 11);
  sqcRZGate(q, 3.137337749270165, 11);
  sqcRYGate(q, -0.3046439471491513, 12);
  sqcRZGate(q, -1.7495602376030084, 12);
  sqcRYGate(q, 1.3851521903754893, 13);
  sqcRZGate(q, 0.6209645728344573, 13);
  sqcRYGate(q, 3.0071532309209035, 14);
  sqcRZGate(q, 0.809667659825113, 14);
  sqcRYGate(q, 2.5602813981963135, 15);
  sqcRZGate(q, -1.8075382641703839, 15);
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
  sqcRYGate(q, -2.062479471735287, 0);
  sqcRZGate(q, 2.5109557717773208, 0);
  sqcRYGate(q, 2.9500878054426076, 1);
  sqcRZGate(q, 1.9220344412824444, 1);
  sqcRYGate(q, 1.7724419104523153, 2);
  sqcRZGate(q, -1.0400967089853115, 2);
  sqcRYGate(q, -0.5383388117875683, 3);
  sqcRZGate(q, 3.005874054743278, 3);
  sqcRYGate(q, -1.5710495793619423, 4);
  sqcRZGate(q, 1.4026349223605763, 4);
  sqcRYGate(q, 1.5612564737722794, 5);
  sqcRZGate(q, -0.3808276178458155, 5);
  sqcRYGate(q, 1.6355896720942358, 6);
  sqcRZGate(q, 1.5778839212927247, 6);
  sqcRYGate(q, 1.6116402850746558, 7);
  sqcRZGate(q, -0.15030383310601517, 7);
  sqcRYGate(q, 2.2047041743309217, 8);
  sqcRZGate(q, -1.975690651554787, 8);
  sqcRYGate(q, 3.131610995394132, 9);
  sqcRZGate(q, 1.572916251223706, 9);
  sqcRYGate(q, -1.4385050110253814, 10);
  sqcRZGate(q, 0.022031198326788907, 10);
  sqcRYGate(q, -1.5931737279580744, 11);
  sqcRZGate(q, -0.0001294250612526328, 11);
  sqcRYGate(q, 3.135962482109302, 12);
  sqcRZGate(q, -2.2484465600124084, 12);
  sqcRYGate(q, -0.06190142874386329, 13);
  sqcRZGate(q, -2.9990433572367703, 13);
  sqcRYGate(q, -1.5575202229507648, 14);
  sqcRZGate(q, 1.6102851626564965, 14);
  sqcRYGate(q, -1.4916926563626751, 15);
  sqcRZGate(q, 2.9967970715895413, 15);
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
  sqcRYGate(q, 0.6380754640417218, 0);
  sqcRZGate(q, -0.5815191558216589, 0);
  sqcRYGate(q, -1.660615312662527, 1);
  sqcRZGate(q, -2.8935747119708815, 1);
  sqcRYGate(q, 1.1970534337160252, 2);
  sqcRZGate(q, -2.4665418244747577, 2);
  sqcRYGate(q, 1.5734893842303812, 3);
  sqcRZGate(q, -0.8421125745207316, 3);
  sqcRYGate(q, -0.06791123259263543, 4);
  sqcRZGate(q, -0.21230935109850088, 4);
  sqcRYGate(q, -1.3424481690903887, 5);
  sqcRZGate(q, -0.7146319591242152, 5);
  sqcRYGate(q, 1.6041122597155144, 6);
  sqcRZGate(q, 0.07669226259536542, 6);
  sqcRYGate(q, -0.015335334256805265, 7);
  sqcRZGate(q, -0.002415072158985444, 7);
  sqcRYGate(q, 1.5355716009030977, 8);
  sqcRZGate(q, 3.011990825818418, 8);
  sqcRYGate(q, 1.5649028308411346, 9);
  sqcRZGate(q, -2.1965170231472966, 9);
  sqcRYGate(q, 1.654265304170372, 10);
  sqcRZGate(q, 0.0038172374260960753, 10);
  sqcRYGate(q, -1.8232822581140977, 11);
  sqcRZGate(q, 3.083911498959726, 11);
  sqcRYGate(q, 3.136405575916433, 12);
  sqcRZGate(q, 1.151753041407599, 12);
  sqcRYGate(q, 3.135368368216744, 13);
  sqcRZGate(q, 2.2163747788353065, 13);
  sqcRYGate(q, 1.5284560752815297, 14);
  sqcRZGate(q, 0.03449353659628862, 14);
  sqcRYGate(q, 1.564663814088818, 15);
  sqcRZGate(q, 0.10760722416903068, 15);
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
  sqcRYGate(q, -2.1098016335571876, 0);
  sqcRZGate(q, -0.5330320311216772, 0);
  sqcRYGate(q, -1.2165338136033743, 1);
  sqcRZGate(q, -0.21074214791715207, 1);
  sqcRYGate(q, -1.929184543134176, 2);
  sqcRZGate(q, 3.1320174691851004, 2);
  sqcRYGate(q, 3.1187145527413547, 3);
  sqcRZGate(q, 2.250448993819995, 3);
  sqcRYGate(q, -3.1392614425157026, 4);
  sqcRZGate(q, 2.950145873675737, 4);
  sqcRYGate(q, 3.141122217499847, 5);
  sqcRZGate(q, -2.366616717746067, 5);
  sqcRYGate(q, -1.4890589304911876, 6);
  sqcRZGate(q, -3.1026457805347727, 6);
  sqcRYGate(q, 1.6569991064341085, 7);
  sqcRZGate(q, 1.5936044467782802, 7);
  sqcRYGate(q, 1.5725199377296242, 8);
  sqcRZGate(q, 2.193550454284413, 8);
  sqcRYGate(q, -0.003510114374733142, 9);
  sqcRZGate(q, 1.240710857437602, 9);
  sqcRYGate(q, 1.526730842971787, 10);
  sqcRZGate(q, -3.122600012704275, 10);
  sqcRYGate(q, -0.02073347328874764, 11);
  sqcRZGate(q, 0.08129392776101696, 11);
  sqcRYGate(q, 1.55000367313684, 12);
  sqcRZGate(q, -1.5621130166525043, 12);
  sqcRYGate(q, 1.5550563249627813, 13);
  sqcRZGate(q, 0.9801501366722613, 13);
  sqcRYGate(q, -1.4702541209204993, 14);
  sqcRZGate(q, 1.509344035233842, 14);
  sqcRYGate(q, -1.523240609080763, 15);
  sqcRZGate(q, 1.2484057032473723, 15);
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
  sqcRYGate(q, 2.8777865533595874, 0);
  sqcRZGate(q, 2.58880246165187, 0);
  sqcRYGate(q, -3.135518288178227, 1);
  sqcRZGate(q, -1.5455536987420606, 1);
  sqcRYGate(q, 2.951400780119965, 2);
  sqcRZGate(q, 2.025608688436175, 2);
  sqcRYGate(q, -3.1340775685691753, 3);
  sqcRZGate(q, -0.1666232798860475, 3);
  sqcRYGate(q, -0.06719191600854824, 4);
  sqcRZGate(q, -0.6059095830818106, 4);
  sqcRYGate(q, -1.8006727926806407, 5);
  sqcRZGate(q, -3.062355174930296, 5);
  sqcRYGate(q, 2.593941257863095, 6);
  sqcRZGate(q, 0.05879231854771901, 6);
  sqcRYGate(q, -1.5767359209461933, 7);
  sqcRZGate(q, -3.138091387672028, 7);
  sqcRYGate(q, -3.1061344777051945, 8);
  sqcRZGate(q, -1.5546503923611825, 8);
  sqcRYGate(q, -0.007832898894211501, 9);
  sqcRZGate(q, -0.01902215035934571, 9);
  sqcRYGate(q, -1.4790633466096825, 10);
  sqcRZGate(q, 2.7448978579895926, 10);
  sqcRYGate(q, 1.569951834728423, 11);
  sqcRZGate(q, -1.7806358720413922, 11);
  sqcRYGate(q, -1.5704785968232917, 12);
  sqcRZGate(q, -1.5715192324022533, 12);
  sqcRYGate(q, -3.1398690516719836, 13);
  sqcRZGate(q, 0.9792715368902044, 13);
  sqcRYGate(q, 1.5255469157654868, 14);
  sqcRZGate(q, -1.3979765032676683, 14);
  sqcRYGate(q, -1.5073983076343476, 15);
  sqcRZGate(q, 1.418498255122775, 15);
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
  sqcRYGate(q, 1.0254881240938156, 0);
  sqcRZGate(q, -1.90004745602135, 0);
  sqcRYGate(q, 1.6660584904882176, 1);
  sqcRZGate(q, -1.1893111964433498, 1);
  sqcRYGate(q, 0.6963098832795032, 2);
  sqcRZGate(q, 1.0164803178296415, 2);
  sqcRYGate(q, -3.0129771627708792, 3);
  sqcRZGate(q, 3.0432830740238703, 3);
  sqcRYGate(q, -3.1381140652728874, 4);
  sqcRZGate(q, 1.19753133944012, 4);
  sqcRYGate(q, -1.5737088528847076, 5);
  sqcRZGate(q, -0.01792898655347981, 5);
  sqcRYGate(q, 1.5535281216335732, 6);
  sqcRZGate(q, -1.5987146980043276, 6);
  sqcRYGate(q, 1.523794201274728, 7);
  sqcRZGate(q, -1.5508899230424635, 7);
  sqcRYGate(q, -0.0005524175019351318, 8);
  sqcRZGate(q, -0.9658607357355689, 8);
  sqcRYGate(q, -0.0007603217494196457, 9);
  sqcRZGate(q, -2.6793366126581564, 9);
  sqcRYGate(q, 2.3435969027104533, 10);
  sqcRZGate(q, -0.043311346394077646, 10);
  sqcRYGate(q, -0.1689912881181124, 11);
  sqcRZGate(q, 0.609891744113508, 11);
  sqcRYGate(q, 1.563191670697051, 12);
  sqcRZGate(q, -2.249334637072274, 12);
  sqcRYGate(q, 1.56824751997856, 13);
  sqcRZGate(q, -1.0376135792666372, 13);
  sqcRYGate(q, -3.0342567881476707, 14);
  sqcRZGate(q, 1.5457313822317484, 14);
  sqcRYGate(q, -1.6775605200025607, 15);
  sqcRZGate(q, -3.1138878710347417, 15);
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
  sqcRYGate(q, 1.5423018364632046, 0);
  sqcRZGate(q, 2.891883057693433, 0);
  sqcRYGate(q, 1.5701348801331596, 1);
  sqcRZGate(q, 2.669315946984128, 1);
  sqcRYGate(q, 1.6905066964677828, 2);
  sqcRZGate(q, -1.43369759214945, 2);
  sqcRYGate(q, 0.6430691323978001, 3);
  sqcRZGate(q, -0.1139073472844462, 3);
  sqcRYGate(q, 1.5809251651901572, 4);
  sqcRZGate(q, 0.0188352287642745, 4);
  sqcRYGate(q, -1.5375124699285792, 5);
  sqcRZGate(q, 0.2807013051875238, 5);
  sqcRYGate(q, 1.5704154044999596, 6);
  sqcRZGate(q, 3.133616192275164, 6);
  sqcRYGate(q, 1.567753160355955, 7);
  sqcRZGate(q, -2.745780655064553, 7);
  sqcRYGate(q, 1.5159345821516599, 8);
  sqcRZGate(q, -0.40618056188536866, 8);
  sqcRYGate(q, 3.0818738353405277, 9);
  sqcRZGate(q, 2.763372381865998, 9);
  sqcRYGate(q, 3.121651946172931, 10);
  sqcRZGate(q, 1.1596649947164643, 10);
  sqcRYGate(q, -3.07124790413795, 11);
  sqcRZGate(q, -2.899680977149922, 11);
  sqcRYGate(q, -0.2422863751106715, 12);
  sqcRZGate(q, 0.6584673386687685, 12);
  sqcRYGate(q, 2.469399289412971, 13);
  sqcRZGate(q, -2.748059547459513, 13);
  sqcRYGate(q, -1.566588447468402, 14);
  sqcRZGate(q, 0.618185846162591, 14);
  sqcRYGate(q, 2.1246470259814854, 15);
  sqcRZGate(q, -3.092856463879981, 15);
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
  sqcRYGate(q, -2.429649099948216, 0);
  sqcRZGate(q, -0.5073829109094657, 0);
  sqcRYGate(q, -2.9372578103532905, 1);
  sqcRZGate(q, 1.0107823639039983, 1);
  sqcRYGate(q, 1.5898085059210636, 2);
  sqcRZGate(q, 1.3853833464059182, 2);
  sqcRYGate(q, 1.570347110665009, 3);
  sqcRZGate(q, -0.00016113780684623435, 3);
  sqcRYGate(q, 0.12183011033035207, 4);
  sqcRZGate(q, 1.6767869603564476, 4);
  sqcRYGate(q, -0.02996202299205564, 5);
  sqcRZGate(q, 1.2901356530207864, 5);
  sqcRYGate(q, 1.5700333936666377, 6);
  sqcRZGate(q, -1.4848193302070178, 6);
  sqcRYGate(q, -1.570128307011278, 7);
  sqcRZGate(q, 0.1739599929822706, 7);
  sqcRYGate(q, -3.017562365413165, 8);
  sqcRZGate(q, 2.973382250741499, 8);
  sqcRYGate(q, -1.4237870031904232, 9);
  sqcRZGate(q, 0.3523494879362552, 9);
  sqcRYGate(q, -0.4272410856369406, 10);
  sqcRZGate(q, 1.9632444204422814, 10);
  sqcRYGate(q, -0.7460898999868236, 11);
  sqcRZGate(q, -0.15124410905284422, 11);
  sqcRYGate(q, 3.1400889280642943, 12);
  sqcRZGate(q, 1.6790425327179825, 12);
  sqcRYGate(q, 0.004251626742587611, 13);
  sqcRZGate(q, -2.8873532658465804, 13);
  sqcRYGate(q, -0.0031482866441017165, 14);
  sqcRZGate(q, -2.1878757726082982, 14);
  sqcRYGate(q, -1.6019025021476772, 15);
  sqcRZGate(q, 3.141217560333825, 15);
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
  sqcRYGate(q, -0.08346634258171015, 0);
  sqcRZGate(q, -2.9580193034462146, 0);
  sqcRYGate(q, 3.136309701091933, 1);
  sqcRZGate(q, -1.643314627049072, 1);
  sqcRYGate(q, 1.5696114720186989, 2);
  sqcRZGate(q, -2.710494831564899, 2);
  sqcRYGate(q, -1.124812226580329, 3);
  sqcRZGate(q, 0.0005271654183220693, 3);
  sqcRYGate(q, 0.0005816182001135645, 4);
  sqcRZGate(q, 1.720320333497468, 4);
  sqcRYGate(q, 1.5703443268036938, 5);
  sqcRZGate(q, 1.542700822789179, 5);
  sqcRYGate(q, 1.570824426465287, 6);
  sqcRZGate(q, 1.5805180998440758, 6);
  sqcRYGate(q, 3.120928852058207, 7);
  sqcRZGate(q, 0.6204499808165042, 7);
  sqcRYGate(q, 0.023843598709400556, 8);
  sqcRZGate(q, 3.0981944959994654, 8);
  sqcRYGate(q, 0.02455771423227837, 9);
  sqcRZGate(q, 2.7878888610948795, 9);
  sqcRYGate(q, -0.021221177059847912, 10);
  sqcRZGate(q, 0.27062320450116933, 10);
  sqcRYGate(q, 3.077348656794074, 11);
  sqcRZGate(q, 2.912913538633364, 11);
  sqcRYGate(q, 0.03271691426441354, 12);
  sqcRZGate(q, -0.09087686444248, 12);
  sqcRYGate(q, 1.0079514683026636, 13);
  sqcRZGate(q, -0.8834220101845209, 13);
  sqcRYGate(q, 1.5672239624487152, 14);
  sqcRZGate(q, 3.075410614205099, 14);
  sqcRYGate(q, -2.5196041687573367, 15);
  sqcRZGate(q, 0.0038690050212784044, 15);
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
  sqcRYGate(q, 0.8850254378275473, 0);
  sqcRZGate(q, -2.970942951099227, 0);
  sqcRYGate(q, 1.5693657712455247, 1);
  sqcRZGate(q, -2.520749044563731, 1);
  sqcRYGate(q, -2.6732538698226446e-05, 2);
  sqcRZGate(q, -0.45390514832889034, 2);
  sqcRYGate(q, 1.5856087421446947, 3);
  sqcRZGate(q, -0.03265610983841505, 3);
  sqcRYGate(q, -3.1359230111223053, 4);
  sqcRZGate(q, 0.24577915166915876, 4);
  sqcRYGate(q, 0.047169961916327274, 5);
  sqcRZGate(q, -0.5218255500018358, 5);
  sqcRYGate(q, 1.5739992265795457, 6);
  sqcRZGate(q, 2.660214116936388, 6);
  sqcRYGate(q, -0.0001483685597670765, 7);
  sqcRZGate(q, -2.0579415974066047, 7);
  sqcRYGate(q, 0.22596544783365755, 8);
  sqcRZGate(q, 1.7539419833459853, 8);
  sqcRYGate(q, -1.4217204435275823, 9);
  sqcRZGate(q, -2.692705171307498, 9);
  sqcRYGate(q, 1.0219327967212046, 10);
  sqcRZGate(q, 0.1485786258558495, 10);
  sqcRYGate(q, -0.9071074082448787, 11);
  sqcRZGate(q, 2.4293479178702957, 11);
  sqcRYGate(q, -3.1402441143950477, 12);
  sqcRZGate(q, 0.02788171193881439, 12);
  sqcRYGate(q, -3.1120355543533598, 13);
  sqcRZGate(q, -2.2736413969078497, 13);
  sqcRYGate(q, -1.55552953267534, 14);
  sqcRZGate(q, -0.8014447127035229, 14);
  sqcRYGate(q, 1.7251774916573084, 15);
  sqcRZGate(q, -1.5580835528748889, 15);
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
  sqcRYGate(q, -1.547756523387445, 0);
  sqcRZGate(q, -2.7514979868756777, 0);
  sqcRYGate(q, 3.0910759210131804, 1);
  sqcRZGate(q, -0.5549572773590166, 1);
  sqcRYGate(q, 1.4750078197818244, 2);
  sqcRZGate(q, 1.9654505715288657, 2);
  sqcRYGate(q, -1.158980203195383, 3);
  sqcRZGate(q, -1.1613515332245306, 3);
  sqcRYGate(q, -1.6036722461542832, 4);
  sqcRZGate(q, -1.1736152474195105, 4);
  sqcRYGate(q, 0.0447149964471085, 5);
  sqcRZGate(q, 2.465327975583076, 5);
  sqcRYGate(q, -3.1274641435283845, 6);
  sqcRZGate(q, -1.6176612647020496, 6);
  sqcRYGate(q, 1.5280036863677413, 7);
  sqcRZGate(q, 0.34624567010873986, 7);
  sqcRYGate(q, -3.067707938114694, 8);
  sqcRZGate(q, 2.3268558367309624, 8);
  sqcRYGate(q, 0.13615209283374963, 9);
  sqcRZGate(q, 2.9098739320220135, 9);
  sqcRYGate(q, 0.024805237146870992, 10);
  sqcRZGate(q, 1.7483667961068654, 10);
  sqcRYGate(q, 3.099180067578459, 11);
  sqcRZGate(q, -0.26893113609251046, 11);
  sqcRYGate(q, 1.3989686988312293, 12);
  sqcRZGate(q, -0.9836896712696661, 12);
  sqcRYGate(q, -3.0944421157316504, 13);
  sqcRZGate(q, -3.0043844224576874, 13);
  sqcRYGate(q, 0.020719037685850594, 14);
  sqcRZGate(q, 2.7693624689488057, 14);
  sqcRYGate(q, -1.618887163896665, 15);
  sqcRZGate(q, 0.3458623955998173, 15);

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
