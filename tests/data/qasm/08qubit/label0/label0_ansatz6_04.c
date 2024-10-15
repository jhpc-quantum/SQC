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

  sqcRYGate(q, -2.3735216074174925, 0);
  sqcRYGate(q, -0.9438236200159348, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2855540024813688, 0);
  sqcRYGate(q, 1.277089571978725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.955763105036145, 1);
  sqcRYGate(q, 1.44701706914507, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.45144711218465616, 1);
  sqcRYGate(q, -0.9590027532490488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.300907011554528, 2);
  sqcRYGate(q, 1.2202821272208588, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.140034839399322, 2);
  sqcRYGate(q, -3.1405290293187313, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0541417407552154, 3);
  sqcRYGate(q, 0.3167838034629229, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8131296696858525, 3);
  sqcRYGate(q, 0.3606957570808014, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.117292459072882, 4);
  sqcRYGate(q, 1.1727304887034993, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.424702879136972, 4);
  sqcRYGate(q, 0.40849559176814676, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.138919344487915, 5);
  sqcRYGate(q, -1.4644623395878205, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.706473420769757, 5);
  sqcRYGate(q, -2.648469960731665, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1047321295166963, 6);
  sqcRYGate(q, 1.9911502316617966, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8068303599890052, 6);
  sqcRYGate(q, -3.103341055016724, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9910245285854333, 0);
  sqcRYGate(q, 1.9982365584561075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.043542277376569, 0);
  sqcRYGate(q, -0.9049359669924044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1978211388096511, 1);
  sqcRYGate(q, 0.3090530140455534, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7548412083424512, 1);
  sqcRYGate(q, -2.5318867901931825, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9056612415134015, 2);
  sqcRYGate(q, -0.7939868468225003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5238717462237208, 2);
  sqcRYGate(q, -1.5996868889924614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4774192336010705, 3);
  sqcRYGate(q, 0.5012781792541636, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9725899462335478, 3);
  sqcRYGate(q, -3.135799393857498, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.747831425735497, 4);
  sqcRYGate(q, 1.4750085266783532, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4149692862982057, 4);
  sqcRYGate(q, -3.1407199862040915, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6425599503230064, 5);
  sqcRYGate(q, 0.1143922349623952, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1003892583520845, 5);
  sqcRYGate(q, -0.46491460895151526, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.305595157026258, 6);
  sqcRYGate(q, -2.054937937334209, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2587530489804148, 6);
  sqcRYGate(q, 1.133356724474341, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0996502455187036, 0);
  sqcRYGate(q, 0.7641321268321192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0859106524433937, 0);
  sqcRYGate(q, 2.34627820246076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7644015986177233, 1);
  sqcRYGate(q, -0.0003400541110376398, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8042133794350637, 1);
  sqcRYGate(q, 0.7455349128889504, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8517368592283268, 2);
  sqcRYGate(q, 1.0071052980412007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6865167957332003, 2);
  sqcRYGate(q, -1.7442645680390227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.381644266284855, 3);
  sqcRYGate(q, 2.346776704921399, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6171836393437213, 3);
  sqcRYGate(q, 0.18870190336634787, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8353790583600667, 4);
  sqcRYGate(q, -1.0052028159253386, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0641574271987242, 4);
  sqcRYGate(q, 3.138587836000029, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2436753403876599, 5);
  sqcRYGate(q, -0.42295125213337315, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.1837217703898144, 5);
  sqcRYGate(q, 3.1308854770501195, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2346457762051273, 6);
  sqcRYGate(q, 1.5304410616368198, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6640175349539712, 6);
  sqcRYGate(q, 0.7085528697376713, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.279903972222542, 0);
  sqcRYGate(q, -1.566707875728019, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8567081178029206, 0);
  sqcRYGate(q, 2.440637770652417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.469739131439431, 1);
  sqcRYGate(q, 2.2847691997055946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0013540939775044123, 1);
  sqcRYGate(q, 0.6180931578894632, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.803923308965697, 2);
  sqcRYGate(q, 0.878867516223834, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7414481121635932, 2);
  sqcRYGate(q, 0.010095918254862838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7464416590111718, 3);
  sqcRYGate(q, 0.26611737932500895, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1080526838524603, 3);
  sqcRYGate(q, -2.5448826488657637, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4017384497540668, 4);
  sqcRYGate(q, 0.43591414623017055, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7653953002174374, 4);
  sqcRYGate(q, 3.054703236351028, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1963257599902057, 5);
  sqcRYGate(q, -0.46996432119117243, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.157567855772529, 5);
  sqcRYGate(q, -3.140936451905352, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.10916092962358981, 6);
  sqcRYGate(q, -2.7096328889198538, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.377490197393879, 6);
  sqcRYGate(q, 1.6382353000983558, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4321650974509967, 0);
  sqcRYGate(q, -2.342156543782856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7673318508166481, 0);
  sqcRYGate(q, 1.72984844261902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.723321472733813, 1);
  sqcRYGate(q, -1.6199045547628217, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6935150638980936, 1);
  sqcRYGate(q, -3.134546628064275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9327771774799736, 2);
  sqcRYGate(q, 3.101710748007891, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3749284820328613, 2);
  sqcRYGate(q, 1.1123902950637463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.015201667249611361, 3);
  sqcRYGate(q, 1.047739615558461, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1348867842594292, 3);
  sqcRYGate(q, 0.39426485915729803, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1035469373882263, 4);
  sqcRYGate(q, 0.6656059739015143, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5773281039713618, 4);
  sqcRYGate(q, -1.9193791157167315, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5824145872122238, 5);
  sqcRYGate(q, -2.739199608679878, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.24015164383940057, 5);
  sqcRYGate(q, -3.1366584910575455, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.106284309080625, 6);
  sqcRYGate(q, -1.8323962888249277, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.583310505436495, 6);
  sqcRYGate(q, -3.080740392054453, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9589540494707798, 0);
  sqcRYGate(q, -2.252041135967119, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04172210492748363, 0);
  sqcRYGate(q, 0.14761025528262936, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1969698300631098, 1);
  sqcRYGate(q, 1.0002487367574964, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6570339303068895, 1);
  sqcRYGate(q, -2.6724238798037856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0265930164835932, 2);
  sqcRYGate(q, -1.1276356117910453, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8815070990822202, 2);
  sqcRYGate(q, -0.19121903915938154, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9937840206404704, 3);
  sqcRYGate(q, 2.452872090880048, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.13737037624419, 3);
  sqcRYGate(q, 0.03412766796842637, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.524381248902225, 4);
  sqcRYGate(q, -2.5693446961236326, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.08014576600220073, 4);
  sqcRYGate(q, -1.737719651217449, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.02512306806592634, 5);
  sqcRYGate(q, 2.22886043530523, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0178043749294503, 5);
  sqcRYGate(q, -2.619721830084563, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9100054654169659, 6);
  sqcRYGate(q, 2.3965993580678386, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.20121974430694983, 6);
  sqcRYGate(q, -0.0006183244533826126, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2780158360727851, 0);
  sqcRYGate(q, -2.371206539029125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7859557646152058, 0);
  sqcRYGate(q, 2.768397833274052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6883704305759814, 1);
  sqcRYGate(q, 2.697216710066985, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.006542302717581272, 1);
  sqcRYGate(q, 0.005228085600990085, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11616471211926882, 2);
  sqcRYGate(q, -3.0872916463602302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7647762244127472, 2);
  sqcRYGate(q, -1.3029777714102133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5199391307101785, 3);
  sqcRYGate(q, -1.3501421497906487, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.137299698375978, 3);
  sqcRYGate(q, 0.029463732568053125, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.076702905184395, 4);
  sqcRYGate(q, -0.7401226232741998, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1398917087331006, 4);
  sqcRYGate(q, -3.1407579541086923, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.02202443043974, 5);
  sqcRYGate(q, -2.7496429433724607, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.1718833883163935, 5);
  sqcRYGate(q, -2.5319308531837468, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.466444871610038, 6);
  sqcRYGate(q, -3.0704782983731205, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4376970329704188, 6);
  sqcRYGate(q, -0.42605350675068365, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8414314710448245, 0);
  sqcRYGate(q, -0.9023667847309653, 1);
  sqcRYGate(q, -2.952629247592031, 2);
  sqcRYGate(q, 2.6996664451365917, 3);
  sqcRYGate(q, 1.5425954937113517, 4);
  sqcRYGate(q, 2.1315002210097367, 5);
  sqcRYGate(q, -0.0002148101673542513, 6);
  sqcRYGate(q, -2.8812690563865866, 7);

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
