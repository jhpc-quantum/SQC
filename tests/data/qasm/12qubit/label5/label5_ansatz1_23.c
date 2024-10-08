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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.0826262776840956, 0);
  sqcRZGate(q, -1.700357394636613, 0);
  sqcRYGate(q, 1.530554916113909, 1);
  sqcRZGate(q, 1.5437804330072495, 1);
  sqcRYGate(q, 1.2977493680841174, 2);
  sqcRZGate(q, -1.4687114082654311, 2);
  sqcRYGate(q, 1.8557614003170275, 3);
  sqcRZGate(q, -0.1661935760788875, 3);
  sqcRYGate(q, -0.8658598054032374, 4);
  sqcRZGate(q, 2.191835302275945, 4);
  sqcRYGate(q, -1.2995612485318555, 5);
  sqcRZGate(q, -0.5746253009240213, 5);
  sqcRYGate(q, 3.115972771160072, 6);
  sqcRZGate(q, 1.9365202023594366, 6);
  sqcRYGate(q, -1.9144110072411404, 7);
  sqcRZGate(q, 2.963770662571774, 7);
  sqcRYGate(q, 2.4401544546496328, 8);
  sqcRZGate(q, 1.0364781723329841, 8);
  sqcRYGate(q, 1.5377265892992587, 9);
  sqcRZGate(q, 1.2698785590465578, 9);
  sqcRYGate(q, -0.20960259612853083, 10);
  sqcRZGate(q, 2.5717680633949884, 10);
  sqcRYGate(q, 0.807556419433341, 11);
  sqcRZGate(q, 0.5262494486141795, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.006466864897557, 0);
  sqcRZGate(q, -1.0680090769309334, 0);
  sqcRYGate(q, 0.7248612417821771, 1);
  sqcRZGate(q, 2.8167820895854794, 1);
  sqcRYGate(q, -0.7800134437308959, 2);
  sqcRZGate(q, 1.493052844689993, 2);
  sqcRYGate(q, 2.026866278458972, 3);
  sqcRZGate(q, 2.657316089551217, 3);
  sqcRYGate(q, 1.388286071723699, 4);
  sqcRZGate(q, -2.970866098821161, 4);
  sqcRYGate(q, -0.6168821256323499, 5);
  sqcRZGate(q, -1.8329406580687766, 5);
  sqcRYGate(q, -0.005706404533652786, 6);
  sqcRZGate(q, -1.458404554610975, 6);
  sqcRYGate(q, 1.2095324470277635, 7);
  sqcRZGate(q, 1.5235369650967767, 7);
  sqcRYGate(q, -1.3644493862888263, 8);
  sqcRZGate(q, -2.456110302931723, 8);
  sqcRYGate(q, -0.3912963277693855, 9);
  sqcRZGate(q, 0.7105136596711904, 9);
  sqcRYGate(q, 2.7383363998960224, 10);
  sqcRZGate(q, -1.1886515083940425, 10);
  sqcRYGate(q, -1.0136703906269702, 11);
  sqcRZGate(q, 1.929798198253953, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5538360134687148, 0);
  sqcRZGate(q, 0.43248544442440995, 0);
  sqcRYGate(q, -0.32973823898717747, 1);
  sqcRZGate(q, -2.0944359489159554, 1);
  sqcRYGate(q, 1.342537074105717, 2);
  sqcRZGate(q, -1.129108779566969, 2);
  sqcRYGate(q, 0.40477900775364356, 3);
  sqcRZGate(q, 2.8916955457740237, 3);
  sqcRYGate(q, 1.0478212313089421, 4);
  sqcRZGate(q, 1.6651658262190412, 4);
  sqcRYGate(q, 1.5135267125628609, 5);
  sqcRZGate(q, 1.81981375863971, 5);
  sqcRYGate(q, 1.6034060224865456, 6);
  sqcRZGate(q, -1.3244175122729445, 6);
  sqcRYGate(q, -1.558569221468444, 7);
  sqcRZGate(q, 1.4474090785651081, 7);
  sqcRYGate(q, -0.03161657393714279, 8);
  sqcRZGate(q, -1.6064654897691668, 8);
  sqcRYGate(q, 2.6344161058841986, 9);
  sqcRZGate(q, 0.3716317951541132, 9);
  sqcRYGate(q, 1.1956384731056235, 10);
  sqcRZGate(q, -1.8137352457260922, 10);
  sqcRYGate(q, 2.3657050985267, 11);
  sqcRZGate(q, 0.29038128051370876, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.08010389219487557, 0);
  sqcRZGate(q, -2.48092958685196, 0);
  sqcRYGate(q, 2.532956394323324, 1);
  sqcRZGate(q, -1.1767282943066584, 1);
  sqcRYGate(q, 1.6407222601190439, 2);
  sqcRZGate(q, 1.7470153907830075, 2);
  sqcRYGate(q, 0.6578715720813282, 3);
  sqcRZGate(q, -1.12092634890673, 3);
  sqcRYGate(q, -0.442139704584414, 4);
  sqcRZGate(q, 3.0262611911227886, 4);
  sqcRYGate(q, -2.9754580129218415, 5);
  sqcRZGate(q, 2.5139704966973286, 5);
  sqcRYGate(q, -0.045532387491012294, 6);
  sqcRZGate(q, 2.3549444141518623, 6);
  sqcRYGate(q, 2.9804860359886423, 7);
  sqcRZGate(q, 0.26772896605314916, 7);
  sqcRYGate(q, 1.7201071502254306, 8);
  sqcRZGate(q, 0.06779646623203774, 8);
  sqcRYGate(q, 2.1336117481854133, 9);
  sqcRZGate(q, -2.3152497570989454, 9);
  sqcRYGate(q, 0.39893362267599475, 10);
  sqcRZGate(q, 2.827167021738308, 10);
  sqcRYGate(q, -0.6180768429214769, 11);
  sqcRZGate(q, 0.7569750837936366, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.3812078487821713, 0);
  sqcRZGate(q, 1.4519939341277652, 0);
  sqcRYGate(q, 1.4611561579026224, 1);
  sqcRZGate(q, -2.295169912932422, 1);
  sqcRYGate(q, 0.3670000779007542, 2);
  sqcRZGate(q, -1.3597711943745745, 2);
  sqcRYGate(q, -1.2936020699834825, 3);
  sqcRZGate(q, -0.8104919980979871, 3);
  sqcRYGate(q, 3.0379579682632847, 4);
  sqcRZGate(q, 0.6962771411459677, 4);
  sqcRYGate(q, 0.20006447839679176, 5);
  sqcRZGate(q, 0.7462390110898403, 5);
  sqcRYGate(q, -2.703522203825776, 6);
  sqcRZGate(q, 2.470176268051619, 6);
  sqcRYGate(q, -3.0106836083106376, 7);
  sqcRZGate(q, 1.7899397488158857, 7);
  sqcRYGate(q, 0.36853756788745695, 8);
  sqcRZGate(q, 1.98699497829634, 8);
  sqcRYGate(q, -2.2211004554813587, 9);
  sqcRZGate(q, 2.9167542134667945, 9);
  sqcRYGate(q, -1.8739701607110015, 10);
  sqcRZGate(q, 0.06362645323237473, 10);
  sqcRYGate(q, -0.6827120658490397, 11);
  sqcRZGate(q, -0.712594071284613, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.6657908366154504, 0);
  sqcRZGate(q, -1.2651828645195167, 0);
  sqcRYGate(q, -2.0913405040115594, 1);
  sqcRZGate(q, -0.05098003303477674, 1);
  sqcRYGate(q, -1.7431194914094608, 2);
  sqcRZGate(q, 2.3626969240822224, 2);
  sqcRYGate(q, -2.29087999176543, 3);
  sqcRZGate(q, 1.9117412683563542, 3);
  sqcRYGate(q, -0.38165046664118074, 4);
  sqcRZGate(q, 0.58172267838594, 4);
  sqcRYGate(q, -2.9771004145131643, 5);
  sqcRZGate(q, 2.1842654379796245, 5);
  sqcRYGate(q, 3.0809154967418797, 6);
  sqcRZGate(q, 2.111616069132175, 6);
  sqcRYGate(q, 2.9642181656445974, 7);
  sqcRZGate(q, 1.303748982079541, 7);
  sqcRYGate(q, -1.1166464350965066, 8);
  sqcRZGate(q, 1.6315622017550426, 8);
  sqcRYGate(q, -2.2926493915553983, 9);
  sqcRZGate(q, -0.9277897022096672, 9);
  sqcRYGate(q, -0.2547164399041728, 10);
  sqcRZGate(q, -0.5061914725645466, 10);
  sqcRYGate(q, -1.959687191814572, 11);
  sqcRZGate(q, -2.474492850656726, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.194543187531437, 0);
  sqcRZGate(q, 0.008122319394779844, 0);
  sqcRYGate(q, 1.6567537309338791, 1);
  sqcRZGate(q, 0.17531230663876615, 1);
  sqcRYGate(q, -0.8677063894336818, 2);
  sqcRZGate(q, -1.5504862466056457, 2);
  sqcRYGate(q, -1.2257533126025988, 3);
  sqcRZGate(q, -0.7331728018030182, 3);
  sqcRYGate(q, 0.13085706141950057, 4);
  sqcRZGate(q, -1.7995346794319413, 4);
  sqcRYGate(q, 0.03765801902253241, 5);
  sqcRZGate(q, -0.05728785915912971, 5);
  sqcRYGate(q, 1.4885952418787343, 6);
  sqcRZGate(q, 0.8263851435578495, 6);
  sqcRYGate(q, -3.111362584396771, 7);
  sqcRZGate(q, -0.4558941793472194, 7);
  sqcRYGate(q, -2.989658255405598, 8);
  sqcRZGate(q, 0.04329395325990095, 8);
  sqcRYGate(q, -2.552139257006891, 9);
  sqcRZGate(q, -1.3210434204954264, 9);
  sqcRYGate(q, -2.424454666528376, 10);
  sqcRZGate(q, -2.3471973223437166, 10);
  sqcRYGate(q, 2.5000190923469923, 11);
  sqcRZGate(q, -0.0895744071681865, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.2182073395848203, 0);
  sqcRZGate(q, 0.8038222726540667, 0);
  sqcRYGate(q, 1.8160111532287218, 1);
  sqcRZGate(q, -1.930216932022442, 1);
  sqcRYGate(q, -1.7461923346022454, 2);
  sqcRZGate(q, -1.7697045478871694, 2);
  sqcRYGate(q, 1.8017240766151161, 3);
  sqcRZGate(q, 1.197987284042413, 3);
  sqcRYGate(q, -3.098849876575712, 4);
  sqcRZGate(q, 0.8282186866222806, 4);
  sqcRYGate(q, 1.7418417309089422, 5);
  sqcRZGate(q, -1.1649799838912775, 5);
  sqcRYGate(q, -3.129909326139798, 6);
  sqcRZGate(q, -1.8040400221372275, 6);
  sqcRYGate(q, -0.0769882043699397, 7);
  sqcRZGate(q, -1.0742425778934326, 7);
  sqcRYGate(q, 1.721494724861084, 8);
  sqcRZGate(q, -1.839603169724965, 8);
  sqcRYGate(q, 3.0519211188661415, 9);
  sqcRZGate(q, 0.9014367375791306, 9);
  sqcRYGate(q, -3.073484072936136, 10);
  sqcRZGate(q, 1.1366576128901347, 10);
  sqcRYGate(q, 2.7822465105938248, 11);
  sqcRZGate(q, 0.3767957251243992, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.7331582489663853, 0);
  sqcRZGate(q, 2.9846699756439072, 0);
  sqcRYGate(q, 1.1555003424589247, 1);
  sqcRZGate(q, -0.30300278930879304, 1);
  sqcRYGate(q, -0.3512448033433415, 2);
  sqcRZGate(q, 0.12384910169308849, 2);
  sqcRYGate(q, -1.537400685353955, 3);
  sqcRZGate(q, 2.668779553457668, 3);
  sqcRYGate(q, -3.139822765917049, 4);
  sqcRZGate(q, 2.086382479035218, 4);
  sqcRYGate(q, 3.113573628885313, 5);
  sqcRZGate(q, 2.0198420237092587, 5);
  sqcRYGate(q, -2.4359253659128215, 6);
  sqcRZGate(q, -0.3128573520238431, 6);
  sqcRYGate(q, -2.651999007405366, 7);
  sqcRZGate(q, -0.4668487619041659, 7);
  sqcRYGate(q, -0.668939207521277, 8);
  sqcRZGate(q, -0.9538028973581483, 8);
  sqcRYGate(q, -2.2541351437567827, 9);
  sqcRZGate(q, 0.19833529228630997, 9);
  sqcRYGate(q, 0.9458506647089715, 10);
  sqcRZGate(q, -1.870871989760276, 10);
  sqcRYGate(q, -2.1512604783879326, 11);
  sqcRZGate(q, -0.9988188342639406, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.13842977129398054, 0);
  sqcRZGate(q, -2.20803805400882, 0);
  sqcRYGate(q, -0.7372650914495538, 1);
  sqcRZGate(q, -2.9694822271870236, 1);
  sqcRYGate(q, -2.2087312750373576, 2);
  sqcRZGate(q, 1.164029616490465, 2);
  sqcRYGate(q, 1.9382961221849886, 3);
  sqcRZGate(q, -0.24651917659425934, 3);
  sqcRYGate(q, 1.2664448218923858, 4);
  sqcRZGate(q, -0.5785063200328748, 4);
  sqcRYGate(q, -1.3216510161168078, 5);
  sqcRZGate(q, -2.2064939286549423, 5);
  sqcRYGate(q, -3.138246023374186, 6);
  sqcRZGate(q, -0.30624974572288366, 6);
  sqcRYGate(q, 3.1378884978159776, 7);
  sqcRZGate(q, -0.8018018020129226, 7);
  sqcRYGate(q, -2.2686531495438658, 8);
  sqcRZGate(q, -0.08550669721860729, 8);
  sqcRYGate(q, 2.704860427127191, 9);
  sqcRZGate(q, 2.2565880093931794, 9);
  sqcRYGate(q, -2.7938986853433394, 10);
  sqcRZGate(q, -0.9272312995751673, 10);
  sqcRYGate(q, -0.6224492573251181, 11);
  sqcRZGate(q, 2.7839455263828294, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.072707942932633, 0);
  sqcRZGate(q, -0.923245928626117, 0);
  sqcRYGate(q, 0.3948077000194602, 1);
  sqcRZGate(q, -1.0201229632573388, 1);
  sqcRYGate(q, 2.4588050323626134, 2);
  sqcRZGate(q, -2.0167498520321754, 2);
  sqcRYGate(q, 1.9392930036323608, 3);
  sqcRZGate(q, -2.463808512232245, 3);
  sqcRYGate(q, 3.1412049761278023, 4);
  sqcRZGate(q, 2.282344151175377, 4);
  sqcRYGate(q, 0.4530226475659376, 5);
  sqcRZGate(q, -2.5211977415135105, 5);
  sqcRYGate(q, 1.5049545796909725, 6);
  sqcRZGate(q, 2.2753269931117988, 6);
  sqcRYGate(q, -0.24723111037577006, 7);
  sqcRZGate(q, 0.6898152914064157, 7);
  sqcRYGate(q, 0.36034919773161, 8);
  sqcRZGate(q, -0.21012814314653827, 8);
  sqcRYGate(q, -1.675495596414987, 9);
  sqcRZGate(q, 0.15194915793388655, 9);
  sqcRYGate(q, 0.3367478339061817, 10);
  sqcRZGate(q, -2.623258021938312, 10);
  sqcRYGate(q, -0.4796462607155245, 11);
  sqcRZGate(q, 0.9196986027558466, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.1333807383434698, 0);
  sqcRZGate(q, -0.754807846632966, 0);
  sqcRYGate(q, 1.6030796348870426, 1);
  sqcRZGate(q, 2.288255511516877, 1);
  sqcRYGate(q, -1.2713996533945318, 2);
  sqcRZGate(q, 1.3251160037707654, 2);
  sqcRYGate(q, 0.16216093247033303, 3);
  sqcRZGate(q, 2.1315538794578845, 3);
  sqcRYGate(q, 3.105105571389824, 4);
  sqcRZGate(q, -0.2606490423581755, 4);
  sqcRYGate(q, -1.4105909461359991, 5);
  sqcRZGate(q, 0.7659878318911945, 5);
  sqcRYGate(q, 2.079156739302472, 6);
  sqcRZGate(q, 3.114348750615243, 6);
  sqcRYGate(q, 1.4149412868660676, 7);
  sqcRZGate(q, 2.739926689716046, 7);
  sqcRYGate(q, -2.7821049906855206, 8);
  sqcRZGate(q, -2.9533492173133276, 8);
  sqcRYGate(q, -0.8341736585826425, 9);
  sqcRZGate(q, -1.4636321959141956, 9);
  sqcRYGate(q, -0.5004348933911746, 10);
  sqcRZGate(q, 2.329402116695704, 10);
  sqcRYGate(q, 0.1043010600807441, 11);
  sqcRZGate(q, -1.3614106942860726, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.8031575136769834, 0);
  sqcRZGate(q, -0.5438508692789725, 0);
  sqcRYGate(q, -1.2300811888772127, 1);
  sqcRZGate(q, 1.4128876499240186, 1);
  sqcRYGate(q, -1.3634884844568227, 2);
  sqcRZGate(q, -1.1945621944762843, 2);
  sqcRYGate(q, -2.33367977904897, 3);
  sqcRZGate(q, -1.7976357491043997, 3);
  sqcRYGate(q, -0.0005331464663034563, 4);
  sqcRZGate(q, 2.7557544977874042, 4);
  sqcRYGate(q, -2.289653018685724, 5);
  sqcRZGate(q, 1.4774187766129436, 5);
  sqcRYGate(q, 1.0186235322932164, 6);
  sqcRZGate(q, 0.01305894003486927, 6);
  sqcRYGate(q, -3.139625618715008, 7);
  sqcRZGate(q, -0.9664613928136588, 7);
  sqcRYGate(q, -0.06355466708283686, 8);
  sqcRZGate(q, -2.4085695821218374, 8);
  sqcRYGate(q, -2.3985947618058234, 9);
  sqcRZGate(q, 0.6913931948532216, 9);
  sqcRYGate(q, 1.2594296723254392, 10);
  sqcRZGate(q, -2.960439919682761, 10);
  sqcRYGate(q, -2.8015860991630848, 11);
  sqcRZGate(q, 0.8895649990270544, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.7805182850835672, 0);
  sqcRZGate(q, 3.112712489536499, 0);
  sqcRYGate(q, 1.1872925346359149, 1);
  sqcRZGate(q, 2.93710676654965, 1);
  sqcRYGate(q, -1.9145561269484979, 2);
  sqcRZGate(q, 0.7271621460722658, 2);
  sqcRYGate(q, -2.138121654838768, 3);
  sqcRZGate(q, 3.1255774386466255, 3);
  sqcRYGate(q, -0.0011483669116347359, 4);
  sqcRZGate(q, -1.287155355598366, 4);
  sqcRYGate(q, -0.0008984699921549935, 5);
  sqcRZGate(q, -0.24448578203226073, 5);
  sqcRYGate(q, -2.8749148409024547, 6);
  sqcRZGate(q, 2.5948217927186006, 6);
  sqcRYGate(q, -0.030138446774679476, 7);
  sqcRZGate(q, -2.6618949854202207, 7);
  sqcRYGate(q, 0.2963449704175573, 8);
  sqcRZGate(q, -2.520510695668736, 8);
  sqcRYGate(q, -1.7954015734973199, 9);
  sqcRZGate(q, -0.1960736080138794, 9);
  sqcRYGate(q, 1.9826388515437943, 10);
  sqcRZGate(q, 3.069704851023239, 10);
  sqcRYGate(q, -3.100059361412904, 11);
  sqcRZGate(q, -1.295570343501752, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.12801261759389249, 0);
  sqcRZGate(q, 0.3301830733091196, 0);
  sqcRYGate(q, 2.4892425885605687, 1);
  sqcRZGate(q, -1.7056077789492892, 1);
  sqcRYGate(q, 1.4556455778856474, 2);
  sqcRZGate(q, 1.9924801867329751, 2);
  sqcRYGate(q, -1.5037402372697741, 3);
  sqcRZGate(q, 0.8853008339026339, 3);
  sqcRYGate(q, 1.0526349677511746, 4);
  sqcRZGate(q, 1.549035900894276, 4);
  sqcRYGate(q, -1.7221713478033602, 5);
  sqcRZGate(q, -0.7663550975744355, 5);
  sqcRYGate(q, -0.05108572031658731, 6);
  sqcRZGate(q, 0.5410839988064234, 6);
  sqcRYGate(q, -1.8993139689615848, 7);
  sqcRZGate(q, -3.1414933042333373, 7);
  sqcRYGate(q, -2.8579090233509707, 8);
  sqcRZGate(q, -3.122688813740629, 8);
  sqcRYGate(q, 1.7935964483348048, 9);
  sqcRZGate(q, 0.34271651977242795, 9);
  sqcRYGate(q, -1.6378544828600239, 10);
  sqcRZGate(q, 2.055447478767429, 10);
  sqcRYGate(q, -2.3799633624460848, 11);
  sqcRZGate(q, -3.018007972666103, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.8289867237015494, 0);
  sqcRZGate(q, 1.4454577043657535, 0);
  sqcRYGate(q, 2.0838574426556136, 1);
  sqcRZGate(q, -0.9724640063325493, 1);
  sqcRYGate(q, -0.08669653507300988, 2);
  sqcRZGate(q, -0.7603838154634134, 2);
  sqcRYGate(q, 0.003411435389987006, 3);
  sqcRZGate(q, 0.5106385631852817, 3);
  sqcRYGate(q, -3.0978074881075197, 4);
  sqcRZGate(q, -1.589651925244552, 4);
  sqcRYGate(q, -1.6383965946926293, 5);
  sqcRZGate(q, 1.6356610691822508, 5);
  sqcRYGate(q, 1.8981005549934835, 6);
  sqcRZGate(q, 0.7206617714776911, 6);
  sqcRYGate(q, -1.6270352774140688, 7);
  sqcRZGate(q, 6.519010661865109e-05, 7);
  sqcRYGate(q, 2.265522855268073, 8);
  sqcRZGate(q, -3.1400784395802406, 8);
  sqcRYGate(q, 3.1242072814609507, 9);
  sqcRZGate(q, -2.918176444979892, 9);
  sqcRYGate(q, 2.6613552173543633, 10);
  sqcRZGate(q, 0.7793290048622233, 10);
  sqcRYGate(q, 1.390496569352848, 11);
  sqcRZGate(q, -0.3791514048419557, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.075617065232711, 0);
  sqcRZGate(q, -2.5122787621060954, 0);
  sqcRYGate(q, -0.28918646456661273, 1);
  sqcRZGate(q, 1.6458491158033226, 1);
  sqcRYGate(q, -1.6842126724366808, 2);
  sqcRZGate(q, -0.14835353857573355, 2);
  sqcRYGate(q, 1.9466550004798195, 3);
  sqcRZGate(q, 2.9607746587490307, 3);
  sqcRYGate(q, -1.966479767274059, 4);
  sqcRZGate(q, 0.0022033432879893654, 4);
  sqcRYGate(q, -1.1959799229433072, 5);
  sqcRZGate(q, 2.1271293235976803, 5);
  sqcRYGate(q, -1.3435380804779045, 6);
  sqcRZGate(q, -1.8693490333600107, 6);
  sqcRYGate(q, 2.1025906263248686, 7);
  sqcRZGate(q, 2.4642039433344256, 7);
  sqcRYGate(q, -1.5564995116335767, 8);
  sqcRZGate(q, 1.448799670239779, 8);
  sqcRYGate(q, -3.138302276878531, 9);
  sqcRZGate(q, 1.4626181884257816, 9);
  sqcRYGate(q, -2.335813536436273, 10);
  sqcRZGate(q, -1.2339845446712834, 10);
  sqcRYGate(q, 0.17407012849335768, 11);
  sqcRZGate(q, -2.6378915296053913, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.58155050605025, 0);
  sqcRZGate(q, 1.2718295370822055, 0);
  sqcRYGate(q, -1.0023273923484508, 1);
  sqcRZGate(q, 2.7289901859062238, 1);
  sqcRYGate(q, 1.3416411643033774, 2);
  sqcRZGate(q, 1.4335411157857738, 2);
  sqcRYGate(q, -1.9280815743070465, 3);
  sqcRZGate(q, -1.0614756433726464, 3);
  sqcRYGate(q, 1.7591023827016348, 4);
  sqcRZGate(q, 2.5205383110918227, 4);
  sqcRYGate(q, -0.0014463443371808657, 5);
  sqcRZGate(q, 1.1231360339214056, 5);
  sqcRYGate(q, -3.1414172373839317, 6);
  sqcRZGate(q, -0.3663182731312624, 6);
  sqcRYGate(q, -3.139796210027775, 7);
  sqcRZGate(q, 1.7833613994704258, 7);
  sqcRYGate(q, -1.5584292562102569, 8);
  sqcRZGate(q, 0.7189775663465211, 8);
  sqcRYGate(q, -0.08677549356803115, 9);
  sqcRZGate(q, 1.5415579090022868, 9);
  sqcRYGate(q, -0.9246361261406328, 10);
  sqcRZGate(q, 2.43019648661739, 10);
  sqcRYGate(q, -3.09387231869018, 11);
  sqcRZGate(q, 1.4968525658104823, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.6648028251287117, 0);
  sqcRZGate(q, -0.683897344721167, 0);
  sqcRYGate(q, -3.0275954812222317, 1);
  sqcRZGate(q, -1.9910279044781924, 1);
  sqcRYGate(q, -1.438535554455914, 2);
  sqcRZGate(q, 0.0013959618793135675, 2);
  sqcRYGate(q, -3.1205709948911946, 3);
  sqcRZGate(q, 2.0796735190839684, 3);
  sqcRYGate(q, 3.1408483479541545, 4);
  sqcRZGate(q, 2.5078463271937212, 4);
  sqcRYGate(q, 1.7504656477027725, 5);
  sqcRZGate(q, -2.045900188867995, 5);
  sqcRYGate(q, 0.7161593011204115, 6);
  sqcRZGate(q, -1.3664020097202663, 6);
  sqcRYGate(q, 0.00021187961701534203, 7);
  sqcRZGate(q, -2.4587856813258755, 7);
  sqcRYGate(q, 3.1381006451005677, 8);
  sqcRZGate(q, 0.10841460730094443, 8);
  sqcRYGate(q, -0.0006215853503270764, 9);
  sqcRZGate(q, -0.1259779301796247, 9);
  sqcRYGate(q, -1.713802698471632, 10);
  sqcRZGate(q, -0.49158478974382097, 10);
  sqcRYGate(q, -1.2033869065101535, 11);
  sqcRZGate(q, -2.4104048933466524, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.4473027835306704, 0);
  sqcRZGate(q, 2.7205612157973227, 0);
  sqcRYGate(q, -3.134261945804775, 1);
  sqcRZGate(q, 2.743713414755368, 1);
  sqcRYGate(q, 2.179132728671865, 2);
  sqcRZGate(q, 0.6358049486225275, 2);
  sqcRYGate(q, 1.1621245873332726, 3);
  sqcRZGate(q, -0.011216385897321324, 3);
  sqcRYGate(q, -1.2355666993945822, 4);
  sqcRZGate(q, 3.1303895673697237, 4);
  sqcRYGate(q, -3.1403652746890667, 5);
  sqcRZGate(q, -0.4275523152117436, 5);
  sqcRYGate(q, 2.577914589661899, 6);
  sqcRZGate(q, 0.004355255117284074, 6);
  sqcRYGate(q, -1.9843518498153063, 7);
  sqcRZGate(q, 3.0305661282001655, 7);
  sqcRYGate(q, 1.490541381321023, 8);
  sqcRZGate(q, -1.663741636155792, 8);
  sqcRYGate(q, -1.6613251494549668, 9);
  sqcRZGate(q, -0.007260665742204827, 9);
  sqcRYGate(q, 0.4549976624007312, 10);
  sqcRZGate(q, 2.1057477389205825, 10);
  sqcRYGate(q, -1.5867579123667381, 11);
  sqcRZGate(q, -0.1504729834422198, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.7332526501509147, 0);
  sqcRZGate(q, 1.245833308789309, 0);
  sqcRYGate(q, -0.3938820018019049, 1);
  sqcRZGate(q, -1.1636735710407453, 1);
  sqcRYGate(q, -1.1257863727786335, 2);
  sqcRZGate(q, 1.711351633808743, 2);
  sqcRYGate(q, -1.2657606340544971, 3);
  sqcRZGate(q, -2.598750160874319, 3);
  sqcRYGate(q, 1.5230062025230229, 4);
  sqcRZGate(q, 2.669872356247795, 4);
  sqcRYGate(q, 1.5201786168935663, 5);
  sqcRZGate(q, -0.4506367481111537, 5);
  sqcRYGate(q, 2.760024046743251, 6);
  sqcRZGate(q, 0.0022096237241093775, 6);
  sqcRYGate(q, 7.138759617664192e-05, 7);
  sqcRZGate(q, 0.11155845761221973, 7);
  sqcRYGate(q, -0.6901340821674715, 8);
  sqcRZGate(q, -0.0002523363617594754, 8);
  sqcRYGate(q, -1.243962280062992, 9);
  sqcRZGate(q, -0.0037910498515207887, 9);
  sqcRYGate(q, -1.5339704697906837, 10);
  sqcRZGate(q, 1.9531061432092884, 10);
  sqcRYGate(q, 0.8089242620226536, 11);
  sqcRZGate(q, 0.893649395290706, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.0266773755410048, 0);
  sqcRZGate(q, 0.1949203350929298, 0);
  sqcRYGate(q, -1.9622802701092812, 1);
  sqcRZGate(q, 2.6263066133091586, 1);
  sqcRYGate(q, -0.47400086907268674, 2);
  sqcRZGate(q, -0.10730076859812139, 2);
  sqcRYGate(q, 0.2554719223124957, 3);
  sqcRZGate(q, -3.054252786857503, 3);
  sqcRYGate(q, -0.0011358431816983483, 4);
  sqcRZGate(q, 0.7431234580678654, 4);
  sqcRYGate(q, -0.00023346384712968554, 5);
  sqcRZGate(q, 1.632604129920634, 5);
  sqcRYGate(q, 1.7101727890740044, 6);
  sqcRZGate(q, 3.141277589086364, 6);
  sqcRYGate(q, 2.001077125035121, 7);
  sqcRZGate(q, 1.8567758308421687, 7);
  sqcRYGate(q, -1.6004389512584927, 8);
  sqcRZGate(q, 2.9271514583433986, 8);
  sqcRYGate(q, 1.5628911080985928, 9);
  sqcRZGate(q, -1.1478652783148575, 9);
  sqcRYGate(q, -2.3500909534458954, 10);
  sqcRZGate(q, -1.036086020329947, 10);
  sqcRYGate(q, 1.57606602430615, 11);
  sqcRZGate(q, 2.522414010880768, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -3.1298782140993833, 0);
  sqcRZGate(q, 0.9889097494422101, 0);
  sqcRYGate(q, 0.0037223216694366457, 1);
  sqcRZGate(q, -2.6551169877311516, 1);
  sqcRYGate(q, 0.10914401879277864, 2);
  sqcRZGate(q, -3.0475982896084797, 2);
  sqcRYGate(q, -0.017140545313385935, 3);
  sqcRZGate(q, 2.5265481017007287, 3);
  sqcRYGate(q, 3.103990946314601, 4);
  sqcRZGate(q, 0.27337537997086336, 4);
  sqcRYGate(q, -2.359114135973115, 5);
  sqcRZGate(q, -0.8325515638904503, 5);
  sqcRYGate(q, -1.2360343876268907, 6);
  sqcRZGate(q, -0.00036377770367312934, 6);
  sqcRYGate(q, -1.4219521666903856, 7);
  sqcRZGate(q, -0.9098627447873673, 7);
  sqcRYGate(q, -1.6232245223495694, 8);
  sqcRZGate(q, -2.048368069788453, 8);
  sqcRYGate(q, -3.140840504910133, 9);
  sqcRZGate(q, 1.0386975644341143, 9);
  sqcRYGate(q, 0.03236633947767689, 10);
  sqcRZGate(q, 2.8908023821223208, 10);
  sqcRYGate(q, -3.1401962910239556, 11);
  sqcRZGate(q, 2.518990220834634, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.4425940814927305, 0);
  sqcRZGate(q, -2.0665270240854148, 0);
  sqcRYGate(q, -2.0823510212563336, 1);
  sqcRZGate(q, 1.1793184722968544, 1);
  sqcRYGate(q, -0.5442557202387244, 2);
  sqcRZGate(q, 1.4142450205434, 2);
  sqcRYGate(q, 1.6043075729691, 3);
  sqcRZGate(q, 1.2311268521031273, 3);
  sqcRYGate(q, -0.656248587039508, 4);
  sqcRZGate(q, -2.965637340349353, 4);
  sqcRYGate(q, 1.5350075385617115, 5);
  sqcRZGate(q, 3.128359315123641, 5);
  sqcRYGate(q, 1.7939591880934012, 6);
  sqcRZGate(q, -1.357120094316632, 6);
  sqcRYGate(q, -3.1394502649733105, 7);
  sqcRZGate(q, -2.005156202571942, 7);
  sqcRYGate(q, -0.00021151254477316334, 8);
  sqcRZGate(q, 2.1864167424015326, 8);
  sqcRYGate(q, -0.002569074816894279, 9);
  sqcRZGate(q, -2.19245963622393, 9);
  sqcRYGate(q, 1.8343809561464683, 10);
  sqcRZGate(q, 2.3877516269327446, 10);
  sqcRYGate(q, 1.5710301968157394, 11);
  sqcRZGate(q, 2.414404093342202, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.45682605482890803, 0);
  sqcRZGate(q, -0.9702326442909817, 0);
  sqcRYGate(q, 2.951257353521591, 1);
  sqcRZGate(q, -1.7874243355675166, 1);
  sqcRYGate(q, -1.579299102116086, 2);
  sqcRZGate(q, -1.9943867974231209, 2);
  sqcRYGate(q, 1.7832087229791211, 3);
  sqcRZGate(q, -1.4390943902784592, 3);
  sqcRYGate(q, 0.3760192351542848, 4);
  sqcRZGate(q, 1.1911066228632192, 4);
  sqcRYGate(q, -3.1406210783911064, 5);
  sqcRZGate(q, 3.125250872675791, 5);
  sqcRYGate(q, -0.000983157679711688, 6);
  sqcRZGate(q, 1.3587267054208187, 6);
  sqcRYGate(q, -2.8845665353535916, 7);
  sqcRZGate(q, -2.439994114513713, 7);
  sqcRYGate(q, 1.889873305810493, 8);
  sqcRZGate(q, 0.16473319737559677, 8);
  sqcRYGate(q, -1.5679360058094147, 9);
  sqcRZGate(q, -1.1595749583483386, 9);
  sqcRYGate(q, 1.3163783010484291, 10);
  sqcRZGate(q, 0.004818613056332901, 10);
  sqcRYGate(q, -1.569444109208706, 11);
  sqcRZGate(q, -0.11267425408061892, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.463252899318817, 0);
  sqcRZGate(q, -1.104011118159085, 0);
  sqcRYGate(q, -0.001673936398222331, 1);
  sqcRZGate(q, 0.3862174648432131, 1);
  sqcRYGate(q, 0.0022626609730221096, 2);
  sqcRZGate(q, -2.036542406987799, 2);
  sqcRYGate(q, 3.14128053292163, 3);
  sqcRZGate(q, 2.505058807801883, 3);
  sqcRYGate(q, -0.0015343919719035745, 4);
  sqcRZGate(q, -2.924381292508183, 4);
  sqcRYGate(q, 0.032238381954801894, 5);
  sqcRZGate(q, 1.5736101451806803, 5);
  sqcRYGate(q, -1.7375539655115342, 6);
  sqcRZGate(q, 1.5716297701555566, 6);
  sqcRYGate(q, 3.141273876401179, 7);
  sqcRZGate(q, 3.0107183537402364, 7);
  sqcRYGate(q, 3.1415112021237745, 8);
  sqcRZGate(q, -1.2458659434117125, 8);
  sqcRYGate(q, -3.1414065124355446, 9);
  sqcRZGate(q, 0.41145642551116496, 9);
  sqcRYGate(q, 1.5792445858308939, 10);
  sqcRZGate(q, -1.5715044077479394, 10);
  sqcRYGate(q, 0.01616223941820514, 11);
  sqcRZGate(q, -2.859602724054618, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.3295194189199853, 0);
  sqcRZGate(q, 2.804193379606754, 0);
  sqcRYGate(q, 1.5328314444289315, 1);
  sqcRZGate(q, -1.222187078869669, 1);
  sqcRYGate(q, 0.0112810643037653, 2);
  sqcRZGate(q, 0.4606278240286668, 2);
  sqcRYGate(q, 0.2968155291686547, 3);
  sqcRZGate(q, -0.4732551979279819, 3);
  sqcRYGate(q, -1.6349015270521976, 4);
  sqcRZGate(q, -0.17182937728237055, 4);
  sqcRYGate(q, -1.5708366388330246, 5);
  sqcRZGate(q, -0.9050579578240058, 5);
  sqcRYGate(q, -1.5706380140599954, 6);
  sqcRZGate(q, 1.0268530303828125, 6);
  sqcRYGate(q, -0.353857344701769, 7);
  sqcRZGate(q, -0.5480707239274649, 7);
  sqcRYGate(q, -1.7769758310910164, 8);
  sqcRZGate(q, 2.0763872972697586, 8);
  sqcRYGate(q, 1.5702357214005183, 9);
  sqcRZGate(q, -0.6992090981368583, 9);
  sqcRYGate(q, -1.5708796284342788, 10);
  sqcRZGate(q, -0.699306490473286, 10);
  sqcRYGate(q, 0.06306257123612534, 11);
  sqcRZGate(q, 0.36793640113382875, 11);

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
