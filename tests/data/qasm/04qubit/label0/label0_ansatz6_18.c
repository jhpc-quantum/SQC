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

  sqcRYGate(q, 1.5510764476139884, 0);
  sqcRYGate(q, 3.05789754479958, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6193778159501582, 0);
  sqcRYGate(q, -0.8825221331777531, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5826975797138882, 1);
  sqcRYGate(q, 0.9432709061056025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5009651060050437, 1);
  sqcRYGate(q, -0.0017422278541192047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4609608990489686, 2);
  sqcRYGate(q, -0.6875464944733949, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6917706575661589, 2);
  sqcRYGate(q, -2.9264835462957954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5590142016423263, 0);
  sqcRYGate(q, -0.07515906150562746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7682205891652822, 0);
  sqcRYGate(q, -1.6871675025889075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4367407535131038, 1);
  sqcRYGate(q, -3.1277760168694346, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9150447402679471, 1);
  sqcRYGate(q, 1.3949051347930157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4168358455539636, 2);
  sqcRYGate(q, -0.5359156416912739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1547850296606648, 2);
  sqcRYGate(q, -2.6415802001345012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.424808187206138, 0);
  sqcRYGate(q, -0.4491034957792118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.651301075458119, 0);
  sqcRYGate(q, -1.8869713524416507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09649293394319701, 1);
  sqcRYGate(q, -0.9060922149117374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.721783827894791, 1);
  sqcRYGate(q, 2.876858231410987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2715154970764644, 2);
  sqcRYGate(q, -2.9376956093866764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8664922261279613, 2);
  sqcRYGate(q, 2.404786291718396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9987707488759696, 0);
  sqcRYGate(q, -1.1226276866521863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7263710881642296, 0);
  sqcRYGate(q, -0.996619055088204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9428578272708092, 1);
  sqcRYGate(q, 2.2587115045393373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6050877575732603, 1);
  sqcRYGate(q, -0.9621863087357944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5082243457981956, 2);
  sqcRYGate(q, -1.20856600060943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.784997955825708, 2);
  sqcRYGate(q, -2.8743671236254333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48718751484473255, 0);
  sqcRYGate(q, -0.530005039957731, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.433486464754638, 0);
  sqcRYGate(q, 2.7967615824633114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9637119772036673, 1);
  sqcRYGate(q, 0.5221902781208057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8670115670135283, 1);
  sqcRYGate(q, 2.824108820411545, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0034480159769332, 2);
  sqcRYGate(q, -0.37156749143138806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9072149859868726, 2);
  sqcRYGate(q, -1.0917193683554451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7660409148859187, 0);
  sqcRYGate(q, 1.6399498730064999, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1248746425487783, 0);
  sqcRYGate(q, -0.9528964703754115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.914331528761786, 1);
  sqcRYGate(q, -1.1779455314300982, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.17772496116151193, 1);
  sqcRYGate(q, -1.2297498588721485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8160271606819673, 2);
  sqcRYGate(q, 2.8350379828357224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7200484457194753, 2);
  sqcRYGate(q, 0.19285612408177943, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4142515409066076, 0);
  sqcRYGate(q, 0.7108719247715198, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1750352829773023, 0);
  sqcRYGate(q, 1.111746577845122, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6777206309467854, 1);
  sqcRYGate(q, 3.061356027723497, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20814338712338462, 1);
  sqcRYGate(q, 1.9379061243997158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.200084258944624, 2);
  sqcRYGate(q, 2.0807724178875056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19067402099768135, 2);
  sqcRYGate(q, 1.0465642691057564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6753032178408986, 0);
  sqcRYGate(q, -1.8388230712281302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3996694607358675, 0);
  sqcRYGate(q, -2.822207036996122, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6698710079196846, 1);
  sqcRYGate(q, 1.1656114300937002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.836907250556549, 1);
  sqcRYGate(q, 0.536655759140604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6418257754188523, 2);
  sqcRYGate(q, 1.7159387273070235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1193743140258832, 2);
  sqcRYGate(q, -1.5563576411390345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.47342131243851443, 0);
  sqcRYGate(q, 1.2027873699475835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.276835362024114, 0);
  sqcRYGate(q, 1.0386905493959837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06099989683868421, 1);
  sqcRYGate(q, 2.4238849756013727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.744130155082361, 1);
  sqcRYGate(q, -0.5366601261064696, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.745411199399875, 2);
  sqcRYGate(q, 1.335548743241941, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8577085994086318, 2);
  sqcRYGate(q, 2.2998622311091044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7160348018773046, 0);
  sqcRYGate(q, 2.8100251812306913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.081344228208537, 0);
  sqcRYGate(q, -0.46864546991725486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0655196453344464, 1);
  sqcRYGate(q, -0.32529069378965775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.717991809759356, 1);
  sqcRYGate(q, 1.558623635281587, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47941122069026054, 2);
  sqcRYGate(q, -2.8868534446959466, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0656086228291897, 2);
  sqcRYGate(q, -1.6155037827717755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.403211608567359, 0);
  sqcRYGate(q, -2.414799310157741, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7202722448866674, 0);
  sqcRYGate(q, -2.232243433938538, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8691001145695028, 1);
  sqcRYGate(q, -0.22545981060113274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.918637493107623, 1);
  sqcRYGate(q, 2.951456882497727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8714573319828107, 2);
  sqcRYGate(q, 0.4119697566822159, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0087858769325817, 2);
  sqcRYGate(q, 2.9909372952939273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6434398726969641, 0);
  sqcRYGate(q, 1.1063406655454404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5985876404622621, 0);
  sqcRYGate(q, -1.5143354027093328, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0098172213694054, 1);
  sqcRYGate(q, -1.3624567177148215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.406881160842409, 1);
  sqcRYGate(q, -0.6488780079119723, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3715886870441065, 2);
  sqcRYGate(q, 2.441380733921579, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8641134275432296, 2);
  sqcRYGate(q, 2.0319146790508427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6258589739200047, 0);
  sqcRYGate(q, 2.5640979220509865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5719611820063869, 0);
  sqcRYGate(q, 1.6147130820569435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7909418315060073, 1);
  sqcRYGate(q, -1.7812880699886875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1176031125602877, 1);
  sqcRYGate(q, -2.4319742481144333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5552245969155765, 2);
  sqcRYGate(q, 0.8339097280651514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5970960045881997, 2);
  sqcRYGate(q, 1.280613767731519, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4024903177410195, 0);
  sqcRYGate(q, -0.13268901946231304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.948967818576226, 0);
  sqcRYGate(q, -1.3504054925626878, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.529221605103275, 1);
  sqcRYGate(q, 2.5356889546050074, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.62535128469304, 1);
  sqcRYGate(q, 0.3536414617398087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.820805927196116, 2);
  sqcRYGate(q, 1.9430654749152847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09658762524113929, 2);
  sqcRYGate(q, 0.6395920203300944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.828872451583463, 0);
  sqcRYGate(q, -2.307835932095302, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9699241977604927, 0);
  sqcRYGate(q, 2.503269759650264, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0254083924949584, 1);
  sqcRYGate(q, 1.143103859650557, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.237074362914253, 1);
  sqcRYGate(q, 2.4215670997592897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5304739091283055, 2);
  sqcRYGate(q, -0.16957393107599028, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3759681502218566, 2);
  sqcRYGate(q, -0.08748214716598395, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6275535311870173, 0);
  sqcRYGate(q, 0.45920678321657066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09925544175275824, 0);
  sqcRYGate(q, -0.24995558214061367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4415474769085161, 1);
  sqcRYGate(q, -1.7038213235077606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9716977642295204, 1);
  sqcRYGate(q, -1.5424208988308847, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.00228334912999, 2);
  sqcRYGate(q, -0.37662353592539594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.983252365212375, 2);
  sqcRYGate(q, -2.2497591857465977, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0486224428332318, 0);
  sqcRYGate(q, -0.003399998341835646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0893672211520586, 0);
  sqcRYGate(q, 1.403642342748782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.84415584743238, 1);
  sqcRYGate(q, -1.9045807311044618, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9052122238917973, 1);
  sqcRYGate(q, 2.8432580762741897, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.976988804253474, 2);
  sqcRYGate(q, 2.0648397260235236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.09246542276655, 2);
  sqcRYGate(q, -0.06300249149543308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11962214592258842, 0);
  sqcRYGate(q, 1.055357664107701, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.240794709001662, 0);
  sqcRYGate(q, 2.968298891427498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.581697963154463, 1);
  sqcRYGate(q, -2.9393427723820493, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6046209721940787, 1);
  sqcRYGate(q, -1.8019914372272456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5356950667458356, 2);
  sqcRYGate(q, 1.5253907337602637, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9378599203623312, 2);
  sqcRYGate(q, -1.219398155552792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.203028340926121, 0);
  sqcRYGate(q, -2.814324402482202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4219727405395277, 0);
  sqcRYGate(q, -0.41452872948484654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2065217164425235, 1);
  sqcRYGate(q, -2.4068503500362373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1256799109651574, 1);
  sqcRYGate(q, 3.1179520647525374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1039410684836888, 2);
  sqcRYGate(q, -2.6463276502982307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.969847707997021, 2);
  sqcRYGate(q, -2.7295499262380023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7155140753208014, 0);
  sqcRYGate(q, 0.18324267745025996, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.074151988926538, 0);
  sqcRYGate(q, -2.0830766462080086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.49638852017000207, 1);
  sqcRYGate(q, -1.3194229775137583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.187319549182913, 1);
  sqcRYGate(q, 3.0725387467168344, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4272485532113892, 2);
  sqcRYGate(q, -2.5750103851065944, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.839747331770143, 2);
  sqcRYGate(q, 2.676525130779139, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0802161273689048, 0);
  sqcRYGate(q, 2.360458028051445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8156277879768892, 0);
  sqcRYGate(q, -2.117660317405229, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0220168762096389, 1);
  sqcRYGate(q, -1.859244338366202, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.397306381750228, 1);
  sqcRYGate(q, 1.3226252943349293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7261137213066541, 2);
  sqcRYGate(q, 2.449380948812734, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6733522008646171, 2);
  sqcRYGate(q, -2.0518728249405696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0558387714777746, 0);
  sqcRYGate(q, -0.814126295688153, 1);
  sqcRYGate(q, 1.2001920193685303, 2);
  sqcRYGate(q, -0.4716441540946353, 3);

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
