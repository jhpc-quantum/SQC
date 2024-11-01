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

  sqcRYGate(q, 0.953216744106803, 0);
  sqcRYGate(q, -1.55587922586467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.00549625865955683, 0);
  sqcRYGate(q, 2.4019678536167217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2313258045909437, 2);
  sqcRYGate(q, -2.119488316284131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4392494740714823, 2);
  sqcRYGate(q, -2.6663268415993655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8515328716837578, 4);
  sqcRYGate(q, -2.747149643035593, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0687306190341315, 4);
  sqcRYGate(q, 2.871202627939989, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0393785960278286, 6);
  sqcRYGate(q, 0.4959402284313849, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.465060352946197, 6);
  sqcRYGate(q, -0.6700251727777511, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.929155928257751, 0);
  sqcRYGate(q, 0.6575923681245914, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.1680092409050502, 0);
  sqcRYGate(q, -2.118615046458676, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5955364855486875, 2);
  sqcRYGate(q, 2.6014182565125346, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.0751556266676605, 2);
  sqcRYGate(q, -1.5805671151044958, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.30080886318639, 4);
  sqcRYGate(q, 0.17909461401653162, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.00070480694096, 4);
  sqcRYGate(q, -2.7042907779142733, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1515950707219833, 1);
  sqcRYGate(q, -2.7151114320566694, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5158481587643723, 1);
  sqcRYGate(q, 2.6646964944312788, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.435970183295654, 3);
  sqcRYGate(q, 3.121192812195076, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.020420791698709, 3);
  sqcRYGate(q, 2.7580844991605664, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.013918343350129094, 5);
  sqcRYGate(q, -2.6409866175417633, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.2819418483377025, 5);
  sqcRYGate(q, 1.362181246196882, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.493721291231085, 0);
  sqcRYGate(q, -0.7117710854524184, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.035632076014047165, 0);
  sqcRYGate(q, -1.6819783606990315, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2624647568169616, 1);
  sqcRYGate(q, 0.7984614681543778, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6529592247859661, 1);
  sqcRYGate(q, 3.099176645240162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7102644075068005, 2);
  sqcRYGate(q, -1.839229550391902, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.423120464979622, 2);
  sqcRYGate(q, 1.4580653703621476, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.083771693583837, 3);
  sqcRYGate(q, -0.061748156937185265, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.058424855576858725, 3);
  sqcRYGate(q, -2.113899404215293, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.19753322322678724, 4);
  sqcRYGate(q, -3.0959390844399075, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.7838301209760425, 4);
  sqcRYGate(q, 0.6917956808413335, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.704065215021914, 5);
  sqcRYGate(q, 0.4274584114356279, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.11431327397050682, 5);
  sqcRYGate(q, -2.812830383575133, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.700787994492605, 0);
  sqcRYGate(q, -2.969383654697175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9170358797114718, 0);
  sqcRYGate(q, 1.729409031775651, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.455574752273487, 2);
  sqcRYGate(q, -0.23943348019669486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8869793086316191, 2);
  sqcRYGate(q, -0.9487792672809092, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8233952989172928, 4);
  sqcRYGate(q, 1.287192597550967, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6556922666184613, 4);
  sqcRYGate(q, 2.0261376155694446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6066454983492426, 6);
  sqcRYGate(q, -2.2219880115927872, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3345638219635694, 6);
  sqcRYGate(q, -2.775301444885053, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0641256259445697, 0);
  sqcRYGate(q, -1.385805373243949, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.183438519254522, 0);
  sqcRYGate(q, 2.594004731726325, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2676419469007396, 2);
  sqcRYGate(q, 1.720101543383306, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.053859033591019, 2);
  sqcRYGate(q, 2.7780100120702604, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.064033459278379, 4);
  sqcRYGate(q, -1.9423954232221767, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.7323333824757394, 4);
  sqcRYGate(q, -1.5816771343053444, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.5777256445367045, 1);
  sqcRYGate(q, 2.174310913573853, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4707551719614287, 1);
  sqcRYGate(q, -0.9026444784752305, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5060797257149221, 3);
  sqcRYGate(q, 1.8212996126255554, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.2749873800240383, 3);
  sqcRYGate(q, 1.9213732573583941, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.11729021855223465, 5);
  sqcRYGate(q, 3.031508871058902, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6573392326256475, 5);
  sqcRYGate(q, -1.274674386241438, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.9420777083417208, 0);
  sqcRYGate(q, -2.333100447977513, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.731025637453017, 0);
  sqcRYGate(q, -1.6980286813198608, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4904130777408079, 1);
  sqcRYGate(q, 1.3353092126957562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6544083923658022, 1);
  sqcRYGate(q, 0.3587420264128504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4166893553057642, 2);
  sqcRYGate(q, -2.3388643088616026, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.5231901307048177, 2);
  sqcRYGate(q, -1.7434976007267693, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.6818403473717805, 3);
  sqcRYGate(q, 0.16309086884985555, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9364140695313786, 3);
  sqcRYGate(q, -0.7968194167315388, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8037913566598552, 4);
  sqcRYGate(q, 2.528489100040458, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.0800539911627465, 4);
  sqcRYGate(q, -0.609907267732695, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.5530142899602488, 5);
  sqcRYGate(q, -0.9159243006919159, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0204784602303776, 5);
  sqcRYGate(q, -1.6834787248943928, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.128878461050742, 0);
  sqcRYGate(q, -0.41568992184522363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.454830341193068, 0);
  sqcRYGate(q, -1.3384276805901476, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2425253808177772, 2);
  sqcRYGate(q, 2.0523500455926444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.684901324087777, 2);
  sqcRYGate(q, -0.0072703860426841516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6185145812993254, 4);
  sqcRYGate(q, 1.1764194340665055, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6225775158302423, 4);
  sqcRYGate(q, 2.5767969209423858, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3752956850060923, 6);
  sqcRYGate(q, 1.2151608330830062, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2981865905490837, 6);
  sqcRYGate(q, 2.454746340525748, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8745829566221514, 0);
  sqcRYGate(q, -1.6078624886117188, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.113211526543473, 0);
  sqcRYGate(q, 2.423234544876081, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.81725918164016, 2);
  sqcRYGate(q, 1.4905335729153102, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6153076421892729, 2);
  sqcRYGate(q, 0.18511307373182087, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.3715010268344691, 4);
  sqcRYGate(q, 0.13637546322363917, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.16787495000359168, 4);
  sqcRYGate(q, 2.9952923047626947, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.508627768074474, 1);
  sqcRYGate(q, 1.2459264391684142, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.23633441321199, 1);
  sqcRYGate(q, 0.1918033293651753, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5671948944857741, 3);
  sqcRYGate(q, -2.435987563490861, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.3026798089072704, 3);
  sqcRYGate(q, 2.763677866920377, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.7269019486016335, 5);
  sqcRYGate(q, 2.779389828976628, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.410897195661179, 5);
  sqcRYGate(q, 1.5521083479245161, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8522989332262434, 0);
  sqcRYGate(q, -2.4187946502883433, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1280319131072796, 0);
  sqcRYGate(q, 1.6973777959882255, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1828128248059313, 1);
  sqcRYGate(q, 0.9575438036906609, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14088374953209504, 1);
  sqcRYGate(q, 2.369414169747675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6036609056400133, 2);
  sqcRYGate(q, 2.016367541523679, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.059998027252159, 2);
  sqcRYGate(q, 2.2407940804110753, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.88733967331533, 3);
  sqcRYGate(q, -0.7316545958188598, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8528227361039704, 3);
  sqcRYGate(q, -0.09650810368722346, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8764593011855841, 4);
  sqcRYGate(q, 0.9598791322733138, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.73258688626238, 4);
  sqcRYGate(q, -1.5923874235731912, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.4443693862771956, 5);
  sqcRYGate(q, 2.1854645410645244, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5631027298772656, 5);
  sqcRYGate(q, -3.1121601538966774, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.459976121867435, 0);
  sqcRYGate(q, 2.553813823883337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1675478701805626, 0);
  sqcRYGate(q, -0.010303157274751878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.391201238614328, 2);
  sqcRYGate(q, -1.7835657189244394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5865662264449791, 2);
  sqcRYGate(q, -0.9325147474795966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6438377558181148, 4);
  sqcRYGate(q, 2.8264607767521452, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8402486091948265, 4);
  sqcRYGate(q, 0.5314768116132971, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.06248470137749873, 6);
  sqcRYGate(q, -3.1405104628982703, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.829583541422198, 6);
  sqcRYGate(q, -2.795618288944125, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.003025675330287, 0);
  sqcRYGate(q, 1.695222492592112, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4948944633167522, 0);
  sqcRYGate(q, 0.40350563328118305, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.769386049145286, 2);
  sqcRYGate(q, 0.5601938203302986, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.6627881054349913, 2);
  sqcRYGate(q, -0.8361586898734392, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.7469726455479972, 4);
  sqcRYGate(q, 1.5390102469066846, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8796905663051287, 4);
  sqcRYGate(q, 2.9876160828588314, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6669771557240258, 1);
  sqcRYGate(q, 2.618944028508224, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3569751338220344, 1);
  sqcRYGate(q, -2.066097602670146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4069496068300702, 3);
  sqcRYGate(q, -0.946555563703117, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.614549442900101, 3);
  sqcRYGate(q, -1.028465169758114, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9002454378305247, 5);
  sqcRYGate(q, -0.33464875690769347, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0786054110619716, 5);
  sqcRYGate(q, -1.74443989386509, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.15092808641661382, 0);
  sqcRYGate(q, 2.1412365085814384, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2117672554093185, 0);
  sqcRYGate(q, 2.4957514088816435, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.853298420652174, 1);
  sqcRYGate(q, -0.5220885539889082, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.196279642855264, 1);
  sqcRYGate(q, 2.502022173482563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8104921255479811, 2);
  sqcRYGate(q, -0.9771101622022323, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.7028785840334095, 2);
  sqcRYGate(q, 1.8758852424079677, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.798790227433005, 3);
  sqcRYGate(q, -1.8056779696609138, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.065453121972759, 3);
  sqcRYGate(q, 1.2091208333065602, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.957298607246355, 4);
  sqcRYGate(q, 1.0145517023211958, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.0758733534682365, 4);
  sqcRYGate(q, 0.6091614096863568, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.340219236090614, 5);
  sqcRYGate(q, -0.34387369802820883, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.23190172232550574, 5);
  sqcRYGate(q, 1.4482570888996618, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.765073742805253, 0);
  sqcRYGate(q, 3.0869921432240846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7806645860137804, 0);
  sqcRYGate(q, 2.1782114897699625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7131048519135916, 2);
  sqcRYGate(q, 0.7079542102957168, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3931997504976152, 2);
  sqcRYGate(q, 2.238563023684144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0384311618354234, 4);
  sqcRYGate(q, 1.7189161781407405, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5163869464527506, 4);
  sqcRYGate(q, -1.2106796654259968, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.848959879961761, 6);
  sqcRYGate(q, -3.0615187703398177, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.312428011129358, 6);
  sqcRYGate(q, 3.1289885266843296, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.860002844011004, 0);
  sqcRYGate(q, 3.1187195859132433, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7365403749302502, 0);
  sqcRYGate(q, 2.257068738680273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9438919692410385, 2);
  sqcRYGate(q, -1.4000304139348065, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.4867252123537433, 2);
  sqcRYGate(q, 1.092620136188403, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6927557807125487, 4);
  sqcRYGate(q, -2.9600468496470262, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4085905767701101, 4);
  sqcRYGate(q, 0.35778432668893867, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.398794892316235, 1);
  sqcRYGate(q, -0.6655762371242808, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.40327483649488194, 1);
  sqcRYGate(q, 2.2292031250182336, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.532721497244998, 3);
  sqcRYGate(q, 1.0669445736310328, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7383932039587169, 3);
  sqcRYGate(q, 0.5598018240037826, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3417380256893316, 5);
  sqcRYGate(q, -0.8427401682860135, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.649612677394999, 5);
  sqcRYGate(q, -1.8848566394066246, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8020885267446127, 0);
  sqcRYGate(q, 2.3457702567771475, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.28858137284393326, 0);
  sqcRYGate(q, 0.4056127884791371, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.086654705394108, 1);
  sqcRYGate(q, -1.0589755895204869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.064430427301991, 1);
  sqcRYGate(q, 0.8951380477356811, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8923957218816831, 2);
  sqcRYGate(q, -1.5036519964664334, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.5252230035592427, 2);
  sqcRYGate(q, -2.301164488726716, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.032793566974492, 3);
  sqcRYGate(q, 3.0840679449741546, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3553381716627042, 3);
  sqcRYGate(q, -1.5039004714330748, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2882938194329956, 4);
  sqcRYGate(q, -1.4738451321694084, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.31103425607403046, 4);
  sqcRYGate(q, 2.1423143927618433, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.1696092608517086, 5);
  sqcRYGate(q, -1.5721609754561756, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.736002799607028, 5);
  sqcRYGate(q, -1.7628468937810968, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.12388635149485806, 0);
  sqcRYGate(q, 0.11659530646196689, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9926251311064704, 0);
  sqcRYGate(q, -2.022116352552281, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9398462903441476, 2);
  sqcRYGate(q, -1.5564902612123215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.795805544586525, 2);
  sqcRYGate(q, 2.3467467926817203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4636607381205113, 4);
  sqcRYGate(q, 1.0018598809341794, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.764888008895238, 4);
  sqcRYGate(q, -0.28542667241891145, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1392275558200193, 6);
  sqcRYGate(q, -2.1362393552472874, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2137285603709012, 6);
  sqcRYGate(q, 1.840777459317434, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6705320000783992, 0);
  sqcRYGate(q, -2.9416158493160185, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.16820438177276031, 0);
  sqcRYGate(q, -1.562190142763561, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1912627649932928, 2);
  sqcRYGate(q, -1.517460580984271, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.727047792984545, 2);
  sqcRYGate(q, -0.9777749757535473, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.227329448324444, 4);
  sqcRYGate(q, 0.25497254894015453, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9866664051103995, 4);
  sqcRYGate(q, 2.36615997929928, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.3579697419004937, 1);
  sqcRYGate(q, 2.0796691972545305, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7009806750028444, 1);
  sqcRYGate(q, -2.91146789129079, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.33397134276858825, 3);
  sqcRYGate(q, -1.0003950645170763, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4218587247598762, 3);
  sqcRYGate(q, 2.8795667079533946, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.4670670470829905, 5);
  sqcRYGate(q, 0.5259530293089583, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.449888601010275, 5);
  sqcRYGate(q, 2.761003190298792, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.43074622858583844, 0);
  sqcRYGate(q, -2.542223698440116, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9510068701314287, 0);
  sqcRYGate(q, 0.8725737265618985, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6644176502545394, 1);
  sqcRYGate(q, -0.8299691822161891, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.881108457328524, 1);
  sqcRYGate(q, -1.7603315028613127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.42395502487304615, 2);
  sqcRYGate(q, -1.0806082706367859, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.09613372828063582, 2);
  sqcRYGate(q, -3.0141035915989094, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.7005916549524303, 3);
  sqcRYGate(q, 0.7437744043108445, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.342643188005014, 3);
  sqcRYGate(q, 1.1780288095605094, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3235944044131374, 4);
  sqcRYGate(q, 2.859390258371609, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.8361328797454455, 4);
  sqcRYGate(q, -2.8728926481409913, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.4784704859261026, 5);
  sqcRYGate(q, -2.9018895037121992, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3570777625798884, 5);
  sqcRYGate(q, -1.9953078870381404, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2828387715553764, 0);
  sqcRYGate(q, 2.151126496666219, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6249385138792292, 0);
  sqcRYGate(q, -2.7591578362004556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1861198285898737, 2);
  sqcRYGate(q, -2.0722953399239232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0625072032389475, 2);
  sqcRYGate(q, 1.1425069722496772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8496115797234771, 4);
  sqcRYGate(q, -1.9696595610041394, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.392934629420527, 4);
  sqcRYGate(q, 0.32669015966395776, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.12081753015004315, 6);
  sqcRYGate(q, 2.6853850066642577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8405820064557004, 6);
  sqcRYGate(q, 1.176390694371272, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6925580052413898, 0);
  sqcRYGate(q, -2.7110505808687657, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1076949331876413, 0);
  sqcRYGate(q, 1.2763141721920779, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0890020383858623, 2);
  sqcRYGate(q, -3.116058870479219, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.1894837180715188, 2);
  sqcRYGate(q, -1.2696617842275586, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4290900800690016, 4);
  sqcRYGate(q, 2.632587867273363, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.616351218654004, 4);
  sqcRYGate(q, -1.9124556959552752, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.9622524021818215, 1);
  sqcRYGate(q, 2.163283744509621, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.130853802893433, 1);
  sqcRYGate(q, -1.3517487644866206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7454241085658636, 3);
  sqcRYGate(q, -2.7976452772753855, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.879514139425928, 3);
  sqcRYGate(q, -1.726751758745475, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.14983808819465685, 5);
  sqcRYGate(q, 1.8629920636070336, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.087587988677509, 5);
  sqcRYGate(q, -0.6006682880980552, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.6541935704463988, 0);
  sqcRYGate(q, 0.02883917194049161, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7443786781155237, 0);
  sqcRYGate(q, 2.180252823928715, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6450238279821044, 1);
  sqcRYGate(q, -2.2460401133577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0669238883500025, 1);
  sqcRYGate(q, 0.8650952844707156, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3635823263999787, 2);
  sqcRYGate(q, -1.2163113884161412, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.0825185659773875, 2);
  sqcRYGate(q, -2.8626400371879246, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.7825581194848923, 3);
  sqcRYGate(q, -0.27402186900807934, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.12103057758044958, 3);
  sqcRYGate(q, -2.1196191491881073, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.40094392364044, 4);
  sqcRYGate(q, 1.6590675681556688, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.0844924422546531, 4);
  sqcRYGate(q, 0.8233321892865222, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.021282509625827, 5);
  sqcRYGate(q, 3.011621069262446, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8503666280631865, 5);
  sqcRYGate(q, 2.3672666889834337, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.116803134512562, 0);
  sqcRYGate(q, -3.1343514657991576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1341740656100527, 0);
  sqcRYGate(q, 2.1615494914924205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3456096902093097, 2);
  sqcRYGate(q, -1.4290243563434344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.134385337712011, 2);
  sqcRYGate(q, -1.6385725043291934, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9337273673315327, 4);
  sqcRYGate(q, 2.9234637386307742, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8145302537055443, 4);
  sqcRYGate(q, -2.7179773846194903, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6230984145515035, 6);
  sqcRYGate(q, -1.8665013840472553, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.804324762327734, 6);
  sqcRYGate(q, -1.4869651417102725, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.210995638156215, 0);
  sqcRYGate(q, -0.5074785570855559, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5086188362139215, 0);
  sqcRYGate(q, -1.9630735636244383, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8889359927785025, 2);
  sqcRYGate(q, -1.9843687901965001, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0971100386236223, 2);
  sqcRYGate(q, -1.7212787125278517, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.892852561936737, 4);
  sqcRYGate(q, -1.9670993040646207, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.5386126556301143, 4);
  sqcRYGate(q, -2.1978658885716307, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.6446464393181626, 1);
  sqcRYGate(q, -0.2731277014268357, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.074457411729721, 1);
  sqcRYGate(q, -0.5663641013927562, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11715283144852578, 3);
  sqcRYGate(q, 1.3316276293623064, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.417643401185442, 3);
  sqcRYGate(q, 1.9110816651022358, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.376538634758175, 5);
  sqcRYGate(q, 0.7262380661617559, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.4713896750052755, 5);
  sqcRYGate(q, -2.6796317219929513, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.25914267492040555, 0);
  sqcRYGate(q, 0.03505550625649765, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4446280485839393, 0);
  sqcRYGate(q, 1.6661428809225596, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6305451071154787, 1);
  sqcRYGate(q, 2.696117862419754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41251028517898636, 1);
  sqcRYGate(q, 1.6522428703808276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.505099085590825, 2);
  sqcRYGate(q, 1.0624358293796075, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.757924440185114, 2);
  sqcRYGate(q, 1.8418508828122677, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.0385665841614236, 3);
  sqcRYGate(q, 2.7942302056151047, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4393617919298007, 3);
  sqcRYGate(q, 0.30162901925218205, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2286994669655433, 4);
  sqcRYGate(q, -1.2643197677261662, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.592633969146953, 4);
  sqcRYGate(q, 1.8009192668847342, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.5218322910147393, 5);
  sqcRYGate(q, -0.1127292623724089, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1305855920188397, 5);
  sqcRYGate(q, 1.2439198850624646, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3247579102948184, 0);
  sqcRYGate(q, -2.462918772979071, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9873272573478218, 0);
  sqcRYGate(q, 0.4899593521662302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1728313101322208, 2);
  sqcRYGate(q, -0.2548471949431414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17304289248031465, 2);
  sqcRYGate(q, 1.5281588954358094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4138454883775706, 4);
  sqcRYGate(q, -2.3563948526631657, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6018444134208003, 4);
  sqcRYGate(q, -2.3297580944442826, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9485335379471305, 6);
  sqcRYGate(q, 0.5699726160279522, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9872060379680478, 6);
  sqcRYGate(q, 1.6316951740359442, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8650943685963162, 0);
  sqcRYGate(q, 0.8195626795249139, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1119152200973972, 0);
  sqcRYGate(q, -2.7319933351825854, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8930246985514163, 2);
  sqcRYGate(q, -1.7563251931859554, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.504848823419301, 2);
  sqcRYGate(q, -1.8756718748299874, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.42121459238415593, 4);
  sqcRYGate(q, -3.1236077958965422, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2288188757167602, 4);
  sqcRYGate(q, 1.734291007058701, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.9508924425796473, 1);
  sqcRYGate(q, 1.5422126737668718, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6133826202766466, 1);
  sqcRYGate(q, 1.1920522146578452, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.506731368699603, 3);
  sqcRYGate(q, -2.204243158178084, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.712893287345047, 3);
  sqcRYGate(q, -2.6069321706992343, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.360841670963367, 5);
  sqcRYGate(q, -1.188783519328497, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5628763750702697, 5);
  sqcRYGate(q, 0.14384252053640623, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.2848077574331913, 0);
  sqcRYGate(q, 2.7587422764905343, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9391397935526565, 0);
  sqcRYGate(q, 2.101381182877544, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.107959039695559, 1);
  sqcRYGate(q, 1.4257682671964669, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5047551766875804, 1);
  sqcRYGate(q, -2.402643311562135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4121860340684917, 2);
  sqcRYGate(q, 1.31612097513817, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.2808187645370581, 2);
  sqcRYGate(q, 1.7413615904006832, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.5322312367427617, 3);
  sqcRYGate(q, -1.7163900093053746, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7660622321916266, 3);
  sqcRYGate(q, 3.0357080275506036, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.035700401982379, 4);
  sqcRYGate(q, -2.429214472759011, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.6575570787368366, 4);
  sqcRYGate(q, 0.19461265104383396, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.17351105541648337, 5);
  sqcRYGate(q, 0.2992145989012931, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5648677619029467, 5);
  sqcRYGate(q, 2.685640285666997, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.25470682742012096, 0);
  sqcRYGate(q, 2.6192811411884813, 1);
  sqcRYGate(q, 1.0353674212245947, 2);
  sqcRYGate(q, -0.3769967363120026, 3);
  sqcRYGate(q, 1.5679637981684023, 4);
  sqcRYGate(q, -3.0499403763819894, 5);
  sqcRYGate(q, -2.6425300069685256, 6);
  sqcRYGate(q, 2.883795878235775, 7);

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
