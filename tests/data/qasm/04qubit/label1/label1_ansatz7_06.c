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

  sqcRYGate(q, -1.57481331730117, 0);
  sqcRYGate(q, 2.063959051908787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9592728200497485, 0);
  sqcRYGate(q, 0.0021072276884863683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1836653209059147, 0);
  sqcRYGate(q, 2.542570356102102, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4556939479366195, 0);
  sqcRYGate(q, -0.8931004223578042, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.170283467974201, 0);
  sqcRYGate(q, -0.2807494065176357, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5675558108172931, 0);
  sqcRYGate(q, -0.8858211825653896, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.055790427800542, 1);
  sqcRYGate(q, 2.1194298015997237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3190691888831747, 1);
  sqcRYGate(q, -3.0692520232794123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0050560520499756, 1);
  sqcRYGate(q, 0.3072637125823361, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3962396743657326, 1);
  sqcRYGate(q, -2.204713349789129, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.832158049971823, 2);
  sqcRYGate(q, 0.9322378606091162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5709588901772853, 2);
  sqcRYGate(q, 0.7316436953320451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3214088053084794, 0);
  sqcRYGate(q, 3.0003479012570593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6456018670024339, 0);
  sqcRYGate(q, 1.7734708267479853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2574068001589858, 0);
  sqcRYGate(q, -1.1122282978573108, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1063651424412924, 0);
  sqcRYGate(q, -1.2704082251758655, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5310948391107387, 0);
  sqcRYGate(q, -1.8599679192616778, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.32453548693095, 0);
  sqcRYGate(q, 1.7182617822893564, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1813983715793681, 1);
  sqcRYGate(q, 2.3083294177288853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.433545027998618, 1);
  sqcRYGate(q, -1.2963094798556638, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9323546546017307, 1);
  sqcRYGate(q, -0.033443941393368704, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1892523128780006, 1);
  sqcRYGate(q, -2.994982545084801, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4801905738820138, 2);
  sqcRYGate(q, 2.4015243764974037, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1910593369791469, 2);
  sqcRYGate(q, 1.1120815242104873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8900840400612196, 0);
  sqcRYGate(q, -0.31953139458676627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.75606144749126, 0);
  sqcRYGate(q, -0.09525476980949232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7895992537419784, 0);
  sqcRYGate(q, 0.0018069142086254465, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.332725780564762, 0);
  sqcRYGate(q, 0.12843088095155167, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1672498607717277, 0);
  sqcRYGate(q, 2.0406971697140723, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8420372171009253, 0);
  sqcRYGate(q, 2.978691781243393, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.18423596688740018, 1);
  sqcRYGate(q, -1.41113847596446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5392927281745736, 1);
  sqcRYGate(q, 1.2006218330490064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.48341196824181465, 1);
  sqcRYGate(q, 0.6550680896777185, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.978047288530077, 1);
  sqcRYGate(q, -2.684272723153172, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4278694613430236, 2);
  sqcRYGate(q, -2.676402182078217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8989967160539019, 2);
  sqcRYGate(q, 1.5661408666490884, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.156694853651076, 0);
  sqcRYGate(q, -2.407960664854798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3304447711354674, 0);
  sqcRYGate(q, 2.764914822244999, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.636681944355007, 0);
  sqcRYGate(q, -2.597041849022516, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7296385489099748, 0);
  sqcRYGate(q, -0.6809072440838986, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2963469463685451, 0);
  sqcRYGate(q, -2.872737592370178, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.058806581283669, 0);
  sqcRYGate(q, 2.646962460270119, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8759324590718911, 1);
  sqcRYGate(q, 2.763583919376876, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2774374981850694, 1);
  sqcRYGate(q, -0.636714330563832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.240660609640112, 1);
  sqcRYGate(q, 1.0149626852166422, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2782412203571383, 1);
  sqcRYGate(q, 0.6356602048600896, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4383197621172146, 2);
  sqcRYGate(q, -1.3918313018457122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2805370392138924, 2);
  sqcRYGate(q, -0.5143300963941941, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2810664523666275, 0);
  sqcRYGate(q, 0.6723851721471528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3766379420373294, 0);
  sqcRYGate(q, 1.5627784812293717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9389370390028557, 0);
  sqcRYGate(q, 0.3849976658400553, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3532585000525895, 0);
  sqcRYGate(q, -0.2532162306160867, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.940895374568862, 0);
  sqcRYGate(q, 1.5406419787791057, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.881367776434355, 0);
  sqcRYGate(q, -0.4493342779722171, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5481697509374804, 1);
  sqcRYGate(q, 2.311359877859331, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.281737715332201, 1);
  sqcRYGate(q, 1.6358501510564585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.875092975509494, 1);
  sqcRYGate(q, -0.21679638803651358, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5827228767224056, 1);
  sqcRYGate(q, 2.6939039700354743, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4320613944322675, 2);
  sqcRYGate(q, 0.9443043042970584, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3445981353777423, 2);
  sqcRYGate(q, -1.8477559953720704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.330390520297125, 0);
  sqcRYGate(q, 2.9069999504807478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.759738210645775, 0);
  sqcRYGate(q, -1.7115883440021165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.45347175872304873, 0);
  sqcRYGate(q, -1.296678569556084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4619511239828498, 0);
  sqcRYGate(q, 0.336247783442861, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6247789565918422, 0);
  sqcRYGate(q, -1.4934890110057948, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0770994810993546, 0);
  sqcRYGate(q, -0.10012249150861408, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4425448417410327, 1);
  sqcRYGate(q, -1.137644573739858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9295122484633254, 1);
  sqcRYGate(q, -3.138222200207898, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.22787137416331849, 1);
  sqcRYGate(q, 2.7486140645136583, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3521043490234095, 1);
  sqcRYGate(q, 0.11640012101383218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.652845861091155, 2);
  sqcRYGate(q, 3.080348076206804, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.047955432138978, 2);
  sqcRYGate(q, -0.07135162797166678, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9166672000425875, 0);
  sqcRYGate(q, 0.743590317564525, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.40817463253385977, 0);
  sqcRYGate(q, -0.019937037670181106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.102205768342155, 0);
  sqcRYGate(q, -1.73154016666677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.0946682824260696, 0);
  sqcRYGate(q, 0.1664518099953194, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5894290047313725, 0);
  sqcRYGate(q, -3.068371578927501, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.261965131155058, 0);
  sqcRYGate(q, -2.053245708919124, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2141573767548643, 1);
  sqcRYGate(q, -2.521204278717597, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3218182332304842, 1);
  sqcRYGate(q, 1.1212026726444417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8550406809683933, 1);
  sqcRYGate(q, -1.6295485347801595, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.470177170416371, 1);
  sqcRYGate(q, -2.5977574960454564, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5356012549495601, 2);
  sqcRYGate(q, -2.045024076621361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2272989269791301, 2);
  sqcRYGate(q, 1.5076219216122562, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5793439726929817, 0);
  sqcRYGate(q, 0.9821734774659778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1713325976577609, 0);
  sqcRYGate(q, -2.6656375112521973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.116395450508496, 0);
  sqcRYGate(q, 0.41597538340822143, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.01612179275103595, 0);
  sqcRYGate(q, 0.9855487220819296, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.42995243096500424, 0);
  sqcRYGate(q, -0.33528907389673185, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5963776127008678, 0);
  sqcRYGate(q, -1.8106710924852853, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5610709799924178, 1);
  sqcRYGate(q, -2.7953989383451123, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5122649385216484, 1);
  sqcRYGate(q, 1.9366254001023162, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4808065456358293, 1);
  sqcRYGate(q, 0.13746902296850028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.620785118148024, 1);
  sqcRYGate(q, -0.27553684296970365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9042547618366594, 2);
  sqcRYGate(q, 2.2793488802930137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4282452742816976, 2);
  sqcRYGate(q, -1.0221904441111302, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6445026648270242, 0);
  sqcRYGate(q, 1.375769496776086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2920410171799568, 0);
  sqcRYGate(q, -2.6985035720534087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5702459041010753, 0);
  sqcRYGate(q, 0.4649424932859318, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6182718587156595, 0);
  sqcRYGate(q, -1.2114220984109636, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3606670049095664, 0);
  sqcRYGate(q, -0.3586591635393557, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.788940695988642, 0);
  sqcRYGate(q, -1.2813751249413503, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7702005741632434, 1);
  sqcRYGate(q, -2.6843088194902585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.299945199662733, 1);
  sqcRYGate(q, -3.0909121712008543, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.146818513017161, 1);
  sqcRYGate(q, 2.6929605930984137, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.44812608447502456, 1);
  sqcRYGate(q, 1.270988515065964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.030279108322152, 2);
  sqcRYGate(q, 2.8332817725328288, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2869472174117482, 2);
  sqcRYGate(q, 3.094294932742258, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1562057319754449, 0);
  sqcRYGate(q, -0.11566468832803611, 1);
  sqcRYGate(q, -1.2277930733847269, 2);
  sqcRYGate(q, 1.3754040697187753, 3);

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
