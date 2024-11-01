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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -3.0525899375135683, 0);
  sqcRYGate(q, -2.0955470480101566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8711501858451784, 0);
  sqcRYGate(q, -2.6989003679481574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4196746806356198, 2);
  sqcRYGate(q, 0.8565319194921456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4154824853736798, 2);
  sqcRYGate(q, -1.5231627073582148, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5913970641190622, 1);
  sqcRYGate(q, 0.29433109940297086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.947826824753791, 1);
  sqcRYGate(q, 0.26253239411190216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.90820351350976, 0);
  sqcRYGate(q, -2.7010565223622387, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4101090915307237, 0);
  sqcRYGate(q, 3.0598299410280263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6466320882599232, 2);
  sqcRYGate(q, 1.8103367574922302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.675836522851659, 2);
  sqcRYGate(q, -0.31186823193624263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.975587056462026, 1);
  sqcRYGate(q, -0.09042448487527466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.755570673725197, 1);
  sqcRYGate(q, -2.5612869153940365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.335204548211407, 0);
  sqcRYGate(q, -2.018513102385384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6145748511519943, 0);
  sqcRYGate(q, 1.9603829553054695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0207593116053107, 2);
  sqcRYGate(q, -0.9222128033183248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2563418458522064, 2);
  sqcRYGate(q, -2.9155819041210362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9986565173460307, 1);
  sqcRYGate(q, -1.2570455685616473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6809567520270878, 1);
  sqcRYGate(q, -1.859462649569839, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1538175643152661, 0);
  sqcRYGate(q, -2.8773111974425754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3901502270352468, 0);
  sqcRYGate(q, -1.1324909212270007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5253974494058907, 2);
  sqcRYGate(q, -2.0634804505335325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4471399920684727, 2);
  sqcRYGate(q, -2.243778717949845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.441925521294188, 1);
  sqcRYGate(q, 1.6371468115535466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02979268955050523, 1);
  sqcRYGate(q, -1.5091918286117796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9452810153807618, 0);
  sqcRYGate(q, 2.268318002695504, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6198836118916242, 0);
  sqcRYGate(q, -1.860061570305365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15151847143907737, 2);
  sqcRYGate(q, -0.2732837651658028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4388691623135936, 2);
  sqcRYGate(q, -0.6511333571645935, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2409151661859212, 1);
  sqcRYGate(q, 0.27526472423791937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2325007351127013, 1);
  sqcRYGate(q, 2.1867792538127877, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3847668359390928, 0);
  sqcRYGate(q, 1.7734788315601282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1218860488414988, 0);
  sqcRYGate(q, -1.4347573046603275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0346103591419231, 2);
  sqcRYGate(q, -0.5196905738731257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8013482006037225, 2);
  sqcRYGate(q, 2.5374979920183853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3939270022862633, 1);
  sqcRYGate(q, 1.2227605118551663, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9116268264156413, 1);
  sqcRYGate(q, 2.1046402179185772, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2458226430712653, 0);
  sqcRYGate(q, 0.8920849645644795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9075346155001978, 0);
  sqcRYGate(q, -2.166470719614753, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2520275227667266, 2);
  sqcRYGate(q, -0.6309497447026391, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5860632994150041, 2);
  sqcRYGate(q, 2.8825489276651517, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.899828963539014, 1);
  sqcRYGate(q, 0.8238954586813083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6190202616536569, 1);
  sqcRYGate(q, 2.3871968918568887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.450149933495563, 0);
  sqcRYGate(q, 1.0294256212351627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.275386929176345, 0);
  sqcRYGate(q, -2.4083759603848143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8472072800703693, 2);
  sqcRYGate(q, -0.4299963834705824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.992000476534578, 2);
  sqcRYGate(q, 0.8306938840793014, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9044020852604022, 1);
  sqcRYGate(q, -1.7413232118391173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9949879466302818, 1);
  sqcRYGate(q, 2.1583030566275836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5326760556138286, 0);
  sqcRYGate(q, -2.34031082561999, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2092766605409464, 0);
  sqcRYGate(q, 2.6998594504731908, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.162679113044206, 2);
  sqcRYGate(q, -1.3607810413638146, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.939990701131216, 2);
  sqcRYGate(q, 0.20196075196222996, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.132604449420264, 1);
  sqcRYGate(q, 0.8747943402785086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.39969462197742855, 1);
  sqcRYGate(q, -3.102846027902554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.39807746878261696, 0);
  sqcRYGate(q, 1.9535307079349806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0126095302385347, 0);
  sqcRYGate(q, -1.1532926341595342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.334405966074764, 2);
  sqcRYGate(q, 0.006015502159138736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30466270281611063, 2);
  sqcRYGate(q, -1.492746019524757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8857544872517608, 1);
  sqcRYGate(q, -2.9720769563547393, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8246797647562157, 1);
  sqcRYGate(q, 0.23599896534161946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.699395845103644, 0);
  sqcRYGate(q, -2.9596943119787014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.175096818847269, 0);
  sqcRYGate(q, -0.6941935427298542, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3833760652412223, 2);
  sqcRYGate(q, 0.5611641879349153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.807598911253064, 2);
  sqcRYGate(q, -2.18038131455134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6612376999428751, 1);
  sqcRYGate(q, -1.294344384187452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4493129902599414, 1);
  sqcRYGate(q, 0.7131282195001228, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7893503540746354, 0);
  sqcRYGate(q, -0.2598418301863687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7825563067350594, 0);
  sqcRYGate(q, -1.8211832218587043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2219890275044727, 2);
  sqcRYGate(q, 3.1066384778202685, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0250789916640333, 2);
  sqcRYGate(q, 0.9852479061642222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8175334330332384, 1);
  sqcRYGate(q, 1.0476876031550846, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.507125708917044, 1);
  sqcRYGate(q, -1.1097565607268614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.806414539276024, 0);
  sqcRYGate(q, 2.78182815668208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9291422794376045, 0);
  sqcRYGate(q, 1.6337055954466966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0274580814088488, 2);
  sqcRYGate(q, 2.843000887016483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9359317155725133, 2);
  sqcRYGate(q, 0.43689059699154975, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0274365112265291, 1);
  sqcRYGate(q, 2.6261905015436797, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6373482249358821, 1);
  sqcRYGate(q, 0.7913754333801761, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5894712566956084, 0);
  sqcRYGate(q, -0.7518757986234789, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.889865906213664, 0);
  sqcRYGate(q, -1.736481906621725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1644126642585704, 2);
  sqcRYGate(q, 2.5229476672219624, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.295573922972371, 2);
  sqcRYGate(q, -2.278212855789306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8190998392155882, 1);
  sqcRYGate(q, -2.6088965203645826, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1729558870156147, 1);
  sqcRYGate(q, 2.0873383999878925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8276697430791375, 0);
  sqcRYGate(q, 1.6836134090423054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0410978828499766, 0);
  sqcRYGate(q, 1.6546174714944812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8571234435690087, 2);
  sqcRYGate(q, 1.8608158698319368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4109767612270918, 2);
  sqcRYGate(q, -0.7259017909124026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9129872023984429, 1);
  sqcRYGate(q, 0.9995788717688008, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6228299159157995, 1);
  sqcRYGate(q, 2.0574401492398944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.919250635098465, 0);
  sqcRYGate(q, -0.4952072609645216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.182439258125002, 0);
  sqcRYGate(q, 0.0797855111875815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.018424601679829, 2);
  sqcRYGate(q, 2.400679039372114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2224208923241227, 2);
  sqcRYGate(q, -1.0107620272623201, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0968369367697024, 1);
  sqcRYGate(q, 0.8156415890800792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.487463480934211, 1);
  sqcRYGate(q, -2.607463933079813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5109267771227379, 0);
  sqcRYGate(q, -0.9282008684747407, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.609637678739293, 0);
  sqcRYGate(q, 0.6000568431766657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2286905537174861, 2);
  sqcRYGate(q, -2.359672484308132, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7124800086167248, 2);
  sqcRYGate(q, -2.5951910789859762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7240370525267472, 1);
  sqcRYGate(q, -2.2665911118852353, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9703431510689313, 1);
  sqcRYGate(q, -0.34569636658839287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9519275099843174, 0);
  sqcRYGate(q, 2.7063799298018383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6888974259338466, 0);
  sqcRYGate(q, 2.3320451216739566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2900804244317126, 2);
  sqcRYGate(q, 0.18348019701651963, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0606816247741748, 2);
  sqcRYGate(q, 2.9002559001346375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2649798669490977, 1);
  sqcRYGate(q, 1.7714967496140288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5032305024371666, 1);
  sqcRYGate(q, -2.9387277030049193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8963478064996613, 0);
  sqcRYGate(q, 2.712251976275946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3726271176518097, 0);
  sqcRYGate(q, 0.5920351960243222, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2085279909078697, 2);
  sqcRYGate(q, -0.6897449895167878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.764098893796729, 2);
  sqcRYGate(q, 2.6952403666872606, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4002736523448, 1);
  sqcRYGate(q, -2.0775762340500767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0130549442150127, 1);
  sqcRYGate(q, -2.8199092266302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0731267688877537, 0);
  sqcRYGate(q, 3.122939869981324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7355496012562734, 0);
  sqcRYGate(q, -0.5567024173995737, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4944305110306662, 2);
  sqcRYGate(q, 0.8000294280301233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08648786215501048, 2);
  sqcRYGate(q, -0.5335244040679452, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7025113213342378, 1);
  sqcRYGate(q, -0.185842594196445, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5952782635290248, 1);
  sqcRYGate(q, 2.7691086102057936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.46127506168374754, 0);
  sqcRYGate(q, 0.339551573455366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.47603704945730757, 0);
  sqcRYGate(q, 0.3425689843259083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.024878352070708, 2);
  sqcRYGate(q, 1.2291459667677307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.63499732280903, 2);
  sqcRYGate(q, 2.877988867172609, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.829159900191684, 1);
  sqcRYGate(q, 2.617073827162495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7285552315284187, 1);
  sqcRYGate(q, 0.8982904088913886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3944845547428089, 0);
  sqcRYGate(q, 2.4205054630986678, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.190846025341549, 0);
  sqcRYGate(q, 3.130101532350136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2634634397504323, 2);
  sqcRYGate(q, -2.4472168630857367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5726813790768643, 2);
  sqcRYGate(q, -0.07867339218612025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8355500385908299, 1);
  sqcRYGate(q, 2.1269693474346463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4303666845183063, 1);
  sqcRYGate(q, -1.2088044023198308, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9465983252341986, 0);
  sqcRYGate(q, -0.22900216957607214, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6482811481914101, 0);
  sqcRYGate(q, -2.008642759149686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.80617729791131, 2);
  sqcRYGate(q, 2.163850690477294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1278627703503723, 2);
  sqcRYGate(q, 0.012884180244178365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1113366100797815, 1);
  sqcRYGate(q, -0.26296426315740856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17836326851846845, 1);
  sqcRYGate(q, 1.5583935951153434, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2346644888981357, 0);
  sqcRYGate(q, -1.8199911815239895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2588863367885468, 0);
  sqcRYGate(q, -3.0005391338594287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8719147625509125, 2);
  sqcRYGate(q, 1.7812030394800125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7441505122695027, 2);
  sqcRYGate(q, -0.931077087154887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3076739676919433, 1);
  sqcRYGate(q, 2.922404828597777, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9715899227053126, 1);
  sqcRYGate(q, -0.3933436502244201, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.902954254789502, 0);
  sqcRYGate(q, -2.3864840331216555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.724102186016198, 0);
  sqcRYGate(q, -2.850101671803767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0384875329141297, 2);
  sqcRYGate(q, 0.8623788820673193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3617733730917108, 2);
  sqcRYGate(q, -0.7520231395639109, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.50045212690359, 1);
  sqcRYGate(q, 0.280745348674845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9216287973593762, 1);
  sqcRYGate(q, 1.8645276968894147, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8322609932524023, 0);
  sqcRYGate(q, 1.304360169816328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08408669249448866, 0);
  sqcRYGate(q, -0.3841498479216674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5055989444056985, 2);
  sqcRYGate(q, 3.03126156724844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0500695813653835, 2);
  sqcRYGate(q, 1.6463140319965899, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6818856259588577, 1);
  sqcRYGate(q, -1.9971162915751348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6367654182306692, 1);
  sqcRYGate(q, -2.849299107008548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4658834758280729, 0);
  sqcRYGate(q, -0.818380000801354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.725822138746262, 0);
  sqcRYGate(q, -1.1877377740319766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.63298031697002, 2);
  sqcRYGate(q, 1.0337845998140427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9287765969398312, 2);
  sqcRYGate(q, 0.873020070225558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8840020032722224, 1);
  sqcRYGate(q, -1.272202749288276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9648121485152421, 1);
  sqcRYGate(q, -1.4344583333558656, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.35316384020523334, 0);
  sqcRYGate(q, 0.5152112925171065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4618223739444374, 0);
  sqcRYGate(q, 2.7877995343695714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.475762394394955, 2);
  sqcRYGate(q, -0.5255221588044732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7188810192674415, 2);
  sqcRYGate(q, 2.8470117406520186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.08518004451761, 1);
  sqcRYGate(q, -0.03828910556022648, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.078517235422221, 1);
  sqcRYGate(q, 1.8489599641798478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3674773415391268, 0);
  sqcRYGate(q, 0.31837582333135295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5420918044302453, 0);
  sqcRYGate(q, -2.885024468201976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.66258181749089, 2);
  sqcRYGate(q, -1.8513417754709849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.44889482507570166, 2);
  sqcRYGate(q, 1.3255609171383325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6358275143436685, 1);
  sqcRYGate(q, -0.8050439394539027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5069721025274215, 1);
  sqcRYGate(q, 2.123482944570983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5744458744910819, 0);
  sqcRYGate(q, 2.298744883976671, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.868309975537209, 0);
  sqcRYGate(q, -3.1392244360216632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.63560394092645, 2);
  sqcRYGate(q, 2.6660285796127656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.36311008420002766, 2);
  sqcRYGate(q, 1.973101496127847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.16819409863539336, 1);
  sqcRYGate(q, -2.6200482391576942, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0969550929668593, 1);
  sqcRYGate(q, -1.5265137082868365, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9535206536176233, 0);
  sqcRYGate(q, 1.3555381077609467, 1);
  sqcRYGate(q, -0.6805851683773456, 2);
  sqcRYGate(q, -2.1382108867657026, 3);

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
