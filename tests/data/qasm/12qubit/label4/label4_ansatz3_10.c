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

  sqcRYGate(q, 1.695415123585285, 0);
  sqcRZGate(q, 0.035029216851712314, 0);
  sqcRYGate(q, -3.1374528379290445, 1);
  sqcRZGate(q, 1.236203349550856, 1);
  sqcRYGate(q, -3.1272911647483825, 2);
  sqcRZGate(q, 1.291951824473237, 2);
  sqcRYGate(q, -1.514015336617864, 3);
  sqcRZGate(q, 0.5303704819994192, 3);
  sqcRYGate(q, -1.62412669364364, 4);
  sqcRZGate(q, -1.535091525090215, 4);
  sqcRYGate(q, -0.4836658089638923, 5);
  sqcRZGate(q, 2.087976200903707, 5);
  sqcRYGate(q, -3.14114453998347, 6);
  sqcRZGate(q, -2.3365561670190846, 6);
  sqcRYGate(q, 0.6032528542413634, 7);
  sqcRZGate(q, 0.7390234141836238, 7);
  sqcRYGate(q, -1.997121204383996, 8);
  sqcRZGate(q, -1.5752207521119626, 8);
  sqcRYGate(q, 0.0008030582171016931, 9);
  sqcRZGate(q, -0.4223175294979269, 9);
  sqcRYGate(q, -2.1746997822290712, 10);
  sqcRZGate(q, 2.8380335896043167, 10);
  sqcRYGate(q, 1.5625216028339426, 11);
  sqcRZGate(q, 3.135302229230678, 11);
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
  sqcRYGate(q, -1.9071422969523049, 0);
  sqcRZGate(q, 0.6298732934414941, 0);
  sqcRYGate(q, 1.5727033630737757, 1);
  sqcRZGate(q, -1.5736189142344141, 1);
  sqcRYGate(q, 1.5705907107196468, 2);
  sqcRZGate(q, -1.1621421405230326, 2);
  sqcRYGate(q, 2.520084830899667, 3);
  sqcRZGate(q, -2.431316544580026, 3);
  sqcRYGate(q, 2.927736225792977, 4);
  sqcRZGate(q, -1.598161753124339, 4);
  sqcRYGate(q, -0.004472854366779799, 5);
  sqcRZGate(q, 2.3901605400306463, 5);
  sqcRYGate(q, -0.00030198947514215035, 6);
  sqcRZGate(q, 0.11048044900016585, 6);
  sqcRYGate(q, 1.8086732487744808, 7);
  sqcRZGate(q, 0.44562343602611426, 7);
  sqcRYGate(q, -1.579103517873739, 8);
  sqcRZGate(q, 3.080615313346968, 8);
  sqcRYGate(q, 1.5724085621501183, 9);
  sqcRZGate(q, -1.5719371285334924, 9);
  sqcRYGate(q, 3.1391926885233556, 10);
  sqcRZGate(q, -1.1655881640996855, 10);
  sqcRYGate(q, 1.56976239368983, 11);
  sqcRZGate(q, -2.303319639709863, 11);
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
  sqcRYGate(q, 1.5328426299114655, 0);
  sqcRZGate(q, -2.3344793714513137, 0);
  sqcRYGate(q, -0.8705075957359165, 1);
  sqcRZGate(q, 0.39551083949138105, 1);
  sqcRYGate(q, 3.112641975848131, 2);
  sqcRZGate(q, 0.060660509877582314, 2);
  sqcRYGate(q, -3.131500520517522, 3);
  sqcRZGate(q, -1.5614114932880625, 3);
  sqcRYGate(q, 1.5698788620953854, 4);
  sqcRZGate(q, -1.6396674358536627, 4);
  sqcRYGate(q, -1.711536196247975, 5);
  sqcRZGate(q, -1.0397099784803068, 5);
  sqcRYGate(q, 0.0003333306674148225, 6);
  sqcRZGate(q, 2.4221595461404837, 6);
  sqcRYGate(q, 1.5682620155865008, 7);
  sqcRZGate(q, -3.0794315745799894, 7);
  sqcRYGate(q, 1.5718701933865644, 8);
  sqcRZGate(q, -2.1937436676249282, 8);
  sqcRYGate(q, 1.006759200251755, 9);
  sqcRZGate(q, -0.0017027102740296697, 9);
  sqcRYGate(q, -3.1322571508953043, 10);
  sqcRZGate(q, 2.8607043991805554, 10);
  sqcRYGate(q, 0.0003102898014999411, 11);
  sqcRZGate(q, -2.60855156365225, 11);
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
  sqcRYGate(q, -1.761038535732225, 0);
  sqcRZGate(q, -0.223508944165982, 0);
  sqcRYGate(q, 0.11380911409127847, 1);
  sqcRZGate(q, -1.1294343461190688, 1);
  sqcRYGate(q, 1.7902056163993372, 2);
  sqcRZGate(q, -1.9095019414380419, 2);
  sqcRYGate(q, -0.5041996806772806, 3);
  sqcRZGate(q, 2.994440636045118, 3);
  sqcRYGate(q, 1.5728263552003572, 4);
  sqcRZGate(q, -2.9737367597005537, 4);
  sqcRYGate(q, 0.006874838740968947, 5);
  sqcRZGate(q, -2.8598969526243283, 5);
  sqcRYGate(q, 2.9257803866142287, 6);
  sqcRZGate(q, 1.502339160933408, 6);
  sqcRYGate(q, -3.1392033784256137, 7);
  sqcRZGate(q, 0.7758823400979677, 7);
  sqcRYGate(q, 0.0041978551579502366, 8);
  sqcRZGate(q, 0.6229116834568575, 8);
  sqcRYGate(q, 1.6145409083459255, 9);
  sqcRZGate(q, 7.980653208505828e-05, 9);
  sqcRYGate(q, -0.0006451696672380436, 10);
  sqcRZGate(q, -1.7032556622736947, 10);
  sqcRYGate(q, 0.003987173335737282, 11);
  sqcRZGate(q, 2.383343360253923, 11);
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
  sqcRYGate(q, -2.8832618948952633, 0);
  sqcRZGate(q, 3.0704144518349734, 0);
  sqcRYGate(q, -3.1275846572205332, 1);
  sqcRZGate(q, 1.9514401545844144, 1);
  sqcRYGate(q, -0.0009767480429289208, 2);
  sqcRZGate(q, -2.1722591853432633, 2);
  sqcRYGate(q, 3.1249588244119195, 3);
  sqcRZGate(q, 2.152142628791628, 3);
  sqcRYGate(q, -0.007242871452556976, 4);
  sqcRZGate(q, -2.120431596684954, 4);
  sqcRYGate(q, -1.5684888215927009, 5);
  sqcRZGate(q, 3.127301015992823, 5);
  sqcRYGate(q, 1.5693103632378627, 6);
  sqcRZGate(q, 2.4172671252759126, 6);
  sqcRYGate(q, -0.627014449394069, 7);
  sqcRZGate(q, 2.3115087646491723, 7);
  sqcRYGate(q, -1.644024749912844, 8);
  sqcRZGate(q, 0.00643747609480537, 8);
  sqcRYGate(q, 0.8643984396650248, 9);
  sqcRZGate(q, 2.403007933752794, 9);
  sqcRYGate(q, 0.0006200711125883274, 10);
  sqcRZGate(q, -2.6790210554381377, 10);
  sqcRYGate(q, -1.5749217716123667, 11);
  sqcRZGate(q, -1.6263377153244774, 11);
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
  sqcRYGate(q, 1.8874839221361233, 0);
  sqcRZGate(q, 2.4078766793917, 0);
  sqcRYGate(q, -3.0183091286192965, 1);
  sqcRZGate(q, -2.0233251074443466, 1);
  sqcRYGate(q, -2.785777292653333, 2);
  sqcRZGate(q, 2.7574951673696546, 2);
  sqcRYGate(q, 1.5720589436553851, 3);
  sqcRZGate(q, 1.345673685777107, 3);
  sqcRYGate(q, 0.0055758943639161096, 4);
  sqcRZGate(q, 2.156176352639295, 4);
  sqcRYGate(q, -3.1329124901683985, 5);
  sqcRZGate(q, 0.5376594226291873, 5);
  sqcRYGate(q, 3.135172107488022, 6);
  sqcRZGate(q, -0.71450177966212, 6);
  sqcRYGate(q, -3.1415108055497356, 7);
  sqcRZGate(q, 1.3616397905809674, 7);
  sqcRYGate(q, -1.568920184925379, 8);
  sqcRZGate(q, 0.5320171040540964, 8);
  sqcRYGate(q, 0.0008415525797316191, 9);
  sqcRZGate(q, -0.883988262083819, 9);
  sqcRYGate(q, -1.516829362572375, 10);
  sqcRZGate(q, -2.805057856422153, 10);
  sqcRYGate(q, 0.8900842396257681, 11);
  sqcRZGate(q, -1.544347104250913, 11);
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
  sqcRYGate(q, -1.7533030465688424, 0);
  sqcRZGate(q, -1.8840747416875203, 0);
  sqcRYGate(q, -1.5661734652380908, 1);
  sqcRZGate(q, -2.944001367636105, 1);
  sqcRYGate(q, 3.138895895646831, 2);
  sqcRZGate(q, -1.180272154057389, 2);
  sqcRYGate(q, -2.9746674621618627, 3);
  sqcRZGate(q, -1.6733160731355492, 3);
  sqcRYGate(q, 3.1368417688400183, 4);
  sqcRZGate(q, 1.3905923252583405, 4);
  sqcRYGate(q, -2.8303521471374546, 5);
  sqcRZGate(q, 0.6519805243069063, 5);
  sqcRYGate(q, -3.1374280072981713, 6);
  sqcRZGate(q, 1.582201261186639, 6);
  sqcRYGate(q, -1.1910636219143518, 7);
  sqcRZGate(q, 1.013959038018069, 7);
  sqcRYGate(q, -0.004227083149561218, 8);
  sqcRZGate(q, -1.7431906708964808, 8);
  sqcRYGate(q, 3.140185035892359, 9);
  sqcRZGate(q, -0.7389106384896023, 9);
  sqcRYGate(q, -1.57043681385785, 10);
  sqcRZGate(q, -1.7983823357251862, 10);
  sqcRYGate(q, 1.5659745206575104, 11);
  sqcRZGate(q, 3.098228034005389, 11);
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
  sqcRYGate(q, -1.5770973551198635, 0);
  sqcRZGate(q, -0.033023194749545404, 0);
  sqcRYGate(q, -0.06475561907479213, 1);
  sqcRZGate(q, 0.025320920367515404, 1);
  sqcRYGate(q, -2.077874687982497, 2);
  sqcRZGate(q, 2.7058946222313596, 2);
  sqcRYGate(q, 1.567551816722551, 3);
  sqcRZGate(q, -2.120606288045117, 3);
  sqcRYGate(q, -3.1409224977982944, 4);
  sqcRZGate(q, -2.78326888145032, 4);
  sqcRYGate(q, -0.0032006391700152457, 5);
  sqcRZGate(q, -1.6872549576544023, 5);
  sqcRYGate(q, 1.5661934796133876, 6);
  sqcRZGate(q, 2.683740199323049, 6);
  sqcRYGate(q, 3.141561104502991, 7);
  sqcRZGate(q, -1.0523765208921163, 7);
  sqcRYGate(q, 0.0025390646143557817, 8);
  sqcRZGate(q, -2.7626598704131426, 8);
  sqcRYGate(q, -0.039169846855996227, 9);
  sqcRZGate(q, -1.5711896166247463, 9);
  sqcRYGate(q, -0.6617990592236866, 10);
  sqcRZGate(q, 1.7479297344540459, 10);
  sqcRYGate(q, 1.5697463565380794, 11);
  sqcRZGate(q, -0.8938434676374554, 11);
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
  sqcRYGate(q, 0.012533828091844612, 0);
  sqcRZGate(q, -0.03665769541491635, 0);
  sqcRYGate(q, 0.0005849053089477296, 1);
  sqcRZGate(q, -0.3383349743845227, 1);
  sqcRYGate(q, -0.11654221564098678, 2);
  sqcRZGate(q, 0.9809329477315898, 2);
  sqcRYGate(q, 3.1385196167910623, 3);
  sqcRZGate(q, 1.0173952761712277, 3);
  sqcRYGate(q, -0.00021780275850532185, 4);
  sqcRZGate(q, -0.375507273992462, 4);
  sqcRYGate(q, -1.5672868474027188, 5);
  sqcRZGate(q, -2.817967431601262, 5);
  sqcRYGate(q, 1.5725493665488897, 6);
  sqcRZGate(q, -1.8419242160134779, 6);
  sqcRYGate(q, 1.5728906309685584, 7);
  sqcRZGate(q, 0.25084013409959083, 7);
  sqcRYGate(q, -0.001896411285531658, 8);
  sqcRZGate(q, -1.389687852658703, 8);
  sqcRYGate(q, -1.5673842487230258, 9);
  sqcRZGate(q, 3.136226584827458, 9);
  sqcRYGate(q, 1.610402127488368, 10);
  sqcRZGate(q, -0.2260450986073925, 10);
  sqcRYGate(q, 3.137519809625477, 11);
  sqcRZGate(q, -1.4929330531399916, 11);
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
  sqcRYGate(q, -1.5554456422831793, 0);
  sqcRZGate(q, -1.712451099546316, 0);
  sqcRYGate(q, -1.6229408953128859, 1);
  sqcRZGate(q, -3.1058363673912854, 1);
  sqcRYGate(q, -1.2392250441162598, 2);
  sqcRZGate(q, -0.3374615417561841, 2);
  sqcRYGate(q, 1.417141213881706, 3);
  sqcRZGate(q, -3.137120982200764, 3);
  sqcRYGate(q, 2.740699654628626, 4);
  sqcRZGate(q, -1.3951554925282117, 4);
  sqcRYGate(q, 3.1148884543263335, 5);
  sqcRZGate(q, 0.10056646916123402, 5);
  sqcRYGate(q, -3.1400621432856224, 6);
  sqcRZGate(q, -2.0815102723803287, 6);
  sqcRYGate(q, 1.5720670109144699, 7);
  sqcRZGate(q, -2.8843556732749493, 7);
  sqcRYGate(q, -1.563627246721551, 8);
  sqcRZGate(q, -1.567716051268878, 8);
  sqcRYGate(q, 1.5709536779839082, 9);
  sqcRZGate(q, -1.5450357856645631, 9);
  sqcRYGate(q, 0.14490100947267567, 10);
  sqcRZGate(q, 0.6675298770837818, 10);
  sqcRYGate(q, -1.570079077105617, 11);
  sqcRZGate(q, 0.00024513305343454306, 11);
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
  sqcRYGate(q, -1.5627007006216989, 0);
  sqcRZGate(q, 0.16279688034622694, 0);
  sqcRYGate(q, 2.2400457485470504, 1);
  sqcRZGate(q, 1.600169821816693, 1);
  sqcRYGate(q, 1.6137495245764768, 2);
  sqcRZGate(q, 3.021338225360453, 2);
  sqcRYGate(q, -1.5957778000776548, 3);
  sqcRZGate(q, -0.39284829941045096, 3);
  sqcRYGate(q, -3.1353060634765333, 4);
  sqcRZGate(q, 0.10289775119885204, 4);
  sqcRYGate(q, 3.124861098304638, 5);
  sqcRZGate(q, -1.7809575414435432, 5);
  sqcRYGate(q, -3.1414581140923254, 6);
  sqcRZGate(q, -2.8800040872921664, 6);
  sqcRYGate(q, -3.1405189584235376, 7);
  sqcRZGate(q, 1.8204036527842398, 7);
  sqcRYGate(q, 1.42109455553316, 8);
  sqcRZGate(q, 0.3986033673541582, 8);
  sqcRYGate(q, 1.398576394517527, 9);
  sqcRZGate(q, 1.8343895848920524, 9);
  sqcRYGate(q, -2.4685268216854683, 10);
  sqcRZGate(q, 3.0979406140195755, 10);
  sqcRYGate(q, -1.5712076419571883, 11);
  sqcRZGate(q, 0.44308053593089897, 11);
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
  sqcRYGate(q, -2.9877324915659473, 0);
  sqcRZGate(q, 0.7974488451032077, 0);
  sqcRYGate(q, -1.5694966428354553, 1);
  sqcRZGate(q, 0.35087775240579444, 1);
  sqcRYGate(q, 3.133640317037669, 2);
  sqcRZGate(q, -1.6924365121652487, 2);
  sqcRYGate(q, -3.138035948149632, 3);
  sqcRZGate(q, 2.7015984010119247, 3);
  sqcRYGate(q, 2.6777644551585733, 4);
  sqcRZGate(q, -0.1373123786002708, 4);
  sqcRYGate(q, 0.07676071892959069, 5);
  sqcRZGate(q, -1.3729887866366397, 5);
  sqcRYGate(q, -0.09750093847550634, 6);
  sqcRZGate(q, -2.2907235265483594, 6);
  sqcRYGate(q, 2.721335283719541, 7);
  sqcRZGate(q, 3.1080763693964006, 7);
  sqcRYGate(q, -3.1410613709878223, 8);
  sqcRZGate(q, 2.0829355290864453, 8);
  sqcRYGate(q, 0.0012635447523466198, 9);
  sqcRZGate(q, -1.4111681502352011, 9);
  sqcRYGate(q, -1.576366857603528, 10);
  sqcRZGate(q, -1.5733679176968878, 10);
  sqcRYGate(q, 0.0008641361970850773, 11);
  sqcRZGate(q, 2.2327694065744774, 11);
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
  sqcRYGate(q, -0.0010294743249348315, 0);
  sqcRZGate(q, 1.763390499458481, 0);
  sqcRYGate(q, 3.0970652209911314, 1);
  sqcRZGate(q, -0.16313699957744285, 1);
  sqcRYGate(q, 1.5612550453280916, 2);
  sqcRZGate(q, 2.18010048920031, 2);
  sqcRYGate(q, -1.5732513325684299, 3);
  sqcRZGate(q, -1.3227698281110136, 3);
  sqcRYGate(q, 0.005637813865373052, 4);
  sqcRZGate(q, -2.612224459335244, 4);
  sqcRYGate(q, 0.008117044764043515, 5);
  sqcRZGate(q, 2.93296145079848, 5);
  sqcRYGate(q, -0.0004557410298855089, 6);
  sqcRZGate(q, -1.3549021459686292, 6);
  sqcRYGate(q, 3.140778935140125, 7);
  sqcRZGate(q, -1.5945836148892987, 7);
  sqcRYGate(q, 3.1270718335636993, 8);
  sqcRZGate(q, 1.0795878155865797, 8);
  sqcRYGate(q, 1.742177373557956, 9);
  sqcRZGate(q, -0.8180704586882867, 9);
  sqcRYGate(q, 1.5713158101469435, 10);
  sqcRZGate(q, 0.8892433801521011, 10);
  sqcRYGate(q, 0.0026470071120380644, 11);
  sqcRZGate(q, -0.9645413245324449, 11);
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
  sqcRYGate(q, -3.1398319829660095, 0);
  sqcRZGate(q, -2.746373232611813, 0);
  sqcRYGate(q, 0.03028742475053825, 1);
  sqcRZGate(q, 1.9368046322946357, 1);
  sqcRYGate(q, -0.001840718455893816, 2);
  sqcRZGate(q, -0.979946022046721, 2);
  sqcRYGate(q, 0.0006283267757007101, 3);
  sqcRZGate(q, -0.34225566914185085, 3);
  sqcRYGate(q, -0.004687704116165037, 4);
  sqcRZGate(q, -2.3799864314401953, 4);
  sqcRYGate(q, 1.5682292292251148, 5);
  sqcRZGate(q, -0.13460923691698784, 5);
  sqcRYGate(q, -1.654309419886664, 6);
  sqcRZGate(q, 0.8263390974763859, 6);
  sqcRYGate(q, -1.5697565613296691, 7);
  sqcRZGate(q, -0.27824544090149006, 7);
  sqcRYGate(q, -0.000392249794938951, 8);
  sqcRZGate(q, 3.0491427642095372, 8);
  sqcRYGate(q, -3.1406163040820463, 9);
  sqcRZGate(q, -2.7449269797298044, 9);
  sqcRYGate(q, -3.0170486481015906, 10);
  sqcRZGate(q, -0.4787229275505265, 10);
  sqcRYGate(q, -0.00293536240481669, 11);
  sqcRZGate(q, -0.3892774606245917, 11);

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
