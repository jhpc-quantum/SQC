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

  sqcRYGate(q, 0.579421740980859, 0);
  sqcRYGate(q, 2.985838638498574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5960213086522668, 0);
  sqcRYGate(q, -2.8695084736645415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5304004756983187, 1);
  sqcRYGate(q, 1.7302088666190825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8561811246841504, 1);
  sqcRYGate(q, -3.0973799460312565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5489746313988335, 2);
  sqcRYGate(q, -0.30536398303274304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6114897144860114, 2);
  sqcRYGate(q, -0.7507450495410114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9244601236669716, 3);
  sqcRYGate(q, 0.12238704143335788, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.408435260761579, 3);
  sqcRYGate(q, 2.958049170090212, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3286774066844345, 4);
  sqcRYGate(q, -0.3194194029252378, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2702494225686838, 4);
  sqcRYGate(q, -1.471691450375791, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5023281723313546, 5);
  sqcRYGate(q, 1.3440341175602804, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8204899523923812, 5);
  sqcRYGate(q, 1.596420051772885, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6529870768166566, 6);
  sqcRYGate(q, 2.3376133696176487, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2525372248985305, 6);
  sqcRYGate(q, 0.7166519267542429, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.624154245310888, 7);
  sqcRYGate(q, 2.538190512209407, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.11455265122296, 7);
  sqcRYGate(q, 1.5293059897532189, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6862594577211754, 8);
  sqcRYGate(q, 2.989580982158267, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5344917166533385, 8);
  sqcRYGate(q, 1.7283701049736664, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.2601638101836274, 9);
  sqcRYGate(q, -3.1156044126704785, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5669759074392353, 9);
  sqcRYGate(q, 1.5424234914468655, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.044169018019907, 10);
  sqcRYGate(q, -2.000960398215606, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4216328460059797, 10);
  sqcRYGate(q, -2.7159078741397735, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.07528726721486, 11);
  sqcRYGate(q, 1.2886023630339434, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5690897035082587, 11);
  sqcRYGate(q, -1.5518923099788131, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.404588361450861, 12);
  sqcRYGate(q, 0.20432525270378038, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.6851929880521522, 12);
  sqcRYGate(q, 0.6668477985976536, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.725971037528002, 13);
  sqcRYGate(q, 2.9422947945347624, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.465842709480725, 13);
  sqcRYGate(q, 1.5413608290429601, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.794781314060117, 14);
  sqcRYGate(q, 1.6268878531848407, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.760027829155039, 14);
  sqcRYGate(q, -1.9213343445662554, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.631437993870402, 0);
  sqcRYGate(q, -3.050844372885355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4752013241142426, 0);
  sqcRYGate(q, -0.3436597420338643, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.12638817166434, 1);
  sqcRYGate(q, -0.7732807333103121, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4038411962641613, 1);
  sqcRYGate(q, 1.6272221495338348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5382245117167495, 2);
  sqcRYGate(q, 1.5796513501196456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5750212146276668, 2);
  sqcRYGate(q, -2.8236404008122946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5799443198048237, 3);
  sqcRYGate(q, 1.5718959472219725, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5380055504642849, 3);
  sqcRYGate(q, -2.4113575745678704, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5391740942730392, 4);
  sqcRYGate(q, 1.5095840836512122, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4054066495267366, 4);
  sqcRYGate(q, 1.520430978196952, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5927913763732686, 5);
  sqcRYGate(q, 1.5668603806901817, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6285851031607927, 5);
  sqcRYGate(q, 0.8696128940176528, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.569672539327697, 6);
  sqcRYGate(q, -1.3980158013972095, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7918372428357102, 6);
  sqcRYGate(q, 1.6164175008561081, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4611428752692956, 7);
  sqcRYGate(q, -1.5699926150534953, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.4883233357978054, 7);
  sqcRYGate(q, 0.6099952928230699, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.515118298463272, 8);
  sqcRYGate(q, -1.1856572690071312, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.22323577526270277, 8);
  sqcRYGate(q, -1.5866649077057418, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.9098432981093758, 9);
  sqcRYGate(q, 1.568053903134681, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.572497027225765, 9);
  sqcRYGate(q, 1.412892212079195, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.600231282597455, 10);
  sqcRYGate(q, -1.5107416035956485, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.713685890301131, 10);
  sqcRYGate(q, -1.6074160473123038, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5830557335499533, 11);
  sqcRYGate(q, -1.5714977228485, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5461603783421596, 11);
  sqcRYGate(q, -2.5557992599087034, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5712649609010434, 12);
  sqcRYGate(q, -1.6486302033986275, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.48314520748287, 12);
  sqcRYGate(q, 1.5626348027660553, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.214171700629322, 13);
  sqcRYGate(q, -3.1139868164019413, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.3757656921146584, 13);
  sqcRYGate(q, -3.048432271529927, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.6134767049721654, 14);
  sqcRYGate(q, 1.6316755253890731, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.4308722750900933, 14);
  sqcRYGate(q, -1.6305365187213394, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.1012309672664518, 0);
  sqcRYGate(q, -1.6070879908591555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9573090024429982, 0);
  sqcRYGate(q, -0.3325301657668464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9731184229386023, 1);
  sqcRYGate(q, 1.788557526508054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04323595682307363, 1);
  sqcRYGate(q, -0.04526773576404164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1043301704806932, 2);
  sqcRYGate(q, -2.8827501962926547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.006706987996480266, 2);
  sqcRYGate(q, -1.5124107722621074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.870992023342038, 3);
  sqcRYGate(q, -1.5716691751193395, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5556774570572696, 3);
  sqcRYGate(q, 2.311450800140139, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5636418847921734, 4);
  sqcRYGate(q, -1.558925948863082, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2717037124391104, 4);
  sqcRYGate(q, 1.6454151287459449, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5562673739373531, 5);
  sqcRYGate(q, -1.5703511116298197, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5176217320239553, 5);
  sqcRYGate(q, -2.5895830752775146, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5810799890445493, 6);
  sqcRYGate(q, -1.5712721870677946, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5296746941490698, 6);
  sqcRYGate(q, 1.5222947793222925, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5752606256096218, 7);
  sqcRYGate(q, -1.5708837705892034, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4721325934354956, 7);
  sqcRYGate(q, 0.9701277280757985, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5518127282212786, 8);
  sqcRYGate(q, 1.5727424097204636, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4177671685566233, 8);
  sqcRYGate(q, -1.6160328163672208, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5534712919667775, 9);
  sqcRYGate(q, 1.5705948836329604, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5826452364841854, 9);
  sqcRYGate(q, -2.296807304274066, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5493033469986006, 10);
  sqcRYGate(q, -1.5768684483758282, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.5587850760087893, 10);
  sqcRYGate(q, -1.5124706132166104, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5678978555654721, 11);
  sqcRYGate(q, 1.5703528234795225, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5915195871617989, 11);
  sqcRYGate(q, 0.4580712441867716, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.552201066302172, 12);
  sqcRYGate(q, -1.4899755295739983, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.09545403826479576, 12);
  sqcRYGate(q, 1.5822347821285812, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.2871457613605761, 13);
  sqcRYGate(q, 1.5618956883859427, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.684542090676124, 13);
  sqcRYGate(q, 1.4374858171032163, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.3221317846700176, 14);
  sqcRYGate(q, -2.883507415626721, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.97236976805114, 14);
  sqcRYGate(q, -1.5364020525950615, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.8514899158108244, 0);
  sqcRYGate(q, -0.015950367148638487, 1);
  sqcRYGate(q, 1.5714285859026713, 2);
  sqcRYGate(q, 1.5904836234830038, 3);
  sqcRYGate(q, 1.570817057490296, 4);
  sqcRYGate(q, 1.5726689749569367, 5);
  sqcRYGate(q, -1.5709061519596546, 6);
  sqcRYGate(q, 1.5927664095021177, 7);
  sqcRYGate(q, 1.5704624332940988, 8);
  sqcRYGate(q, 1.5729649617248216, 9);
  sqcRYGate(q, -1.571836420181589, 10);
  sqcRYGate(q, 1.561908306753344, 11);
  sqcRYGate(q, -1.5714823474876736, 12);
  sqcRYGate(q, -1.569547852758359, 13);
  sqcRYGate(q, 1.5681496913097561, 14);
  sqcRYGate(q, 0.9151753545382995, 15);

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
