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

  sqcRYGate(q, 3.137376339924553, 0);
  sqcRZGate(q, 0.48794483150266643, 0);
  sqcRYGate(q, 1.5693822555733385, 1);
  sqcRZGate(q, -2.17857542873152, 1);
  sqcRYGate(q, 1.5850703543879219, 2);
  sqcRZGate(q, 1.581100745108193, 2);
  sqcRYGate(q, -1.5672000752133726, 3);
  sqcRZGate(q, 0.9015062845151824, 3);
  sqcRYGate(q, -1.5541959553879907, 4);
  sqcRZGate(q, 3.095844688523685, 4);
  sqcRYGate(q, 0.02717354479715528, 5);
  sqcRZGate(q, 2.687748494771648, 5);
  sqcRYGate(q, 1.562011617257622, 6);
  sqcRZGate(q, -2.6897662372804803, 6);
  sqcRYGate(q, 3.1398220139078434, 7);
  sqcRZGate(q, -1.7926818723584355, 7);
  sqcRYGate(q, -1.5720388343319538, 8);
  sqcRZGate(q, -1.5692689377405267, 8);
  sqcRYGate(q, -1.5606021628862774, 9);
  sqcRZGate(q, -1.5747260540360921, 9);
  sqcRYGate(q, -0.9340973720260225, 10);
  sqcRZGate(q, 2.136505316834295, 10);
  sqcRYGate(q, 1.5705059092063731, 11);
  sqcRZGate(q, -1.5710037452738923, 11);
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
  sqcRYGate(q, -1.6130070478583196, 0);
  sqcRZGate(q, -0.9167813004652263, 0);
  sqcRYGate(q, -0.6934323884463485, 1);
  sqcRZGate(q, -2.0928082581056007, 1);
  sqcRYGate(q, 1.5609393845124977, 2);
  sqcRZGate(q, -0.1365460473934128, 2);
  sqcRYGate(q, -3.128234913442903, 3);
  sqcRZGate(q, -2.2848199887577465, 3);
  sqcRYGate(q, -3.1415564094977784, 4);
  sqcRZGate(q, 0.9630853709044418, 4);
  sqcRYGate(q, 0.253849153479226, 5);
  sqcRZGate(q, 3.1145268508529016, 5);
  sqcRYGate(q, 0.004424373057149822, 6);
  sqcRZGate(q, -2.882337640496948, 6);
  sqcRYGate(q, -1.4942564473689153, 7);
  sqcRZGate(q, 2.605292745219285, 7);
  sqcRYGate(q, -1.5735705742643802, 8);
  sqcRZGate(q, 0.4060743876494823, 8);
  sqcRYGate(q, 1.3919320446026857, 9);
  sqcRZGate(q, 0.004710326232321371, 9);
  sqcRYGate(q, -0.9115903207473518, 10);
  sqcRZGate(q, 1.5794608522731983, 10);
  sqcRYGate(q, 1.563000524534452, 11);
  sqcRZGate(q, 0.001155509963480128, 11);
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
  sqcRYGate(q, -0.5185769834196536, 0);
  sqcRZGate(q, -2.3409210013999644, 0);
  sqcRYGate(q, 2.865299573803181, 1);
  sqcRZGate(q, -1.0350740938674206, 1);
  sqcRYGate(q, 2.4409337387530026, 2);
  sqcRZGate(q, 0.13546268405987152, 2);
  sqcRYGate(q, -2.827145694625438, 3);
  sqcRZGate(q, 2.7484981665111317, 3);
  sqcRYGate(q, 0.03665084319864965, 4);
  sqcRZGate(q, 1.130316954601187, 4);
  sqcRYGate(q, -0.251073419749674, 5);
  sqcRZGate(q, -2.107554190813488, 5);
  sqcRYGate(q, -3.0334024810182623, 6);
  sqcRZGate(q, -2.8790224510546043, 6);
  sqcRYGate(q, 0.002785088142044468, 7);
  sqcRZGate(q, 0.45984430648284025, 7);
  sqcRYGate(q, -0.0009137321250483056, 8);
  sqcRZGate(q, 0.03787558934217581, 8);
  sqcRYGate(q, 1.5567684758367937, 9);
  sqcRZGate(q, 0.2209325232552326, 9);
  sqcRYGate(q, 0.21295073187268707, 10);
  sqcRZGate(q, 1.4742257803183036, 10);
  sqcRYGate(q, -1.6683492803788997, 11);
  sqcRZGate(q, -2.4000710914567254, 11);
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
  sqcRYGate(q, -0.9333451777465472, 0);
  sqcRZGate(q, 2.6400884217798253, 0);
  sqcRYGate(q, -2.126540733646369, 1);
  sqcRZGate(q, -0.5173410270388157, 1);
  sqcRYGate(q, -3.1233083827691814, 2);
  sqcRZGate(q, 0.1154009566172153, 2);
  sqcRYGate(q, -3.141424631443595, 3);
  sqcRZGate(q, -0.4679544867128485, 3);
  sqcRYGate(q, -2.9206154403599947e-05, 4);
  sqcRZGate(q, 2.652863947738811, 4);
  sqcRYGate(q, 0.06737775224498233, 5);
  sqcRZGate(q, 3.071635648590403, 5);
  sqcRYGate(q, 3.137267000907628, 6);
  sqcRZGate(q, 0.22449374367304661, 6);
  sqcRYGate(q, 1.7244837449223667, 7);
  sqcRZGate(q, -1.7149161583378545, 7);
  sqcRYGate(q, 0.0008101879111639474, 8);
  sqcRZGate(q, 1.1249222079479475, 8);
  sqcRYGate(q, -3.076590653124636, 9);
  sqcRZGate(q, 0.22493006046081998, 9);
  sqcRYGate(q, 1.034421804056201, 10);
  sqcRZGate(q, 2.349543749786987, 10);
  sqcRYGate(q, 3.1401835330694237, 11);
  sqcRZGate(q, -2.8659939564763874, 11);
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
  sqcRYGate(q, 1.6561376066457856, 0);
  sqcRZGate(q, 1.438634085589947, 0);
  sqcRYGate(q, 2.9522732853536704, 1);
  sqcRZGate(q, -2.610390842060914, 1);
  sqcRYGate(q, 1.7843384158552464, 2);
  sqcRZGate(q, 1.516759012926198, 2);
  sqcRYGate(q, -0.2654511698426712, 3);
  sqcRZGate(q, -2.308183120355644, 3);
  sqcRYGate(q, -2.9628472289545904, 4);
  sqcRZGate(q, -3.0985385211837255, 4);
  sqcRYGate(q, 0.00025791527110378184, 5);
  sqcRZGate(q, 0.39957670156479724, 5);
  sqcRYGate(q, 1.5533663637496131, 6);
  sqcRZGate(q, 0.3806475915871906, 6);
  sqcRYGate(q, 3.1192585901513743, 7);
  sqcRZGate(q, -0.401192190442501, 7);
  sqcRYGate(q, 0.007066189535937183, 8);
  sqcRZGate(q, 1.5750236349646163, 8);
  sqcRYGate(q, 0.08058765202228635, 9);
  sqcRZGate(q, -0.01497301330932288, 9);
  sqcRYGate(q, -0.9425951544661464, 10);
  sqcRZGate(q, 3.0753202459377156, 10);
  sqcRYGate(q, -0.0017200177376466286, 11);
  sqcRZGate(q, -2.675865524951022, 11);
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
  sqcRYGate(q, 1.473778185376853, 0);
  sqcRZGate(q, 0.6312451671323034, 0);
  sqcRYGate(q, 0.04453288679683104, 1);
  sqcRZGate(q, -2.5863589326597243, 1);
  sqcRYGate(q, 0.0903479561085288, 2);
  sqcRZGate(q, -1.5349121180119276, 2);
  sqcRYGate(q, -3.140216237123759, 3);
  sqcRZGate(q, -1.8720187403262107, 3);
  sqcRYGate(q, -3.14107734732618, 4);
  sqcRZGate(q, 1.6929760881364675, 4);
  sqcRYGate(q, -3.096134873906027, 5);
  sqcRZGate(q, 1.7642960000677697, 5);
  sqcRYGate(q, -0.00011962184854397151, 6);
  sqcRZGate(q, -1.9388758957288692, 6);
  sqcRYGate(q, -1.542624966090724, 7);
  sqcRZGate(q, 1.4691745515320733, 7);
  sqcRYGate(q, -1.4962285652420422, 8);
  sqcRZGate(q, 1.967486445621077, 8);
  sqcRYGate(q, -1.854589345478968, 9);
  sqcRZGate(q, 3.125338132178134, 9);
  sqcRYGate(q, 2.2749354503937758, 10);
  sqcRZGate(q, -2.003803562066925, 10);
  sqcRYGate(q, 1.571345615680084, 11);
  sqcRZGate(q, -2.8153478669887435, 11);
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
  sqcRYGate(q, 1.9171451281828675, 0);
  sqcRZGate(q, 0.3702139795192129, 0);
  sqcRYGate(q, -1.8106521473408714, 1);
  sqcRZGate(q, 1.0631028161909684, 1);
  sqcRYGate(q, 1.369633479124139, 2);
  sqcRZGate(q, -0.7196044967523648, 2);
  sqcRYGate(q, -0.06281751612765304, 3);
  sqcRZGate(q, 2.026669450902577, 3);
  sqcRYGate(q, -1.7544143309367484, 4);
  sqcRZGate(q, 1.620104731370849, 4);
  sqcRYGate(q, 3.141084970697947, 5);
  sqcRZGate(q, 1.8886162100604675, 5);
  sqcRYGate(q, -0.8314075022079317, 6);
  sqcRZGate(q, 0.19605521593970113, 6);
  sqcRYGate(q, -1.5823523614521426, 7);
  sqcRZGate(q, -0.0018758172363814844, 7);
  sqcRYGate(q, 0.001837157034545456, 8);
  sqcRZGate(q, 0.2997471018539803, 8);
  sqcRYGate(q, 1.4465105911167684, 9);
  sqcRZGate(q, -1.5628009200896595, 9);
  sqcRYGate(q, 1.5650903978203006, 10);
  sqcRZGate(q, -1.5683937647481028, 10);
  sqcRYGate(q, -2.8227858204514926, 11);
  sqcRZGate(q, -1.8094813094586923, 11);
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
  sqcRYGate(q, -1.4111588706788571, 0);
  sqcRZGate(q, 1.9024809763560269, 0);
  sqcRYGate(q, 0.032429274099588144, 1);
  sqcRZGate(q, -0.8799501738893635, 1);
  sqcRYGate(q, 0.05854208355333945, 2);
  sqcRZGate(q, 2.0710124252687354, 2);
  sqcRYGate(q, 0.0016238981842559785, 3);
  sqcRZGate(q, 0.5984639141583642, 3);
  sqcRYGate(q, -3.1316258227963605, 4);
  sqcRZGate(q, 1.208685168139663, 4);
  sqcRYGate(q, -3.1370526228294073, 5);
  sqcRZGate(q, -1.110038477409178, 5);
  sqcRYGate(q, -2.2805266111092237e-06, 6);
  sqcRZGate(q, 2.929339646485682, 6);
  sqcRYGate(q, -1.5003589779301176, 7);
  sqcRZGate(q, -1.4824570905131995, 7);
  sqcRYGate(q, -3.1392022208293993, 8);
  sqcRZGate(q, 0.6946404990777193, 8);
  sqcRYGate(q, 0.2540848986574788, 9);
  sqcRZGate(q, 1.5674666012216134, 9);
  sqcRYGate(q, 1.572240353518796, 10);
  sqcRZGate(q, 1.6147560637054086, 10);
  sqcRYGate(q, -0.027485484105705282, 11);
  sqcRZGate(q, 2.0971838277718255, 11);
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
  sqcRYGate(q, -1.4589066829748838, 0);
  sqcRZGate(q, -2.0693852217218565, 0);
  sqcRYGate(q, -1.4525596271633399, 1);
  sqcRZGate(q, 1.1095208593101251, 1);
  sqcRYGate(q, 0.3633856518047604, 2);
  sqcRZGate(q, 2.669614222484703, 2);
  sqcRYGate(q, -1.9576128151159793, 3);
  sqcRZGate(q, -2.5512331956232597, 3);
  sqcRYGate(q, -0.18081116254004165, 4);
  sqcRZGate(q, -2.4362670634691033, 4);
  sqcRYGate(q, 3.141331725399046, 5);
  sqcRZGate(q, -0.45597885279213024, 5);
  sqcRYGate(q, 1.4919220675939577, 6);
  sqcRZGate(q, 2.3947395051863145, 6);
  sqcRYGate(q, -0.009883418559447854, 7);
  sqcRZGate(q, 1.481986302574331, 7);
  sqcRYGate(q, 1.5750272494976363, 8);
  sqcRZGate(q, -1.4486671397722528, 8);
  sqcRYGate(q, -2.7758260509234978, 9);
  sqcRZGate(q, -2.925022054491866, 9);
  sqcRYGate(q, -1.55622816177524, 10);
  sqcRZGate(q, 1.4688099155181447, 10);
  sqcRYGate(q, -1.8440543040478374, 11);
  sqcRZGate(q, 0.2602246918389632, 11);
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
  sqcRYGate(q, 2.919188770994416, 0);
  sqcRZGate(q, -1.1797516661026588, 0);
  sqcRYGate(q, -0.011673364107445572, 1);
  sqcRZGate(q, 2.7274461309573463, 1);
  sqcRYGate(q, -1.5544506262509488, 2);
  sqcRZGate(q, -2.3522622476584245, 2);
  sqcRYGate(q, -0.00040122415855936566, 3);
  sqcRZGate(q, -2.194466995005077, 3);
  sqcRYGate(q, -3.1362039602059593, 4);
  sqcRZGate(q, 2.258935884602402, 4);
  sqcRYGate(q, -0.0009111488855122474, 5);
  sqcRZGate(q, -0.5944992221611137, 5);
  sqcRYGate(q, 0.001225745736639361, 6);
  sqcRZGate(q, 0.8396091913498953, 6);
  sqcRYGate(q, -0.7324562795052074, 7);
  sqcRZGate(q, 0.7311208273558636, 7);
  sqcRYGate(q, 3.1397501143069304, 8);
  sqcRZGate(q, 2.3704144484218688, 8);
  sqcRYGate(q, -0.00034327873082835473, 9);
  sqcRZGate(q, 2.830409517183779, 9);
  sqcRYGate(q, -1.5869193690253716, 10);
  sqcRZGate(q, 0.01279888898003978, 10);
  sqcRYGate(q, 1.7609630766292357, 11);
  sqcRZGate(q, 1.6249846622268913, 11);
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
  sqcRYGate(q, -1.5783183804613479, 0);
  sqcRZGate(q, 3.1377157625, 0);
  sqcRYGate(q, 0.2365911586561502, 1);
  sqcRZGate(q, -2.327260071789986, 1);
  sqcRYGate(q, 1.4084896182101698, 2);
  sqcRZGate(q, 2.7557634013316314, 2);
  sqcRYGate(q, -0.7342902888954563, 3);
  sqcRZGate(q, 1.5655834784099882, 3);
  sqcRYGate(q, 0.026208168522257935, 4);
  sqcRZGate(q, -0.3797505735743458, 4);
  sqcRYGate(q, -1.567313662082227, 5);
  sqcRZGate(q, 0.0012105187976047917, 5);
  sqcRYGate(q, 1.577155541500506, 6);
  sqcRZGate(q, -3.1352567402609917, 6);
  sqcRYGate(q, -0.009156745960114896, 7);
  sqcRZGate(q, 2.4123808002683327, 7);
  sqcRYGate(q, -0.0025761220034707477, 8);
  sqcRZGate(q, -2.520044175241826, 8);
  sqcRYGate(q, 3.0875809973225437, 9);
  sqcRZGate(q, -0.12211937901174162, 9);
  sqcRYGate(q, -1.5769487967263431, 10);
  sqcRZGate(q, -1.6763081700796607, 10);
  sqcRYGate(q, -1.5903103894551496, 11);
  sqcRZGate(q, 1.5430920066330662, 11);

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
