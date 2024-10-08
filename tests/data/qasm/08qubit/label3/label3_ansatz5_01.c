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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.9090276175556717, 0);
  sqcRYGate(q, -1.0538823175160934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.288097005117551, 0);
  sqcRYGate(q, 0.5762781323548767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2550174943143642, 2);
  sqcRYGate(q, 0.40158016902032395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6906121089294599, 2);
  sqcRYGate(q, 2.196925960741007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.014677227981932, 4);
  sqcRYGate(q, -2.4967264327180896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5351858761564348, 4);
  sqcRYGate(q, 1.164741453757721, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.076582986221224, 6);
  sqcRYGate(q, 2.8384990512728696, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.084263033820105, 6);
  sqcRYGate(q, 0.10839376190815357, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2858958792348392, 1);
  sqcRYGate(q, 0.9893347764314102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.40192963170402146, 1);
  sqcRYGate(q, -0.12872582031887525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7992354665413939, 3);
  sqcRYGate(q, -1.371302126148466, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4194537707233126, 3);
  sqcRYGate(q, 1.5803743502010417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.657213895348665, 5);
  sqcRYGate(q, 0.9051198873651654, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0143886104540107, 5);
  sqcRYGate(q, 1.5620689148112872, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.068092664886699, 0);
  sqcRYGate(q, -2.6299040425479983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.470707069425797, 0);
  sqcRYGate(q, 2.3994638268371213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9748277039523439, 2);
  sqcRYGate(q, 3.140728410001611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.693871755464702, 2);
  sqcRYGate(q, -3.1138185035125576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.041543575810694, 4);
  sqcRYGate(q, -1.612667045435538, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7020988532752688, 4);
  sqcRYGate(q, -1.569524984048798, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.820845857286872, 6);
  sqcRYGate(q, 0.5914527005324852, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4156083087506395, 6);
  sqcRYGate(q, 0.6716595757753296, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.008518825051488934, 1);
  sqcRYGate(q, -2.211590327476088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4943371935583563, 1);
  sqcRYGate(q, -1.9380527095549622, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.009534270313561381, 3);
  sqcRYGate(q, 1.5755280187922567, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4185427447353476, 3);
  sqcRYGate(q, 2.6941885194349036, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.660842428066529, 5);
  sqcRYGate(q, 3.0860305867667224, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.25701955936829624, 5);
  sqcRYGate(q, 3.1406419499720615, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.22972954398410475, 0);
  sqcRYGate(q, -0.2204754721788863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6302656231849004, 0);
  sqcRYGate(q, -3.1021939492294837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6308387443984447, 2);
  sqcRYGate(q, 3.1339133965240733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5225019421551285, 2);
  sqcRYGate(q, 1.6110393589167502, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 5.8170223210751715e-05, 4);
  sqcRYGate(q, 2.0739479353452928, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1457662339015302, 4);
  sqcRYGate(q, -1.5944665765807784, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.085586189529671, 6);
  sqcRYGate(q, 2.3307836586436723, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.32498811756583207, 6);
  sqcRYGate(q, 0.9719171206180459, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1226610563681194, 1);
  sqcRYGate(q, -1.3504198291030107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.908859324071043, 1);
  sqcRYGate(q, 1.359776498303795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3132682038710196, 3);
  sqcRYGate(q, -1.5765118412479486, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5701494488139476, 3);
  sqcRYGate(q, 3.098685569121223, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5035748500489523, 5);
  sqcRYGate(q, -2.0395356633881825, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.976263453478932, 5);
  sqcRYGate(q, -1.5655042868406417, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2524001362469375, 0);
  sqcRYGate(q, -1.5661641314342163, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8434289156600203, 0);
  sqcRYGate(q, -1.5661380471452975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7637347525057763, 2);
  sqcRYGate(q, -3.129282513101174, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1283233025599646, 2);
  sqcRYGate(q, -3.093681090730339, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5676839096317257, 4);
  sqcRYGate(q, 0.00026374910139459473, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5701307411094527, 4);
  sqcRYGate(q, 1.568691782679101, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.670687890239675, 6);
  sqcRYGate(q, -1.189904789498403, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6461180650590839, 6);
  sqcRYGate(q, 1.5701515428888844, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2351480484503217, 1);
  sqcRYGate(q, -1.5729009418977347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.06025402753717124, 1);
  sqcRYGate(q, -0.006990310576055704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8365557089944637, 3);
  sqcRYGate(q, -1.5711255851850696, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5698390283955785, 3);
  sqcRYGate(q, -1.57169540717222, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.00022903374605386998, 5);
  sqcRYGate(q, 3.139638702591913, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5709058000870606, 5);
  sqcRYGate(q, 1.570919351826098, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4596349164016382, 0);
  sqcRYGate(q, 0.9051078534357728, 1);
  sqcRYGate(q, 0.10200991265266168, 2);
  sqcRYGate(q, -1.3237322569620709, 3);
  sqcRYGate(q, 1.7041703771426526, 4);
  sqcRYGate(q, 0.24852502249470657, 5);
  sqcRYGate(q, -3.0215553858337323, 6);
  sqcRYGate(q, -0.11709632727628705, 7);

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
