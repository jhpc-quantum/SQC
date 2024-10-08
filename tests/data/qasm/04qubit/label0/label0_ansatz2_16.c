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

  sqcRYGate(q, -0.5149460044670962, 0);
  sqcRZGate(q, 0.4516497725757924, 0);
  sqcRYGate(q, -1.2573436437509438, 1);
  sqcRZGate(q, -0.9345043298551683, 1);
  sqcRYGate(q, 1.2740018194744536, 2);
  sqcRZGate(q, -3.0429001281505124, 2);
  sqcRYGate(q, -0.13900474535487817, 3);
  sqcRZGate(q, 0.865942708345062, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.1856399116283973, 0);
  sqcRZGate(q, 1.4365489123298323, 0);
  sqcRYGate(q, -1.0876982715140735, 1);
  sqcRZGate(q, -0.8832219659562821, 1);
  sqcRYGate(q, 2.9002118225513254, 2);
  sqcRZGate(q, -0.5532521812877711, 2);
  sqcRYGate(q, -0.005151250963675302, 3);
  sqcRZGate(q, -2.9649729642469524, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2546075483056105, 0);
  sqcRZGate(q, -2.6592126870048647, 0);
  sqcRYGate(q, 3.0603553499814407, 1);
  sqcRZGate(q, 2.474877270857168, 1);
  sqcRYGate(q, -2.964086779680735, 2);
  sqcRZGate(q, -0.5744656923787979, 2);
  sqcRYGate(q, 1.7920224504944517, 3);
  sqcRZGate(q, 2.440713168414129, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.9887300778346821, 0);
  sqcRZGate(q, 0.5787949937481285, 0);
  sqcRYGate(q, -0.9491356134980494, 1);
  sqcRZGate(q, -2.580514571875723, 1);
  sqcRYGate(q, 2.862133066803644, 2);
  sqcRZGate(q, -1.1340286691108328, 2);
  sqcRYGate(q, 2.995016405946011, 3);
  sqcRZGate(q, 2.7000496221832324, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.5135504689766633, 0);
  sqcRZGate(q, -1.404311821118665, 0);
  sqcRYGate(q, 2.7493891228700376, 1);
  sqcRZGate(q, 0.4559509160935277, 1);
  sqcRYGate(q, -0.7399277603338996, 2);
  sqcRZGate(q, 0.840822730459319, 2);
  sqcRYGate(q, -1.9275284512905388, 3);
  sqcRZGate(q, 2.626611483751012, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.7367966383793745, 0);
  sqcRZGate(q, -2.4882467733029108, 0);
  sqcRYGate(q, 1.6457193233546548, 1);
  sqcRZGate(q, 1.768274890600158, 1);
  sqcRYGate(q, -0.21004354830239472, 2);
  sqcRZGate(q, 0.08345859787834174, 2);
  sqcRYGate(q, 2.5030713125968327, 3);
  sqcRZGate(q, 1.7949407981172518, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.2642710100378576, 0);
  sqcRZGate(q, 2.450383899807249, 0);
  sqcRYGate(q, 2.229531937060086, 1);
  sqcRZGate(q, -2.604882669339664, 1);
  sqcRYGate(q, -1.00183790953143, 2);
  sqcRZGate(q, 1.8629151322025308, 2);
  sqcRYGate(q, -2.016472690520443, 3);
  sqcRZGate(q, -1.679922145612358, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.688002168862849, 0);
  sqcRZGate(q, -2.8883456723584233, 0);
  sqcRYGate(q, 1.9965757430795108, 1);
  sqcRZGate(q, 1.3884333023936133, 1);
  sqcRYGate(q, 2.646243440422416, 2);
  sqcRZGate(q, -0.46237151361531487, 2);
  sqcRYGate(q, -0.652089178169056, 3);
  sqcRZGate(q, 2.9360310061488475, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.6192030584144325, 0);
  sqcRZGate(q, 1.522524105228842, 0);
  sqcRYGate(q, 1.376736346094371, 1);
  sqcRZGate(q, 2.5398096565711272, 1);
  sqcRYGate(q, 2.7054353174280115, 2);
  sqcRZGate(q, 0.39033421359332704, 2);
  sqcRYGate(q, 2.402247381879983, 3);
  sqcRZGate(q, -1.385948163943272, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5559060625545313, 0);
  sqcRZGate(q, 2.3594881976972326, 0);
  sqcRYGate(q, -2.348600464680343, 1);
  sqcRZGate(q, -1.166275061094459, 1);
  sqcRYGate(q, 1.4151044230625116, 2);
  sqcRZGate(q, -0.13652467180178363, 2);
  sqcRYGate(q, 1.66050575938083, 3);
  sqcRZGate(q, 0.20307300788787153, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.6624374784417688, 0);
  sqcRZGate(q, 0.8090870720974257, 0);
  sqcRYGate(q, 1.6346486742744852, 1);
  sqcRZGate(q, 0.8675904339545749, 1);
  sqcRYGate(q, -0.58463564118839, 2);
  sqcRZGate(q, -0.9369423106065129, 2);
  sqcRYGate(q, 2.430158547250154, 3);
  sqcRZGate(q, 1.7823293589454885, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.5319821148742223, 0);
  sqcRZGate(q, 2.7890329159538494, 0);
  sqcRYGate(q, -0.7417889549231882, 1);
  sqcRZGate(q, -1.5287483335466545, 1);
  sqcRYGate(q, 1.1215591439161146, 2);
  sqcRZGate(q, -1.7297651015542277, 2);
  sqcRYGate(q, 0.01089582698490328, 3);
  sqcRZGate(q, -0.2220435490876632, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.6498750981820438, 0);
  sqcRZGate(q, -0.679088960992418, 0);
  sqcRYGate(q, 1.4053968483011734, 1);
  sqcRZGate(q, 1.3352053713782577, 1);
  sqcRYGate(q, 0.8706218583815284, 2);
  sqcRZGate(q, 2.228443339122574, 2);
  sqcRYGate(q, -1.914176768636847, 3);
  sqcRZGate(q, 2.800674936318727, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.7710804265500895, 0);
  sqcRZGate(q, -1.6677087998972828, 0);
  sqcRYGate(q, 0.7563515139305964, 1);
  sqcRZGate(q, -0.8630050415208617, 1);
  sqcRYGate(q, 2.415956762314028, 2);
  sqcRZGate(q, 2.3965702168431218, 2);
  sqcRYGate(q, 2.4802418439824025, 3);
  sqcRZGate(q, 2.4062784630294036, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.35712955100102645, 0);
  sqcRZGate(q, -2.909432692004878, 0);
  sqcRYGate(q, -1.843815155748648, 1);
  sqcRZGate(q, -1.2098864067869692, 1);
  sqcRYGate(q, 0.19181784873977484, 2);
  sqcRZGate(q, -0.8456816967982252, 2);
  sqcRYGate(q, 1.202766827560903, 3);
  sqcRZGate(q, -2.6550253003834805, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8560720583508488, 0);
  sqcRZGate(q, 0.07434470374391555, 0);
  sqcRYGate(q, 2.113444913957026, 1);
  sqcRZGate(q, 2.9369115518211726, 1);
  sqcRYGate(q, -1.2629766505258608, 2);
  sqcRZGate(q, 1.1860401169512997, 2);
  sqcRYGate(q, 2.0064831037371764, 3);
  sqcRZGate(q, -1.8249407154718194, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.8117042487627066, 0);
  sqcRZGate(q, 0.6415115659203883, 0);
  sqcRYGate(q, -0.3603384754479721, 1);
  sqcRZGate(q, 2.4729418284104234, 1);
  sqcRYGate(q, 1.8826135985571195, 2);
  sqcRZGate(q, 1.2893958685809848, 2);
  sqcRYGate(q, 0.08898093578747002, 3);
  sqcRZGate(q, 0.6493162725903222, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.2389711974680226, 0);
  sqcRZGate(q, -1.1315939989750463, 0);
  sqcRYGate(q, -0.9234717836283517, 1);
  sqcRZGate(q, -0.37126637663103773, 1);
  sqcRYGate(q, -2.6056178729301345, 2);
  sqcRZGate(q, 0.9258153700318283, 2);
  sqcRYGate(q, 1.9502201964446695, 3);
  sqcRZGate(q, 3.1243867952482205, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.9753407126085243, 0);
  sqcRZGate(q, -1.8648651719154827, 0);
  sqcRYGate(q, 1.1284662641212495, 1);
  sqcRZGate(q, -1.4411949662812409, 1);
  sqcRYGate(q, -1.6109727774994997, 2);
  sqcRZGate(q, -0.8971978415634775, 2);
  sqcRYGate(q, -0.4101780772022545, 3);
  sqcRZGate(q, 0.3282133850125883, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.725961041945103, 0);
  sqcRZGate(q, -1.737980256148159, 0);
  sqcRYGate(q, 0.03432155857208825, 1);
  sqcRZGate(q, -0.2766593079132216, 1);
  sqcRYGate(q, 1.7279693955664353, 2);
  sqcRZGate(q, -1.7884545461706016, 2);
  sqcRYGate(q, 0.406813217368268, 3);
  sqcRZGate(q, 1.8909486292830016, 3);

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
