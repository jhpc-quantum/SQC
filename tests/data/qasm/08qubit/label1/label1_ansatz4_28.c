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

  sqcRYGate(q, 2.8902496354438902, 0);
  sqcRZGate(q, 0.253560700655344, 0);
  sqcRYGate(q, 1.3116944482461954, 1);
  sqcRZGate(q, -0.8484093009689938, 1);
  sqcRYGate(q, 0.9752751532640445, 2);
  sqcRZGate(q, 1.8936976532114276, 2);
  sqcRYGate(q, -2.8473305629242516, 3);
  sqcRZGate(q, 1.032542983082749, 3);
  sqcRYGate(q, 1.321662966163154, 4);
  sqcRZGate(q, 0.13069061629843406, 4);
  sqcRYGate(q, 2.4611432778118756, 5);
  sqcRZGate(q, -0.20829276790370263, 5);
  sqcRYGate(q, -0.9621519997367854, 6);
  sqcRZGate(q, -0.2068686654723491, 6);
  sqcRYGate(q, -2.75280971874925, 7);
  sqcRZGate(q, -2.0421622646148996, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.750115520222181, 0);
  sqcRZGate(q, 0.4231233927350522, 0);
  sqcRYGate(q, 2.200186833142143, 1);
  sqcRZGate(q, 2.4777951325276018, 1);
  sqcRYGate(q, -2.0070206223722717, 2);
  sqcRZGate(q, 1.583359990534156, 2);
  sqcRYGate(q, 0.2182835508262424, 3);
  sqcRZGate(q, -3.0021413260578567, 3);
  sqcRYGate(q, 2.0978989799808625, 4);
  sqcRZGate(q, -2.0509176383177987, 4);
  sqcRYGate(q, -0.08464903672109614, 5);
  sqcRZGate(q, 2.433082973741146, 5);
  sqcRYGate(q, 0.28797473176652605, 6);
  sqcRZGate(q, -0.32590209162208517, 6);
  sqcRYGate(q, -2.6767748250239514, 7);
  sqcRZGate(q, 0.1645479332396693, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1036842861235625, 0);
  sqcRZGate(q, 1.6819548421039803, 0);
  sqcRYGate(q, -1.861051624247239, 1);
  sqcRZGate(q, 1.373245749691152, 1);
  sqcRYGate(q, -1.2849829640554133, 2);
  sqcRZGate(q, -0.8519514350492585, 2);
  sqcRYGate(q, -1.4814232478617115, 3);
  sqcRZGate(q, 0.09675077950861326, 3);
  sqcRYGate(q, 3.082985146589769, 4);
  sqcRZGate(q, -0.27735471388399585, 4);
  sqcRYGate(q, -1.677071202684135, 5);
  sqcRZGate(q, 1.991925949149581, 5);
  sqcRYGate(q, -2.8410930756166692, 6);
  sqcRZGate(q, 1.0202695406504474, 6);
  sqcRYGate(q, 1.4389520164508536, 7);
  sqcRZGate(q, -0.5420496125285671, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.33621028772771044, 0);
  sqcRZGate(q, 2.6953801322739084, 0);
  sqcRYGate(q, -1.7802287300627242, 1);
  sqcRZGate(q, -0.26024565316546605, 1);
  sqcRYGate(q, 2.8978561419858617, 2);
  sqcRZGate(q, 0.19239310660797657, 2);
  sqcRYGate(q, 0.973951671962604, 3);
  sqcRZGate(q, -2.1377766733954897, 3);
  sqcRYGate(q, -1.5338365902506697, 4);
  sqcRZGate(q, -0.5833475832041745, 4);
  sqcRYGate(q, -1.5687348399691194, 5);
  sqcRZGate(q, 1.171144673910868, 5);
  sqcRYGate(q, -0.3845146616696979, 6);
  sqcRZGate(q, -0.9690326914800571, 6);
  sqcRYGate(q, 0.5005206794986954, 7);
  sqcRZGate(q, -0.9078492920268291, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4939099906094305, 0);
  sqcRZGate(q, 2.15161157969209, 0);
  sqcRYGate(q, -1.9708570502411127, 1);
  sqcRZGate(q, 1.904600828237493, 1);
  sqcRYGate(q, 2.8086274059595633, 2);
  sqcRZGate(q, 1.5518539430494678, 2);
  sqcRYGate(q, 1.7126142724467854, 3);
  sqcRZGate(q, -2.0152267071954033, 3);
  sqcRYGate(q, -0.3502953391070586, 4);
  sqcRZGate(q, 2.390293778958125, 4);
  sqcRYGate(q, -0.2997377522997198, 5);
  sqcRZGate(q, 1.014655945960902, 5);
  sqcRYGate(q, 0.3000933420939792, 6);
  sqcRZGate(q, -2.218908448649934, 6);
  sqcRYGate(q, 1.9914962718185194, 7);
  sqcRZGate(q, -1.3034324430846616, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.5581140891301022, 0);
  sqcRZGate(q, 0.031661498401263095, 0);
  sqcRYGate(q, -1.90733465286971, 1);
  sqcRZGate(q, -0.4591476796751808, 1);
  sqcRYGate(q, -2.32446384634744, 2);
  sqcRZGate(q, -1.8082524482090367, 2);
  sqcRYGate(q, -2.513218281925564, 3);
  sqcRZGate(q, -0.6677266323732165, 3);
  sqcRYGate(q, 2.565760445444989, 4);
  sqcRZGate(q, 0.9054560106596936, 4);
  sqcRYGate(q, 1.892353219563769, 5);
  sqcRZGate(q, -1.5992412991307867, 5);
  sqcRYGate(q, 1.7474524522034904, 6);
  sqcRZGate(q, -2.6084799857356624, 6);
  sqcRYGate(q, -0.1823271441252965, 7);
  sqcRZGate(q, 1.3088862464938527, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.384023033311433, 0);
  sqcRZGate(q, 2.638283019998353, 0);
  sqcRYGate(q, -1.480121471261536, 1);
  sqcRZGate(q, -2.321002486331194, 1);
  sqcRYGate(q, -0.5729002572705703, 2);
  sqcRZGate(q, 0.9451073997951881, 2);
  sqcRYGate(q, 1.0529396123527814, 3);
  sqcRZGate(q, -1.4374552155263132, 3);
  sqcRYGate(q, -0.5336581855253639, 4);
  sqcRZGate(q, -1.224256546957995, 4);
  sqcRYGate(q, 1.4110347410918662, 5);
  sqcRZGate(q, 2.4035035225304395, 5);
  sqcRYGate(q, 1.086628709832582, 6);
  sqcRZGate(q, 3.0479705221988254, 6);
  sqcRYGate(q, 2.265765999303601, 7);
  sqcRZGate(q, -0.41468134886786423, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.174770805259426, 0);
  sqcRZGate(q, -2.9250352118733725, 0);
  sqcRYGate(q, -0.426463981818457, 1);
  sqcRZGate(q, 2.560028858718982, 1);
  sqcRYGate(q, -2.1152416757746444, 2);
  sqcRZGate(q, -1.9322625229911328, 2);
  sqcRYGate(q, -2.7719419070880633, 3);
  sqcRZGate(q, -1.463418798313971, 3);
  sqcRYGate(q, 1.406327417555527, 4);
  sqcRZGate(q, 2.7548818534696733, 4);
  sqcRYGate(q, -0.9854983159994752, 5);
  sqcRZGate(q, -1.3322000639484477, 5);
  sqcRYGate(q, -1.8715716306607666, 6);
  sqcRZGate(q, -2.1451356090443823, 6);
  sqcRYGate(q, 1.134166846635134, 7);
  sqcRZGate(q, 2.3370874113766638, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.64008355105203, 0);
  sqcRZGate(q, 1.0497386855781956, 0);
  sqcRYGate(q, 2.040485041425165, 1);
  sqcRZGate(q, 1.4006872585310404, 1);
  sqcRYGate(q, 0.9502629608585049, 2);
  sqcRZGate(q, -2.417011722948244, 2);
  sqcRYGate(q, -1.1978551534683968, 3);
  sqcRZGate(q, -0.08068789878956117, 3);
  sqcRYGate(q, 1.419862080188118, 4);
  sqcRZGate(q, -2.326700609240229, 4);
  sqcRYGate(q, 0.56101791630942, 5);
  sqcRZGate(q, 1.8218619745073705, 5);
  sqcRYGate(q, 2.087246750096267, 6);
  sqcRZGate(q, 1.1871971327837125, 6);
  sqcRYGate(q, 0.1773302540351933, 7);
  sqcRZGate(q, -1.133190647991757, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1537133008544886, 0);
  sqcRZGate(q, 0.9306689982252103, 0);
  sqcRYGate(q, 0.31582612404162447, 1);
  sqcRZGate(q, -1.3659245283031105, 1);
  sqcRYGate(q, 0.21072181528450523, 2);
  sqcRZGate(q, -2.663577008899322, 2);
  sqcRYGate(q, -1.9163004014465206, 3);
  sqcRZGate(q, 1.8901872307986611, 3);
  sqcRYGate(q, 2.385526818341679, 4);
  sqcRZGate(q, 0.4190151739321418, 4);
  sqcRYGate(q, -2.7088262444552695, 5);
  sqcRZGate(q, -0.8525843506146639, 5);
  sqcRYGate(q, -2.3039324222839865, 6);
  sqcRZGate(q, -0.17843772226230387, 6);
  sqcRYGate(q, -1.4205552912275246, 7);
  sqcRZGate(q, 0.28135017410691, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2654465100496237, 0);
  sqcRZGate(q, -1.0673107160145252, 0);
  sqcRYGate(q, 2.636948394667605, 1);
  sqcRZGate(q, -2.7655168336904765, 1);
  sqcRYGate(q, 2.880876481047433, 2);
  sqcRZGate(q, -3.0252827889294114, 2);
  sqcRYGate(q, -1.6760970961850379, 3);
  sqcRZGate(q, -2.0766296456334903, 3);
  sqcRYGate(q, -1.0107488569324312, 4);
  sqcRZGate(q, -0.9268661881750422, 4);
  sqcRYGate(q, -1.1436738954487653, 5);
  sqcRZGate(q, 2.763809936191459, 5);
  sqcRYGate(q, 0.512315680047954, 6);
  sqcRZGate(q, 1.883988262403622, 6);
  sqcRYGate(q, -1.88953588989712, 7);
  sqcRZGate(q, -2.752520739163187, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.980787981155684, 0);
  sqcRZGate(q, 2.8645825255933297, 0);
  sqcRYGate(q, 0.48379118531670423, 1);
  sqcRZGate(q, -0.3051699989100704, 1);
  sqcRYGate(q, 1.6514952842586144, 2);
  sqcRZGate(q, -1.2363634293220926, 2);
  sqcRYGate(q, -2.49515237095916, 3);
  sqcRZGate(q, 1.2955658388591367, 3);
  sqcRYGate(q, -0.4772259487713297, 4);
  sqcRZGate(q, 2.9876837325010537, 4);
  sqcRYGate(q, 2.5431460329171403, 5);
  sqcRZGate(q, -2.395149555744333, 5);
  sqcRYGate(q, 2.556046427394039, 6);
  sqcRZGate(q, 1.9502853633782449, 6);
  sqcRYGate(q, -1.335164937349575, 7);
  sqcRZGate(q, -0.15596556315605165, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6402360083617253, 0);
  sqcRZGate(q, 2.186963224412732, 0);
  sqcRYGate(q, 1.484428995666244, 1);
  sqcRZGate(q, -0.9683646777515373, 1);
  sqcRYGate(q, -0.6752439187078557, 2);
  sqcRZGate(q, 2.732710927648184, 2);
  sqcRYGate(q, 1.49381573905798, 3);
  sqcRZGate(q, -2.165491952655721, 3);
  sqcRYGate(q, -1.0428084022696251, 4);
  sqcRZGate(q, -1.0812261343578493, 4);
  sqcRYGate(q, -2.038586802709465, 5);
  sqcRZGate(q, -1.6973275055399057, 5);
  sqcRYGate(q, 2.943845823270105, 6);
  sqcRZGate(q, 2.61872922711763, 6);
  sqcRYGate(q, -1.4389286072557264, 7);
  sqcRZGate(q, 1.9534820991412423, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7000623996374155, 0);
  sqcRZGate(q, -2.371378396515542, 0);
  sqcRYGate(q, -3.0957276650335186, 1);
  sqcRZGate(q, 1.837238198944541, 1);
  sqcRYGate(q, -1.4582493348052212, 2);
  sqcRZGate(q, -0.30194145299145125, 2);
  sqcRYGate(q, 1.01492799022604, 3);
  sqcRZGate(q, 1.3348132078495016, 3);
  sqcRYGate(q, 0.8653204565387308, 4);
  sqcRZGate(q, 0.8547962157229431, 4);
  sqcRYGate(q, 2.109203980243404, 5);
  sqcRZGate(q, -2.9716636031700077, 5);
  sqcRYGate(q, -0.48595873555806257, 6);
  sqcRZGate(q, 0.9496964941623308, 6);
  sqcRYGate(q, -0.4560464824079729, 7);
  sqcRZGate(q, -2.883248110294383, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.768387218401049, 0);
  sqcRZGate(q, -2.397195022252556, 0);
  sqcRYGate(q, -2.1382644712051633, 1);
  sqcRZGate(q, 0.6533222587295288, 1);
  sqcRYGate(q, -2.522006571689669, 2);
  sqcRZGate(q, 0.7804222905760881, 2);
  sqcRYGate(q, -0.8229788855404201, 3);
  sqcRZGate(q, 2.4776397524215303, 3);
  sqcRYGate(q, -1.5177903464383555, 4);
  sqcRZGate(q, -0.8966151062045081, 4);
  sqcRYGate(q, -0.09682235123032658, 5);
  sqcRZGate(q, 0.8110984467594579, 5);
  sqcRYGate(q, 2.6308775718916535, 6);
  sqcRZGate(q, -1.5721328534884877, 6);
  sqcRYGate(q, 1.4805122867823362, 7);
  sqcRZGate(q, 1.7074759359364293, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7796724105242563, 0);
  sqcRZGate(q, -2.3474416147467343, 0);
  sqcRYGate(q, -2.7015966876334807, 1);
  sqcRZGate(q, 0.06252956962140949, 1);
  sqcRYGate(q, 2.1993231124726114, 2);
  sqcRZGate(q, 2.503157516975206, 2);
  sqcRYGate(q, 0.5638482682339188, 3);
  sqcRZGate(q, 1.0510809473490894, 3);
  sqcRYGate(q, 1.0044723582776847, 4);
  sqcRZGate(q, -1.8774363255142281, 4);
  sqcRYGate(q, -1.8829042758594692, 5);
  sqcRZGate(q, -0.2595500632993528, 5);
  sqcRYGate(q, 0.3141734369700238, 6);
  sqcRZGate(q, 2.358287992152472, 6);
  sqcRYGate(q, 2.820242963490307, 7);
  sqcRZGate(q, -2.905128136446738, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.928380567242812, 0);
  sqcRZGate(q, 1.681110583530903, 0);
  sqcRYGate(q, 2.3656309318788837, 1);
  sqcRZGate(q, -3.095579258954852, 1);
  sqcRYGate(q, -2.3614023026634694, 2);
  sqcRZGate(q, -1.9746696261084393, 2);
  sqcRYGate(q, -0.6299517771652122, 3);
  sqcRZGate(q, -0.5674503439047112, 3);
  sqcRYGate(q, -2.5054248844173514, 4);
  sqcRZGate(q, 2.7003164511393, 4);
  sqcRYGate(q, 1.5754009535465414, 5);
  sqcRZGate(q, 0.2693048432432263, 5);
  sqcRYGate(q, -1.9807810868483258, 6);
  sqcRZGate(q, 2.7730123216065894, 6);
  sqcRYGate(q, 0.581333177488181, 7);
  sqcRZGate(q, 1.4039814861994386, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5746659720808136, 0);
  sqcRZGate(q, -0.9393615193738682, 0);
  sqcRYGate(q, -0.13111677500504193, 1);
  sqcRZGate(q, 1.7168996033415596, 1);
  sqcRYGate(q, -2.162416147790677, 2);
  sqcRZGate(q, -1.5355112837921308, 2);
  sqcRYGate(q, 2.0716473221416036, 3);
  sqcRZGate(q, 1.1172101193660955, 3);
  sqcRYGate(q, -0.8872977925209437, 4);
  sqcRZGate(q, 3.1086807409939152, 4);
  sqcRYGate(q, -0.36268688635938334, 5);
  sqcRZGate(q, 2.024457421628326, 5);
  sqcRYGate(q, 0.9073079572934989, 6);
  sqcRZGate(q, 2.6219296463564326, 6);
  sqcRYGate(q, -1.7872839382185557, 7);
  sqcRZGate(q, 1.8466688729759162, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.3593923008771271, 0);
  sqcRZGate(q, 1.339629148955722, 0);
  sqcRYGate(q, -0.36486103277496856, 1);
  sqcRZGate(q, -0.2579682040329905, 1);
  sqcRYGate(q, -0.13027062511404774, 2);
  sqcRZGate(q, 0.8265349267204418, 2);
  sqcRYGate(q, 2.1618097848005133, 3);
  sqcRZGate(q, 1.798387037177023, 3);
  sqcRYGate(q, 0.5010808047445048, 4);
  sqcRZGate(q, -2.618135286176069, 4);
  sqcRYGate(q, 0.4679086177296323, 5);
  sqcRZGate(q, -0.9625921942980975, 5);
  sqcRYGate(q, -2.200034326415201, 6);
  sqcRZGate(q, 0.9984464780303188, 6);
  sqcRYGate(q, 0.1864744694523373, 7);
  sqcRZGate(q, -1.0432042720133772, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7831188509209293, 0);
  sqcRZGate(q, -1.9431656079755897, 0);
  sqcRYGate(q, 0.18124194099815316, 1);
  sqcRZGate(q, -1.477231217079503, 1);
  sqcRYGate(q, -2.3020008750236527, 2);
  sqcRZGate(q, 2.1111912512827384, 2);
  sqcRYGate(q, -2.1169447705175264, 3);
  sqcRZGate(q, -2.2427775061311355, 3);
  sqcRYGate(q, 2.6383897043230466, 4);
  sqcRZGate(q, 2.216101089050576, 4);
  sqcRYGate(q, 1.099746065668005, 5);
  sqcRZGate(q, -0.7172940499479586, 5);
  sqcRYGate(q, 3.128708161951197, 6);
  sqcRZGate(q, 1.1253059434627692, 6);
  sqcRYGate(q, 0.12268755593886567, 7);
  sqcRZGate(q, -0.5103712825118104, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1170944101365032, 0);
  sqcRZGate(q, 1.7459041293668687, 0);
  sqcRYGate(q, 1.4179887303190188, 1);
  sqcRZGate(q, 1.1727596151088002, 1);
  sqcRYGate(q, -0.6113720382249692, 2);
  sqcRZGate(q, 1.0631713783756982, 2);
  sqcRYGate(q, -0.7783402567991633, 3);
  sqcRZGate(q, -3.1137920753229062, 3);
  sqcRYGate(q, 0.35790015006184905, 4);
  sqcRZGate(q, 2.5629418710148824, 4);
  sqcRYGate(q, 0.5818621376852995, 5);
  sqcRZGate(q, 0.3192581685006842, 5);
  sqcRYGate(q, -2.800154064297795, 6);
  sqcRZGate(q, 2.728388138225129, 6);
  sqcRYGate(q, 0.6543186787841562, 7);
  sqcRZGate(q, 1.7835727802092027, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.346422936933105, 0);
  sqcRZGate(q, -3.111628040571861, 0);
  sqcRYGate(q, 2.5999268862439644, 1);
  sqcRZGate(q, -1.3948625619930315, 1);
  sqcRYGate(q, 1.9022404635967025, 2);
  sqcRZGate(q, 2.278378241322229, 2);
  sqcRYGate(q, -2.1619729603905156, 3);
  sqcRZGate(q, 0.9389565210199108, 3);
  sqcRYGate(q, -1.7191866685362862, 4);
  sqcRZGate(q, 0.12027011567926303, 4);
  sqcRYGate(q, 0.6944171939822557, 5);
  sqcRZGate(q, -0.47833969343636085, 5);
  sqcRYGate(q, -1.9115020262351727, 6);
  sqcRZGate(q, 1.4535738295309333, 6);
  sqcRYGate(q, 0.8128216995483669, 7);
  sqcRZGate(q, 2.5375497059960685, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.33204915313738415, 0);
  sqcRZGate(q, 1.2302151169769437, 0);
  sqcRYGate(q, -1.7012188128775083, 1);
  sqcRZGate(q, -1.9277143441632776, 1);
  sqcRYGate(q, 2.9560330154578773, 2);
  sqcRZGate(q, 0.003585845469415539, 2);
  sqcRYGate(q, -1.4243049719347676, 3);
  sqcRZGate(q, 2.907240844892457, 3);
  sqcRYGate(q, -0.055845067122146395, 4);
  sqcRZGate(q, -2.2199927993464503, 4);
  sqcRYGate(q, -0.14271003274626204, 5);
  sqcRZGate(q, 2.1121448917726426, 5);
  sqcRYGate(q, 1.3331940013485797, 6);
  sqcRZGate(q, 1.0213606375317585, 6);
  sqcRYGate(q, 0.7525586338751191, 7);
  sqcRZGate(q, -0.5318164373335249, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4238707543250617, 0);
  sqcRZGate(q, 1.054022819820012, 0);
  sqcRYGate(q, 0.31602741142431423, 1);
  sqcRZGate(q, -2.5168203435178205, 1);
  sqcRYGate(q, -2.3819036358169985, 2);
  sqcRZGate(q, -1.6797563580115529, 2);
  sqcRYGate(q, -0.9595930388712244, 3);
  sqcRZGate(q, -3.1318319532341423, 3);
  sqcRYGate(q, 0.6848655465014736, 4);
  sqcRZGate(q, 1.3390480516391863, 4);
  sqcRYGate(q, 1.0226440236465217, 5);
  sqcRZGate(q, -1.3722780274053905, 5);
  sqcRYGate(q, 1.0664456697616342, 6);
  sqcRZGate(q, -0.14881446225056796, 6);
  sqcRYGate(q, 0.34184137824686817, 7);
  sqcRZGate(q, 1.8849278386739767, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.8413521481906585, 0);
  sqcRZGate(q, 2.395249539509482, 0);
  sqcRYGate(q, 1.690564447768146, 1);
  sqcRZGate(q, 1.2046903661417725, 1);
  sqcRYGate(q, 2.6592991884878328, 2);
  sqcRZGate(q, 0.012896596477999012, 2);
  sqcRYGate(q, -1.5418231288706532, 3);
  sqcRZGate(q, -0.44329333753669786, 3);
  sqcRYGate(q, 0.16785188781924365, 4);
  sqcRZGate(q, 0.9348473838386786, 4);
  sqcRYGate(q, 2.5380400613508094, 5);
  sqcRZGate(q, -1.504257046421609, 5);
  sqcRYGate(q, -1.6772769074839815, 6);
  sqcRZGate(q, 1.330844726752156, 6);
  sqcRYGate(q, -1.9155129301463525, 7);
  sqcRZGate(q, -2.2716804406454996, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.4033612227452546, 0);
  sqcRZGate(q, 2.7888681480748923, 0);
  sqcRYGate(q, -0.16535798583372063, 1);
  sqcRZGate(q, 2.9071712026364738, 1);
  sqcRYGate(q, 1.36725169260865, 2);
  sqcRZGate(q, -0.04896029974766591, 2);
  sqcRYGate(q, -2.3704564301161866, 3);
  sqcRZGate(q, 2.9277864656293127, 3);
  sqcRYGate(q, 1.2965972506155292, 4);
  sqcRZGate(q, 1.2873901688864704, 4);
  sqcRYGate(q, 2.115154324705521, 5);
  sqcRZGate(q, 0.7690287977362287, 5);
  sqcRYGate(q, -2.3447763827440973, 6);
  sqcRZGate(q, 2.796884006321018, 6);
  sqcRYGate(q, 1.2985363176357314, 7);
  sqcRZGate(q, -2.2709093571760652, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0472666586810924, 0);
  sqcRZGate(q, -2.775425392414535, 0);
  sqcRYGate(q, -1.8830946104525204, 1);
  sqcRZGate(q, 0.47891078623245215, 1);
  sqcRYGate(q, 3.104112061196128, 2);
  sqcRZGate(q, 1.1613279380248995, 2);
  sqcRYGate(q, 2.0584151878312342, 3);
  sqcRZGate(q, 2.452515617667289, 3);
  sqcRYGate(q, -2.7471148277354853, 4);
  sqcRZGate(q, 1.7488238601713215, 4);
  sqcRYGate(q, 2.33743313613504, 5);
  sqcRZGate(q, 2.5714192638651636, 5);
  sqcRYGate(q, -0.15880318887980469, 6);
  sqcRZGate(q, 1.5604420582176326, 6);
  sqcRYGate(q, -1.8412577790742046, 7);
  sqcRZGate(q, -2.187426294605139, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2772864020588975, 0);
  sqcRZGate(q, 1.927707147289901, 0);
  sqcRYGate(q, -2.165725393973429, 1);
  sqcRZGate(q, -2.3809486917567937, 1);
  sqcRYGate(q, 1.90755937578479, 2);
  sqcRZGate(q, 0.01363868175471783, 2);
  sqcRYGate(q, -1.4566829874764118, 3);
  sqcRZGate(q, 0.8705840913179577, 3);
  sqcRYGate(q, -2.408431075540085, 4);
  sqcRZGate(q, -2.582786492834434, 4);
  sqcRYGate(q, 1.9432122282597308, 5);
  sqcRZGate(q, 0.8210993575726889, 5);
  sqcRYGate(q, 1.1520936387097411, 6);
  sqcRZGate(q, -1.4732298181767396, 6);
  sqcRYGate(q, 0.4482319386312019, 7);
  sqcRZGate(q, 1.340793966098928, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9124728356480337, 0);
  sqcRZGate(q, 1.542494761879607, 0);
  sqcRYGate(q, -0.9785722344293442, 1);
  sqcRZGate(q, 1.0386061860489262, 1);
  sqcRYGate(q, 0.6145997643340619, 2);
  sqcRZGate(q, 2.7240088029160177, 2);
  sqcRYGate(q, 0.3366191124295549, 3);
  sqcRZGate(q, 0.9252240468949808, 3);
  sqcRYGate(q, -0.6787741455906704, 4);
  sqcRZGate(q, 1.5214354877677412, 4);
  sqcRYGate(q, -1.3826562698185523, 5);
  sqcRZGate(q, -0.9452536815463793, 5);
  sqcRYGate(q, -2.9431941656406893, 6);
  sqcRZGate(q, -2.6811931953737433, 6);
  sqcRYGate(q, 2.405025221972403, 7);
  sqcRZGate(q, -0.18954781950118704, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1191484026823462, 0);
  sqcRZGate(q, -2.1060608025658007, 0);
  sqcRYGate(q, -1.1372885335108744, 1);
  sqcRZGate(q, 3.1078652440530514, 1);
  sqcRYGate(q, -0.25210801671112576, 2);
  sqcRZGate(q, -1.2917572220809825, 2);
  sqcRYGate(q, 2.0209058013652657, 3);
  sqcRZGate(q, 2.1724693935333654, 3);
  sqcRYGate(q, 0.6428810058944965, 4);
  sqcRZGate(q, 2.3398390989945606, 4);
  sqcRYGate(q, 1.2783128888445594, 5);
  sqcRZGate(q, -1.6019093124450157, 5);
  sqcRYGate(q, -2.944179527050795, 6);
  sqcRZGate(q, -1.7425925752381408, 6);
  sqcRYGate(q, -1.9530243478305513, 7);
  sqcRZGate(q, 0.18220911537597795, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8561293479067595, 0);
  sqcRZGate(q, 1.1246964256269338, 0);
  sqcRYGate(q, -2.3589312085617222, 1);
  sqcRZGate(q, -2.0582964297241846, 1);
  sqcRYGate(q, -0.35170146906705435, 2);
  sqcRZGate(q, -0.271403704352274, 2);
  sqcRYGate(q, -1.2874105649610046, 3);
  sqcRZGate(q, -2.542553014829721, 3);
  sqcRYGate(q, 0.4743869839317646, 4);
  sqcRZGate(q, -0.09729303561289603, 4);
  sqcRYGate(q, -2.758566811009593, 5);
  sqcRZGate(q, -0.7385723672543874, 5);
  sqcRYGate(q, -1.4421256759390477, 6);
  sqcRZGate(q, 1.264452482039074, 6);
  sqcRYGate(q, -2.524678535434925, 7);
  sqcRZGate(q, -0.4543987312533067, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.6528748053188771, 0);
  sqcRZGate(q, -2.7024627821822578, 0);
  sqcRYGate(q, 1.7142286926083907, 1);
  sqcRZGate(q, 2.7930596472926124, 1);
  sqcRYGate(q, -0.5926207789985457, 2);
  sqcRZGate(q, 2.7838885203577775, 2);
  sqcRYGate(q, 0.2955321757176389, 3);
  sqcRZGate(q, 1.5472843522892727, 3);
  sqcRYGate(q, -1.260483020041522, 4);
  sqcRZGate(q, 1.5061645659637426, 4);
  sqcRYGate(q, -0.7922503946337471, 5);
  sqcRZGate(q, -1.8172309906546227, 5);
  sqcRYGate(q, 2.0170687070962767, 6);
  sqcRZGate(q, 1.609404074948774, 6);
  sqcRYGate(q, -1.2898941709952014, 7);
  sqcRZGate(q, 1.4581788956629922, 7);

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
