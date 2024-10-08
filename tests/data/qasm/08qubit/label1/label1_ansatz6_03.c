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

  sqcRYGate(q, -0.8319001504267984, 0);
  sqcRYGate(q, -2.410635915510482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.37109873005277905, 0);
  sqcRYGate(q, -2.4036082204162668, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7254201574266677, 1);
  sqcRYGate(q, -0.35222555576695136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2037717885286563, 1);
  sqcRYGate(q, -3.0008190885995405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.024051726952142, 2);
  sqcRYGate(q, -3.092786316473863, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4266253932082185, 2);
  sqcRYGate(q, 1.9021817870280704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.17096769657625188, 3);
  sqcRYGate(q, -1.1670491985600089, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0179229097652058, 3);
  sqcRYGate(q, 2.952061685880276, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3123905321974654, 4);
  sqcRYGate(q, 1.9614018061789744, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.20733566554346083, 4);
  sqcRYGate(q, -3.081133660355749, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.024613689699842, 5);
  sqcRYGate(q, 3.0112070346164854, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6915690317537075, 5);
  sqcRYGate(q, -0.983054209119774, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1448707036341306, 6);
  sqcRYGate(q, 1.9554051752860815, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.16635016596927343, 6);
  sqcRYGate(q, 2.87568695667477, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7487616734020692, 0);
  sqcRYGate(q, 1.5243498623141623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0695765924544878, 0);
  sqcRYGate(q, 1.0524363868523274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9378321693893403, 1);
  sqcRYGate(q, -0.12512626208130515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8541059475739738, 1);
  sqcRYGate(q, 0.208418875874929, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7579893882391102, 2);
  sqcRYGate(q, 0.5559132616144177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7751702522084525, 2);
  sqcRYGate(q, -1.8700750195075537, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2567245248220935, 3);
  sqcRYGate(q, -1.6131022618635498, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.715028166861595, 3);
  sqcRYGate(q, -0.15742755099277803, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6637992718491335, 4);
  sqcRYGate(q, -0.08256243704238653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5183794486436213, 4);
  sqcRYGate(q, 2.930596571236668, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.70989147193829, 5);
  sqcRYGate(q, -1.354936571400632, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.000453886904926, 5);
  sqcRYGate(q, -2.9597265088823823, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6434268291769325, 6);
  sqcRYGate(q, 2.685250579661777, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5597022189219212, 6);
  sqcRYGate(q, -0.20185003708056204, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8498840768808398, 0);
  sqcRYGate(q, -2.110474693288012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.954271683863098, 0);
  sqcRYGate(q, -2.249083634983645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.730060468983285, 1);
  sqcRYGate(q, -2.6225475554058044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6147552187579288, 1);
  sqcRYGate(q, -1.2217569740085488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0222360743142884, 2);
  sqcRYGate(q, -1.7037847750406867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8625632588114234, 2);
  sqcRYGate(q, -0.3554998101416445, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9108062489171265, 3);
  sqcRYGate(q, -2.9878798806804308, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.08471004511752334, 3);
  sqcRYGate(q, 0.13601044081314229, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9290898058048869, 4);
  sqcRYGate(q, 2.0956514561342834, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7130438539703663, 4);
  sqcRYGate(q, -2.9976796607866265, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.09222657716061103, 5);
  sqcRYGate(q, -1.6261089816069942, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.729580667930195, 5);
  sqcRYGate(q, 1.2018289689503385, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.12262410014082381, 6);
  sqcRYGate(q, -1.630112684506237, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.757988721083717, 6);
  sqcRYGate(q, -2.71598487922461, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.550764286860848, 0);
  sqcRYGate(q, -1.1545679394066237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9517890342575275, 0);
  sqcRYGate(q, -2.7912471560787084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8069639831013349, 1);
  sqcRYGate(q, 1.5037077096446971, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.15134099097641196, 1);
  sqcRYGate(q, -0.7480286326458502, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6570274465766879, 2);
  sqcRYGate(q, -1.8641859866052544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3015856611276033, 2);
  sqcRYGate(q, 3.0226765181937556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7663063510653272, 3);
  sqcRYGate(q, 1.1572909169029106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.959630395254938, 3);
  sqcRYGate(q, -2.8953267994832723, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.37505621787458043, 4);
  sqcRYGate(q, 1.2558404537762613, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8305455004713979, 4);
  sqcRYGate(q, -2.98252756372134, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6351552149569257, 5);
  sqcRYGate(q, -2.7068984140211008, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6632285156747, 5);
  sqcRYGate(q, 0.27058769436295194, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.35469734925839796, 6);
  sqcRYGate(q, 0.4335511246884275, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.556195018038998, 6);
  sqcRYGate(q, -0.4831607738708001, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2613327608377678, 0);
  sqcRYGate(q, 2.4875790029279905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9226371420801875, 0);
  sqcRYGate(q, 0.7414228022189331, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9160121605246605, 1);
  sqcRYGate(q, -2.2670714163398937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5471693944553442, 1);
  sqcRYGate(q, -2.8183578447228257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5744731444106401, 2);
  sqcRYGate(q, -1.3754029620973967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5764850432361825, 2);
  sqcRYGate(q, 2.785298391839266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5870478793015774, 3);
  sqcRYGate(q, 0.4794210578969075, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5934572640997327, 3);
  sqcRYGate(q, 1.5452289162829282, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0011778418059238405, 4);
  sqcRYGate(q, 0.21432416910553262, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5877095891373, 4);
  sqcRYGate(q, 1.5791948045294917, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.138989700022049, 5);
  sqcRYGate(q, -2.71130632320515, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5616354322779138, 5);
  sqcRYGate(q, -0.34049661121487235, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5547523051921468, 6);
  sqcRYGate(q, -2.0600636792908817, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1048976756553555, 6);
  sqcRYGate(q, 0.12238685592392695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.859625707963688, 0);
  sqcRYGate(q, -0.921357121414385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5181691410247065, 0);
  sqcRYGate(q, 0.8612136094489913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1398433552372236, 1);
  sqcRYGate(q, 1.533308016949244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.889921250683942, 1);
  sqcRYGate(q, -3.0927890847581003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2645784348758646, 2);
  sqcRYGate(q, 1.5999680943472754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8927155322302314, 2);
  sqcRYGate(q, -0.012829352770727498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03980912101188166, 3);
  sqcRYGate(q, 1.7991945744864148, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1400629457852647, 3);
  sqcRYGate(q, -3.140332247295796, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2526310063642967, 4);
  sqcRYGate(q, -3.1407730694955065, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9617918396045043, 4);
  sqcRYGate(q, 1.5662500943749993, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5747772747061832, 5);
  sqcRYGate(q, 2.22037053651401, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.009641135989397753, 5);
  sqcRYGate(q, -1.6867670015216494, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9281200669184385, 6);
  sqcRYGate(q, -0.5035858320159932, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5488954747599655, 6);
  sqcRYGate(q, 0.6562668759591378, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2159576119008495, 0);
  sqcRYGate(q, -1.137293608620089, 1);
  sqcRYGate(q, -2.9219409651072463, 2);
  sqcRYGate(q, 3.0710200959871514, 3);
  sqcRYGate(q, 0.019228756177107457, 4);
  sqcRYGate(q, 1.582200736780055, 5);
  sqcRYGate(q, 1.571791218997688, 6);
  sqcRYGate(q, 1.141205400411915, 7);

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
