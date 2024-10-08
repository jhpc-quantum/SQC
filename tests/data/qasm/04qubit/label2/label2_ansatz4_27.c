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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -1.0653688189749386, 0);
  sqcRZGate(q, 1.4676664154367458, 0);
  sqcRYGate(q, 2.0714701580810955, 1);
  sqcRZGate(q, 0.8743713084866727, 1);
  sqcRYGate(q, 2.2720889459373144, 2);
  sqcRZGate(q, -1.4725963921965626, 2);
  sqcRYGate(q, -2.612133361431656, 3);
  sqcRZGate(q, 1.284421696154375, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4497711297257361, 0);
  sqcRZGate(q, 1.169289918976843, 0);
  sqcRYGate(q, -2.825222050328581, 1);
  sqcRZGate(q, 1.7751989477370227, 1);
  sqcRYGate(q, 1.7697728695299761, 2);
  sqcRZGate(q, 1.3719329247936953, 2);
  sqcRYGate(q, -1.7257196132370665, 3);
  sqcRZGate(q, 2.648861936645953, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.9531508788356848, 0);
  sqcRZGate(q, 0.5904064668830866, 0);
  sqcRYGate(q, 0.26171249263329255, 1);
  sqcRZGate(q, -1.1376769567162546, 1);
  sqcRYGate(q, 0.5740429878679525, 2);
  sqcRZGate(q, 2.9786475229408205, 2);
  sqcRYGate(q, 2.782280981801963, 3);
  sqcRZGate(q, -1.6867071170034662, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.253577846843593, 0);
  sqcRZGate(q, 0.844571784524713, 0);
  sqcRYGate(q, -0.45204639478691444, 1);
  sqcRZGate(q, 0.1866119557609354, 1);
  sqcRYGate(q, -0.47011900383567085, 2);
  sqcRZGate(q, 2.845742380379664, 2);
  sqcRYGate(q, 0.05834047817700715, 3);
  sqcRZGate(q, 2.677550708465104, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.394970885512537, 0);
  sqcRZGate(q, -2.1485883857161605, 0);
  sqcRYGate(q, 1.2414464227930795, 1);
  sqcRZGate(q, -2.481524578456022, 1);
  sqcRYGate(q, 3.028031828375834, 2);
  sqcRZGate(q, -0.3594237370165492, 2);
  sqcRYGate(q, -0.533598661144399, 3);
  sqcRZGate(q, 0.6609977109021319, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6395399562129431, 0);
  sqcRZGate(q, 0.4483957468955202, 0);
  sqcRYGate(q, 1.462196307446272, 1);
  sqcRZGate(q, -0.6914291295925521, 1);
  sqcRYGate(q, -1.6873656199779388, 2);
  sqcRZGate(q, -1.6931240310056732, 2);
  sqcRYGate(q, -2.5305310453550747, 3);
  sqcRZGate(q, -0.5154500022822897, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.0601490719313187, 0);
  sqcRZGate(q, 2.650369227633524, 0);
  sqcRYGate(q, 2.2122239020811016, 1);
  sqcRZGate(q, -3.0888305681381527, 1);
  sqcRYGate(q, -1.3366716108379006, 2);
  sqcRZGate(q, 0.6474229725723356, 2);
  sqcRYGate(q, -0.5230197797933123, 3);
  sqcRZGate(q, -1.6259810739439482, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7484803878793134, 0);
  sqcRZGate(q, -1.4656538469723062, 0);
  sqcRYGate(q, 0.2876956007768605, 1);
  sqcRZGate(q, -3.072804493419551, 1);
  sqcRYGate(q, -2.1979649716213725, 2);
  sqcRZGate(q, 2.2592713248762557, 2);
  sqcRYGate(q, -1.287484022320461, 3);
  sqcRZGate(q, -1.2224653122395335, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5830786992272028, 0);
  sqcRZGate(q, 1.2618105104719577, 0);
  sqcRYGate(q, -2.2132956283348326, 1);
  sqcRZGate(q, -2.9832389755064432, 1);
  sqcRYGate(q, 2.069008601447485, 2);
  sqcRZGate(q, 0.36879610196173596, 2);
  sqcRYGate(q, -2.457031622607379, 3);
  sqcRZGate(q, 1.7239375475092793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.518137192037151, 0);
  sqcRZGate(q, 2.032336268590116, 0);
  sqcRYGate(q, 1.5154894542034931, 1);
  sqcRZGate(q, 1.699970985891788, 1);
  sqcRYGate(q, 2.109140406592461, 2);
  sqcRZGate(q, 1.5405075773718542, 2);
  sqcRYGate(q, 0.4604358725747941, 3);
  sqcRZGate(q, -0.6586083396960876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9071106786519825, 0);
  sqcRZGate(q, -0.11728172420655524, 0);
  sqcRYGate(q, 1.5709808873838045, 1);
  sqcRZGate(q, 0.2563528177146334, 1);
  sqcRYGate(q, -2.2754288081503615, 2);
  sqcRZGate(q, 1.5525296430566846, 2);
  sqcRYGate(q, -0.7558748999347488, 3);
  sqcRZGate(q, 2.953931828495206, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.178020986683012, 0);
  sqcRZGate(q, 0.38500844758856634, 0);
  sqcRYGate(q, 1.254243721668658, 1);
  sqcRZGate(q, -0.22389665503955405, 1);
  sqcRYGate(q, 0.5654536429270767, 2);
  sqcRZGate(q, -2.7099687303855475, 2);
  sqcRYGate(q, -2.346258232021226, 3);
  sqcRZGate(q, -1.8680766181242452, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.723324258197051, 0);
  sqcRZGate(q, -2.7346426051314214, 0);
  sqcRYGate(q, 1.8242499640387202, 1);
  sqcRZGate(q, -0.6827480734625057, 1);
  sqcRYGate(q, 2.8576658300368947, 2);
  sqcRZGate(q, 1.2324382027847642, 2);
  sqcRYGate(q, 0.5948087720210373, 3);
  sqcRZGate(q, 1.478224238648088, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.508955448821336, 0);
  sqcRZGate(q, 0.29076023307946214, 0);
  sqcRYGate(q, 2.9548789106546174, 1);
  sqcRZGate(q, -1.280518621647965, 1);
  sqcRYGate(q, -2.24029034503708, 2);
  sqcRZGate(q, 0.6516421391142684, 2);
  sqcRYGate(q, -2.3007200154090466, 3);
  sqcRZGate(q, 2.628637307405171, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.947411032717902, 0);
  sqcRZGate(q, -1.505784503086649, 0);
  sqcRYGate(q, -0.3263065410194981, 1);
  sqcRZGate(q, -2.894325709246965, 1);
  sqcRYGate(q, 1.4164567286755765, 2);
  sqcRZGate(q, -2.8055051834256846, 2);
  sqcRYGate(q, 2.6391657780482474, 3);
  sqcRZGate(q, 2.532616616977884, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5176870941783311, 0);
  sqcRZGate(q, 2.333300074182178, 0);
  sqcRYGate(q, -1.8844668765423676, 1);
  sqcRZGate(q, 2.5264749571502185, 1);
  sqcRYGate(q, -2.093917817728203, 2);
  sqcRZGate(q, -0.18597987334823254, 2);
  sqcRYGate(q, -2.4555023321450316, 3);
  sqcRZGate(q, 1.8067790618512163, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.46410143713687, 0);
  sqcRZGate(q, 2.576250050815773, 0);
  sqcRYGate(q, -0.1587149429484116, 1);
  sqcRZGate(q, -1.4040409081389509, 1);
  sqcRYGate(q, 2.330058191271231, 2);
  sqcRZGate(q, -1.6742898156575743, 2);
  sqcRYGate(q, 2.652662420824333, 3);
  sqcRZGate(q, 1.5958306921513894, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.124532365298272, 0);
  sqcRZGate(q, 1.4609054302937903, 0);
  sqcRYGate(q, 1.8196043457193638, 1);
  sqcRZGate(q, 0.3633870070066986, 1);
  sqcRYGate(q, 1.1989147132468088, 2);
  sqcRZGate(q, 1.0697037883232354, 2);
  sqcRYGate(q, 0.9367284317515487, 3);
  sqcRZGate(q, 2.6939613646852805, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.760248863940124, 0);
  sqcRZGate(q, -0.9412663129556008, 0);
  sqcRYGate(q, 2.924007357977388, 1);
  sqcRZGate(q, 2.361737315157722, 1);
  sqcRYGate(q, -0.013487417466005748, 2);
  sqcRZGate(q, -0.0030967563568022882, 2);
  sqcRYGate(q, 2.0632329720412663, 3);
  sqcRZGate(q, -1.2014214336077615, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.35738246947970076, 0);
  sqcRZGate(q, -2.559093181567856, 0);
  sqcRYGate(q, -1.6207199022330494, 1);
  sqcRZGate(q, 3.0068853103372644, 1);
  sqcRYGate(q, 2.046528908465562, 2);
  sqcRZGate(q, -1.023174169918323, 2);
  sqcRYGate(q, 0.42637355517574177, 3);
  sqcRZGate(q, 0.0326638370421709, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.688206426697447, 0);
  sqcRZGate(q, 2.75032119098563, 0);
  sqcRYGate(q, 1.0378506206760199, 1);
  sqcRZGate(q, -2.378910454412454, 1);
  sqcRYGate(q, -1.2818755539774003, 2);
  sqcRZGate(q, 1.887044997932616, 2);
  sqcRYGate(q, 1.1500758317019222, 3);
  sqcRZGate(q, 0.6153918616231464, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4464256315444326, 0);
  sqcRZGate(q, 0.058342160633319685, 0);
  sqcRYGate(q, 1.872357933267392, 1);
  sqcRZGate(q, 0.4792354989407661, 1);
  sqcRYGate(q, -2.226016373845887, 2);
  sqcRZGate(q, -2.6335392218693965, 2);
  sqcRYGate(q, 1.5760353752462823, 3);
  sqcRZGate(q, 1.2622875450416826, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.669144750849202, 0);
  sqcRZGate(q, -2.358823172186484, 0);
  sqcRYGate(q, -1.082338735737844, 1);
  sqcRZGate(q, 0.1452529685911639, 1);
  sqcRYGate(q, 0.6373850068895255, 2);
  sqcRZGate(q, 1.616814838781271, 2);
  sqcRYGate(q, 3.056725513879626, 3);
  sqcRZGate(q, 0.6413184827399764, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5900924608589965, 0);
  sqcRZGate(q, -1.0036021184490216, 0);
  sqcRYGate(q, -2.0319229533851573, 1);
  sqcRZGate(q, 1.1348317469238522, 1);
  sqcRYGate(q, 1.6302323802710963, 2);
  sqcRZGate(q, 2.117376993578813, 2);
  sqcRYGate(q, -2.7522266393605777, 3);
  sqcRZGate(q, 2.333202512689895, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.477381655699653, 0);
  sqcRZGate(q, 2.810580304110428, 0);
  sqcRYGate(q, -0.38738448182244145, 1);
  sqcRZGate(q, 1.5706169288116558, 1);
  sqcRYGate(q, 0.15129111809444318, 2);
  sqcRZGate(q, 0.7948427809389864, 2);
  sqcRYGate(q, -2.2606014139767927, 3);
  sqcRZGate(q, -1.7134704726575583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8968168380218298, 0);
  sqcRZGate(q, 1.1386260583337109, 0);
  sqcRYGate(q, -0.6504988760835753, 1);
  sqcRZGate(q, 1.4110499456771777, 1);
  sqcRYGate(q, -2.97779662463193, 2);
  sqcRZGate(q, -1.7887567196237688, 2);
  sqcRYGate(q, -0.9175384065367893, 3);
  sqcRZGate(q, 0.18929609545115778, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.752443275367457, 0);
  sqcRZGate(q, -0.832023280544088, 0);
  sqcRYGate(q, -1.1035109152433957, 1);
  sqcRZGate(q, 2.8952611325459565, 1);
  sqcRYGate(q, -2.9874447227780423, 2);
  sqcRZGate(q, 1.4144680525557787, 2);
  sqcRYGate(q, 0.5533326923649913, 3);
  sqcRZGate(q, -1.8885645298364195, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7300646771861388, 0);
  sqcRZGate(q, -0.21349864358342585, 0);
  sqcRYGate(q, -0.47530777873975794, 1);
  sqcRZGate(q, 0.41053607329009895, 1);
  sqcRYGate(q, -0.934808594158965, 2);
  sqcRZGate(q, 2.173813178927321, 2);
  sqcRYGate(q, -1.9493523829228099, 3);
  sqcRZGate(q, 1.172110259989009, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0543024919518396, 0);
  sqcRZGate(q, -1.7621544539454952, 0);
  sqcRYGate(q, 2.5590763841920863, 1);
  sqcRZGate(q, -1.6611695598975196, 1);
  sqcRYGate(q, -2.7219117088378364, 2);
  sqcRZGate(q, 2.940846741898728, 2);
  sqcRYGate(q, 0.6464408836133382, 3);
  sqcRZGate(q, -0.08441956020913358, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.27595784085997, 0);
  sqcRZGate(q, -2.9535292998235514, 0);
  sqcRYGate(q, -1.3438169996101639, 1);
  sqcRZGate(q, -0.646428331701457, 1);
  sqcRYGate(q, -1.7843928330339862, 2);
  sqcRZGate(q, 2.0576800181717108, 2);
  sqcRYGate(q, -0.36721459884453544, 3);
  sqcRZGate(q, -0.9708549271306355, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.34815043944351043, 0);
  sqcRZGate(q, -0.1502215983805243, 0);
  sqcRYGate(q, 3.0152140794798203, 1);
  sqcRZGate(q, 0.11884804928211691, 1);
  sqcRYGate(q, -1.562390346969214, 2);
  sqcRZGate(q, 1.353751275842054, 2);
  sqcRYGate(q, 1.1222307655498378, 3);
  sqcRZGate(q, 0.17617659162137814, 3);

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
