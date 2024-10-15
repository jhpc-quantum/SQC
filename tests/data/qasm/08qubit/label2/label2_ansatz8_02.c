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

  sqcRYGate(q, -1.0296618524815475, 0);
  sqcRYGate(q, -2.6584099622258663, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.743126195124999, 0);
  sqcRYGate(q, 1.8548601052509834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0191245059232847, 2);
  sqcRYGate(q, -0.5385379817459306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6652859083934389, 2);
  sqcRYGate(q, -1.0523691148842214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5968372220213114, 4);
  sqcRYGate(q, 1.3660339507615176, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.644310997958866, 4);
  sqcRYGate(q, 0.6455477579905902, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5479122551456568, 6);
  sqcRYGate(q, -1.5955128269912213, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.122252635694961, 6);
  sqcRYGate(q, -2.9950681953046834, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9575254687382005, 0);
  sqcRYGate(q, 2.9869815553189696, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.128111586442475, 0);
  sqcRYGate(q, 0.6655342480714896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0798809567232999, 2);
  sqcRYGate(q, 2.2544031169640544, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.114970147430088, 2);
  sqcRYGate(q, -3.1301355184138235, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0282923348954047, 4);
  sqcRYGate(q, 1.6177588793297444, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.127834709482616, 4);
  sqcRYGate(q, 3.0806087286308106, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.12881355310889958, 1);
  sqcRYGate(q, 1.1884394871992063, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.042453068288333326, 1);
  sqcRYGate(q, -0.132258761192646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.010719289250264, 3);
  sqcRYGate(q, -1.0025519621371148, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.6466613021651377, 3);
  sqcRYGate(q, -3.120458689242667, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.697621146357683, 5);
  sqcRYGate(q, 2.1410254116541028, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.030809005061862463, 5);
  sqcRYGate(q, -0.02344735915122116, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.081010995070549, 0);
  sqcRYGate(q, 2.9330214446627068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9715647922476514, 0);
  sqcRYGate(q, 2.084282748233522, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7293952367949426, 2);
  sqcRYGate(q, 0.09304866612770812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7623507041408204, 2);
  sqcRYGate(q, -0.19848821501993896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7173536470595496, 4);
  sqcRYGate(q, 2.0157003834694183, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.042643297121265, 4);
  sqcRYGate(q, 1.3995192222938506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2619949898189455, 6);
  sqcRYGate(q, 1.9090268713983134, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0451901391012326, 6);
  sqcRYGate(q, 0.927598981679477, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.065204474405218, 0);
  sqcRYGate(q, -0.8995702141175811, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.05331097367884219, 0);
  sqcRYGate(q, -0.626931114711157, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8666468785994663, 2);
  sqcRYGate(q, -2.2016009060821897, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.039497554585199504, 2);
  sqcRYGate(q, -1.8658864214900015, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.1831206431797128, 4);
  sqcRYGate(q, -1.715373507288982, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.13766368027652, 4);
  sqcRYGate(q, -0.00012700313084491034, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.2142134926044124, 1);
  sqcRYGate(q, -1.24523226535754, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.043915187262687, 1);
  sqcRYGate(q, 0.6858660604013096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6963445780085677, 3);
  sqcRYGate(q, 1.2943471062093148, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8609647327157319, 3);
  sqcRYGate(q, 3.1329571161106595, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.2001046677686817, 5);
  sqcRYGate(q, 0.8764847285032921, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.1391962534959346, 5);
  sqcRYGate(q, -8.857860057887024e-05, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.968913824004132, 0);
  sqcRYGate(q, -1.4017594914699796, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0091166060307812, 0);
  sqcRYGate(q, -3.0946117537087137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8361243399825926, 2);
  sqcRYGate(q, 2.4060153117126846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.13522078712335, 2);
  sqcRYGate(q, 2.0721192598180984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7327425805125064, 4);
  sqcRYGate(q, -0.25545209088006615, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0214044905752508, 4);
  sqcRYGate(q, 2.3690420290215233, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.24822440996262204, 6);
  sqcRYGate(q, -1.8248647281244716, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7441824700609532, 6);
  sqcRYGate(q, -2.1218704683183853, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9271511538371184, 0);
  sqcRYGate(q, 2.243008198382584, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.064929416854444, 0);
  sqcRYGate(q, -1.1862647558098767, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2816039082930475, 2);
  sqcRYGate(q, -2.689213468655249, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9085264236969026, 2);
  sqcRYGate(q, 1.3117783449008453, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.0443994699605503, 4);
  sqcRYGate(q, -3.0542242943496682, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5873211619255505, 4);
  sqcRYGate(q, 0.04717155446881009, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6190278130075333, 1);
  sqcRYGate(q, 0.18619214993179256, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.016017747848627195, 1);
  sqcRYGate(q, -0.5410213104933427, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8515185466136552, 3);
  sqcRYGate(q, 1.9438051541794827, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.176387631846166, 3);
  sqcRYGate(q, -3.1176722215095776, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.856656314230732, 5);
  sqcRYGate(q, 0.1434804448096978, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.4973596793930817, 5);
  sqcRYGate(q, -3.133698581603396, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0840501918435743, 0);
  sqcRYGate(q, -0.7130700051778858, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2439728194487456, 0);
  sqcRYGate(q, 2.224899519218718, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.873778366225391, 2);
  sqcRYGate(q, -2.525518220962775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05955089365116968, 2);
  sqcRYGate(q, -1.5620702608468175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.018510987658345357, 4);
  sqcRYGate(q, -1.7926802745126222, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 5.204467744412966e-05, 4);
  sqcRYGate(q, 1.7170493291762299, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6100471215663834, 6);
  sqcRYGate(q, 1.7408341227870539, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1598719731713825, 6);
  sqcRYGate(q, 0.847494279349773, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9460020366725506, 0);
  sqcRYGate(q, -0.03183943613357699, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.03432153772909296, 0);
  sqcRYGate(q, 2.8211399777434027, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.944718033322859, 2);
  sqcRYGate(q, 0.022334545337511006, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.019448737432862018, 2);
  sqcRYGate(q, -3.1254554655943845, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1466275693496977, 4);
  sqcRYGate(q, -0.5897518225547635, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.792016827513726, 4);
  sqcRYGate(q, -3.125821527382736, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.5642333249274838, 1);
  sqcRYGate(q, 1.8917214032009746, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.070811710539024, 1);
  sqcRYGate(q, 1.4190773572721522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5376180007330134, 3);
  sqcRYGate(q, 2.356379936427291, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.004148335128482117, 3);
  sqcRYGate(q, 1.189933695797067, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.783137870103119, 5);
  sqcRYGate(q, 2.389707611914746, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.724417547803481, 5);
  sqcRYGate(q, -2.750761835765771, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.6352556661615028, 0);
  sqcRYGate(q, 0.6211256488621985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.298550736433068, 0);
  sqcRYGate(q, -2.7150619832429608, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8766899186003441, 2);
  sqcRYGate(q, 2.828144664938088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.07437263347091, 2);
  sqcRYGate(q, -0.13200554942156195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9588602515407292, 4);
  sqcRYGate(q, -2.699665168671366, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1226501214025078, 4);
  sqcRYGate(q, -3.0734692168517332, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.740546301197564, 6);
  sqcRYGate(q, -1.7498456190871998, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.078411262324104, 6);
  sqcRYGate(q, 1.6114937974267372, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8836397083962648, 0);
  sqcRYGate(q, -0.23902208452905618, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.009302295086072056, 0);
  sqcRYGate(q, -0.18831246890592887, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3439059563978217, 2);
  sqcRYGate(q, 0.7712563124911196, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.00784460296565026, 2);
  sqcRYGate(q, -3.129564245010902, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.343914210747668, 4);
  sqcRYGate(q, 1.687154024632612, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.12334645030295822, 4);
  sqcRYGate(q, -0.07274701554958662, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.131151153770384, 1);
  sqcRYGate(q, -2.3277106061209927, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1282363180034585, 1);
  sqcRYGate(q, -0.06301481471481463, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0413804804437445, 3);
  sqcRYGate(q, 2.0571019205640315, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.03376534693551836, 3);
  sqcRYGate(q, 3.1387178172410866, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6635714093936658, 5);
  sqcRYGate(q, 2.412930959762856, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.013253601907496915, 5);
  sqcRYGate(q, -2.784753620960802, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8180240920518012, 0);
  sqcRYGate(q, 1.831384253664337, 1);
  sqcRYGate(q, 1.6195934522375304, 2);
  sqcRYGate(q, 1.905476323989044, 3);
  sqcRYGate(q, -1.4013889273324462, 4);
  sqcRYGate(q, 0.5859363366521806, 5);
  sqcRYGate(q, 2.4317872485868346, 6);
  sqcRYGate(q, -0.2821338397105292, 7);

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
