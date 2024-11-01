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

  sqcRYGate(q, -0.6323702981041307, 0);
  sqcRYGate(q, -2.4631860133183574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.302472320390306, 0);
  sqcRYGate(q, 1.2175618932728052, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2487492046696256, 1);
  sqcRYGate(q, -1.4412216484096814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4198415028319955, 1);
  sqcRYGate(q, -0.32909528021046786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0285816544673456, 2);
  sqcRYGate(q, 0.5103975729259869, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.01688416521434425, 2);
  sqcRYGate(q, -1.8894830412321229, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3167646654203704, 0);
  sqcRYGate(q, -2.5803660478211516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.77643781846621, 0);
  sqcRYGate(q, -0.3229764344821563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5857002127461153, 1);
  sqcRYGate(q, -1.3814246525896063, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7564102502941201, 1);
  sqcRYGate(q, -0.4038311066141452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.855908724404926, 2);
  sqcRYGate(q, -1.9121990862659988, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9049167506465126, 2);
  sqcRYGate(q, -0.5947376084104254, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13058915442736158, 0);
  sqcRYGate(q, -1.3890148488115424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.002658475452536, 0);
  sqcRYGate(q, -2.648933087511084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.067036359446748, 1);
  sqcRYGate(q, -0.5254734274395494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8768449900325055, 1);
  sqcRYGate(q, -3.1302803020667653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5189113966997543, 2);
  sqcRYGate(q, -0.15176645899471253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4195670063437835, 2);
  sqcRYGate(q, 1.6022070413212368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.41177994846747, 0);
  sqcRYGate(q, 0.4033183316456434, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0143714208825187, 0);
  sqcRYGate(q, 0.7679490259937767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8988101315222938, 1);
  sqcRYGate(q, 0.6535709933728137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9069116846927692, 1);
  sqcRYGate(q, -0.4198805566265422, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5337785649658704, 2);
  sqcRYGate(q, 2.315893869052456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8514525059936537, 2);
  sqcRYGate(q, -0.35539541056804325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7298388965171223, 0);
  sqcRYGate(q, 3.003912834043624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0065443044261997, 0);
  sqcRYGate(q, -0.9811018729435436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1130260082862593, 1);
  sqcRYGate(q, -2.5364212656998912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6135481699794525, 1);
  sqcRYGate(q, 0.3287264585920644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5800466983214276, 2);
  sqcRYGate(q, 3.047033079954011, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5371794117764073, 2);
  sqcRYGate(q, -0.22272435969201076, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9992415504612513, 0);
  sqcRYGate(q, -2.1620088234818766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.045540499313721, 0);
  sqcRYGate(q, -2.7633099333785816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.592437221777746, 1);
  sqcRYGate(q, -1.7453991782711686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03725767130625801, 1);
  sqcRYGate(q, -1.4602501892130486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5027062449137398, 2);
  sqcRYGate(q, -1.9542274961184471, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.465220371354457, 2);
  sqcRYGate(q, 1.0329919741232194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6651083935529227, 0);
  sqcRYGate(q, -2.0192771326044303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9606747065647214, 0);
  sqcRYGate(q, -1.0652485310581152, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1309579571756763, 1);
  sqcRYGate(q, -1.2889199954989712, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0313073400879933, 1);
  sqcRYGate(q, -2.054916770152059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.864606509765284, 2);
  sqcRYGate(q, 1.2780769790834405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7518598425721112, 2);
  sqcRYGate(q, 2.9805290498325268, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.731043614680285, 0);
  sqcRYGate(q, 1.944142669893945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7879768043383116, 0);
  sqcRYGate(q, 1.4350169299741493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.787067117053108, 1);
  sqcRYGate(q, 2.6995659021502405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.42873433592573296, 1);
  sqcRYGate(q, -2.308259529435422, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.994486459790803, 2);
  sqcRYGate(q, -2.0646159323777984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6813779997051539, 2);
  sqcRYGate(q, -0.378529426502368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3435665717209626, 0);
  sqcRYGate(q, -0.8187960908098928, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9944551112047157, 0);
  sqcRYGate(q, 0.7942098209785406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9988961050169785, 1);
  sqcRYGate(q, 0.6433668533580909, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.953778858250625, 1);
  sqcRYGate(q, -2.6118570535646195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1582079062669814, 2);
  sqcRYGate(q, -2.253602638636377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9574843883319728, 2);
  sqcRYGate(q, 0.8158408433869262, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1456625313883784, 0);
  sqcRYGate(q, -1.3227942855888841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3980228369908474, 0);
  sqcRYGate(q, 0.9523476659153642, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4816162239244215, 1);
  sqcRYGate(q, -2.1717266743741974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.542384048292865, 1);
  sqcRYGate(q, -1.5417082846576666, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0935367680960526, 2);
  sqcRYGate(q, 2.0406724578941855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7988748219429715, 2);
  sqcRYGate(q, 1.2418369826898532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5919892431740434, 0);
  sqcRYGate(q, 0.21432949474892293, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.08088373708902, 0);
  sqcRYGate(q, -1.6064443047050343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.921116022087991, 1);
  sqcRYGate(q, -1.613448632754856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03057293388765725, 1);
  sqcRYGate(q, 1.3122418022661346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.020294080733608, 2);
  sqcRYGate(q, 1.2240958672430984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07621478154756221, 2);
  sqcRYGate(q, 0.8459343707787497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0684431540285129, 0);
  sqcRYGate(q, 1.901436291403961, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0741789169099774, 0);
  sqcRYGate(q, 1.7417747889789905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9999982997516375, 1);
  sqcRYGate(q, 0.4285297005484443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1336965893679785, 1);
  sqcRYGate(q, 1.1122628184428818, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5612162055019358, 2);
  sqcRYGate(q, 2.6263562384931465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9497824460070743, 2);
  sqcRYGate(q, 0.9160539328865642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6794833973284282, 0);
  sqcRYGate(q, 1.7834351523382261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6503188943812857, 0);
  sqcRYGate(q, 1.9796280957029782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.575933855421804, 1);
  sqcRYGate(q, -1.4070002491496219, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.058214224301643, 1);
  sqcRYGate(q, 0.47794204152069325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15849292304866136, 2);
  sqcRYGate(q, 1.1788478839813215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3001087438244897, 2);
  sqcRYGate(q, 3.1411609087046655, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7088784832129322, 0);
  sqcRYGate(q, -2.183962611861227, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.608269427050652, 0);
  sqcRYGate(q, 1.990603938668061, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4930800657599307, 1);
  sqcRYGate(q, 0.8744682814273981, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5248965689298424, 1);
  sqcRYGate(q, 0.9366867182927043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2783219655265057, 2);
  sqcRYGate(q, -2.9445603395570483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3678984641588683, 2);
  sqcRYGate(q, -0.39520211397685434, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.763165942811589, 0);
  sqcRYGate(q, 2.444732862688456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.446380449651408, 0);
  sqcRYGate(q, 2.2329230768865207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1868377786395959, 1);
  sqcRYGate(q, -1.8887395576822819, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.21263651625694896, 1);
  sqcRYGate(q, -1.5561374798488037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.676217891068971, 2);
  sqcRYGate(q, -0.5483620137018371, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8746519010841131, 2);
  sqcRYGate(q, 1.8969487870811514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.891586391371509, 0);
  sqcRYGate(q, -0.6056368214203234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2093466794379584, 0);
  sqcRYGate(q, 0.29775194948880596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8901240268096378, 1);
  sqcRYGate(q, -0.023574876698295052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5116792409868725, 1);
  sqcRYGate(q, 2.918283779130446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1791911319423933, 2);
  sqcRYGate(q, -1.3405271303604243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14764613777124705, 2);
  sqcRYGate(q, -1.245788547906007, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4470134368932221, 0);
  sqcRYGate(q, 2.1731567549894946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0119438874868827, 0);
  sqcRYGate(q, -3.105821130299225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2634821929056237, 1);
  sqcRYGate(q, -2.119020833815974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.887242991466013, 1);
  sqcRYGate(q, -3.1326086639931896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6949372262871465, 2);
  sqcRYGate(q, 0.610385130878881, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3468053200644139, 2);
  sqcRYGate(q, -0.4514561231196428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6065244658502653, 0);
  sqcRYGate(q, -0.44246166924551983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2146670011259255, 0);
  sqcRYGate(q, 0.10969301393346598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9536883904696465, 1);
  sqcRYGate(q, -2.58336890833637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05779241893089271, 1);
  sqcRYGate(q, 0.2792520870072109, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5119128900444092, 2);
  sqcRYGate(q, -2.277388651051374, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.029229833502714, 2);
  sqcRYGate(q, 2.72764222974198, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4453489029945921, 0);
  sqcRYGate(q, 1.4426880412106984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.56809255024105, 0);
  sqcRYGate(q, -1.7010182724627008, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3160788816781919, 1);
  sqcRYGate(q, -0.040140669449264976, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2221145020802742, 1);
  sqcRYGate(q, -2.569632887231468, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6709530595219535, 2);
  sqcRYGate(q, -0.4137988102045531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6910138943095552, 2);
  sqcRYGate(q, 2.5034777336939604, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.58767418244346, 0);
  sqcRYGate(q, 0.2111107007246842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5047312537031541, 0);
  sqcRYGate(q, -1.4704582315203754, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4991472868822369, 1);
  sqcRYGate(q, -2.4133768578424997, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.38637218128563955, 1);
  sqcRYGate(q, -2.1848281293008873, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.937109892833016, 2);
  sqcRYGate(q, 0.335769516762003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21188579032186822, 2);
  sqcRYGate(q, 0.8696178226993243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0761283630211109, 0);
  sqcRYGate(q, -0.2861087878249702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.074067975267277, 0);
  sqcRYGate(q, 1.6488350169240515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.26582549623667, 1);
  sqcRYGate(q, -0.15144156488788071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3211647098678623, 1);
  sqcRYGate(q, 0.7615894384802196, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8492793584959273, 2);
  sqcRYGate(q, 3.0311969327396886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.07668528217535041, 2);
  sqcRYGate(q, -0.7379145127422141, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5326152618634197, 0);
  sqcRYGate(q, 1.5007233355840681, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6924889724691008, 0);
  sqcRYGate(q, 0.35699435012465913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9095182303005545, 1);
  sqcRYGate(q, -2.212968483759842, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8056411520862637, 1);
  sqcRYGate(q, -2.1877021789353197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2121608739298453, 2);
  sqcRYGate(q, 0.5033851220795738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.743455797466132, 2);
  sqcRYGate(q, -2.520516907853272, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.070043189990985, 0);
  sqcRYGate(q, 2.3572479998595197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2409873350941467, 0);
  sqcRYGate(q, -3.029293067772246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9071116512049953, 1);
  sqcRYGate(q, -2.826038852641154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.684974444503597, 1);
  sqcRYGate(q, 1.0576020096887149, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6552766756767024, 2);
  sqcRYGate(q, -0.20706615405298973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3299003065835349, 2);
  sqcRYGate(q, -0.5609323606753565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8491999217587531, 0);
  sqcRYGate(q, 2.0819725355775294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5198490407752776, 0);
  sqcRYGate(q, -0.6592314076813706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9170725030234295, 1);
  sqcRYGate(q, -0.6936406092147758, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6363744966664306, 1);
  sqcRYGate(q, 1.3170349228978486, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9561436838398079, 2);
  sqcRYGate(q, -1.0859237315385561, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5563594902212268, 2);
  sqcRYGate(q, 1.382052744572572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.352818310226412, 0);
  sqcRYGate(q, -1.9560783413519947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7698092743028573, 0);
  sqcRYGate(q, -2.1581185776376324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1276861012814012, 1);
  sqcRYGate(q, -1.8192059658909623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1162955919582416, 1);
  sqcRYGate(q, 0.5726832817047072, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.43246396657172, 2);
  sqcRYGate(q, 2.613734869910927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3166815705877135, 2);
  sqcRYGate(q, 0.8289155421362021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.090608507799813, 0);
  sqcRYGate(q, 1.8062363588265287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5155072444298083, 0);
  sqcRYGate(q, -1.4398113567861976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3894468080011178, 1);
  sqcRYGate(q, 1.8701554939401868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.986180246290961, 1);
  sqcRYGate(q, 3.0597316467192934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45084161483098933, 2);
  sqcRYGate(q, -2.7080122336858814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7755243627525896, 2);
  sqcRYGate(q, 0.3848321596398754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3191385078787072, 0);
  sqcRYGate(q, 1.9191089096620857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1778966091439202, 0);
  sqcRYGate(q, -2.4174979016169362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.228977937336581, 1);
  sqcRYGate(q, -0.9903177848000941, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12199167117335906, 1);
  sqcRYGate(q, -3.0145259813044087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2340419073162987, 2);
  sqcRYGate(q, -1.4988000718045713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4989057174932077, 2);
  sqcRYGate(q, 0.05523933906930889, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.478583270891764, 0);
  sqcRYGate(q, -2.834066481612037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0230585210548855, 0);
  sqcRYGate(q, -0.23351213037774698, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.672844000198554, 1);
  sqcRYGate(q, -0.3266706523424786, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.236179860977912, 1);
  sqcRYGate(q, 1.684689102538065, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8644501871919656, 2);
  sqcRYGate(q, -0.5130056509335829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.593715729225282, 2);
  sqcRYGate(q, 1.6967887951654417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04953608400313758, 0);
  sqcRYGate(q, -0.654078955715325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.013444842942328, 0);
  sqcRYGate(q, -2.652051237791833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.062001059676038, 1);
  sqcRYGate(q, 1.536070234618931, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5003000471797706, 1);
  sqcRYGate(q, -0.07056189880874555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2567883089067595, 2);
  sqcRYGate(q, -1.6395745257122296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.370708652294149, 2);
  sqcRYGate(q, -0.05103020038125952, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2020786557872603, 0);
  sqcRYGate(q, -2.530767116394718, 1);
  sqcRYGate(q, -0.7488795162530931, 2);
  sqcRYGate(q, 1.184993690813922, 3);

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
