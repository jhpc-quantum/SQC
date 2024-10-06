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

  sqcRYGate(q, -1.4101009754219362, 0);
  sqcRZGate(q, -0.11524551902827618, 0);
  sqcRYGate(q, 1.4482333707654567, 1);
  sqcRZGate(q, -2.6364831498671073, 1);
  sqcRYGate(q, 1.3181753910331278, 2);
  sqcRZGate(q, 2.539099993420319, 2);
  sqcRYGate(q, 2.582484744565407, 3);
  sqcRZGate(q, 2.734474907777714, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.019677730830045443, 0);
  sqcRZGate(q, -0.33527519630153435, 0);
  sqcRYGate(q, -2.1731096522610995, 1);
  sqcRZGate(q, 0.23703124365269387, 1);
  sqcRYGate(q, 2.5345119542330043, 2);
  sqcRZGate(q, 1.965959026356486, 2);
  sqcRYGate(q, -0.40727146755642885, 3);
  sqcRZGate(q, -2.4578744021356718, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4095309140942835, 0);
  sqcRZGate(q, 2.6046973332318584, 0);
  sqcRYGate(q, 2.2113320119617423, 1);
  sqcRZGate(q, -0.8044719981682887, 1);
  sqcRYGate(q, -2.1865957507899267, 2);
  sqcRZGate(q, -2.103612775253975, 2);
  sqcRYGate(q, -1.485812407443583, 3);
  sqcRZGate(q, -2.512089225961244, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.6320899953918326, 0);
  sqcRZGate(q, -0.23083876138341802, 0);
  sqcRYGate(q, -0.8078906127165695, 1);
  sqcRZGate(q, -1.2195004535842184, 1);
  sqcRYGate(q, 3.0986334876740753, 2);
  sqcRZGate(q, -2.8817516577092817, 2);
  sqcRYGate(q, 1.0757652028429845, 3);
  sqcRZGate(q, 0.890145035834572, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.913503963084816, 0);
  sqcRZGate(q, 1.9469963108945212, 0);
  sqcRYGate(q, -0.5928008171565233, 1);
  sqcRZGate(q, 0.5506288246480358, 1);
  sqcRYGate(q, -1.1240128508413234, 2);
  sqcRZGate(q, 0.5329392594074825, 2);
  sqcRYGate(q, 0.8886876617925692, 3);
  sqcRZGate(q, 1.6286132230989558, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4879588334387472, 0);
  sqcRZGate(q, -0.6521655166782473, 0);
  sqcRYGate(q, 2.744640358104839, 1);
  sqcRZGate(q, -0.09206862677613792, 1);
  sqcRYGate(q, -2.1802877999920156, 2);
  sqcRZGate(q, 1.3161751481269475, 2);
  sqcRYGate(q, -0.3359202036179114, 3);
  sqcRZGate(q, 2.804903875588632, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.941002017652547, 0);
  sqcRZGate(q, -0.9074801016850164, 0);
  sqcRYGate(q, -1.6747733656961887, 1);
  sqcRZGate(q, 2.4628588046456397, 1);
  sqcRYGate(q, 1.145566704021458, 2);
  sqcRZGate(q, 1.2350212387977768, 2);
  sqcRYGate(q, -2.0938468953483884, 3);
  sqcRZGate(q, -2.6355482436052613, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.4323993684220413, 0);
  sqcRZGate(q, 0.27102915028488983, 0);
  sqcRYGate(q, -0.37829083028117244, 1);
  sqcRZGate(q, 0.7407496537634337, 1);
  sqcRYGate(q, -0.4876207898322865, 2);
  sqcRZGate(q, 2.1483745491204633, 2);
  sqcRYGate(q, -0.5727443607318055, 3);
  sqcRZGate(q, 2.12279691798946, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.1139999785112815, 0);
  sqcRZGate(q, 2.8432058600096184, 0);
  sqcRYGate(q, 2.4920858011784546, 1);
  sqcRZGate(q, 2.616236915962354, 1);
  sqcRYGate(q, -1.5354622235472313, 2);
  sqcRZGate(q, -2.4827838779326847, 2);
  sqcRYGate(q, -2.540346275147979, 3);
  sqcRZGate(q, 2.5029151087450603, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.7502607415927818, 0);
  sqcRZGate(q, -0.7576964516620284, 0);
  sqcRYGate(q, 1.8443218650992759, 1);
  sqcRZGate(q, -0.24744386083434036, 1);
  sqcRYGate(q, 0.8133031907276074, 2);
  sqcRZGate(q, 2.635813132418079, 2);
  sqcRYGate(q, 0.4678566234731232, 3);
  sqcRZGate(q, 2.842154983019725, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8975215722358771, 0);
  sqcRZGate(q, -2.5375094886545027, 0);
  sqcRYGate(q, 2.9685764770482543, 1);
  sqcRZGate(q, 1.1448963636897869, 1);
  sqcRYGate(q, -0.9791645629021747, 2);
  sqcRZGate(q, -0.31592222944647563, 2);
  sqcRYGate(q, -0.38989888655275706, 3);
  sqcRZGate(q, 2.5841370943436766, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.476191799018628, 0);
  sqcRZGate(q, 0.16981262057971686, 0);
  sqcRYGate(q, -1.6206185683905412, 1);
  sqcRZGate(q, -2.3215452178570977, 1);
  sqcRYGate(q, 1.1348405931337355, 2);
  sqcRZGate(q, -1.727014489837586, 2);
  sqcRYGate(q, 1.1987383260615254, 3);
  sqcRZGate(q, -1.6449160782713834, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.4547265101303974, 0);
  sqcRZGate(q, 2.226531271542271, 0);
  sqcRYGate(q, -1.496769257414943, 1);
  sqcRZGate(q, -2.4682926947878037, 1);
  sqcRYGate(q, -0.9940547211922244, 2);
  sqcRZGate(q, 0.5461992457844519, 2);
  sqcRYGate(q, 1.0464519899569629, 3);
  sqcRZGate(q, -2.476798145237738, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.966514496824847, 0);
  sqcRZGate(q, -1.536424323042758, 0);
  sqcRYGate(q, -1.9405032382985603, 1);
  sqcRZGate(q, 1.8313948513962874, 1);
  sqcRYGate(q, 1.425127671306063, 2);
  sqcRZGate(q, 1.1003644950853426, 2);
  sqcRYGate(q, 2.540061580899094, 3);
  sqcRZGate(q, 0.9608962853799223, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8453927559775583, 0);
  sqcRZGate(q, -0.8725850200926415, 0);
  sqcRYGate(q, 1.4433023597521393, 1);
  sqcRZGate(q, 1.3246641084846882, 1);
  sqcRYGate(q, 1.5464441092679024, 2);
  sqcRZGate(q, -0.09045182435163746, 2);
  sqcRYGate(q, -1.7112887141694544, 3);
  sqcRZGate(q, 1.2247277796146383, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.11811067188080315, 0);
  sqcRZGate(q, -0.40808201336823835, 0);
  sqcRYGate(q, 0.2966817773854767, 1);
  sqcRZGate(q, -3.0571315269034245, 1);
  sqcRYGate(q, -3.0225171974046825, 2);
  sqcRZGate(q, -1.1114426508230402, 2);
  sqcRYGate(q, -0.46426477579189135, 3);
  sqcRZGate(q, 0.732619253824761, 3);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file, storeQCStop);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file, storeQCStop);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
