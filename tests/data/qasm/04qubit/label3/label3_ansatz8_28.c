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

  sqcRYGate(q, 2.936324740273905, 0);
  sqcRYGate(q, 0.9430121209909403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.140710538129965, 0);
  sqcRYGate(q, -0.3267402496350238, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9415868715525271, 2);
  sqcRYGate(q, -1.089092891122652, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5151006927353894, 2);
  sqcRYGate(q, 1.9567748507729688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4408282539032973, 0);
  sqcRYGate(q, 2.1271609889581415, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3317115116425278, 0);
  sqcRYGate(q, 3.014355003383851, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8851056863548985, 1);
  sqcRYGate(q, -0.2145467255000404, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0722914973242252, 1);
  sqcRYGate(q, 2.3831351095844493, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1587449398157235, 0);
  sqcRYGate(q, -0.9495397184816315, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7112638459780058, 0);
  sqcRYGate(q, -0.1973834116373716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.002103714360981, 2);
  sqcRYGate(q, -0.8381999718425059, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9637969596763076, 2);
  sqcRYGate(q, -2.7130903546428273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2411945157291713, 0);
  sqcRYGate(q, 1.9776353643798084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6340960974841046, 0);
  sqcRYGate(q, -0.3042416237540681, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8014744325581705, 1);
  sqcRYGate(q, 1.5560105899747092, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.529589605902249, 1);
  sqcRYGate(q, -2.7964252793907596, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9564727036756544, 0);
  sqcRYGate(q, 0.24180881737940904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.635184566505034, 0);
  sqcRYGate(q, 3.1038732846650054, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0741987620047362, 2);
  sqcRYGate(q, -2.4146614482161186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5056754602127906, 2);
  sqcRYGate(q, 0.8018573281950241, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9162244748987476, 0);
  sqcRYGate(q, -2.1932001176390057, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.009244238825601, 0);
  sqcRYGate(q, 1.338014627603519, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2658160382965034, 1);
  sqcRYGate(q, -1.7926999011166238, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.395107361565021, 1);
  sqcRYGate(q, -2.9290121697043143, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.0641970748190479, 0);
  sqcRYGate(q, -1.5408895481745937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.05186435184817917, 0);
  sqcRYGate(q, -2.010877501144817, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.239287087512498, 2);
  sqcRYGate(q, -1.422518471844823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7394108959075836, 2);
  sqcRYGate(q, 1.5139117961258084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.21604826079589756, 0);
  sqcRYGate(q, 2.750462124339854, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.28923233874933596, 0);
  sqcRYGate(q, -0.18149226323493473, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3187326299684767, 1);
  sqcRYGate(q, -1.4782539276199786, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0523262301346272, 1);
  sqcRYGate(q, 2.4405462567538954, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4925465326526584, 0);
  sqcRYGate(q, 1.5022609666900473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3903102308109699, 0);
  sqcRYGate(q, -1.257393111267482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8290506525159351, 2);
  sqcRYGate(q, 2.8270992877389234, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9055021264289138, 2);
  sqcRYGate(q, 0.7561910497193908, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9132374167150001, 0);
  sqcRYGate(q, 0.014898953689396631, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0085561302668988, 0);
  sqcRYGate(q, -2.8403412355202264, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8322477628237017, 1);
  sqcRYGate(q, 1.0267934109846948, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.554011299278243, 1);
  sqcRYGate(q, -0.12738146332586187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9256041460389697, 0);
  sqcRYGate(q, -0.697280307422746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.29041478965294054, 0);
  sqcRYGate(q, 1.754502312201156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.33887275572003256, 2);
  sqcRYGate(q, 3.0453113767580713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.363500692790131, 2);
  sqcRYGate(q, -0.7641113735469706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.369301542327416, 0);
  sqcRYGate(q, -1.0373885811912407, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5998733799378534, 0);
  sqcRYGate(q, 2.8514872173288595, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.567824766424719, 1);
  sqcRYGate(q, 0.5041576268879292, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6019145709058362, 1);
  sqcRYGate(q, -0.6595381864730802, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.440876323324078, 0);
  sqcRYGate(q, -1.5749047312675213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.221847295015156, 0);
  sqcRYGate(q, 1.746833116681441, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2057330251350464, 2);
  sqcRYGate(q, -1.8301720710206757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.047403661651219, 2);
  sqcRYGate(q, -1.2769010034477317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.011571856821825, 0);
  sqcRYGate(q, -0.46587900414515815, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8666733444994108, 0);
  sqcRYGate(q, -2.911503987507696, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7557030053965574, 1);
  sqcRYGate(q, 0.9807935038327441, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6837930169211015, 1);
  sqcRYGate(q, 0.3092088502400596, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4187450762842606, 0);
  sqcRYGate(q, -2.4601478645461743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6712120998254179, 0);
  sqcRYGate(q, -1.921252720323147, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.08820638824043, 2);
  sqcRYGate(q, -1.2612881274314844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1947274615496088, 2);
  sqcRYGate(q, 2.9882573553778533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4935949564208297, 0);
  sqcRYGate(q, 1.519159762332207, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.096974998070998, 0);
  sqcRYGate(q, 1.1927369966098205, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.680354122384383, 1);
  sqcRYGate(q, -1.884984391575621, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5469953869611528, 1);
  sqcRYGate(q, 0.8887931393819901, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5072312297091778, 0);
  sqcRYGate(q, 2.052788966240727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.89835867853355, 0);
  sqcRYGate(q, 2.12404749558103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9476236151338946, 2);
  sqcRYGate(q, -1.3642518020316672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.34813156056351, 2);
  sqcRYGate(q, 1.292460740228715, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2659165915057247, 0);
  sqcRYGate(q, 1.8299367575856136, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3565432312278638, 0);
  sqcRYGate(q, 3.024048206474764, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.795715194958808, 1);
  sqcRYGate(q, -0.5444642008508798, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9487792720238346, 1);
  sqcRYGate(q, 1.2822290643495258, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.457372859601616, 0);
  sqcRYGate(q, -1.1991724370218195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8984542303011402, 0);
  sqcRYGate(q, 2.9493686079092485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.638338312593776, 2);
  sqcRYGate(q, 2.3025646486254088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2828573335855715, 2);
  sqcRYGate(q, -0.3234684533531031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.842348530316169, 0);
  sqcRYGate(q, 1.6622024613572766, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1985700962865578, 0);
  sqcRYGate(q, -1.1571196014834577, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3198695321398226, 1);
  sqcRYGate(q, 0.6705373581863178, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.057856428195437, 1);
  sqcRYGate(q, 2.93978003997428, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8037400421701744, 0);
  sqcRYGate(q, 1.4968463866652373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5453424753166283, 0);
  sqcRYGate(q, 1.008006708585775, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9665329019720305, 2);
  sqcRYGate(q, 1.3543453135905255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4338449868072307, 2);
  sqcRYGate(q, 1.5285605781191587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9304956401142623, 0);
  sqcRYGate(q, 1.6132582106366886, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.74737925123949, 0);
  sqcRYGate(q, 0.9979022173552723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9397917720619766, 1);
  sqcRYGate(q, 1.127890119943995, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.674801150055171, 1);
  sqcRYGate(q, 1.5003213759685323, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7348671064970399, 0);
  sqcRYGate(q, -2.671428182656459, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.049399996020704, 0);
  sqcRYGate(q, -1.560114310670592, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1203222784692817, 2);
  sqcRYGate(q, 1.7500842597856439, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1211796646343446, 2);
  sqcRYGate(q, -0.9606392266774497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1599936725921438, 0);
  sqcRYGate(q, 2.1550567808676133, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1859912374496195, 0);
  sqcRYGate(q, -2.9446646800767438, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3502845174932485, 1);
  sqcRYGate(q, 0.22455398468500268, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.44685177985741, 1);
  sqcRYGate(q, 2.360733011957113, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.12071072509230607, 0);
  sqcRYGate(q, -1.3685134818207514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.935611197188513, 0);
  sqcRYGate(q, -1.306520603502555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.444691340727755, 2);
  sqcRYGate(q, 2.2083525558154182, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0652750958846333, 2);
  sqcRYGate(q, 2.3849610327863755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9074297491862073, 0);
  sqcRYGate(q, 2.8234833013886114, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7107272670468383, 0);
  sqcRYGate(q, 1.6298050374999733, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.46145061512120394, 1);
  sqcRYGate(q, 1.865201524692366, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6608736740820547, 1);
  sqcRYGate(q, -1.1136509913310615, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1644759064952241, 0);
  sqcRYGate(q, -2.2401387195233182, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2843809426410397, 0);
  sqcRYGate(q, 0.6107595594191026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.257627365781391, 2);
  sqcRYGate(q, 3.036629874791737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5475695736401773, 2);
  sqcRYGate(q, 1.6521306497660755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8905929779111171, 0);
  sqcRYGate(q, 1.7959304295209577, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.619627583808378, 0);
  sqcRYGate(q, -2.786121621313226, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.572741630029644, 1);
  sqcRYGate(q, 1.8986134674041857, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8101089825003621, 1);
  sqcRYGate(q, -1.2345258545795152, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.980843766633394, 0);
  sqcRYGate(q, -2.7690267265449062, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8493864561208186, 0);
  sqcRYGate(q, 0.6067357998867722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9334186045085886, 2);
  sqcRYGate(q, 2.7450725324250067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.707655268829019, 2);
  sqcRYGate(q, 0.0997054602252743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.328571317194207, 0);
  sqcRYGate(q, -0.5507126500022146, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6254702318265675, 0);
  sqcRYGate(q, 0.929368860020555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0519755036659744, 1);
  sqcRYGate(q, 0.4985267922941831, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0796834234485158, 1);
  sqcRYGate(q, -0.12273951099190424, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.00612090265708, 0);
  sqcRYGate(q, 2.2606192582792324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.610746772373954, 0);
  sqcRYGate(q, -1.4128453179577658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4572188022808072, 2);
  sqcRYGate(q, 1.5154521241157681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4681395345850371, 2);
  sqcRYGate(q, -1.4771876097663594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9532526830594116, 0);
  sqcRYGate(q, 2.317712248027844, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.567291356735229, 0);
  sqcRYGate(q, 3.0562782805530633, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.076871296867181, 1);
  sqcRYGate(q, -0.42724932857007936, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5699373700379198, 1);
  sqcRYGate(q, -1.656396175227818, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4216383828070245, 0);
  sqcRYGate(q, 2.60412167495664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9765490259668761, 0);
  sqcRYGate(q, -0.15542806889825303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16087032608791255, 2);
  sqcRYGate(q, -2.9003120163440608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.006588201119973, 2);
  sqcRYGate(q, -1.8562653807940475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.08793563376325578, 0);
  sqcRYGate(q, -1.171279998225681, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.091901979044628, 0);
  sqcRYGate(q, 0.3146292271645423, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.123998218291784, 1);
  sqcRYGate(q, 1.3956028462407557, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8406652031399567, 1);
  sqcRYGate(q, -1.0823677633133926, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9630814397279015, 0);
  sqcRYGate(q, 0.30289438329668444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6396034592298152, 0);
  sqcRYGate(q, 3.1225197176759445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.424371424025129, 2);
  sqcRYGate(q, 2.228571287154667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9416517761025047, 2);
  sqcRYGate(q, -1.9247108902305952, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5356679477925264, 0);
  sqcRYGate(q, 1.2373833986359069, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6809407124588365, 0);
  sqcRYGate(q, -2.332579721835724, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.099873892594634, 1);
  sqcRYGate(q, -2.0120699345817146, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.628376642500821, 1);
  sqcRYGate(q, -2.8407968763905167, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9016972433367023, 0);
  sqcRYGate(q, 0.7208333587452364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3151146678053641, 0);
  sqcRYGate(q, 0.1038871630579914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5817240215887685, 2);
  sqcRYGate(q, -2.3575584548599036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9230286492933764, 2);
  sqcRYGate(q, 2.837329088253736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1778435832104606, 0);
  sqcRYGate(q, -2.5017210149433136, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9626810395243927, 0);
  sqcRYGate(q, 2.1210986397425886, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4672897085065253, 1);
  sqcRYGate(q, -1.5709056892655022, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1062655452641303, 1);
  sqcRYGate(q, -1.4429132790727737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.126235000781464, 0);
  sqcRYGate(q, -0.978900515905844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.281724614923437, 0);
  sqcRYGate(q, 1.17389178097282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6100778111085776, 2);
  sqcRYGate(q, 1.58689140823114, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3712090276522968, 2);
  sqcRYGate(q, -0.34385316448328385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1668107953582334, 0);
  sqcRYGate(q, -1.687076357349232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5989625238729634, 0);
  sqcRYGate(q, -0.5967220689212178, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.443601558149599, 1);
  sqcRYGate(q, -0.4898446286645522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2138268314145038, 1);
  sqcRYGate(q, -0.5041463750769969, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3866929696710748, 0);
  sqcRYGate(q, -2.9064318559815696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.34303697228868, 0);
  sqcRYGate(q, -0.7507857525210411, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7934927906675178, 2);
  sqcRYGate(q, 0.12911240089233653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0236266615938856, 2);
  sqcRYGate(q, 0.7942169263142386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.429923237423706, 0);
  sqcRYGate(q, -1.0054939613612826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4521652265795097, 0);
  sqcRYGate(q, -2.3250029262446272, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4057522729018075, 1);
  sqcRYGate(q, 0.590578689408209, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4322942206609715, 1);
  sqcRYGate(q, 0.19286686650520662, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9837181933519146, 0);
  sqcRYGate(q, 0.8717412827203459, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2168109361569286, 0);
  sqcRYGate(q, 1.2654853748971993, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6140130239295343, 2);
  sqcRYGate(q, -2.3903982213061665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0563809500320422, 2);
  sqcRYGate(q, 1.5787159430380509, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8101883363851936, 0);
  sqcRYGate(q, 2.582818622357413, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0277925604680886, 0);
  sqcRYGate(q, 1.255452029867155, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.29788480637146186, 1);
  sqcRYGate(q, -0.39774730893176447, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.03643989873887232, 1);
  sqcRYGate(q, -2.3317526071073353, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8001874469350416, 0);
  sqcRYGate(q, 2.141344924677828, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.33267815716434423, 0);
  sqcRYGate(q, 2.0526377738824535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2952676095738713, 2);
  sqcRYGate(q, -2.686483879176389, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.548416350252542, 2);
  sqcRYGate(q, 2.9804618270171326, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9711648916056133, 0);
  sqcRYGate(q, -0.26912778263110404, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3217724333308292, 0);
  sqcRYGate(q, 0.06302939730652278, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.054439388358407115, 1);
  sqcRYGate(q, 1.1435219523228939, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2274029047715098, 1);
  sqcRYGate(q, -3.0094656643794355, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9174511213690564, 0);
  sqcRYGate(q, -1.410214072339043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8456979942711738, 0);
  sqcRYGate(q, 1.0034412742574037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.565761257055959, 2);
  sqcRYGate(q, -3.0139276451905705, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6501741650498891, 2);
  sqcRYGate(q, 0.40429899642979683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6999196225907865, 0);
  sqcRYGate(q, 1.1509851505646977, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5263480938708156, 0);
  sqcRYGate(q, 2.070691839437143, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5545919835313632, 1);
  sqcRYGate(q, 2.635298902743218, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4726171702365176, 1);
  sqcRYGate(q, -2.6944019246763515, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5583336184566683, 0);
  sqcRYGate(q, 0.5699647850338723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0031591212761027743, 0);
  sqcRYGate(q, 1.5202602546525892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.129677042518761, 2);
  sqcRYGate(q, 1.73915251835838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4645135331702024, 2);
  sqcRYGate(q, -2.2542294945745764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6191058298352268, 0);
  sqcRYGate(q, -0.2350973683565858, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7963982051046539, 0);
  sqcRYGate(q, -2.299617563962028, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0221558386020284, 1);
  sqcRYGate(q, 3.01665984248387, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.766973083108604, 1);
  sqcRYGate(q, -2.3040670869601265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.92748989097283, 0);
  sqcRYGate(q, 0.09146600229231339, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.783957779842832, 0);
  sqcRYGate(q, -3.068836463617995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7025134234635386, 2);
  sqcRYGate(q, 0.9343747985209738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4879496787566544, 2);
  sqcRYGate(q, 1.0716313059409248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2949757369769497, 0);
  sqcRYGate(q, 3.010401230318341, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4264802744461618, 0);
  sqcRYGate(q, -1.8238184257819536, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.356383076383938, 1);
  sqcRYGate(q, -1.798279393823834, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2041799937758284, 1);
  sqcRYGate(q, 2.866600966815739, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5064204089165947, 0);
  sqcRYGate(q, 0.7989310787940763, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8122738014968772, 0);
  sqcRYGate(q, 1.5474691936563545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4650390666504247, 2);
  sqcRYGate(q, 0.2502600047865861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8543286469270157, 2);
  sqcRYGate(q, -1.938827067980923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.901092119899137, 0);
  sqcRYGate(q, -1.903536541695992, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.500203130396748, 0);
  sqcRYGate(q, -2.4130610575849225, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.17248776266906685, 1);
  sqcRYGate(q, 1.3169661976948372, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8606028770898577, 1);
  sqcRYGate(q, 0.5225543394857163, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5165823594521526, 0);
  sqcRYGate(q, -2.3330784032660046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.130251740042171, 0);
  sqcRYGate(q, 3.0446466221697417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.184614691736004, 2);
  sqcRYGate(q, -2.735470217258754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.247153815225847, 2);
  sqcRYGate(q, -1.3893814007183842, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2482314612680065, 0);
  sqcRYGate(q, -0.9166444371103396, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7220216816733536, 0);
  sqcRYGate(q, 0.059058641648177534, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5180684705221743, 1);
  sqcRYGate(q, -2.3167923869557483, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0815601797509027, 1);
  sqcRYGate(q, 0.7255608311111468, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2206568529404465, 0);
  sqcRYGate(q, -2.055781369871138, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9093829530356407, 0);
  sqcRYGate(q, 2.0325075328191673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3934078987594679, 2);
  sqcRYGate(q, 2.1545384684865034, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5430893841268916, 2);
  sqcRYGate(q, -2.2382829563818096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.119388503962509, 0);
  sqcRYGate(q, -0.02415967152364247, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.049340039334742514, 0);
  sqcRYGate(q, 0.46332858570694574, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5323314716509033, 1);
  sqcRYGate(q, 1.5792715943237177, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9877539389556134, 1);
  sqcRYGate(q, -0.1037110304497403, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7431007340226163, 0);
  sqcRYGate(q, 2.820835209299624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6632525627430765, 0);
  sqcRYGate(q, 0.04576721747455981, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7546853674159868, 2);
  sqcRYGate(q, 0.6794531098074521, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8794456168155129, 2);
  sqcRYGate(q, -1.6502754479646318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8268538339446976, 0);
  sqcRYGate(q, -0.12419866330380813, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0038294325780726, 0);
  sqcRYGate(q, -1.5479982062119735, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5542635983426507, 1);
  sqcRYGate(q, -1.4440013364525717, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1847789445898087, 1);
  sqcRYGate(q, 0.6917731115597174, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9333840833603197, 0);
  sqcRYGate(q, -1.2889129551262304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.120408553750623, 0);
  sqcRYGate(q, -2.1672813190015288, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4115177782790704, 2);
  sqcRYGate(q, 0.8987967237426524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.31571120532268093, 2);
  sqcRYGate(q, 1.7471577940464291, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.248916790667825, 0);
  sqcRYGate(q, -1.2874618801948425, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6747183447140959, 0);
  sqcRYGate(q, 0.2981338020343775, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.44972420074863795, 1);
  sqcRYGate(q, 2.1795513805598716, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7933500085356096, 1);
  sqcRYGate(q, 0.4323761488913507, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.454021569925215, 0);
  sqcRYGate(q, -1.093677896332105, 1);
  sqcRYGate(q, 2.0042351538409973, 2);
  sqcRYGate(q, 1.0580693196490047, 3);

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
