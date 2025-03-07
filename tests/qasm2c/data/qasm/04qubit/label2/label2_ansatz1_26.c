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

  sqcRYGate(q, 0.6820771447280767, 0);
  sqcRZGate(q, 0.2998214847882716, 0);
  sqcRYGate(q, -1.886109059332707, 1);
  sqcRZGate(q, -1.5016766881649826, 1);
  sqcRYGate(q, -1.5475521786079556, 2);
  sqcRZGate(q, -0.9117952264148959, 2);
  sqcRYGate(q, -1.8597011919218787, 3);
  sqcRZGate(q, -2.382274987399604, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.0966758915494528, 0);
  sqcRZGate(q, -2.085704702708184, 0);
  sqcRYGate(q, -1.360893325893106, 1);
  sqcRZGate(q, 3.090998638444103, 1);
  sqcRYGate(q, -1.7307459274320125, 2);
  sqcRZGate(q, 0.9821709792049004, 2);
  sqcRYGate(q, -0.4883701774094087, 3);
  sqcRZGate(q, 0.6794147642945053, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6049915798145081, 0);
  sqcRZGate(q, -2.870197434918391, 0);
  sqcRYGate(q, 0.8464292924886232, 1);
  sqcRZGate(q, 0.7327007538878635, 1);
  sqcRYGate(q, -2.283870074117728, 2);
  sqcRZGate(q, -1.3517056480614604, 2);
  sqcRYGate(q, -0.09603630171856414, 3);
  sqcRZGate(q, -2.168955120110226, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2232128766143218, 0);
  sqcRZGate(q, 1.904915397618403, 0);
  sqcRYGate(q, 3.0606494209838764, 1);
  sqcRZGate(q, -1.9666141150721757, 1);
  sqcRYGate(q, -0.0952751553436306, 2);
  sqcRZGate(q, 2.5865134775487224, 2);
  sqcRYGate(q, 2.8901473255474452, 3);
  sqcRZGate(q, -1.4319349930397534, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2978198364435776, 0);
  sqcRZGate(q, -0.3455319124979734, 0);
  sqcRYGate(q, -0.5873237523536184, 1);
  sqcRZGate(q, -0.5845054974810173, 1);
  sqcRYGate(q, -2.2541294063275474, 2);
  sqcRZGate(q, 1.1747515432637048, 2);
  sqcRYGate(q, 0.8305071064378923, 3);
  sqcRZGate(q, 0.35731095846306804, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.698009286564325, 0);
  sqcRZGate(q, 2.3943207745884436, 0);
  sqcRYGate(q, 1.439433244909462, 1);
  sqcRZGate(q, 2.6299873288869593, 1);
  sqcRYGate(q, 1.9133762234655483, 2);
  sqcRZGate(q, 1.0475083718442266, 2);
  sqcRYGate(q, 0.8798308282650842, 3);
  sqcRZGate(q, -0.9092920371381329, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9515244046899858, 0);
  sqcRZGate(q, 2.314334241360644, 0);
  sqcRYGate(q, -0.3254798108845095, 1);
  sqcRZGate(q, -0.03062677595059782, 1);
  sqcRYGate(q, 1.9766431614909825, 2);
  sqcRZGate(q, -1.6068808576167746, 2);
  sqcRYGate(q, 2.348005205668446, 3);
  sqcRZGate(q, -2.424921895990038, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.085817426578157, 0);
  sqcRZGate(q, -1.4066234178137016, 0);
  sqcRYGate(q, -1.299083518794048, 1);
  sqcRZGate(q, -2.57126609079764, 1);
  sqcRYGate(q, -2.285578255499539, 2);
  sqcRZGate(q, -0.7060193514282265, 2);
  sqcRYGate(q, -0.6964240350095379, 3);
  sqcRZGate(q, -1.881825156445389, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.8605694128320411, 0);
  sqcRZGate(q, 0.37146038711772, 0);
  sqcRYGate(q, -0.013484763839416027, 1);
  sqcRZGate(q, -0.5771521442764893, 1);
  sqcRYGate(q, -1.2877984251291617, 2);
  sqcRZGate(q, 0.14722814203093068, 2);
  sqcRYGate(q, 0.8829939349385993, 3);
  sqcRZGate(q, 3.0927589251708767, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4725127797211745, 0);
  sqcRZGate(q, 1.2682797865872604, 0);
  sqcRYGate(q, 0.5741061871777118, 1);
  sqcRZGate(q, -0.9697930645888864, 1);
  sqcRYGate(q, -0.3601776225732941, 2);
  sqcRZGate(q, 2.9061912062521396, 2);
  sqcRYGate(q, -2.1381545896976455, 3);
  sqcRZGate(q, 2.545134517671393, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.22429308678279314, 0);
  sqcRZGate(q, 2.409855876656843, 0);
  sqcRYGate(q, -1.1708521181519518, 1);
  sqcRZGate(q, -0.2267057830827932, 1);
  sqcRYGate(q, -2.181134435555159, 2);
  sqcRZGate(q, 0.6701198576788565, 2);
  sqcRYGate(q, 1.6924510065922407, 3);
  sqcRZGate(q, 3.0051863891352966, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6560848888121547, 0);
  sqcRZGate(q, 2.657869354755493, 0);
  sqcRYGate(q, 0.16528703464370334, 1);
  sqcRZGate(q, -2.357370532898187, 1);
  sqcRYGate(q, 2.2816337431113203, 2);
  sqcRZGate(q, -1.401279803925128, 2);
  sqcRYGate(q, 2.1147914416235087, 3);
  sqcRZGate(q, 1.3981060805639813, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.0820186971974115, 0);
  sqcRZGate(q, -0.1867958873196542, 0);
  sqcRYGate(q, -2.7991301377102435, 1);
  sqcRZGate(q, -1.0325227965508108, 1);
  sqcRYGate(q, -0.9900976123638628, 2);
  sqcRZGate(q, 2.5468829493744027, 2);
  sqcRYGate(q, -2.355712397227233, 3);
  sqcRZGate(q, 0.4387486856933303, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9521140969239763, 0);
  sqcRZGate(q, 2.1130669032788356, 0);
  sqcRYGate(q, -0.5887719960244171, 1);
  sqcRZGate(q, 0.6405819048525371, 1);
  sqcRYGate(q, -1.111052505171848, 2);
  sqcRZGate(q, -2.9143750185041744, 2);
  sqcRYGate(q, -2.1898929837250614, 3);
  sqcRZGate(q, 3.042183015088298, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1545591391206216, 0);
  sqcRZGate(q, -0.540205687245555, 0);
  sqcRYGate(q, 0.3261632551607088, 1);
  sqcRZGate(q, -0.5906515528905131, 1);
  sqcRYGate(q, 2.1063097248029425, 2);
  sqcRZGate(q, -1.7085990272657874, 2);
  sqcRYGate(q, -0.7184018752658181, 3);
  sqcRZGate(q, -0.0474655989718702, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.33113185083754404, 0);
  sqcRZGate(q, 1.3102915263480899, 0);
  sqcRYGate(q, 2.9872879894834514, 1);
  sqcRZGate(q, 1.4448875052065349, 1);
  sqcRYGate(q, -2.601161874375057, 2);
  sqcRZGate(q, -0.9404547643719018, 2);
  sqcRYGate(q, 0.5479423338394062, 3);
  sqcRZGate(q, 0.11493791060620762, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.721390022283562, 0);
  sqcRZGate(q, -1.4436204914792234, 0);
  sqcRYGate(q, -1.714863439120175, 1);
  sqcRZGate(q, 2.6565293733983735, 1);
  sqcRYGate(q, 1.4138533607392774, 2);
  sqcRZGate(q, 2.6888513193219796, 2);
  sqcRYGate(q, 1.3621597322816035, 3);
  sqcRZGate(q, -2.651768519764419, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0209683359949895, 0);
  sqcRZGate(q, 2.465787915085144, 0);
  sqcRYGate(q, -0.9014572888572757, 1);
  sqcRZGate(q, -3.124577257175908, 1);
  sqcRYGate(q, -0.9290462691876513, 2);
  sqcRZGate(q, 1.162676049143539, 2);
  sqcRYGate(q, -2.6534500018753167, 3);
  sqcRZGate(q, -2.6715498748182815, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3538168906204673, 0);
  sqcRZGate(q, -3.0989446801500233, 0);
  sqcRYGate(q, 0.9149298200932876, 1);
  sqcRZGate(q, 2.0475006321547573, 1);
  sqcRYGate(q, -1.809762071381944, 2);
  sqcRZGate(q, 3.1249886463380956, 2);
  sqcRYGate(q, 2.270949054146155, 3);
  sqcRZGate(q, -0.4335015366278656, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4913137673258934, 0);
  sqcRZGate(q, -2.7158648187203127, 0);
  sqcRYGate(q, 0.467404673571985, 1);
  sqcRZGate(q, 0.6659103320427161, 1);
  sqcRYGate(q, 0.5582025369577726, 2);
  sqcRZGate(q, 0.7329595270634918, 2);
  sqcRYGate(q, -0.8444297094291384, 3);
  sqcRZGate(q, -2.9790294964370316, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.331216294288029, 0);
  sqcRZGate(q, -1.1753982343659954, 0);
  sqcRYGate(q, 2.269453061240772, 1);
  sqcRZGate(q, 0.08388548996042429, 1);
  sqcRYGate(q, -0.7274887061558397, 2);
  sqcRZGate(q, -1.23829883064127, 2);
  sqcRYGate(q, 0.6011550940880807, 3);
  sqcRZGate(q, -2.1816505090451965, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1393946762185165, 0);
  sqcRZGate(q, -1.9478862920416375, 0);
  sqcRYGate(q, -0.045203348874843126, 1);
  sqcRZGate(q, 1.2163790991824932, 1);
  sqcRYGate(q, 0.3500417621805196, 2);
  sqcRZGate(q, -2.570339995781835, 2);
  sqcRYGate(q, 1.4266751700593763, 3);
  sqcRZGate(q, -3.018877373935278, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2371888668814514, 0);
  sqcRZGate(q, 0.24350926793965166, 0);
  sqcRYGate(q, 2.099196794704505, 1);
  sqcRZGate(q, -0.9916431298030001, 1);
  sqcRYGate(q, -0.0894244069528991, 2);
  sqcRZGate(q, 3.139380312625855, 2);
  sqcRYGate(q, 2.196884727879901, 3);
  sqcRZGate(q, -0.04709662296463342, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5926680183260364, 0);
  sqcRZGate(q, 2.2145628768870496, 0);
  sqcRYGate(q, 0.2742196497080558, 1);
  sqcRZGate(q, 1.3425422924450485, 1);
  sqcRYGate(q, 0.9697706171276697, 2);
  sqcRZGate(q, -0.9706458897838921, 2);
  sqcRYGate(q, -1.1389735782465777, 3);
  sqcRZGate(q, -0.08622729317659233, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.1000203024716035, 0);
  sqcRZGate(q, -0.5518564502123463, 0);
  sqcRYGate(q, -1.6102048753838618, 1);
  sqcRZGate(q, 2.9154602710639033, 1);
  sqcRYGate(q, -0.3095130215365032, 2);
  sqcRZGate(q, -0.23228327731767706, 2);
  sqcRYGate(q, -1.630851939688525, 3);
  sqcRZGate(q, -1.1698617963841444, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.0170619984376731, 0);
  sqcRZGate(q, -2.4459558712825338, 0);
  sqcRYGate(q, -1.1442371825653952, 1);
  sqcRZGate(q, -1.8033391771884828, 1);
  sqcRYGate(q, 0.34199401466059837, 2);
  sqcRZGate(q, 1.0864154733578926, 2);
  sqcRYGate(q, 1.260352310696657, 3);
  sqcRZGate(q, 0.8368937467314694, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9388799882465257, 0);
  sqcRZGate(q, 2.455674342820939, 0);
  sqcRYGate(q, 0.7244747850188952, 1);
  sqcRZGate(q, -2.129247490011565, 1);
  sqcRYGate(q, 1.6011182089744096, 2);
  sqcRZGate(q, -3.0297523801224218, 2);
  sqcRYGate(q, 2.142222502931757, 3);
  sqcRZGate(q, 2.984254620479536, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.14424468035494797, 0);
  sqcRZGate(q, 1.6457710931595937, 0);
  sqcRYGate(q, 2.3826916127569286, 1);
  sqcRZGate(q, 2.428687619244514, 1);
  sqcRYGate(q, 1.8939097672876046, 2);
  sqcRZGate(q, 2.3071784784818385, 2);
  sqcRYGate(q, -2.1595748428342225, 3);
  sqcRZGate(q, -3.077125993016581, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7293003400025295, 0);
  sqcRZGate(q, -2.988865894274115, 0);
  sqcRYGate(q, -1.6494519953820435, 1);
  sqcRZGate(q, -3.0270429378690737, 1);
  sqcRYGate(q, 0.9112848479973076, 2);
  sqcRZGate(q, -2.4666861200216292, 2);
  sqcRYGate(q, 1.3764661011728678, 3);
  sqcRZGate(q, 1.7362789156658232, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.6380197403302217, 0);
  sqcRZGate(q, -1.7203930692345293, 0);
  sqcRYGate(q, -1.7828457296153521, 1);
  sqcRZGate(q, -0.5435535529776865, 1);
  sqcRYGate(q, 1.418392656165964, 2);
  sqcRZGate(q, 2.4184911004341334, 2);
  sqcRYGate(q, -2.9236947660221326, 3);
  sqcRZGate(q, 3.075565508021317, 3);

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
