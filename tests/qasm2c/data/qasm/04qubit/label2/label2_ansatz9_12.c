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

  sqcRYGate(q, 1.878448589493395, 0);
  sqcRYGate(q, -0.5606051146879037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4249575867828098, 0);
  sqcRYGate(q, 3.040242916206123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4471781116488445, 2);
  sqcRYGate(q, -2.510273953648583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7024153031345923, 2);
  sqcRYGate(q, -2.091370259816001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.233167408543244, 0);
  sqcRYGate(q, -1.4160365348035326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5195740804347957, 0);
  sqcRYGate(q, -0.4504519396846609, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.07795068952978086, 1);
  sqcRYGate(q, -1.9112951023350915, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0345097287857223, 1);
  sqcRYGate(q, -1.7394085099285315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9516837044740425, 0);
  sqcRYGate(q, 1.3777673640287214, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.071368778989446, 0);
  sqcRYGate(q, 1.3035046031074602, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.597919981601944, 1);
  sqcRYGate(q, -2.409122519487813, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.213831034183235, 1);
  sqcRYGate(q, 1.9655132196095133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.454037852103128, 0);
  sqcRYGate(q, 0.9449742220129123, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08968056348304465, 0);
  sqcRYGate(q, -1.559883202191941, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7031802307339552, 2);
  sqcRYGate(q, 1.6604940032139484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8157224747181857, 2);
  sqcRYGate(q, 1.7220038190702596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.04439871097470411, 0);
  sqcRYGate(q, -1.7979153361539664, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.713234169335548, 0);
  sqcRYGate(q, 2.654916049023047, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.81325756502497, 1);
  sqcRYGate(q, -0.9720592828892014, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8564711490534638, 1);
  sqcRYGate(q, 0.77268463287401, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9305042276738842, 0);
  sqcRYGate(q, -2.513945959712953, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.148871918789112, 0);
  sqcRYGate(q, 0.5255915718621242, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2448040674763439, 1);
  sqcRYGate(q, -1.6616917444866937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48920798902331164, 1);
  sqcRYGate(q, -2.316290672435132, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5320671728978592, 0);
  sqcRYGate(q, 2.9489900871452512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.425192701650948, 0);
  sqcRYGate(q, -2.8637236394488843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8035057883744785, 2);
  sqcRYGate(q, -0.5542688689217952, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.748137566057629, 2);
  sqcRYGate(q, 1.9420626966724281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9829523966811213, 0);
  sqcRYGate(q, 0.693172469189239, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.698513769750276, 0);
  sqcRYGate(q, 2.8496881344832956, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8580560514397466, 1);
  sqcRYGate(q, 2.297543574628123, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.530371837021512, 1);
  sqcRYGate(q, 0.42077971516241597, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4953621502045847, 0);
  sqcRYGate(q, -1.6871444701539788, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6579639106551423, 0);
  sqcRYGate(q, -0.914361753487845, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7561626894216644, 1);
  sqcRYGate(q, 3.110517732565893, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.584998449218698, 1);
  sqcRYGate(q, -1.0367642834114108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6338757944069126, 0);
  sqcRYGate(q, 3.0011873187473195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.691659640746644, 0);
  sqcRYGate(q, -0.8940973097147431, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5021698444224403, 2);
  sqcRYGate(q, 2.2110185158377753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0026045141896573, 2);
  sqcRYGate(q, -1.8343487421947033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8586927217216287, 0);
  sqcRYGate(q, -1.7328126303319324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1063552321602437, 0);
  sqcRYGate(q, -0.9291875633067903, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.003166923853696, 1);
  sqcRYGate(q, -0.08703783879298972, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6036812563636462, 1);
  sqcRYGate(q, -1.2242247373675836, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2240264868853267, 0);
  sqcRYGate(q, 2.734268138676788, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0250400370910393, 0);
  sqcRYGate(q, -2.8556617486429587, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.979525303804222, 1);
  sqcRYGate(q, -0.08557256110502685, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0728158396876266, 1);
  sqcRYGate(q, -1.1331270733351988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8929739193532837, 0);
  sqcRYGate(q, -2.935914447887815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.268509060368637, 0);
  sqcRYGate(q, 2.7339255570804766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5073818974378472, 2);
  sqcRYGate(q, 0.9187254039107362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9072975776305996, 2);
  sqcRYGate(q, 1.5948133909685733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.252638055983135, 0);
  sqcRYGate(q, -2.4814225251555677, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4680021310490945, 0);
  sqcRYGate(q, -2.7845209236460757, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1988631535792402, 1);
  sqcRYGate(q, -0.11983786907349714, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9163389122158634, 1);
  sqcRYGate(q, 1.4545384689639418, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5414842876283992, 0);
  sqcRYGate(q, -2.900836484713886, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7078889030224886, 0);
  sqcRYGate(q, -2.807725501137559, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1224633548584446, 1);
  sqcRYGate(q, 2.936137488799987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.316599185688912, 1);
  sqcRYGate(q, -0.7706866788050802, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5198085755259125, 0);
  sqcRYGate(q, -2.930365601893465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5843426371994808, 0);
  sqcRYGate(q, 1.7463570915888464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7103586248955525, 2);
  sqcRYGate(q, -1.6925010565092746, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7031437784675438, 2);
  sqcRYGate(q, 0.43057413890966156, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8200932033198023, 0);
  sqcRYGate(q, 1.915475228491502, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2747119608256403, 0);
  sqcRYGate(q, 2.055976891024527, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2019371462699695, 1);
  sqcRYGate(q, -2.7020106187947337, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5669357382627123, 1);
  sqcRYGate(q, 0.6856465998324416, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0840787709258404, 0);
  sqcRYGate(q, -1.2932855624768818, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7252932859019904, 0);
  sqcRYGate(q, -2.6558071453972745, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3401431953105147, 1);
  sqcRYGate(q, -0.3443582249341852, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3636920425706505, 1);
  sqcRYGate(q, -2.945550182112707, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.971201013396036, 0);
  sqcRYGate(q, -1.8853966677440046, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2603880022993037, 0);
  sqcRYGate(q, 1.0035040112264175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9744034424410426, 2);
  sqcRYGate(q, 0.8957307171268454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.760967094982658, 2);
  sqcRYGate(q, 0.8834394692539204, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2125610597821685, 0);
  sqcRYGate(q, 1.9741223837532644, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9878644079056427, 0);
  sqcRYGate(q, -2.215610934270392, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6118136967039822, 1);
  sqcRYGate(q, 2.3239941307162977, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8762533706938119, 1);
  sqcRYGate(q, 1.3325059234625067, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2977109897960697, 0);
  sqcRYGate(q, -2.541828991923597, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5192669769054792, 0);
  sqcRYGate(q, 0.15934538056124392, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1195929275871253, 1);
  sqcRYGate(q, 2.926857312154255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4273171584712526, 1);
  sqcRYGate(q, -0.9162267875326923, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1055811157162523, 0);
  sqcRYGate(q, -2.3817337327873913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.50099969550667, 0);
  sqcRYGate(q, -1.3902963726665973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.111699714520935, 2);
  sqcRYGate(q, -2.139409375203556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.28925174930289543, 2);
  sqcRYGate(q, -0.25399826170958556, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5343012852747338, 0);
  sqcRYGate(q, -0.22486298466702692, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4259607665681555, 0);
  sqcRYGate(q, 2.3778487437615974, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2715818484738648, 1);
  sqcRYGate(q, -0.5529698494271074, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.487160114670882, 1);
  sqcRYGate(q, -0.559796905012715, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.756297650989808, 0);
  sqcRYGate(q, 1.6178883318872128, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.988386878129443, 0);
  sqcRYGate(q, 1.375909145737003, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6715604262462092, 1);
  sqcRYGate(q, 3.021186944308155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3656666239101267, 1);
  sqcRYGate(q, 0.9490594219143667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7696056762264174, 0);
  sqcRYGate(q, 1.3954788001740859, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7240509249964742, 0);
  sqcRYGate(q, -0.26635243063853586, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6783898090201458, 2);
  sqcRYGate(q, 1.6356806402078297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.86564577478475, 2);
  sqcRYGate(q, -0.5277939261102387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.497516655539058, 0);
  sqcRYGate(q, 1.279094831935129, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.18104170929948923, 0);
  sqcRYGate(q, 2.2014331194915178, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.44943415372078, 1);
  sqcRYGate(q, 1.723462467313497, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2889056703127743, 1);
  sqcRYGate(q, 2.5513232382462165, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5246050422262307, 0);
  sqcRYGate(q, -1.5869333085592907, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5126380292425372, 0);
  sqcRYGate(q, 0.4542129459683376, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3913592378270066, 1);
  sqcRYGate(q, 0.7844642902520667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5293615040725053, 1);
  sqcRYGate(q, -2.3159337482222453, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9698025357796329, 0);
  sqcRYGate(q, 0.40379346524696363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1284163392424693, 0);
  sqcRYGate(q, 0.8544357618439125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.217243284781255, 2);
  sqcRYGate(q, 1.1896125059963134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0595483095959524, 2);
  sqcRYGate(q, -1.8626936245625418, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2316590235892735, 0);
  sqcRYGate(q, -2.9437830818133075, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7117123606969566, 0);
  sqcRYGate(q, 2.47150717588163, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0293372613898375, 1);
  sqcRYGate(q, 1.4004986327644042, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3469125149420815, 1);
  sqcRYGate(q, -0.6937885703791187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1035534566257403, 0);
  sqcRYGate(q, 1.8249957387545308, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3827216438183396, 0);
  sqcRYGate(q, -1.4787521183710297, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3807117075665998, 1);
  sqcRYGate(q, 1.3302462445841317, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7161064111662405, 1);
  sqcRYGate(q, 1.4275325090675868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7139414950693063, 0);
  sqcRYGate(q, -0.46062713457878035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.016437066125687568, 0);
  sqcRYGate(q, 0.3818055495956373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4505044023044728, 2);
  sqcRYGate(q, 2.1911155785073255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7235559946983088, 2);
  sqcRYGate(q, -1.3359283801966133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.300461147994268, 0);
  sqcRYGate(q, -1.8957223912667658, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5930860305723074, 0);
  sqcRYGate(q, 0.6788516293898539, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.075144667185011, 1);
  sqcRYGate(q, 1.2748961436811224, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.749431473035118, 1);
  sqcRYGate(q, 0.6548214842180327, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.383269667055728, 0);
  sqcRYGate(q, -1.7278412255967597, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2637281543407535, 0);
  sqcRYGate(q, 2.0251842364026835, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2928259372053232, 1);
  sqcRYGate(q, 1.400489722807124, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9432786706911608, 1);
  sqcRYGate(q, 0.9342638883463552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9710520344563489, 0);
  sqcRYGate(q, 2.1542330279387203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3640826589162538, 0);
  sqcRYGate(q, -0.6075611912254438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0581009039516855, 2);
  sqcRYGate(q, -1.2769853074242228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9323399398629517, 2);
  sqcRYGate(q, -0.17985241646305106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9562016699922713, 0);
  sqcRYGate(q, -0.019117330475232615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.32759643933963645, 0);
  sqcRYGate(q, 0.3388733837823255, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2589227743217235, 1);
  sqcRYGate(q, -2.2493008528837395, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.399184230609503, 1);
  sqcRYGate(q, -2.5307238594874373, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.017046982141711638, 0);
  sqcRYGate(q, 0.5771325567128525, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8297008046717531, 0);
  sqcRYGate(q, -0.3271441753735145, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9021116716639472, 1);
  sqcRYGate(q, -1.8804982270237316, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.49962987898964795, 1);
  sqcRYGate(q, 0.9920285411534593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4834653099984216, 0);
  sqcRYGate(q, -2.6132838745755955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3660071241361411, 0);
  sqcRYGate(q, -0.8053177619247471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.332583389727759, 2);
  sqcRYGate(q, -2.316789662371564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0156122886715577, 2);
  sqcRYGate(q, 2.812136714137569, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8120454900014993, 0);
  sqcRYGate(q, 1.981442099364992, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.738437425971741, 0);
  sqcRYGate(q, -0.6131914962830417, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4577943734849987, 1);
  sqcRYGate(q, -2.8682856906885386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0247963559240914, 1);
  sqcRYGate(q, -1.6334720020904974, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2309384613025867, 0);
  sqcRYGate(q, 2.700042141697712, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3644084232026979, 0);
  sqcRYGate(q, -1.996706990828507, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1057070461990468, 1);
  sqcRYGate(q, -2.9798563192068594, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2292585332812278, 1);
  sqcRYGate(q, -2.4067573292973057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4509062174427796, 0);
  sqcRYGate(q, 3.0102526880352927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3625733500549817, 0);
  sqcRYGate(q, 2.210352452374381, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9850696948338599, 2);
  sqcRYGate(q, -1.121463049070932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6274683199346556, 2);
  sqcRYGate(q, -1.3469808286882783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.624012786295712, 0);
  sqcRYGate(q, 3.118222615433918, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.048820769278377085, 0);
  sqcRYGate(q, 2.1275103760410463, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.072572185522767, 1);
  sqcRYGate(q, -2.103816391286969, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5778977101041298, 1);
  sqcRYGate(q, 3.031270932430357, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.308584605841685, 0);
  sqcRYGate(q, -1.756128364193441, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6025435083912094, 0);
  sqcRYGate(q, -1.8210144426959338, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.1377569465832145, 1);
  sqcRYGate(q, 2.744929984084461, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7680471790090486, 1);
  sqcRYGate(q, 1.2887105805453218, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6911018470552094, 0);
  sqcRYGate(q, 2.3886956670115223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4875596509277373, 0);
  sqcRYGate(q, -2.668374673232921, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3050905610148398, 2);
  sqcRYGate(q, -1.0944595243130468, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.030772681277604, 2);
  sqcRYGate(q, -0.5750727652321013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4225970417716534, 0);
  sqcRYGate(q, 1.9543082896967858, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3108005121325899, 0);
  sqcRYGate(q, 2.8315683419337643, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3571765253955821, 1);
  sqcRYGate(q, -0.5793383664446319, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2469769330021656, 1);
  sqcRYGate(q, 0.9915326487629739, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.874953835292614, 0);
  sqcRYGate(q, 2.208061703656781, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5553700709664648, 0);
  sqcRYGate(q, 0.22271637850840667, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0709945704236765, 1);
  sqcRYGate(q, -3.087204161808314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6827094645487097, 1);
  sqcRYGate(q, 2.310056901519868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08593694982511264, 0);
  sqcRYGate(q, 1.4349161183282853, 1);
  sqcRYGate(q, 1.8964982151120449, 2);
  sqcRYGate(q, -0.11526439743956818, 3);

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
