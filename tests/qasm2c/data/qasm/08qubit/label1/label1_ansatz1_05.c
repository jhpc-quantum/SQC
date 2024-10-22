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

  sqcRYGate(q, -2.9884506266696977, 0);
  sqcRZGate(q, -0.8322957891551327, 0);
  sqcRYGate(q, 2.6008858738395526, 1);
  sqcRZGate(q, 1.1182258224487138, 1);
  sqcRYGate(q, 1.6831278397644391, 2);
  sqcRZGate(q, -2.0945669200782913, 2);
  sqcRYGate(q, 3.0593536647824786, 3);
  sqcRZGate(q, -2.2833420532950326, 3);
  sqcRYGate(q, 0.9206757584419388, 4);
  sqcRZGate(q, 2.523996492330213, 4);
  sqcRYGate(q, 1.4346935781135715, 5);
  sqcRZGate(q, 2.7448894770034777, 5);
  sqcRYGate(q, 0.1916000508079554, 6);
  sqcRZGate(q, 0.8893524525783816, 6);
  sqcRYGate(q, 2.850336990434622, 7);
  sqcRZGate(q, 0.1852075114991242, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.38724451681561817, 0);
  sqcRZGate(q, 1.8870603794516125, 0);
  sqcRYGate(q, 0.2074768059400468, 1);
  sqcRZGate(q, -2.5043868657302752, 1);
  sqcRYGate(q, 0.8611754618445158, 2);
  sqcRZGate(q, 1.888233892789213, 2);
  sqcRYGate(q, 1.6091092550919484, 3);
  sqcRZGate(q, -3.0893755137677297, 3);
  sqcRYGate(q, -1.8167362152695574, 4);
  sqcRZGate(q, 1.3973560939050849, 4);
  sqcRYGate(q, 2.0058640289743863, 5);
  sqcRZGate(q, 2.3015572465323055, 5);
  sqcRYGate(q, -0.6972080287253013, 6);
  sqcRZGate(q, 0.21543147939829765, 6);
  sqcRYGate(q, -2.837341683702583, 7);
  sqcRZGate(q, 0.43139355963117804, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7367515716034307, 0);
  sqcRZGate(q, -1.3306872475618885, 0);
  sqcRYGate(q, 2.099845885028577, 1);
  sqcRZGate(q, -1.8703454991534272, 1);
  sqcRYGate(q, 1.762171231566753, 2);
  sqcRZGate(q, -0.6384397581472891, 2);
  sqcRYGate(q, -0.6288853355501063, 3);
  sqcRZGate(q, 2.2431958309971742, 3);
  sqcRYGate(q, -0.06649996968172367, 4);
  sqcRZGate(q, -2.851232783002396, 4);
  sqcRYGate(q, 1.5607270393780337, 5);
  sqcRZGate(q, 1.8812409863798036, 5);
  sqcRYGate(q, -2.6826287006067586, 6);
  sqcRZGate(q, -2.9244730061420143, 6);
  sqcRYGate(q, -0.0838843994239379, 7);
  sqcRZGate(q, 0.9289524237801553, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.643407681187286, 0);
  sqcRZGate(q, 1.257125676702552, 0);
  sqcRYGate(q, 1.6513390360642601, 1);
  sqcRZGate(q, -3.085918987143217, 1);
  sqcRYGate(q, 2.7106048721798888, 2);
  sqcRZGate(q, -1.5096016632414384, 2);
  sqcRYGate(q, 1.8064514134435283, 3);
  sqcRZGate(q, 1.6479954029214678, 3);
  sqcRYGate(q, -2.993429708572848, 4);
  sqcRZGate(q, 0.6554013599525649, 4);
  sqcRYGate(q, 0.1838665317291479, 5);
  sqcRZGate(q, 1.507985371699313, 5);
  sqcRYGate(q, -0.8116883746156613, 6);
  sqcRZGate(q, -2.0078001636774756, 6);
  sqcRYGate(q, -1.3412091406591113, 7);
  sqcRZGate(q, -0.1867038311522089, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.071041374289197, 0);
  sqcRZGate(q, 2.72931525364192, 0);
  sqcRYGate(q, -2.304052956723125, 1);
  sqcRZGate(q, -2.9113435909548886, 1);
  sqcRYGate(q, -0.04456001318715471, 2);
  sqcRZGate(q, -2.2034639057799343, 2);
  sqcRYGate(q, 2.169596790047191, 3);
  sqcRZGate(q, -1.0233365544821318, 3);
  sqcRYGate(q, -1.4581918296037213, 4);
  sqcRZGate(q, 0.3297704771108779, 4);
  sqcRYGate(q, -1.0156507641362822, 5);
  sqcRZGate(q, 3.0186599854031084, 5);
  sqcRYGate(q, -3.1043729493163155, 6);
  sqcRZGate(q, 1.4497920226146903, 6);
  sqcRYGate(q, 1.9990797011691472, 7);
  sqcRZGate(q, 1.9869410235647147, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3883323928293336, 0);
  sqcRZGate(q, -1.5476976419084487, 0);
  sqcRYGate(q, 1.2557499128389678, 1);
  sqcRZGate(q, 1.6969166078513973, 1);
  sqcRYGate(q, -2.6229452598376977, 2);
  sqcRZGate(q, 3.1333198515381704, 2);
  sqcRYGate(q, 3.0940121113846764, 3);
  sqcRZGate(q, 1.6331379957667238, 3);
  sqcRYGate(q, -2.979155466103562, 4);
  sqcRZGate(q, 2.6401451496598423, 4);
  sqcRYGate(q, -1.5787486148124001, 5);
  sqcRZGate(q, 1.6130782803433996, 5);
  sqcRYGate(q, 0.1745130448764114, 6);
  sqcRZGate(q, -3.011889112428863, 6);
  sqcRYGate(q, 2.0435836240408296, 7);
  sqcRZGate(q, -1.356685132692676, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2857048035646064, 0);
  sqcRZGate(q, -2.7644720462080414, 0);
  sqcRYGate(q, 0.060375641879123955, 1);
  sqcRZGate(q, -2.9163526676535634, 1);
  sqcRYGate(q, 1.7771502017816978, 2);
  sqcRZGate(q, -3.054973919255039, 2);
  sqcRYGate(q, -2.939785150745595, 3);
  sqcRZGate(q, -1.0453554759518728, 3);
  sqcRYGate(q, -2.178664420577615, 4);
  sqcRZGate(q, -1.167546274052965, 4);
  sqcRYGate(q, 1.5750593961236352, 5);
  sqcRZGate(q, 2.5154684249295083, 5);
  sqcRYGate(q, -1.5912034930384624, 6);
  sqcRZGate(q, -1.5872339812442882, 6);
  sqcRYGate(q, 2.2829613987057855, 7);
  sqcRZGate(q, -0.899915651458514, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1283800811441722, 0);
  sqcRZGate(q, -3.0457587437825726, 0);
  sqcRYGate(q, 2.8994291331060897, 1);
  sqcRZGate(q, 0.5031129688060423, 1);
  sqcRYGate(q, 0.4686868879395041, 2);
  sqcRZGate(q, -0.9616529343727799, 2);
  sqcRYGate(q, -3.095484752916456, 3);
  sqcRZGate(q, 1.2760896076774575, 3);
  sqcRYGate(q, -3.11855471746453, 4);
  sqcRZGate(q, 1.046868302599285, 4);
  sqcRYGate(q, 0.006701162078842695, 5);
  sqcRZGate(q, 0.23619703365129305, 5);
  sqcRYGate(q, -2.9390481729253044, 6);
  sqcRZGate(q, -0.0222897628571852, 6);
  sqcRYGate(q, -1.5486914756022405, 7);
  sqcRZGate(q, 1.5763398556472255, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5701210139691613, 0);
  sqcRZGate(q, 2.9946704266353206, 0);
  sqcRYGate(q, 1.6675561446846803, 1);
  sqcRZGate(q, 2.7736457294907066, 1);
  sqcRYGate(q, 0.29233120543077895, 2);
  sqcRZGate(q, 0.566151388337734, 2);
  sqcRYGate(q, 1.8655817764865734, 3);
  sqcRZGate(q, -0.626433453730704, 3);
  sqcRYGate(q, 0.963070015523317, 4);
  sqcRZGate(q, 2.4648446275814955, 4);
  sqcRYGate(q, -3.1161418572206223, 5);
  sqcRZGate(q, -2.5495877682855435, 5);
  sqcRYGate(q, 1.559953740891232, 6);
  sqcRZGate(q, 1.0598488128173065, 6);
  sqcRYGate(q, 1.5551871332825833, 7);
  sqcRZGate(q, 1.037159666949612, 7);

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
