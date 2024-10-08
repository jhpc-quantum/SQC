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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 2.725888360103602, 0);
  sqcRYGate(q, 1.5900839037301102, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.10032283233684, 0);
  sqcRYGate(q, -0.6471205183803539, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.228305687466448, 1);
  sqcRYGate(q, -2.045630439934491, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1364235139273982, 1);
  sqcRYGate(q, -0.12834332979956312, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5648665439052123, 2);
  sqcRYGate(q, 1.5292784188985271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.225155303487831, 2);
  sqcRYGate(q, 0.4336344255094912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4078554563221344, 3);
  sqcRYGate(q, -1.1599542551494944, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4755064604180568, 3);
  sqcRYGate(q, -3.0814986946967733, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.103490221532823, 4);
  sqcRYGate(q, 3.0068006160590275, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6406114117094033, 4);
  sqcRYGate(q, 2.353020161769672, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.71896044972076, 5);
  sqcRYGate(q, -3.1316736129865026, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3723321143526777, 5);
  sqcRYGate(q, 2.133490697472585, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2868854305643715, 6);
  sqcRYGate(q, 1.5079772506035456, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.9449409287196666, 6);
  sqcRYGate(q, -0.08107410351213229, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8231091081774721, 7);
  sqcRYGate(q, -1.6720864795483834, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.822832052270483, 7);
  sqcRYGate(q, -3.0389378274925214, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.4987256869179743, 8);
  sqcRYGate(q, 2.807401297000708, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.0002986949029057939, 8);
  sqcRYGate(q, -0.019330467682247665, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.36027171675747616, 9);
  sqcRYGate(q, 0.6395656465585935, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.2871367879889037, 9);
  sqcRYGate(q, -2.233582932815378, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.868247495470478, 10);
  sqcRYGate(q, -0.645198352097724, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.12533269862189583, 10);
  sqcRYGate(q, -1.9723433790580027, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2526951724015716, 0);
  sqcRYGate(q, 1.660572811121424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.32408957708, 0);
  sqcRYGate(q, -2.412294736358957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0216000092465372, 1);
  sqcRYGate(q, 2.9018297602155076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.71146968535653, 1);
  sqcRYGate(q, -0.879016228975108, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4385708472549683, 2);
  sqcRYGate(q, 1.9587427631886316, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.32480378082904526, 2);
  sqcRYGate(q, -2.5866833639777123, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.37103378263331876, 3);
  sqcRYGate(q, 0.38730425140628905, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.30583260592926, 3);
  sqcRYGate(q, 0.05963578338414989, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.9328362476412879, 4);
  sqcRYGate(q, -2.686119450655446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9126595567779435, 4);
  sqcRYGate(q, 3.037466127430535, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5505669704153138, 5);
  sqcRYGate(q, 1.8455877719183729, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.480914956802243, 5);
  sqcRYGate(q, -1.1589776985976454, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.502778030214747, 6);
  sqcRYGate(q, 2.0934150590765292, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2320057465922149, 6);
  sqcRYGate(q, -3.0810966159558495, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.235472804923661, 7);
  sqcRYGate(q, 2.6046771705581273, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.80683473340319, 7);
  sqcRYGate(q, -3.137578089857344, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8999319528167287, 8);
  sqcRYGate(q, -1.7965904449782868, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5683695954792126, 8);
  sqcRYGate(q, -1.5005379067303668, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2383996187843485, 9);
  sqcRYGate(q, -2.8095585953833178, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.21318610755519, 9);
  sqcRYGate(q, -1.9417163604902963, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.45444711676669985, 10);
  sqcRYGate(q, 0.5822092257332897, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.694704342006529, 10);
  sqcRYGate(q, -1.0515993143507547, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.07860278651779959, 0);
  sqcRYGate(q, -0.6048206893917868, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.453350948705025, 0);
  sqcRYGate(q, -1.9905510945687963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0183590042284454, 1);
  sqcRYGate(q, 0.5926920603799095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02946987370843729, 1);
  sqcRYGate(q, -0.7380381343785909, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7428782956411744, 2);
  sqcRYGate(q, -0.3275582553465902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4619795582149235, 2);
  sqcRYGate(q, 0.9036739394151885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2657291843785972, 3);
  sqcRYGate(q, 2.7946839250865856, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.948399904626424, 3);
  sqcRYGate(q, -0.23096532469593625, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6562059207702351, 4);
  sqcRYGate(q, -0.31511912893186805, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4382905989967263, 4);
  sqcRYGate(q, 2.3764820368268227, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6937095389668126, 5);
  sqcRYGate(q, -2.7407212730672166, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4559262673767055, 5);
  sqcRYGate(q, -1.222697979234814, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9233759841779068, 6);
  sqcRYGate(q, -0.5566193942256255, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.939304413425578, 6);
  sqcRYGate(q, 0.6687642945018082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6930749934218787, 7);
  sqcRYGate(q, 0.3211897703444525, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.001906131274548, 7);
  sqcRYGate(q, 3.070320229823372, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3643852527413278, 8);
  sqcRYGate(q, 1.798410921560898, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2989302883480518, 8);
  sqcRYGate(q, 2.0249826279348433, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.212861343316759, 9);
  sqcRYGate(q, 2.8002479812922636, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9825343699059452, 9);
  sqcRYGate(q, -1.2670231907693614, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.5932454330706554, 10);
  sqcRYGate(q, -2.4991954194991726, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.3213864470073533, 10);
  sqcRYGate(q, -1.7276709909495418, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6522226632351028, 0);
  sqcRYGate(q, 0.03866858453403379, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4635660890413069, 0);
  sqcRYGate(q, -3.000397803843696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2198738506307663, 1);
  sqcRYGate(q, 2.0317383341064668, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5405188876659837, 1);
  sqcRYGate(q, 1.415630945927195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0370873410426342, 2);
  sqcRYGate(q, -0.31710866361928575, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.098099878032974, 2);
  sqcRYGate(q, -2.03326483753244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1659837964038635, 3);
  sqcRYGate(q, 3.1155728112302308, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1058183695975483, 3);
  sqcRYGate(q, 0.19167229150341658, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6218423333931824, 4);
  sqcRYGate(q, -1.1424714529562188, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.385588023645056, 4);
  sqcRYGate(q, 1.9924741335157845, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8160607690123767, 5);
  sqcRYGate(q, 0.23995769662769018, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1398818252821377, 5);
  sqcRYGate(q, -0.019605077465519177, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.72278319191725, 6);
  sqcRYGate(q, -2.8355137670115442, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7995667089708944, 6);
  sqcRYGate(q, 1.011266656815625, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0060198288368098, 7);
  sqcRYGate(q, -1.2687074751773961, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.0083969279705918, 7);
  sqcRYGate(q, -1.5570810783711668, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.655144261544214, 8);
  sqcRYGate(q, -3.012873528173301, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.214020982404264, 8);
  sqcRYGate(q, -0.0015146551369769057, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.11297614244020363, 9);
  sqcRYGate(q, -2.063842872059013, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.504713751771823, 9);
  sqcRYGate(q, -2.0926684287299, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.9673091297650701, 10);
  sqcRYGate(q, -0.18768844877217195, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6533565946985012, 10);
  sqcRYGate(q, 1.1416554817693259, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.496411075812781, 0);
  sqcRYGate(q, 2.9643969226615035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9530878769051448, 0);
  sqcRYGate(q, -1.3793693061593366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2751492359219627, 1);
  sqcRYGate(q, 0.39643287824688733, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.06295676784510505, 1);
  sqcRYGate(q, -3.1216646882918226, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9065578231217595, 2);
  sqcRYGate(q, 1.5792478003223112, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7823332114800294, 2);
  sqcRYGate(q, 0.09321230766469932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04325703996011221, 3);
  sqcRYGate(q, 2.131459956940188, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.132782257701188, 3);
  sqcRYGate(q, -2.249807517163248, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.16683216329099526, 4);
  sqcRYGate(q, -0.2587468658945689, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4997342887533343, 4);
  sqcRYGate(q, -3.121565488693865, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0653140858209778, 5);
  sqcRYGate(q, 1.5154672186125824, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4043856419571448, 5);
  sqcRYGate(q, 2.993959294784034, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6968915894010874, 6);
  sqcRYGate(q, 1.6833616895672434, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6938741494789484, 6);
  sqcRYGate(q, 3.1410749853763362, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6979990941955865, 7);
  sqcRYGate(q, 1.459603466093476, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.19874020953476723, 7);
  sqcRYGate(q, -1.4016817486310265, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9774376651781402, 8);
  sqcRYGate(q, 2.6789276533938744, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8917909924368848, 8);
  sqcRYGate(q, 2.5300902155847362, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.755715335679665, 9);
  sqcRYGate(q, -2.0820409912186975, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6146730792147619, 9);
  sqcRYGate(q, -1.8473841573729894, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.611299394054668, 10);
  sqcRYGate(q, -0.9040971630184602, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5004288706711097, 10);
  sqcRYGate(q, 2.698521449051543, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.953305707235975, 0);
  sqcRYGate(q, 0.25129267094899305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2313337924787398, 0);
  sqcRYGate(q, 1.5103026761454217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.396085285067508, 1);
  sqcRYGate(q, -0.5032687365359427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8292869075933369, 1);
  sqcRYGate(q, -2.825831839843464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4384798591689263, 2);
  sqcRYGate(q, 2.0820648513008946, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.271225967152261, 2);
  sqcRYGate(q, 2.8614230487179166, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0516394303344017, 3);
  sqcRYGate(q, -0.605941046103461, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.054553009423849, 3);
  sqcRYGate(q, 1.9021591336299872, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2868979421783262, 4);
  sqcRYGate(q, 2.744655503497526, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.039094322938527, 4);
  sqcRYGate(q, 1.2350912811699004, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6790725167187173, 5);
  sqcRYGate(q, 0.31520279632158926, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7076973936840341, 5);
  sqcRYGate(q, -2.423923516129656, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5531124146620865, 6);
  sqcRYGate(q, -1.6859229624414576, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0633285059511204, 6);
  sqcRYGate(q, -1.7319013235208187, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2826336125618665, 7);
  sqcRYGate(q, -2.9395906736459336, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8196247924215427, 7);
  sqcRYGate(q, -1.0856977585521137, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.7246245274696541, 8);
  sqcRYGate(q, -1.4226691080908207, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.351417283966887, 8);
  sqcRYGate(q, -2.0940049057105474, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.39295036718097, 9);
  sqcRYGate(q, -2.8012423796063315, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.5583940389953064, 9);
  sqcRYGate(q, -2.4156618345675342, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4173027746847415, 10);
  sqcRYGate(q, 0.912050341213122, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0472214939801283, 10);
  sqcRYGate(q, 1.0704430857253993, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.955997610196895, 0);
  sqcRYGate(q, -1.3564237894397948, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06782846517568418, 0);
  sqcRYGate(q, 1.6910294320862782, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.13263784259876, 1);
  sqcRYGate(q, -0.3246534181001887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.594827247649869, 1);
  sqcRYGate(q, -0.581914289908875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.257949343437204, 2);
  sqcRYGate(q, 2.269897970046607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.962765275172802, 2);
  sqcRYGate(q, 2.9251706316084825, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.99708575683873, 3);
  sqcRYGate(q, -1.587679265701991, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0075657104841955, 3);
  sqcRYGate(q, 2.985126904215804, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4373969225360694, 4);
  sqcRYGate(q, 2.5012851379941536, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.010467390858501348, 4);
  sqcRYGate(q, -0.1756702879855263, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.547679742611732, 5);
  sqcRYGate(q, 1.3734439102188514, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.067487714916695, 5);
  sqcRYGate(q, -1.324652223655792, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1037275538853202, 6);
  sqcRYGate(q, 2.29400177965313, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.005678510992449429, 6);
  sqcRYGate(q, -0.5952529094577316, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.284011962439289, 7);
  sqcRYGate(q, -1.5740018839989993, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8877014011723493, 7);
  sqcRYGate(q, 1.321665945802165, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.134360936099191, 8);
  sqcRYGate(q, -2.5334131262370154, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5733818997746167, 8);
  sqcRYGate(q, 3.1001456377187626, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6841622786843908, 9);
  sqcRYGate(q, -3.115054654102807, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.934478123799931, 9);
  sqcRYGate(q, 0.21622091040133373, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.019768569457782, 10);
  sqcRYGate(q, -1.0031613173735197, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5853469311511883, 10);
  sqcRYGate(q, 1.0465518484892198, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0888725490123383, 0);
  sqcRYGate(q, -2.2785930864456745, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.37653290492282654, 0);
  sqcRYGate(q, -1.414999228983023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3722300039218356, 1);
  sqcRYGate(q, 1.6767965432112417, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24015366927042422, 1);
  sqcRYGate(q, 1.7055289436605925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8393461747904216, 2);
  sqcRYGate(q, 1.3931139238025265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5040716778650012, 2);
  sqcRYGate(q, -2.771651819027939, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2053752593206766, 3);
  sqcRYGate(q, -1.5768965110470983, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4208912286880171, 3);
  sqcRYGate(q, 2.2689312914627804, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3136986504601005, 4);
  sqcRYGate(q, -1.473391032626614, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.004068928003035359, 4);
  sqcRYGate(q, -0.10189004752368161, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.529491230051592, 5);
  sqcRYGate(q, 1.5886809094610839, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6372777821796203, 5);
  sqcRYGate(q, 3.1388234388234446, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5758350869231055, 6);
  sqcRYGate(q, 1.5558191612496888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3651512262275889, 6);
  sqcRYGate(q, -1.320586281288202, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5789838753151546, 7);
  sqcRYGate(q, -1.8590752975983307, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.013328331783945081, 7);
  sqcRYGate(q, -0.6746518200979192, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.4600543583553285, 8);
  sqcRYGate(q, 1.0257094660847175, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.2747511414413912, 8);
  sqcRYGate(q, 2.315216074558071, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.8620462071880406, 9);
  sqcRYGate(q, -2.4807701694855844, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.460434111528633, 9);
  sqcRYGate(q, 0.8289958046651523, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.1130846738919455, 10);
  sqcRYGate(q, 2.365352362619504, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3958456897588007, 10);
  sqcRYGate(q, 2.1168703947867895, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6799048229601143, 0);
  sqcRYGate(q, 1.0052874634347218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2180813068097722, 0);
  sqcRYGate(q, 0.9761965607611209, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0817569954182362, 1);
  sqcRYGate(q, 2.975710953091577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0458044164424683, 1);
  sqcRYGate(q, 1.4589020116069369, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03290604627541208, 2);
  sqcRYGate(q, 2.588029306514353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.106784709259188, 2);
  sqcRYGate(q, -2.7372011566355323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4634300764771755, 3);
  sqcRYGate(q, -2.2559097671728203, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.26968484038236606, 3);
  sqcRYGate(q, -2.3922684347408736, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8908418299521697, 4);
  sqcRYGate(q, 0.7013607200747253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5931627084534947, 4);
  sqcRYGate(q, 1.5451893863484838, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5715489944231984, 5);
  sqcRYGate(q, -1.5449010993436973, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1254787945588896, 5);
  sqcRYGate(q, -2.4663910125775517, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.7141029589226722, 6);
  sqcRYGate(q, 1.6456967010060888, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2204620137232025, 6);
  sqcRYGate(q, 1.5236315785392938, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3750948656471291, 7);
  sqcRYGate(q, -1.4208368910992055, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.012248128200326, 7);
  sqcRYGate(q, 3.116825577070238, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.456568775475513, 8);
  sqcRYGate(q, 1.2070964168469895, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.387977106351586, 8);
  sqcRYGate(q, 1.5628109680000168, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5549058976976502, 9);
  sqcRYGate(q, 1.118919254745422, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.3424231149916968, 9);
  sqcRYGate(q, 2.3861042281449456, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4433677377196654, 10);
  sqcRYGate(q, -1.7090523628269199, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0542214364811757, 10);
  sqcRYGate(q, 1.4563056960355665, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.608259470461921, 0);
  sqcRYGate(q, -1.2424828136849007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5746710683116065, 0);
  sqcRYGate(q, -1.6822790047693577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8388172034310672, 1);
  sqcRYGate(q, 1.9680595003379953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6573526693055873, 1);
  sqcRYGate(q, -3.0315746872876494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5802019668036094, 2);
  sqcRYGate(q, -2.3898721792786195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.011162916537045974, 2);
  sqcRYGate(q, 1.9167354081618457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6673058054073864, 3);
  sqcRYGate(q, -1.6160548174807856, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2156898084374959, 3);
  sqcRYGate(q, 0.8692149708808259, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5875854304535284, 4);
  sqcRYGate(q, 1.636253449369054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.064180298011029, 4);
  sqcRYGate(q, 1.5309740427070857, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0742743502295413, 5);
  sqcRYGate(q, 0.4596709900368703, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.0258311768316248, 5);
  sqcRYGate(q, 0.005673383374825036, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5792024257778952, 6);
  sqcRYGate(q, -0.4186074474365711, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0957367209372717, 6);
  sqcRYGate(q, -0.19018880199580182, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8375702686149427, 7);
  sqcRYGate(q, -1.5967491664053393, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3784430508051007, 7);
  sqcRYGate(q, 1.2442077872368662, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.3059214425584282, 8);
  sqcRYGate(q, -0.3863005927822112, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.006021002789448282, 8);
  sqcRYGate(q, -1.761573141391788, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0103953325085788, 9);
  sqcRYGate(q, -2.289798680094188, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.3856533073410473, 9);
  sqcRYGate(q, 3.1139245608056703, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.38673613585349165, 10);
  sqcRYGate(q, 2.799313910590256, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.4740646597146011, 10);
  sqcRYGate(q, 0.32851163954957674, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.21793942001491207, 0);
  sqcRYGate(q, -2.137245504751024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1411280370678503, 0);
  sqcRYGate(q, -1.2109727665099155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7433868867112396, 1);
  sqcRYGate(q, 1.8622600379366259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6453690693424372, 1);
  sqcRYGate(q, -1.506902441979182, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6338746170516396, 2);
  sqcRYGate(q, 1.5991950603304221, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.491855138161361, 2);
  sqcRYGate(q, -1.645067538110542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.553103702499388, 3);
  sqcRYGate(q, -1.4819792442981388, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9297773761515865, 3);
  sqcRYGate(q, 3.135230796096519, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6707238562903184, 4);
  sqcRYGate(q, 1.6292070331485222, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.011708883143716771, 4);
  sqcRYGate(q, 0.2498194415000725, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0535169832248394, 5);
  sqcRYGate(q, -0.44330533563314944, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.607353530915547, 5);
  sqcRYGate(q, 2.4631242370833526, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5486031834606926, 6);
  sqcRYGate(q, -1.5780377654298328, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5687728324953443, 6);
  sqcRYGate(q, -0.9777541018750169, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.61486166783978, 7);
  sqcRYGate(q, -2.0774377628092484, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 5.119238221744287e-05, 7);
  sqcRYGate(q, -0.03055425167426301, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7273336012447063, 8);
  sqcRYGate(q, -2.9945476205013994, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.73029168279201, 8);
  sqcRYGate(q, -0.7571929597483793, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.597017491897844, 9);
  sqcRYGate(q, 3.0605159275461564, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.747911583753515, 9);
  sqcRYGate(q, -2.1663417979681014, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6943054417559713, 10);
  sqcRYGate(q, 2.4790587517661216, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9933764983064632, 10);
  sqcRYGate(q, 1.6252038336582806, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9235103012171515, 0);
  sqcRYGate(q, 0.9954220402870106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.37329839585851854, 0);
  sqcRYGate(q, -3.1167883039604534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7521816273116997, 1);
  sqcRYGate(q, -3.0856354254970886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1140697833626989, 1);
  sqcRYGate(q, 1.8109800955304278, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0404733608175825, 2);
  sqcRYGate(q, 2.5009559282214084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.01869500563377713, 2);
  sqcRYGate(q, -3.0416523375771964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0058491555004574, 3);
  sqcRYGate(q, 1.7021199125541406, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7789630672045873, 3);
  sqcRYGate(q, -0.06772556346873682, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8137772159933512, 4);
  sqcRYGate(q, 1.5815400452069417, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.24240826539092275, 4);
  sqcRYGate(q, -0.01602103427061241, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5626597373357933, 5);
  sqcRYGate(q, -1.569809596288573, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.22630538016216167, 5);
  sqcRYGate(q, 2.5092375461471605, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5707695693324872, 6);
  sqcRYGate(q, 2.8927949078131077, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1335351313981414, 6);
  sqcRYGate(q, 2.4776020689168883, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9426761583673673, 7);
  sqcRYGate(q, 2.855581372450704, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5964772371755807, 7);
  sqcRYGate(q, 1.7270616059661488, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5690455681183337, 8);
  sqcRYGate(q, 1.572763734649554, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.559316017988227, 8);
  sqcRYGate(q, 0.004881532037162763, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5696311509469645, 9);
  sqcRYGate(q, -1.76977515225462, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5818934767702029, 9);
  sqcRYGate(q, -1.6181570665081608, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9592802309561286, 10);
  sqcRYGate(q, 1.4143728647621172, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.023304816167785933, 10);
  sqcRYGate(q, -2.6007022373967303, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.6163555861650507, 0);
  sqcRYGate(q, 1.6209588588635389, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9866777677766256, 0);
  sqcRYGate(q, -2.9860186551368715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03237336471337304, 1);
  sqcRYGate(q, 2.733292742493852, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5773490344307943, 1);
  sqcRYGate(q, 1.9868695139505614, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.412212781213506, 2);
  sqcRYGate(q, -1.743605949493456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0014495517155062032, 2);
  sqcRYGate(q, 0.006660257624511379, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8221532245632486, 3);
  sqcRYGate(q, -1.438689427016878, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.851220099215169, 3);
  sqcRYGate(q, -2.266871947905072, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5617862263451041, 4);
  sqcRYGate(q, 1.5632734035501432, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6105879458583063, 4);
  sqcRYGate(q, -2.7646946826636, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5445701847102062, 5);
  sqcRYGate(q, 1.5568311585004915, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.33258429098105413, 5);
  sqcRYGate(q, 0.45993247574078744, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0766372297299565, 6);
  sqcRYGate(q, -1.570669397796502, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0854264715142494, 6);
  sqcRYGate(q, -3.1389632582386553, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.151964062749033, 7);
  sqcRYGate(q, 1.568384113087548, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.143760346748469, 7);
  sqcRYGate(q, -0.010484322014100003, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.570332982415579, 8);
  sqcRYGate(q, 1.5712710278623547, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.713268461078397, 8);
  sqcRYGate(q, -2.5207017031226355, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.2448156534594084, 9);
  sqcRYGate(q, -0.11313884929614543, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.105547238395152, 9);
  sqcRYGate(q, -3.1408011601332357, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.171551364277292, 10);
  sqcRYGate(q, -2.051293026748761, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0283382092027575, 10);
  sqcRYGate(q, 1.2639813234792818, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6121273837248236, 0);
  sqcRYGate(q, 2.8742788598956777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5924139980850147, 0);
  sqcRYGate(q, -1.1670054073943437, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6255977300574562, 1);
  sqcRYGate(q, 2.995297900429255, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1315462288262776, 1);
  sqcRYGate(q, -0.0008244240457635499, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.318740075895826, 2);
  sqcRYGate(q, -1.6634437767147983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9098709024428357, 2);
  sqcRYGate(q, 0.1705572305056151, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5741517946883183, 3);
  sqcRYGate(q, 0.9911597715977987, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.13592221325117, 3);
  sqcRYGate(q, 0.8503789208833984, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0117818270840022, 4);
  sqcRYGate(q, -0.8672012547363916, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1390185546132314, 4);
  sqcRYGate(q, 3.1150862315441232, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2379242931355208, 5);
  sqcRYGate(q, 2.050227109611157, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2458130480283804, 5);
  sqcRYGate(q, 0.6375450946832277, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5747296139608609, 6);
  sqcRYGate(q, -0.9910717278101019, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.49516537877248457, 6);
  sqcRYGate(q, -2.692073484196067, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5707115206166649, 7);
  sqcRYGate(q, -1.570265142571774, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5910648521144846, 7);
  sqcRYGate(q, 1.398369397651277, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.987395268904936, 8);
  sqcRYGate(q, -2.932048263067398, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.141481072728987, 8);
  sqcRYGate(q, 3.141446869411551, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.1425955033081618, 9);
  sqcRYGate(q, 1.8968408389448435, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.130148601572301, 9);
  sqcRYGate(q, -0.0007119999929462613, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7995124574247243, 10);
  sqcRYGate(q, -2.3010554948200594, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.632710675616475, 10);
  sqcRYGate(q, 1.7479069872152728, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6597127578700814, 0);
  sqcRYGate(q, 2.6258201418188274, 1);
  sqcRYGate(q, 1.5602300834919691, 2);
  sqcRYGate(q, -1.5742263441655542, 3);
  sqcRYGate(q, 1.5892721889604697, 4);
  sqcRYGate(q, 1.588143945492343, 5);
  sqcRYGate(q, -1.572184284058704, 6);
  sqcRYGate(q, -1.570711968182751, 7);
  sqcRYGate(q, -0.15461320539673373, 8);
  sqcRYGate(q, -2.8291081141100127, 9);
  sqcRYGate(q, -0.49672141074046244, 10);
  sqcRYGate(q, -1.4822694066999178, 11);

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
