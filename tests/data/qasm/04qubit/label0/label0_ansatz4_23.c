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

  sqcRYGate(q, 0.07706603300176072, 0);
  sqcRZGate(q, -1.3722275882896136, 0);
  sqcRYGate(q, -0.6605317456083962, 1);
  sqcRZGate(q, -0.5082324916146069, 1);
  sqcRYGate(q, 1.6768552661272222, 2);
  sqcRZGate(q, -1.8652432463841124, 2);
  sqcRYGate(q, -0.11000825346746801, 3);
  sqcRZGate(q, 0.45944324160291394, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.9537727913045613, 0);
  sqcRZGate(q, -2.028361014993998, 0);
  sqcRYGate(q, 3.088751394632559, 1);
  sqcRZGate(q, -1.2085518461565803, 1);
  sqcRYGate(q, 0.04356545372092224, 2);
  sqcRZGate(q, 1.6054230559112432, 2);
  sqcRYGate(q, -0.20319263866489176, 3);
  sqcRZGate(q, 0.5517094930662299, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.020595095504026162, 0);
  sqcRZGate(q, -2.9881447642390655, 0);
  sqcRYGate(q, -3.0337968723226645, 1);
  sqcRZGate(q, 3.0823852652128485, 1);
  sqcRYGate(q, 2.121648662911311, 2);
  sqcRZGate(q, 0.2646072519519231, 2);
  sqcRYGate(q, -1.699990260562726, 3);
  sqcRZGate(q, 0.6562792349463634, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1852106677262797, 0);
  sqcRZGate(q, -0.6482152837287652, 0);
  sqcRYGate(q, -1.7950538571745414, 1);
  sqcRZGate(q, 0.2394000169745449, 1);
  sqcRYGate(q, 0.9468145201140663, 2);
  sqcRZGate(q, -3.0872900083331127, 2);
  sqcRYGate(q, 2.56310897499777, 3);
  sqcRZGate(q, -2.029164254768328, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7514908707761633, 0);
  sqcRZGate(q, -1.2267312841283002, 0);
  sqcRYGate(q, 0.2559688936943071, 1);
  sqcRZGate(q, -0.7219296708696001, 1);
  sqcRYGate(q, 2.3313606232706072, 2);
  sqcRZGate(q, -1.6439141878144368, 2);
  sqcRYGate(q, -2.981333503872088, 3);
  sqcRZGate(q, 2.607287481564252, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3882033758387378, 0);
  sqcRZGate(q, -1.1324398667296816, 0);
  sqcRYGate(q, -2.795254213460224, 1);
  sqcRZGate(q, -0.6433683106987544, 1);
  sqcRYGate(q, 2.620380619478088, 2);
  sqcRZGate(q, -0.9647560243322829, 2);
  sqcRYGate(q, -0.9518781725929168, 3);
  sqcRZGate(q, 1.6949752343909399, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.2857452386914408, 0);
  sqcRZGate(q, 2.684195652553304, 0);
  sqcRYGate(q, 0.21980577263733547, 1);
  sqcRZGate(q, -0.19448828301746493, 1);
  sqcRYGate(q, -3.126695795589259, 2);
  sqcRZGate(q, 0.2987463099635024, 2);
  sqcRYGate(q, 0.44389318741188877, 3);
  sqcRZGate(q, 2.037272751578028, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.8151458776543246, 0);
  sqcRZGate(q, -1.5404328531627147, 0);
  sqcRYGate(q, -2.3386430758770826, 1);
  sqcRZGate(q, -2.496181513492449, 1);
  sqcRYGate(q, -0.7897616512678356, 2);
  sqcRZGate(q, -2.334607512963338, 2);
  sqcRYGate(q, -0.06830914374049858, 3);
  sqcRZGate(q, -1.2252224978569135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.208739250837992, 0);
  sqcRZGate(q, 1.4065043511922561, 0);
  sqcRYGate(q, 2.733196273019639, 1);
  sqcRZGate(q, 1.944908062846661, 1);
  sqcRYGate(q, 0.7295281379455263, 2);
  sqcRZGate(q, 2.2873756774756564, 2);
  sqcRYGate(q, -0.13791049384453857, 3);
  sqcRZGate(q, -1.9264049250902122, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.1730037451350888, 0);
  sqcRZGate(q, -0.2142419503780211, 0);
  sqcRYGate(q, 0.8604489868626891, 1);
  sqcRZGate(q, -0.7480093804520824, 1);
  sqcRYGate(q, 1.7262348437903394, 2);
  sqcRZGate(q, -3.0088353736692444, 2);
  sqcRYGate(q, -1.3209330765386955, 3);
  sqcRZGate(q, 1.9921763202184657, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8472382039635259, 0);
  sqcRZGate(q, 2.444169757121615, 0);
  sqcRYGate(q, 1.361324560389306, 1);
  sqcRZGate(q, -1.4341147016646252, 1);
  sqcRYGate(q, -0.7436047785755633, 2);
  sqcRZGate(q, 1.827699181419903, 2);
  sqcRYGate(q, 3.0702504962482666, 3);
  sqcRZGate(q, -1.8027546986828327, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.9020453959553284, 0);
  sqcRZGate(q, -2.357275903585971, 0);
  sqcRYGate(q, -0.6174461157638085, 1);
  sqcRZGate(q, 2.96690053666081, 1);
  sqcRYGate(q, 1.6182838052561896, 2);
  sqcRZGate(q, -0.6699921417718748, 2);
  sqcRYGate(q, -2.182597633730047, 3);
  sqcRZGate(q, 0.8906534382965495, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4576864911768785, 0);
  sqcRZGate(q, -2.658742409887063, 0);
  sqcRYGate(q, -1.975461629461063, 1);
  sqcRZGate(q, -1.3563407593534318, 1);
  sqcRYGate(q, 1.1152265223888655, 2);
  sqcRZGate(q, 0.2841251106098439, 2);
  sqcRYGate(q, 1.6942348359010602, 3);
  sqcRZGate(q, -2.0374165668243496, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4951140758446986, 0);
  sqcRZGate(q, -1.929527299282893, 0);
  sqcRYGate(q, -1.9774420361825227, 1);
  sqcRZGate(q, 2.6921156350603392, 1);
  sqcRYGate(q, -2.6720537440677945, 2);
  sqcRZGate(q, 0.2804309411679382, 2);
  sqcRYGate(q, 0.09787600456976767, 3);
  sqcRZGate(q, -1.4982521255114571, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.06649261875476588, 0);
  sqcRZGate(q, -2.398546001267725, 0);
  sqcRYGate(q, 1.3106171126391084, 1);
  sqcRZGate(q, 2.328818967652565, 1);
  sqcRYGate(q, -0.4153984755112825, 2);
  sqcRZGate(q, 2.272186997008532, 2);
  sqcRYGate(q, -1.7564011897202163, 3);
  sqcRZGate(q, 0.8818939438525755, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.8111337389116553, 0);
  sqcRZGate(q, -0.8410240255351403, 0);
  sqcRYGate(q, -2.9701035031782403, 1);
  sqcRZGate(q, 1.9281048849857423, 1);
  sqcRYGate(q, 2.194870690733109, 2);
  sqcRZGate(q, -0.4745106910009611, 2);
  sqcRYGate(q, 2.288978611118101, 3);
  sqcRZGate(q, -2.6777119375463387, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.02513752537386, 0);
  sqcRZGate(q, -2.150551397157108, 0);
  sqcRYGate(q, -1.0555379746931788, 1);
  sqcRZGate(q, 0.10286672393064748, 1);
  sqcRYGate(q, 2.6540298649394884, 2);
  sqcRZGate(q, -2.648839675330691, 2);
  sqcRYGate(q, -0.013330998538343406, 3);
  sqcRZGate(q, 1.5818420635003312, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3824711139023105, 0);
  sqcRZGate(q, -2.6114956329041554, 0);
  sqcRYGate(q, 2.363735831392401, 1);
  sqcRZGate(q, -0.30506008237975824, 1);
  sqcRYGate(q, -1.8293099817281888, 2);
  sqcRZGate(q, 2.1967005399644073, 2);
  sqcRYGate(q, -1.2305193048160024, 3);
  sqcRZGate(q, -1.766919309632212, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.067958557889064, 0);
  sqcRZGate(q, -0.1715823217434398, 0);
  sqcRYGate(q, -2.744828930405064, 1);
  sqcRZGate(q, 2.6273759641460153, 1);
  sqcRYGate(q, 1.9395842348819265, 2);
  sqcRZGate(q, 0.1511632666324799, 2);
  sqcRYGate(q, 2.6038548895980167, 3);
  sqcRZGate(q, -0.3910127873144215, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.8350262465506022, 0);
  sqcRZGate(q, 0.5135256566267578, 0);
  sqcRYGate(q, -0.39765880120566743, 1);
  sqcRZGate(q, -1.1754587168922497, 1);
  sqcRYGate(q, -2.661750410113421, 2);
  sqcRZGate(q, -2.971497202421276, 2);
  sqcRYGate(q, 2.2818309303493463, 3);
  sqcRZGate(q, -3.037651698498541, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.31996852828636785, 0);
  sqcRZGate(q, -0.4959063545306561, 0);
  sqcRYGate(q, 2.1321712290775032, 1);
  sqcRZGate(q, 0.5429985334263258, 1);
  sqcRYGate(q, 0.3211566066407777, 2);
  sqcRZGate(q, -3.0271010580945887, 2);
  sqcRYGate(q, 0.8873235190928845, 3);
  sqcRZGate(q, -1.2534185306044376, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.049714328657278, 0);
  sqcRZGate(q, 2.150012497293803, 0);
  sqcRYGate(q, -2.5004524711333738, 1);
  sqcRZGate(q, -2.7442136758632065, 1);
  sqcRYGate(q, -0.8319840589079579, 2);
  sqcRZGate(q, 0.001155115658082752, 2);
  sqcRYGate(q, 2.9800417691106484, 3);
  sqcRZGate(q, -2.1645233034244002, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.5433268778437266, 0);
  sqcRZGate(q, 2.440762037867248, 0);
  sqcRYGate(q, 0.9939638872294787, 1);
  sqcRZGate(q, -1.420656939636415, 1);
  sqcRYGate(q, -1.0140798796166894, 2);
  sqcRZGate(q, -2.8480596356658094, 2);
  sqcRYGate(q, 0.36464634128202, 3);
  sqcRZGate(q, -2.456355643104426, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.18402602566661577, 0);
  sqcRZGate(q, 1.3258499361821923, 0);
  sqcRYGate(q, -0.9019112490487645, 1);
  sqcRZGate(q, 0.9910313032590646, 1);
  sqcRYGate(q, -1.813536455829464, 2);
  sqcRZGate(q, -2.8189281487473736, 2);
  sqcRYGate(q, -2.9764927534548544, 3);
  sqcRZGate(q, 0.8562907230536155, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6982419084367735, 0);
  sqcRZGate(q, -2.6124763045325348, 0);
  sqcRYGate(q, -1.3276149126471652, 1);
  sqcRZGate(q, -2.7267326206545417, 1);
  sqcRYGate(q, 0.7029113227412421, 2);
  sqcRZGate(q, -1.7900298173204428, 2);
  sqcRYGate(q, -0.8941706914028806, 3);
  sqcRZGate(q, 1.2520007089068337, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.655515503391673, 0);
  sqcRZGate(q, 0.8380612879553624, 0);
  sqcRYGate(q, -2.9149305860648567, 1);
  sqcRZGate(q, 1.4917039294116794, 1);
  sqcRYGate(q, 1.4646053807706643, 2);
  sqcRZGate(q, 1.6062577889929939, 2);
  sqcRYGate(q, -1.6641640960552735, 3);
  sqcRZGate(q, 2.0840878248250796, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2524170953613867, 0);
  sqcRZGate(q, -2.147123531083482, 0);
  sqcRYGate(q, -1.5331458343647573, 1);
  sqcRZGate(q, 0.6325912033001861, 1);
  sqcRYGate(q, 1.287558573796899, 2);
  sqcRZGate(q, -2.4892257578060444, 2);
  sqcRYGate(q, 2.9685440305630655, 3);
  sqcRZGate(q, -2.3539697029001583, 3);

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
