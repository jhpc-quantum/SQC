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

  sqcRYGate(q, -2.450061175963731, 0);
  sqcRZGate(q, -2.6943378151790967, 0);
  sqcRYGate(q, -2.190562256751626, 1);
  sqcRZGate(q, 0.053669938343272876, 1);
  sqcRYGate(q, 0.5271779183632841, 2);
  sqcRZGate(q, 0.40854948137109837, 2);
  sqcRYGate(q, 2.131336413925673, 3);
  sqcRZGate(q, -2.9853664683291283, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.3851197460381641, 0);
  sqcRZGate(q, 2.417916206152829, 0);
  sqcRYGate(q, 1.0512454844803392, 1);
  sqcRZGate(q, 2.8315588580246644, 1);
  sqcRYGate(q, -3.0672273681892666, 2);
  sqcRZGate(q, 2.4862264397005536, 2);
  sqcRYGate(q, 2.44916750225114, 3);
  sqcRZGate(q, 0.26117826586121384, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.2307226569092864, 0);
  sqcRZGate(q, 2.8088028025630485, 0);
  sqcRYGate(q, 0.7654079395438211, 1);
  sqcRZGate(q, -3.0040876636640017, 1);
  sqcRYGate(q, -2.4744424032030743, 2);
  sqcRZGate(q, -2.5045402033730375, 2);
  sqcRYGate(q, -2.2814197377940317, 3);
  sqcRZGate(q, -0.9463536176061577, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.4361303015695284, 0);
  sqcRZGate(q, -1.7048214388301715, 0);
  sqcRYGate(q, -1.4569656355189156, 1);
  sqcRZGate(q, 1.397259679973442, 1);
  sqcRYGate(q, -0.2378639480600963, 2);
  sqcRZGate(q, 1.25780158283436, 2);
  sqcRYGate(q, 2.859062389827166, 3);
  sqcRZGate(q, 3.0642160830786405, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.6433164648163237, 0);
  sqcRZGate(q, 0.48519824767836006, 0);
  sqcRYGate(q, -1.330530532355969, 1);
  sqcRZGate(q, -1.2897202575835083, 1);
  sqcRYGate(q, -2.2228661688964433, 2);
  sqcRZGate(q, 1.2737103207533615, 2);
  sqcRYGate(q, 2.9987655796437784, 3);
  sqcRZGate(q, -0.5302838914926742, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -3.008565281170287, 0);
  sqcRZGate(q, 2.1823884669369917, 0);
  sqcRYGate(q, -1.1657932937703437, 1);
  sqcRZGate(q, -0.3452485787186639, 1);
  sqcRYGate(q, 2.0099765211475216, 2);
  sqcRZGate(q, -2.7485165816845205, 2);
  sqcRYGate(q, 2.165004037804736, 3);
  sqcRZGate(q, -1.1382402876172724, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -0.06252326396693744, 0);
  sqcRZGate(q, -2.1210831867341855, 0);
  sqcRYGate(q, -2.0434271014468193, 1);
  sqcRZGate(q, -0.7250265787576797, 1);
  sqcRYGate(q, 1.2425094036305717, 2);
  sqcRZGate(q, 1.039153419765248, 2);
  sqcRYGate(q, -1.6565345748571216, 3);
  sqcRZGate(q, 0.6065852068441373, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0335360999875949, 0);
  sqcRZGate(q, 0.43193038702731007, 0);
  sqcRYGate(q, -2.2778251116576396, 1);
  sqcRZGate(q, -2.099952859977686, 1);
  sqcRYGate(q, 0.6737885329475359, 2);
  sqcRZGate(q, -2.557174315105079, 2);
  sqcRYGate(q, 1.330383233357871, 3);
  sqcRZGate(q, -1.9503980243214682, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.776262523291851, 0);
  sqcRZGate(q, -2.292128299524764, 0);
  sqcRYGate(q, 2.371183022931063, 1);
  sqcRZGate(q, -0.22522105752148655, 1);
  sqcRYGate(q, -1.6019019333346156, 2);
  sqcRZGate(q, 1.6149221870123425, 2);
  sqcRYGate(q, -2.4667290411693124, 3);
  sqcRZGate(q, 1.4988673328276283, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.17797210303247546, 0);
  sqcRZGate(q, 2.314544143359768, 0);
  sqcRYGate(q, -2.6103435618293678, 1);
  sqcRZGate(q, 1.7275123268146355, 1);
  sqcRYGate(q, -1.6564666954193303, 2);
  sqcRZGate(q, -0.4925995296496799, 2);
  sqcRYGate(q, 0.9690784414787741, 3);
  sqcRZGate(q, 2.761674802253946, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.071464912022043, 0);
  sqcRZGate(q, -0.6406480448511767, 0);
  sqcRYGate(q, -1.0795442617215416, 1);
  sqcRZGate(q, 0.4889846914117806, 1);
  sqcRYGate(q, -2.4661917698546585, 2);
  sqcRZGate(q, 2.74512384573947, 2);
  sqcRYGate(q, -1.8967257063428784, 3);
  sqcRZGate(q, -1.5899734890268604, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.5149204499324238, 0);
  sqcRZGate(q, -0.17088179702532494, 0);
  sqcRYGate(q, 3.1398966557659365, 1);
  sqcRZGate(q, -2.0616587065030987, 1);
  sqcRYGate(q, 1.880038305415281, 2);
  sqcRZGate(q, 1.3563473736686888, 2);
  sqcRYGate(q, 1.2495407963322285, 3);
  sqcRZGate(q, -1.7909793477484257, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.5646055259140763, 0);
  sqcRZGate(q, 2.0758049604747364, 0);
  sqcRYGate(q, 0.17493747230326906, 1);
  sqcRZGate(q, 0.09520307925988993, 1);
  sqcRYGate(q, 1.353498808339272, 2);
  sqcRZGate(q, 1.753928744665991, 2);
  sqcRYGate(q, 1.967572197372957, 3);
  sqcRZGate(q, 2.450643082269821, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.658373140668299, 0);
  sqcRZGate(q, 1.4210820626937322, 0);
  sqcRYGate(q, 1.8704881383194405, 1);
  sqcRZGate(q, 1.2601990461376413, 1);
  sqcRYGate(q, 0.8267131827479633, 2);
  sqcRZGate(q, 1.0204070973509118, 2);
  sqcRYGate(q, 2.728295871949772, 3);
  sqcRZGate(q, -3.0992392563530924, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 2.3624570612950615, 0);
  sqcRZGate(q, 3.054478937224062, 0);
  sqcRYGate(q, 1.2445801047404705, 1);
  sqcRZGate(q, -2.6819151762499955, 1);
  sqcRYGate(q, 2.32609996812116, 2);
  sqcRZGate(q, -2.3938628680639917, 2);
  sqcRYGate(q, -0.6332037279930791, 3);
  sqcRZGate(q, 2.8494883509258186, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.6078053431773136, 0);
  sqcRZGate(q, 1.677807971264806, 0);
  sqcRYGate(q, 0.8665270683524939, 1);
  sqcRZGate(q, -2.42056221518843, 1);
  sqcRYGate(q, 0.8808084270702334, 2);
  sqcRZGate(q, -2.2558880519184408, 2);
  sqcRYGate(q, 1.8710976067617027, 3);
  sqcRZGate(q, 0.7895244442837284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.5345450736570134, 0);
  sqcRZGate(q, 2.279900867227509, 0);
  sqcRYGate(q, -1.8501231767944954, 1);
  sqcRZGate(q, 3.009995200761934, 1);
  sqcRYGate(q, 0.3309227754095486, 2);
  sqcRZGate(q, 2.6797514090441172, 2);
  sqcRYGate(q, -0.9325599893954617, 3);
  sqcRZGate(q, -1.9651074634845793, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.2179563836937697, 0);
  sqcRZGate(q, 0.1909933008724092, 0);
  sqcRYGate(q, -2.577020548747297, 1);
  sqcRZGate(q, -0.6686076226083699, 1);
  sqcRYGate(q, 0.33232348659451383, 2);
  sqcRZGate(q, 0.4606392206089964, 2);
  sqcRYGate(q, 0.7692996937078549, 3);
  sqcRZGate(q, 1.1948220700844434, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.8606631813254673, 0);
  sqcRZGate(q, 2.4998912021969746, 0);
  sqcRYGate(q, -2.9540656609687326, 1);
  sqcRZGate(q, 1.2684228745435817, 1);
  sqcRYGate(q, 2.3271905024264234, 2);
  sqcRZGate(q, 1.6403027854114338, 2);
  sqcRYGate(q, -0.628336396996688, 3);
  sqcRZGate(q, 1.1680040942694132, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.7101185965153585, 0);
  sqcRZGate(q, 0.6445171898287025, 0);
  sqcRYGate(q, -1.2392337573334578, 1);
  sqcRZGate(q, 2.791016429948458, 1);
  sqcRYGate(q, -2.7493234462941762, 2);
  sqcRZGate(q, -1.9998298069304943, 2);
  sqcRYGate(q, 0.623210472509659, 3);
  sqcRZGate(q, -2.5521217798838562, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 0.23882371991825857, 0);
  sqcRZGate(q, -2.3845686342614325, 0);
  sqcRYGate(q, -1.4991560495370313, 1);
  sqcRZGate(q, -2.3347398695597836, 1);
  sqcRYGate(q, -2.003468900733706, 2);
  sqcRZGate(q, -1.849450833759981, 2);
  sqcRYGate(q, 2.6818156304053757, 3);
  sqcRZGate(q, 0.25329232163613913, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, 1.4329376389630308, 0);
  sqcRZGate(q, -0.36737954848813587, 0);
  sqcRYGate(q, 0.7785025191527364, 1);
  sqcRZGate(q, -1.914491818907627, 1);
  sqcRYGate(q, 2.2506606795631043, 2);
  sqcRZGate(q, -1.8029059714425202, 2);
  sqcRYGate(q, 1.7333417206173083, 3);
  sqcRZGate(q, 1.9683883503920043, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -1.0769591009516315, 0);
  sqcRZGate(q, 1.0588845842152184, 0);
  sqcRYGate(q, -2.1044935670869203, 1);
  sqcRZGate(q, -1.6882769416383765, 1);
  sqcRYGate(q, 2.8831236682768875, 2);
  sqcRZGate(q, 2.2447146443809185, 2);
  sqcRYGate(q, 0.45674691945957463, 3);
  sqcRZGate(q, 3.0729679911709464, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.9167380065892377, 0);
  sqcRZGate(q, -2.270252060997252, 0);
  sqcRYGate(q, 2.782143649036058, 1);
  sqcRZGate(q, 1.6247942732323495, 1);
  sqcRYGate(q, 0.4501709708746706, 2);
  sqcRZGate(q, 2.0218246152126134, 2);
  sqcRYGate(q, 2.7878248130354955, 3);
  sqcRZGate(q, -0.7937614746694699, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 2, 3);
  sqcRYGate(q, -2.1131021755769046, 0);
  sqcRZGate(q, -0.8505754654096771, 0);
  sqcRYGate(q, -1.2676760687780764, 1);
  sqcRZGate(q, 1.4647685594325957, 1);
  sqcRYGate(q, 2.894520113218329, 2);
  sqcRZGate(q, -1.169593978579623, 2);
  sqcRYGate(q, 0.13755724393070423, 3);
  sqcRZGate(q, -0.23746684220637457, 3);

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
