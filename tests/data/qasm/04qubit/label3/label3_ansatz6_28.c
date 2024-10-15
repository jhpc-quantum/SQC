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

  sqcRYGate(q, 1.4802904086152768, 0);
  sqcRYGate(q, -2.5636332514517486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3414556287694914, 0);
  sqcRYGate(q, -0.14123316213939585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8996172370058204, 1);
  sqcRYGate(q, -1.430735778545314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8213485668780547, 1);
  sqcRYGate(q, 0.9873521953144078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.016425187802829, 2);
  sqcRYGate(q, 0.7189335958681297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2912429986598353, 2);
  sqcRYGate(q, 2.649258121566113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9779124433582567, 0);
  sqcRYGate(q, 2.1686820112993543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0798928183777103, 0);
  sqcRYGate(q, 0.8042664104562317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.43591459508307295, 1);
  sqcRYGate(q, 2.996315824300093, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5999820599680439, 1);
  sqcRYGate(q, -1.725675591316059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.20916833707816, 2);
  sqcRYGate(q, 0.9911980209264417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.383893772196673, 2);
  sqcRYGate(q, 2.848758063432361, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1184809738108328, 0);
  sqcRYGate(q, -0.541738717407916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6328895985784004, 0);
  sqcRYGate(q, 2.4426871209159673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0381495266353093, 1);
  sqcRYGate(q, -0.3351183882499546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.30238135729535, 1);
  sqcRYGate(q, -1.2836454661110244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3702228672878713, 2);
  sqcRYGate(q, 0.3745784910075143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7486214490286092, 2);
  sqcRYGate(q, 0.10328073913414083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6041133664592835, 0);
  sqcRYGate(q, -2.578808427943126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1606602425091011, 0);
  sqcRYGate(q, -2.360060524174342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.13173792770559506, 1);
  sqcRYGate(q, 0.20651492246332914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6778365297871123, 1);
  sqcRYGate(q, 3.1301502692065974, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8185881721741373, 2);
  sqcRYGate(q, -1.6758996375919137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9129720186493586, 2);
  sqcRYGate(q, -2.635873327799497, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6867527465286054, 0);
  sqcRYGate(q, -2.418882617220412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.478091912071768, 0);
  sqcRYGate(q, -2.389162589136813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8811646106723963, 1);
  sqcRYGate(q, 1.988805752652734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6871411864672776, 1);
  sqcRYGate(q, -2.5020085285297977, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6873849588033938, 2);
  sqcRYGate(q, 2.6209829106903384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.00390392032184, 2);
  sqcRYGate(q, -2.6982235804145716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2109964494741832, 0);
  sqcRYGate(q, 1.3375114116755058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8476445033515543, 0);
  sqcRYGate(q, 1.8892546458893644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0948941300953674, 1);
  sqcRYGate(q, -2.9290215243665214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7321570809413424, 1);
  sqcRYGate(q, -2.263922596023776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.568639956378423, 2);
  sqcRYGate(q, 2.1064853760752094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.255992828268187, 2);
  sqcRYGate(q, 1.7964560806272059, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2464201923761458, 0);
  sqcRYGate(q, -2.677399217976873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3534988938507762, 0);
  sqcRYGate(q, 2.945562380612349, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1570742301629182, 1);
  sqcRYGate(q, 0.8589448992284675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.479304933299253, 1);
  sqcRYGate(q, 0.4756557737617886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1311480247524237, 2);
  sqcRYGate(q, -2.3804090267281244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.078973289359142, 2);
  sqcRYGate(q, 1.9567167503249632, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4784354524014693, 0);
  sqcRYGate(q, -3.022797195477931, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2373652230212797, 0);
  sqcRYGate(q, 2.0809928336633736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.496064203194999, 1);
  sqcRYGate(q, 0.5648357117517052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3082749118491392, 1);
  sqcRYGate(q, -0.5975960053385871, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5338169269720952, 2);
  sqcRYGate(q, -2.1766749166469825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30754857774377703, 2);
  sqcRYGate(q, -0.710531340113055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6854016896768753, 0);
  sqcRYGate(q, -2.857420779179736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.775333382043744, 0);
  sqcRYGate(q, 2.5420355698598653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.168294315183422, 1);
  sqcRYGate(q, 1.1197955060353237, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7987857518730381, 1);
  sqcRYGate(q, 2.0709619710949725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5980704977297377, 2);
  sqcRYGate(q, -2.2113039720448384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3838350118478148, 2);
  sqcRYGate(q, -1.722181621797057, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.437711272302012, 0);
  sqcRYGate(q, 1.0765249239310277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.186116170779353, 0);
  sqcRYGate(q, 1.5358514714284344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5601709511468647, 1);
  sqcRYGate(q, -2.1237745926328273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3835322202455194, 1);
  sqcRYGate(q, -1.144996548383446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4310605324451533, 2);
  sqcRYGate(q, -0.09626248140636548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.173336718526726, 2);
  sqcRYGate(q, -1.2085346343399477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5363708312623754, 0);
  sqcRYGate(q, 1.8936433079131803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3028975718344533, 0);
  sqcRYGate(q, 2.2745789653451034, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.946391392038327, 1);
  sqcRYGate(q, -0.42430246720531173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.323017222257744, 1);
  sqcRYGate(q, -0.4245772980146967, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0328282413908694, 2);
  sqcRYGate(q, 1.8584402351229048, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.023996291560869, 2);
  sqcRYGate(q, -2.5988119129723652, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.044507944099603, 0);
  sqcRYGate(q, 0.9063467882878946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4478162910993312, 0);
  sqcRYGate(q, -2.099972728192495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08461562209781803, 1);
  sqcRYGate(q, -1.255280284612513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.17624099150730377, 1);
  sqcRYGate(q, 1.329355096968658, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3129234408085853, 2);
  sqcRYGate(q, 1.5562395230617074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.417081804358078, 2);
  sqcRYGate(q, 2.3084189580304493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6331221021763553, 0);
  sqcRYGate(q, 2.8300384803503427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.43910253745432226, 0);
  sqcRYGate(q, -2.108380591604218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.26659413365490353, 1);
  sqcRYGate(q, -1.2079560585043494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0591786992031462, 1);
  sqcRYGate(q, -2.5854027920200355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7177682311163736, 2);
  sqcRYGate(q, 2.193014725796512, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.53430655307098, 2);
  sqcRYGate(q, -1.6891848129107765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1155215212862397, 0);
  sqcRYGate(q, -2.445565847064445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7082572804231111, 0);
  sqcRYGate(q, -3.1370075132376813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5256524104734845, 1);
  sqcRYGate(q, -2.693496992195697, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1545019528937628, 1);
  sqcRYGate(q, -2.4207729377780027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.646450828933877, 2);
  sqcRYGate(q, 2.0893352667648557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.756767494511328, 2);
  sqcRYGate(q, 0.014614919583217478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.40126249673948866, 0);
  sqcRYGate(q, 0.16690089775160777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.140401704802662, 0);
  sqcRYGate(q, -1.687249132170046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2643440675758484, 1);
  sqcRYGate(q, 2.263842187815225, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8537787991881274, 1);
  sqcRYGate(q, -2.404297569082687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.956080190904267, 2);
  sqcRYGate(q, 2.5536009478224573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2178643305336803, 2);
  sqcRYGate(q, -0.24662561558302476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3015365206667786, 0);
  sqcRYGate(q, -1.0734333133642933, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5970646718731718, 0);
  sqcRYGate(q, 1.6526267613072632, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0811942467054743, 1);
  sqcRYGate(q, 1.2761735133582244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.27910429148590765, 1);
  sqcRYGate(q, 1.4531710303677299, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.21899268136747524, 2);
  sqcRYGate(q, -0.02112950691994886, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4773288282381465, 2);
  sqcRYGate(q, -2.988270097241984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5448322826007086, 0);
  sqcRYGate(q, -2.2188324238862807, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4996250783017855, 0);
  sqcRYGate(q, -0.27788529309574156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8235407744707448, 1);
  sqcRYGate(q, 1.6434842218565064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.618482795682593, 1);
  sqcRYGate(q, 2.38126246596222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.109996289641109, 2);
  sqcRYGate(q, -1.3189330737766263, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7231266146638373, 2);
  sqcRYGate(q, -0.12540286136444614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9913839245968044, 0);
  sqcRYGate(q, 3.1101185175061423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3519678267285027, 0);
  sqcRYGate(q, 0.9793952556034942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8016731714949357, 1);
  sqcRYGate(q, 0.46359007349548254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5043862871046758, 1);
  sqcRYGate(q, -0.2611893665976869, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.467675870408164, 2);
  sqcRYGate(q, -2.140728746812929, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6174690993617258, 2);
  sqcRYGate(q, 1.2281263501144228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9158466079893195, 0);
  sqcRYGate(q, 1.8165972323378021, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7216686169654901, 0);
  sqcRYGate(q, -1.7358480114301873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.261253439061714, 1);
  sqcRYGate(q, 0.8201149974773081, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9778999437684126, 1);
  sqcRYGate(q, -1.621274588153128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8048989076837316, 2);
  sqcRYGate(q, -0.9497983374845527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.13656166464735, 2);
  sqcRYGate(q, -0.6987300020724589, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.113168533098203, 0);
  sqcRYGate(q, 0.4689248999856179, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9939855866825793, 0);
  sqcRYGate(q, 3.0502302293692374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2816430353230235, 1);
  sqcRYGate(q, -0.832540417294102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5749964820137428, 1);
  sqcRYGate(q, 2.149900558735744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.45077024229574025, 2);
  sqcRYGate(q, 2.2265239294893235, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1078411893080917, 2);
  sqcRYGate(q, -0.9078753717730957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3990910308026427, 0);
  sqcRYGate(q, -2.202627390699317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.05883645164627, 0);
  sqcRYGate(q, -0.624222989390443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.165489929058885, 1);
  sqcRYGate(q, 1.7540763655512803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2785363151833175, 1);
  sqcRYGate(q, 1.5595957527560829, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1318183571101224, 2);
  sqcRYGate(q, -2.5038385455562344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3772272436352517, 2);
  sqcRYGate(q, -2.3456459100222307, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.842930374989934, 0);
  sqcRYGate(q, -1.715754140132995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07664692382693428, 0);
  sqcRYGate(q, -2.5189441542311197, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7344187037712442, 1);
  sqcRYGate(q, 2.285717594452799, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.347404844196249, 1);
  sqcRYGate(q, 2.877325908369813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5762624585494116, 2);
  sqcRYGate(q, 0.1876532320657609, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3966387661712005, 2);
  sqcRYGate(q, 0.9889751898909045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5699720665289056, 0);
  sqcRYGate(q, -1.259989678383068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3758423302202023, 0);
  sqcRYGate(q, -2.7929211178214093, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7152961981737525, 1);
  sqcRYGate(q, -3.02265203470487, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3605539130098863, 1);
  sqcRYGate(q, 1.9269624762901776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6234798726574475, 2);
  sqcRYGate(q, 0.4198900621398396, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9881379131913417, 2);
  sqcRYGate(q, -0.5075987548447554, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4692748663222217, 0);
  sqcRYGate(q, 1.6658513905273604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1926484150828884, 0);
  sqcRYGate(q, 0.15586219601854445, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.074266871396275, 1);
  sqcRYGate(q, 1.7334171642066907, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2561770974349913, 1);
  sqcRYGate(q, 0.3540960199070246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.735988165642336, 2);
  sqcRYGate(q, 1.0230402194374912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1729211056189506, 2);
  sqcRYGate(q, -0.6079061608873811, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1868351101018813, 0);
  sqcRYGate(q, -0.606335114335166, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6195186222647509, 0);
  sqcRYGate(q, 1.3217725696007854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23000852707482228, 1);
  sqcRYGate(q, 2.720772290405188, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.71629007359578, 1);
  sqcRYGate(q, 2.403198168739722, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7966245644516121, 2);
  sqcRYGate(q, -1.7650724870883794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.190602490849593, 2);
  sqcRYGate(q, 0.39812764900688985, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0684337872055902, 0);
  sqcRYGate(q, 0.06010705708801112, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2538526586688303, 0);
  sqcRYGate(q, -2.515545506379399, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6542012287374543, 1);
  sqcRYGate(q, 2.548460412755698, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.20466567397099933, 1);
  sqcRYGate(q, 0.5783210729817495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.43552024959998636, 2);
  sqcRYGate(q, -1.91628782743587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.025622070033830546, 2);
  sqcRYGate(q, -1.4441929276527752, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.485303517520489, 0);
  sqcRYGate(q, -1.765676593465707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6756757624925718, 0);
  sqcRYGate(q, -1.659150283819569, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6265335539017132, 1);
  sqcRYGate(q, 1.9984878844300829, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3374277928847436, 1);
  sqcRYGate(q, -2.355388093059905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.04429268624577798, 2);
  sqcRYGate(q, 2.3484724368703764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2008794243453735, 2);
  sqcRYGate(q, -0.6141450698934519, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9035006038654387, 0);
  sqcRYGate(q, 1.5955629396809181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5889638138856452, 0);
  sqcRYGate(q, 1.347215784850528, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0500724191544863, 1);
  sqcRYGate(q, -2.3057744520354926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5826630907895414, 1);
  sqcRYGate(q, 1.8511699082421, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0700035477616447, 2);
  sqcRYGate(q, 2.387531723144978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.510557137409429, 2);
  sqcRYGate(q, 1.1496862288769751, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9067623901290537, 0);
  sqcRYGate(q, -0.14889745206932706, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8021714138829346, 0);
  sqcRYGate(q, 0.8266615583471077, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4747457842985359, 1);
  sqcRYGate(q, -2.7410239585303553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2226693248938494, 1);
  sqcRYGate(q, 2.9920453127820243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3786624341556877, 2);
  sqcRYGate(q, 1.1427532706050019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.456418014835829, 2);
  sqcRYGate(q, 1.2753068717710137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6857896282383744, 0);
  sqcRYGate(q, 1.1645079958938007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.898421239912343, 0);
  sqcRYGate(q, -2.173809777047466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.539519403682445, 1);
  sqcRYGate(q, 0.6159502630588989, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6140478340765682, 1);
  sqcRYGate(q, 2.061624809106025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.656946034237351, 2);
  sqcRYGate(q, 1.997986644811051, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7284178391803073, 2);
  sqcRYGate(q, 1.1825590768265544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5654706234928092, 0);
  sqcRYGate(q, -2.813734885170899, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.377789997244071, 0);
  sqcRYGate(q, 0.23504137306044118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8748636760988946, 1);
  sqcRYGate(q, -0.41670423349857066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5585782636029588, 1);
  sqcRYGate(q, -0.7668292055135933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2600653872383702, 2);
  sqcRYGate(q, -1.5355104354174118, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8544407372592657, 2);
  sqcRYGate(q, 1.5840172511147732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6061812156727504, 0);
  sqcRYGate(q, 0.6209229044379958, 1);
  sqcRYGate(q, 2.548949672998204, 2);
  sqcRYGate(q, 1.9220816966734109, 3);

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
