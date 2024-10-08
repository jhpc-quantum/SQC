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
  q = sqcQuantumCircuit(20);

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.03274303035079472, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.0437507575977898, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.09064315323581103, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.09948673151840493, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.07867611627079521, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.09184870991229184, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.07431120208154612, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.034620763572758936, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.0705880836231434, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.055889131483172726, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.0864571632388659, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.04668598495343662, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -0.08664217142952743, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, -0.050802791382981854, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.0885520380818298, 15);
  sqcCXGate(q, 14, 15);
  sqcCXGate(q, 15, 16);
  sqcRZGate(q, -0.07234749621489604, 16);
  sqcCXGate(q, 15, 16);
  sqcCXGate(q, 16, 17);
  sqcRZGate(q, -0.05435715409850672, 17);
  sqcCXGate(q, 16, 17);
  sqcCXGate(q, 17, 18);
  sqcRZGate(q, -0.014620064093680529, 18);
  sqcCXGate(q, 17, 18);
  sqcCXGate(q, 18, 19);
  sqcRZGate(q, -0.0811042758389479, 19);
  sqcCXGate(q, 18, 19);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.24167968222443906, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.019816790075877604, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.8412515833818244, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5036858369114134, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 1.5997154991985305, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 1.377658993721941, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.8058234024580933, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 1.5729227480212338, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 1.6211461316150184, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 1.535860110269138, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 2.3882878543034107, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 1.1839966272436981, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 1.7128912582723599, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 1.5504059021509835, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 1.3540144346584688, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, 1.8694876789478658, 15);
  sqcHGate(q, 15);
  sqcHGate(q, 16);
  sqcRZGate(q, 1.4081210640696156, 16);
  sqcHGate(q, 16);
  sqcHGate(q, 17);
  sqcRZGate(q, 1.1537865610695737, 17);
  sqcHGate(q, 17);
  sqcHGate(q, 18);
  sqcRZGate(q, -1.0576973949812236, 18);
  sqcHGate(q, 18);
  sqcHGate(q, 19);
  sqcRZGate(q, 0.6386104813274767, 19);
  sqcHGate(q, 19);
  sqcRZGate(q, -0.2341250650587612, 0);
  sqcRZGate(q, 0.2866384020162832, 1);
  sqcRZGate(q, -0.5849771284764772, 2);
  sqcRZGate(q, -1.4124854816931203, 3);
  sqcRZGate(q, -1.0349187374471642, 4);
  sqcRZGate(q, 0.4486517670050702, 5);
  sqcRZGate(q, -1.4130712937965364, 6);
  sqcRZGate(q, -1.1223679034373661, 7);
  sqcRZGate(q, -1.552233082526395, 8);
  sqcRZGate(q, 0.8427662285780495, 9);
  sqcRZGate(q, -0.22446044289371614, 10);
  sqcRZGate(q, -0.6147192058332209, 11);
  sqcRZGate(q, -0.2278420925454877, 12);
  sqcRZGate(q, -0.9183443891908428, 13);
  sqcRZGate(q, -1.0219991928228476, 14);
  sqcRZGate(q, -1.4157999644216241, 15);
  sqcRZGate(q, -0.6518045801536626, 16);
  sqcRZGate(q, 0.3610977617964343, 17);
  sqcRZGate(q, -0.7159576113011233, 18);
  sqcRZGate(q, 0.14651511346396384, 19);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.01963650146528914, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.21607627791554376, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.058745701495095816, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -1.1294812349399377, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.01896804129141106, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.588450032328731, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -1.110604610942627, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.40795797042897725, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -1.6036263395424757, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.9329886801021494, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.0001472275835818515, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -1.320971524952941, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -0.07767396745027653, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, -1.2698048311673096, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, 0.0011019458696884053, 15);
  sqcCXGate(q, 14, 15);
  sqcCXGate(q, 15, 16);
  sqcRZGate(q, -0.4831533224212025, 16);
  sqcCXGate(q, 15, 16);
  sqcCXGate(q, 16, 17);
  sqcRZGate(q, 0.00483101414097675, 17);
  sqcCXGate(q, 16, 17);
  sqcCXGate(q, 17, 18);
  sqcRZGate(q, 0.8658561125638554, 18);
  sqcCXGate(q, 17, 18);
  sqcCXGate(q, 18, 19);
  sqcRZGate(q, -1.095136661208635, 19);
  sqcCXGate(q, 18, 19);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.47178793237789585, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.9937829331378648, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6727124080324473, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.26579767380674, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.03442070296897252, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -1.2054289370213376, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.9007184946743458, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.0006203705602233381, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.5963695715067187, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.40685127268681787, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 2.0761481098326064, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 1.2245234077544838, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, -0.77954602379666, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 1.914701918938094, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 1.0185199503163178, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, 1.8467477177589036, 15);
  sqcHGate(q, 15);
  sqcHGate(q, 16);
  sqcRZGate(q, 0.15413511496864368, 16);
  sqcHGate(q, 16);
  sqcHGate(q, 17);
  sqcRZGate(q, 0.7156498474201909, 17);
  sqcHGate(q, 17);
  sqcHGate(q, 18);
  sqcRZGate(q, -0.7729621926575073, 18);
  sqcHGate(q, 18);
  sqcHGate(q, 19);
  sqcRZGate(q, -0.2995760520841065, 19);
  sqcHGate(q, 19);
  sqcRZGate(q, -0.18247353745634126, 0);
  sqcRZGate(q, 0.6625322914248994, 1);
  sqcRZGate(q, -0.3470796287585593, 2);
  sqcRZGate(q, -1.3867416324959234, 3);
  sqcRZGate(q, 0.4732496496082968, 4);
  sqcRZGate(q, -0.7761497680614139, 5);
  sqcRZGate(q, 0.4181234207335441, 6);
  sqcRZGate(q, -0.4500810271983147, 7);
  sqcRZGate(q, -0.010756197442266946, 8);
  sqcRZGate(q, 0.00022569317015448068, 9);
  sqcRZGate(q, 0.7996187652903982, 10);
  sqcRZGate(q, -1.27997066504843, 11);
  sqcRZGate(q, 0.010122907436444794, 12);
  sqcRZGate(q, -0.01614086865932246, 13);
  sqcRZGate(q, -0.8452608057078023, 14);
  sqcRZGate(q, 0.3389102217452375, 15);
  sqcRZGate(q, -1.0908460403056848, 16);
  sqcRZGate(q, 0.9724509309908648, 17);
  sqcRZGate(q, -0.33556143454876314, 18);
  sqcRZGate(q, 0.1098317667858793, 19);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.12970727858372016, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.19775359713422708, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3687838463064504, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.9083624396297296, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.4515816714950075, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.0009416006525799392, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.7647518349884129, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 1.9298816076616012, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.3966195790767434, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.6922373973488724, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.4167180245243874, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, -0.9077403807648855, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, 0.04979143345497811, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, -1.5397770096605443, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.24472708853531808, 15);
  sqcCXGate(q, 14, 15);
  sqcCXGate(q, 15, 16);
  sqcRZGate(q, 0.18172220853556517, 16);
  sqcCXGate(q, 15, 16);
  sqcCXGate(q, 16, 17);
  sqcRZGate(q, -0.031896622025257476, 17);
  sqcCXGate(q, 16, 17);
  sqcCXGate(q, 17, 18);
  sqcRZGate(q, -0.2603154536594981, 18);
  sqcCXGate(q, 17, 18);
  sqcCXGate(q, 18, 19);
  sqcRZGate(q, -0.35088963710734056, 19);
  sqcCXGate(q, 18, 19);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.04488656888382166, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.483174457598746, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.0315099457503418, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.36019668387226633, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.023958339238188693, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.9854179584306871, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.5907081634059599, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.024649252284400444, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.27550990673618825, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 1.3639074269845677, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -3.1356538790962083, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.4447539893328544, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 0.5814642344282349, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 1.323017880213156, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 1.7761279217702945, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, 1.6455103030884817, 15);
  sqcHGate(q, 15);
  sqcHGate(q, 16);
  sqcRZGate(q, -0.7493537140336076, 16);
  sqcHGate(q, 16);
  sqcHGate(q, 17);
  sqcRZGate(q, 0.740830128342179, 17);
  sqcHGate(q, 17);
  sqcHGate(q, 18);
  sqcRZGate(q, -0.33847947155207275, 18);
  sqcHGate(q, 18);
  sqcHGate(q, 19);
  sqcRZGate(q, -1.4686781791778474, 19);
  sqcHGate(q, 19);
  sqcRZGate(q, -0.25686920647284206, 0);
  sqcRZGate(q, 0.36892782132475616, 1);
  sqcRZGate(q, -0.11628781313464671, 2);
  sqcRZGate(q, -0.34445777649138776, 3);
  sqcRZGate(q, -0.11007261363175957, 4);
  sqcRZGate(q, -0.03466643202440759, 5);
  sqcRZGate(q, -1.3351677111818223, 6);
  sqcRZGate(q, 0.0015683744204242633, 7);
  sqcRZGate(q, 0.0023864329454579116, 8);
  sqcRZGate(q, -0.3611945052108835, 9);
  sqcRZGate(q, -0.6670779476114861, 10);
  sqcRZGate(q, -0.39648122685340353, 11);
  sqcRZGate(q, -0.02132219568782383, 12);
  sqcRZGate(q, 0.010576952636328164, 13);
  sqcRZGate(q, -0.6881702729299415, 14);
  sqcRZGate(q, 0.013426486139163165, 15);
  sqcRZGate(q, 0.03685473506845674, 16);
  sqcRZGate(q, 0.2166835761009412, 17);
  sqcRZGate(q, 0.36833388462315886, 18);
  sqcRZGate(q, 0.16719606501148102, 19);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.9172745677798939, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.028646658502928586, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.15811955229579433, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.5628834901351332, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.31910085202894045, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.158392349676412, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.9611831683208154, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -1.5806008635734978, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.4797270120849717, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.4521469028365593, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.6209431127911631, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, 0.0020536697900625654, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, 0.1960836507247379, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 0.20303132065715807, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.14193686152590942, 15);
  sqcCXGate(q, 14, 15);
  sqcCXGate(q, 15, 16);
  sqcRZGate(q, -0.5681785598828388, 16);
  sqcCXGate(q, 15, 16);
  sqcCXGate(q, 16, 17);
  sqcRZGate(q, -0.314277821410261, 17);
  sqcCXGate(q, 16, 17);
  sqcCXGate(q, 17, 18);
  sqcRZGate(q, -0.4225660920634174, 18);
  sqcCXGate(q, 17, 18);
  sqcCXGate(q, 18, 19);
  sqcRZGate(q, 0.9340974813114388, 19);
  sqcCXGate(q, 18, 19);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.3218155218614076, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -2.488499469733893, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.748673665625299, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.35968549269029, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.154925762359577, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -1.769528417609473, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.3723117173565098, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.3319169579953651, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 1.424804269290507, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.7605876887226712, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.5892863903680153, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.8579569606401122, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, 0.9479912118535418, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 0.20134364442162683, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, -0.01129714488876242, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, 0.5807699401495219, 15);
  sqcHGate(q, 15);
  sqcHGate(q, 16);
  sqcRZGate(q, -0.8015473491180837, 16);
  sqcHGate(q, 16);
  sqcHGate(q, 17);
  sqcRZGate(q, -0.4137267403864696, 17);
  sqcHGate(q, 17);
  sqcHGate(q, 18);
  sqcRZGate(q, -1.8514781667127405, 18);
  sqcHGate(q, 18);
  sqcHGate(q, 19);
  sqcRZGate(q, -0.09405844919525129, 19);
  sqcHGate(q, 19);
  sqcRZGate(q, 1.3296552173979304, 0);
  sqcRZGate(q, -0.14073268211117593, 1);
  sqcRZGate(q, 0.13504121070255343, 2);
  sqcRZGate(q, 0.8187407586448476, 3);
  sqcRZGate(q, 0.16675968706147482, 4);
  sqcRZGate(q, 0.003155529782190158, 5);
  sqcRZGate(q, -0.006977143149042472, 6);
  sqcRZGate(q, -0.004155211276132247, 7);
  sqcRZGate(q, -0.05204663347658074, 8);
  sqcRZGate(q, 0.16427814956365405, 9);
  sqcRZGate(q, 0.01417003858937612, 10);
  sqcRZGate(q, 0.23197970953778724, 11);
  sqcRZGate(q, 0.0036526601681185497, 12);
  sqcRZGate(q, -0.02948451332701743, 13);
  sqcRZGate(q, 0.7067068292824157, 14);
  sqcRZGate(q, -0.008203187979532428, 15);
  sqcRZGate(q, 0.01557902314598425, 16);
  sqcRZGate(q, 0.004825290057194472, 17);
  sqcRZGate(q, 0.12736494192827214, 18);
  sqcRZGate(q, 0.3822655544050937, 19);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.8097111769011769, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.9323454453070932, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.3484340268309641, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.34712128118460284, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.02922262783295832, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.2438591859693733, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.18784789835111804, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 1.551250132107374, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.8322361287741711, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.004666762471018573, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.5672931001368132, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, 0.6699420146800731, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, 1.0127761796100456, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, -0.7555211644840658, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, 0.14615383030108986, 15);
  sqcCXGate(q, 14, 15);
  sqcCXGate(q, 15, 16);
  sqcRZGate(q, 0.9967102979446222, 16);
  sqcCXGate(q, 15, 16);
  sqcCXGate(q, 16, 17);
  sqcRZGate(q, 0.4843835982721029, 17);
  sqcCXGate(q, 16, 17);
  sqcCXGate(q, 17, 18);
  sqcRZGate(q, 0.4948808440522773, 18);
  sqcCXGate(q, 17, 18);
  sqcCXGate(q, 18, 19);
  sqcRZGate(q, 0.9410459648797033, 19);
  sqcCXGate(q, 18, 19);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.9615166491018627, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -2.0704683912639124, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.19028997740763132, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.302439112819769, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.6456297639262857, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -1.3795590569981666, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -1.387594680888066, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.30505340948893217, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.020625711626638375, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -1.9133814546059824, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.42015049889315026, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.5133891474039161, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, -0.3005772996716199, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, 0.027175188316904637, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 0.6570152054101788, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, 0.22799767710846944, 15);
  sqcHGate(q, 15);
  sqcHGate(q, 16);
  sqcRZGate(q, -0.3371302645559689, 16);
  sqcHGate(q, 16);
  sqcHGate(q, 17);
  sqcRZGate(q, -2.1412992324252205, 17);
  sqcHGate(q, 17);
  sqcHGate(q, 18);
  sqcRZGate(q, -1.1808031710519333, 18);
  sqcHGate(q, 18);
  sqcHGate(q, 19);
  sqcRZGate(q, 0.5175707050287784, 19);
  sqcHGate(q, 19);
  sqcRZGate(q, 2.2774246748875835, 0);
  sqcRZGate(q, 0.01462082400909811, 1);
  sqcRZGate(q, 0.002298229036793581, 2);
  sqcRZGate(q, -0.06524093834052837, 3);
  sqcRZGate(q, -0.007047123987243843, 4);
  sqcRZGate(q, 1.8129816136142103, 5);
  sqcRZGate(q, -0.04395350680657825, 6);
  sqcRZGate(q, -0.000684835578278605, 7);
  sqcRZGate(q, 0.054362492216708046, 8);
  sqcRZGate(q, 0.06850454831498029, 9);
  sqcRZGate(q, -0.005027420587026207, 10);
  sqcRZGate(q, 0.0012705626903228404, 11);
  sqcRZGate(q, 0.002299777685435477, 12);
  sqcRZGate(q, -0.15428572180582265, 13);
  sqcRZGate(q, -0.038987377646510474, 14);
  sqcRZGate(q, -0.0034224331376467797, 15);
  sqcRZGate(q, 0.0019159065291379437, 16);
  sqcRZGate(q, 0.006006160394529111, 17);
  sqcRZGate(q, -0.009810848636617625, 18);
  sqcRZGate(q, 0.23478745107231527, 19);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.175836451571794, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.5121310413140631, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.04307750707790415, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.014139535106509725, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.12333704598845605, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -1.1502203881371302, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.11218007686079998, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -1.5465920854225577, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -1.4002686406601006, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.04875395455820572, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.8332578165508102, 11);
  sqcCXGate(q, 10, 11);
  sqcCXGate(q, 11, 12);
  sqcRZGate(q, 1.56831115690641, 12);
  sqcCXGate(q, 11, 12);
  sqcCXGate(q, 12, 13);
  sqcRZGate(q, -1.4281720609272426, 13);
  sqcCXGate(q, 12, 13);
  sqcCXGate(q, 13, 14);
  sqcRZGate(q, 0.6163200337257342, 14);
  sqcCXGate(q, 13, 14);
  sqcCXGate(q, 14, 15);
  sqcRZGate(q, -0.23202660573530895, 15);
  sqcCXGate(q, 14, 15);
  sqcCXGate(q, 15, 16);
  sqcRZGate(q, -1.1957167032920162, 16);
  sqcCXGate(q, 15, 16);
  sqcCXGate(q, 16, 17);
  sqcRZGate(q, -0.017530152880479526, 17);
  sqcCXGate(q, 16, 17);
  sqcCXGate(q, 17, 18);
  sqcRZGate(q, 0.47889440652904125, 18);
  sqcCXGate(q, 17, 18);
  sqcCXGate(q, 18, 19);
  sqcRZGate(q, 1.2495939504783589, 19);
  sqcCXGate(q, 18, 19);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.567968651380018, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -2.887882780533214, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.565407848905636, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.492052275478798, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.7000539870164606, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.003912083652157974, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.0838083699238424, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.5447550795905174, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -1.610563716938269, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.5590271897110116, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.6876397547543128, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -1.555210523416517, 11);
  sqcHGate(q, 11);
  sqcHGate(q, 12);
  sqcRZGate(q, -1.570504774403512, 12);
  sqcHGate(q, 12);
  sqcHGate(q, 13);
  sqcRZGate(q, -0.01857264231368337, 13);
  sqcHGate(q, 13);
  sqcHGate(q, 14);
  sqcRZGate(q, 0.5604106725685841, 14);
  sqcHGate(q, 14);
  sqcHGate(q, 15);
  sqcRZGate(q, -1.2561764461337759, 15);
  sqcHGate(q, 15);
  sqcHGate(q, 16);
  sqcRZGate(q, -0.6850915764977346, 16);
  sqcHGate(q, 16);
  sqcHGate(q, 17);
  sqcRZGate(q, 0.4423839168754357, 17);
  sqcHGate(q, 17);
  sqcHGate(q, 18);
  sqcRZGate(q, -1.7018271631415354, 18);
  sqcHGate(q, 18);
  sqcHGate(q, 19);
  sqcRZGate(q, -0.34650298428585874, 19);
  sqcHGate(q, 19);
  sqcRZGate(q, 1.3773508063098339, 0);
  sqcRZGate(q, 0.028746655881939295, 1);
  sqcRZGate(q, -0.005779021876940437, 2);
  sqcRZGate(q, 0.5649970506917699, 3);
  sqcRZGate(q, -0.08267035554301469, 4);
  sqcRZGate(q, 1.2894705619502156, 5);
  sqcRZGate(q, -0.005771321911165798, 6);
  sqcRZGate(q, -0.0008556228228294511, 7);
  sqcRZGate(q, 0.057737695372299655, 8);
  sqcRZGate(q, 2.794397498699566, 9);
  sqcRZGate(q, -0.0051482715616528235, 10);
  sqcRZGate(q, -0.018216648885330686, 11);
  sqcRZGate(q, -0.002219177331822668, 12);
  sqcRZGate(q, 0.20809943249568724, 13);
  sqcRZGate(q, 0.037145457081267215, 14);
  sqcRZGate(q, -0.02512559740220779, 15);
  sqcRZGate(q, 0.005322224982872817, 16);
  sqcRZGate(q, 3.1398225456901643, 17);
  sqcRZGate(q, -3.137796238865765, 18);
  sqcRZGate(q, 0.9909119128906803, 19);

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
