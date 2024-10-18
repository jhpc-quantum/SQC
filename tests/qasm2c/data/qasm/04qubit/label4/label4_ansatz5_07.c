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

  sqcRYGate(q, -0.695161338607552, 0);
  sqcRYGate(q, 2.965693023764685, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5351417431641283, 0);
  sqcRYGate(q, 1.5207074304366832, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.597940548415962, 2);
  sqcRYGate(q, -2.3664525294740533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6885321598965055, 2);
  sqcRYGate(q, -2.1794719541268055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8747789625889701, 1);
  sqcRYGate(q, -0.648023024091092, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8078340722264874, 1);
  sqcRYGate(q, -1.297969102679481, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6033828982297262, 0);
  sqcRYGate(q, 0.3937516138767153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.994551780554545, 0);
  sqcRYGate(q, 1.9861385508945584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.443038315042935, 2);
  sqcRYGate(q, -0.6572015384927119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5909173203023887, 2);
  sqcRYGate(q, 0.5245519602704753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0688308714178696, 1);
  sqcRYGate(q, -2.1987996603623983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8826076470443143, 1);
  sqcRYGate(q, 0.10101556523587796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8763705096663068, 0);
  sqcRYGate(q, 0.33846790330394977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1261159614804335, 0);
  sqcRYGate(q, -0.20900304133845377, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.775526963627069, 2);
  sqcRYGate(q, 3.0552799649577906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9292779542842597, 2);
  sqcRYGate(q, -3.1078132803248253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5913560712624548, 1);
  sqcRYGate(q, -2.018443755708992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.605779884819971, 1);
  sqcRYGate(q, 1.9950254348922032, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5532054330288334, 0);
  sqcRYGate(q, 1.0589289950077605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5792979364495692, 0);
  sqcRYGate(q, 1.5990508859213506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5925831320406356, 2);
  sqcRYGate(q, 0.45533843394197915, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15854124741118714, 2);
  sqcRYGate(q, -1.0475112239237072, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.46474823567327, 1);
  sqcRYGate(q, -2.571308211340117, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6564820867557914, 1);
  sqcRYGate(q, -1.7779274621556667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.892901871743661, 0);
  sqcRYGate(q, 0.5966125050315033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11813136753594033, 0);
  sqcRYGate(q, 0.5951746850094718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11279801335412376, 2);
  sqcRYGate(q, 1.780404061435401, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9095717600046385, 2);
  sqcRYGate(q, -2.2593293414140088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.095736865229956, 1);
  sqcRYGate(q, 1.1307762623344184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7836182226575894, 1);
  sqcRYGate(q, -0.6917842927957419, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1867587599895897, 0);
  sqcRYGate(q, -1.2461992999102354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9602769577450054, 0);
  sqcRYGate(q, -1.0380063845897878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2817774870974693, 2);
  sqcRYGate(q, -2.511150023717743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3332261200887032, 2);
  sqcRYGate(q, 2.4006196607552504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.115407061650174, 1);
  sqcRYGate(q, -2.983772391861727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1026178585352793, 1);
  sqcRYGate(q, 2.290943955642841, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5132153128966435, 0);
  sqcRYGate(q, -2.4188633956323766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2146866430685623, 0);
  sqcRYGate(q, -2.388797024967304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6061579165552846, 2);
  sqcRYGate(q, -1.9624507601128092, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.788762186018751, 2);
  sqcRYGate(q, -0.29466910567904697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4002066499327643, 1);
  sqcRYGate(q, -0.32956786478099326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5757341757957706, 1);
  sqcRYGate(q, -0.4119294246782952, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3084737536149267, 0);
  sqcRYGate(q, 2.2540860246909498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4719666410389385, 0);
  sqcRYGate(q, 0.748967623347256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2761917019800695, 2);
  sqcRYGate(q, 2.452961781458658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9850806634073552, 2);
  sqcRYGate(q, -3.1032229642152527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0946233912134051, 1);
  sqcRYGate(q, 0.4700215313155969, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3428084191917513, 1);
  sqcRYGate(q, 1.7339433459995535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.882749007153941, 0);
  sqcRYGate(q, -1.2240623129868746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4311294863286745, 0);
  sqcRYGate(q, -1.887114268951551, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.510762562776187, 2);
  sqcRYGate(q, -2.92672433347611, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2172868464013673, 2);
  sqcRYGate(q, -2.197948886764441, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9105029783641418, 1);
  sqcRYGate(q, -1.9893905708019357, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.34020608360562665, 1);
  sqcRYGate(q, 1.477139410169296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1728880988656365, 0);
  sqcRYGate(q, -2.4191993311747004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8941162761022214, 0);
  sqcRYGate(q, 2.9327759695396365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2970105658734825, 2);
  sqcRYGate(q, -1.8161576237802293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5117940479532517, 2);
  sqcRYGate(q, 2.3448754569555543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8439772817201199, 1);
  sqcRYGate(q, -2.2799564049454375, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1942405615707274, 1);
  sqcRYGate(q, 1.6600658595058448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2854254159997414, 0);
  sqcRYGate(q, 1.764588120441678, 1);
  sqcRYGate(q, -1.0949814436683516, 2);
  sqcRYGate(q, 2.0717998265416853, 3);

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
