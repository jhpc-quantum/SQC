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

  sqcRYGate(q, 1.7063140143447066, 0);
  sqcRZGate(q, -1.6703083922099573, 0);
  sqcRYGate(q, 0.24686977176637637, 1);
  sqcRZGate(q, -2.6426001980782727, 1);
  sqcRYGate(q, -1.8293829030103401, 2);
  sqcRZGate(q, 1.5370648597071248, 2);
  sqcRYGate(q, -2.7139256518650643, 3);
  sqcRZGate(q, -2.944815255908331, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.0927240196139998, 0);
  sqcRZGate(q, 3.100089774601048, 0);
  sqcRYGate(q, 0.4941144848382591, 1);
  sqcRZGate(q, 1.3892653349635484, 1);
  sqcRYGate(q, -1.315746860319275, 2);
  sqcRZGate(q, -3.0337022601673276, 2);
  sqcRYGate(q, 2.5763974406180177, 3);
  sqcRZGate(q, 1.1575300023697879, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.100973401344354, 0);
  sqcRZGate(q, -0.6841517867156137, 0);
  sqcRYGate(q, -0.042258811806759944, 1);
  sqcRZGate(q, 1.1275573346864167, 1);
  sqcRYGate(q, 1.0838033572323804, 2);
  sqcRZGate(q, -1.5356682591463773, 2);
  sqcRYGate(q, 0.5873768776423182, 3);
  sqcRZGate(q, 2.6958466763981463, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.038756040678703, 0);
  sqcRZGate(q, 0.5471899137560392, 0);
  sqcRYGate(q, 1.284815650998274, 1);
  sqcRZGate(q, -0.2162294356545581, 1);
  sqcRYGate(q, -0.44182290730404017, 2);
  sqcRZGate(q, 2.340236213630314, 2);
  sqcRYGate(q, 2.0745676648243387, 3);
  sqcRZGate(q, 0.0027413067721572776, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.347251938460091, 0);
  sqcRZGate(q, -0.7709143221389387, 0);
  sqcRYGate(q, 2.4392231067712706, 1);
  sqcRZGate(q, -0.641288241549991, 1);
  sqcRYGate(q, 2.7087637848483115, 2);
  sqcRZGate(q, -1.2305601589062192, 2);
  sqcRYGate(q, -0.3413537479560172, 3);
  sqcRZGate(q, 1.4986549354574845, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7104122000297035, 0);
  sqcRZGate(q, 2.0156563874593743, 0);
  sqcRYGate(q, 2.5815034674670545, 1);
  sqcRZGate(q, 1.0671781700197238, 1);
  sqcRYGate(q, -2.0188169054039324, 2);
  sqcRZGate(q, 0.44119636425005565, 2);
  sqcRYGate(q, 0.27776514607014935, 3);
  sqcRZGate(q, -0.705345727682971, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8279928086582353, 0);
  sqcRZGate(q, -0.29320206504432544, 0);
  sqcRYGate(q, -2.7196105551386736, 1);
  sqcRZGate(q, -1.7021163065001188, 1);
  sqcRYGate(q, 0.2966863601092342, 2);
  sqcRZGate(q, 0.8866365267818139, 2);
  sqcRYGate(q, -1.318681283914421, 3);
  sqcRZGate(q, 2.4162649569682086, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.141319850057154, 0);
  sqcRZGate(q, 2.138929045403459, 0);
  sqcRYGate(q, -2.3099520029218628, 1);
  sqcRZGate(q, -1.935479481011936, 1);
  sqcRYGate(q, 2.5077035571794686, 2);
  sqcRZGate(q, -1.660730570008132, 2);
  sqcRYGate(q, 0.05847365985308706, 3);
  sqcRZGate(q, -0.08478709929965245, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.7517262942579196, 0);
  sqcRZGate(q, -2.9111290657016684, 0);
  sqcRYGate(q, -0.6236849183340363, 1);
  sqcRZGate(q, 2.5058413082287374, 1);
  sqcRYGate(q, -1.4450717828118014, 2);
  sqcRZGate(q, -2.388097026638727, 2);
  sqcRYGate(q, 1.4275426411893484, 3);
  sqcRZGate(q, 0.9373936777314364, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.2514271506395724, 0);
  sqcRZGate(q, -2.210041704721922, 0);
  sqcRYGate(q, -0.27752982219970224, 1);
  sqcRZGate(q, 2.803125908075813, 1);
  sqcRYGate(q, 2.3312898133569386, 2);
  sqcRZGate(q, -1.2151321018156125, 2);
  sqcRYGate(q, -1.4947622498910071, 3);
  sqcRZGate(q, 0.6217938472508013, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.867388894589091, 0);
  sqcRZGate(q, -0.6969332734386269, 0);
  sqcRYGate(q, 2.507191516879953, 1);
  sqcRZGate(q, -0.7127573119956121, 1);
  sqcRYGate(q, -0.4433671767859347, 2);
  sqcRZGate(q, -1.7572246538090428, 2);
  sqcRYGate(q, -1.67082079664936, 3);
  sqcRZGate(q, -0.5118366368710827, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.691937386928635, 0);
  sqcRZGate(q, -2.483845218523392, 0);
  sqcRYGate(q, -1.307028536711796, 1);
  sqcRZGate(q, 1.4240681062480984, 1);
  sqcRYGate(q, -1.5923644924339346, 2);
  sqcRZGate(q, -1.1353415458308804, 2);
  sqcRYGate(q, 2.1636251155877533, 3);
  sqcRZGate(q, -2.7950013991571527, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0246391526597138, 0);
  sqcRZGate(q, 1.9636669333233738, 0);
  sqcRYGate(q, -3.001961798629, 1);
  sqcRZGate(q, -0.018372857405924314, 1);
  sqcRYGate(q, 0.714880628355206, 2);
  sqcRZGate(q, -0.22533040342084887, 2);
  sqcRYGate(q, -2.11049875943206, 3);
  sqcRZGate(q, -0.11675613310203131, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5375808357280545, 0);
  sqcRZGate(q, -2.3086478450331254, 0);
  sqcRYGate(q, -2.46415803305327, 1);
  sqcRZGate(q, 2.0460930212704582, 1);
  sqcRYGate(q, 2.660286104387169, 2);
  sqcRZGate(q, 0.057087578250132574, 2);
  sqcRYGate(q, 2.4885899884248928, 3);
  sqcRZGate(q, -1.1181483074121374, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.21467044073561958, 0);
  sqcRZGate(q, -0.7577320963432301, 0);
  sqcRYGate(q, -1.8385418148675523, 1);
  sqcRZGate(q, -0.47770723241515345, 1);
  sqcRYGate(q, -0.10506164176338174, 2);
  sqcRZGate(q, 2.7494159839360583, 2);
  sqcRYGate(q, 0.00635087901783014, 3);
  sqcRZGate(q, 0.7242500032107372, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.62248603657386, 0);
  sqcRZGate(q, 0.14237492993791268, 0);
  sqcRYGate(q, -2.7081676221193653, 1);
  sqcRZGate(q, -1.4531126749478362, 1);
  sqcRYGate(q, 0.6830836486166796, 2);
  sqcRZGate(q, -2.205592457117329, 2);
  sqcRYGate(q, -0.7262997263071185, 3);
  sqcRZGate(q, 0.00924745392999604, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.671793444849443, 0);
  sqcRZGate(q, -0.4928845854110216, 0);
  sqcRYGate(q, 0.3042078676670739, 1);
  sqcRZGate(q, -2.9244194042113207, 1);
  sqcRYGate(q, 2.6184902110757915, 2);
  sqcRZGate(q, 0.06751511912283162, 2);
  sqcRYGate(q, -1.2172038975117414, 3);
  sqcRZGate(q, 1.031454696122669, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2466565886072507, 0);
  sqcRZGate(q, -1.5190881382170291, 0);
  sqcRYGate(q, 0.31045449418470916, 1);
  sqcRZGate(q, -1.2603923171251203, 1);
  sqcRYGate(q, -0.6020349021256941, 2);
  sqcRZGate(q, -0.0363405527668963, 2);
  sqcRYGate(q, 1.0184510465706753, 3);
  sqcRZGate(q, 3.0955686172699375, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5397386752953555, 0);
  sqcRZGate(q, -0.5707211377396577, 0);
  sqcRYGate(q, -0.3601442804513222, 1);
  sqcRZGate(q, 1.179687481434307, 1);
  sqcRYGate(q, -0.8087598407311547, 2);
  sqcRZGate(q, -2.956922387123315, 2);
  sqcRYGate(q, 0.7194523626178879, 3);
  sqcRZGate(q, 2.6625404683144827, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5405648891592376, 0);
  sqcRZGate(q, 0.12315210626613887, 0);
  sqcRYGate(q, 1.2006251565029906, 1);
  sqcRZGate(q, 2.6026718328407195, 1);
  sqcRYGate(q, -2.4783791292098036, 2);
  sqcRZGate(q, 2.904860913275427, 2);
  sqcRYGate(q, -2.7546644651319565, 3);
  sqcRZGate(q, -1.599938503554438, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.4880396187396108, 0);
  sqcRZGate(q, -0.39308710061820584, 0);
  sqcRYGate(q, 1.1123114455929557, 1);
  sqcRZGate(q, 0.4646421585445387, 1);
  sqcRYGate(q, 1.7296768437239187, 2);
  sqcRZGate(q, 1.8785894329373427, 2);
  sqcRYGate(q, -1.1727936671282557, 3);
  sqcRZGate(q, -0.8309969455732198, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.1900499930468733, 0);
  sqcRZGate(q, 2.5915105470883084, 0);
  sqcRYGate(q, -0.670991243104895, 1);
  sqcRZGate(q, 2.3950843873487426, 1);
  sqcRYGate(q, -1.2634565107293976, 2);
  sqcRZGate(q, 3.1196383996164125, 2);
  sqcRYGate(q, 2.351848910367756, 3);
  sqcRZGate(q, -2.3591776463889915, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3291025328829296, 0);
  sqcRZGate(q, 2.138551369291515, 0);
  sqcRYGate(q, -1.8501475911807173, 1);
  sqcRZGate(q, -3.089110783903169, 1);
  sqcRYGate(q, 1.3335191258889376, 2);
  sqcRZGate(q, -0.2643695802321506, 2);
  sqcRYGate(q, -2.9688785625477956, 3);
  sqcRZGate(q, 1.5185384494840886, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4993008873319613, 0);
  sqcRZGate(q, -2.5110681111720914, 0);
  sqcRYGate(q, -0.8041571473291472, 1);
  sqcRZGate(q, 1.8741773944975593, 1);
  sqcRYGate(q, 1.4685650498675231, 2);
  sqcRZGate(q, 1.0606264109612633, 2);
  sqcRYGate(q, 1.243575065389247, 3);
  sqcRZGate(q, -3.065854906798876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1430065973360755, 0);
  sqcRZGate(q, 1.1842870307361768, 0);
  sqcRYGate(q, 1.7463729393909668, 1);
  sqcRZGate(q, 1.2096298748266987, 1);
  sqcRYGate(q, 0.3566141246698553, 2);
  sqcRZGate(q, -1.6361648501754018, 2);
  sqcRYGate(q, -0.31657732509835307, 3);
  sqcRZGate(q, 1.4777008801617573, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.2970611176532981, 0);
  sqcRZGate(q, -2.6401034131844936, 0);
  sqcRYGate(q, -1.6766024824472803, 1);
  sqcRZGate(q, -2.107979805279796, 1);
  sqcRYGate(q, 1.5094662817408855, 2);
  sqcRZGate(q, 0.008215141065134546, 2);
  sqcRYGate(q, 0.40317885546860094, 3);
  sqcRZGate(q, 1.3834207204089612, 3);

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
