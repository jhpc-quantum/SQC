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

  sqcRYGate(q, -2.252033928343904, 0);
  sqcRZGate(q, -1.5580769329622048, 0);
  sqcRYGate(q, -1.6836247164622469, 1);
  sqcRZGate(q, 1.4426667060913234, 1);
  sqcRYGate(q, 2.425576626329662, 2);
  sqcRZGate(q, -1.7699084400648948, 2);
  sqcRYGate(q, -1.3835031255805035, 3);
  sqcRZGate(q, 2.802698990801064, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.5949640022176057, 0);
  sqcRZGate(q, 1.13517359270935, 0);
  sqcRYGate(q, 2.7166047328452505, 1);
  sqcRZGate(q, -0.9376109817865297, 1);
  sqcRYGate(q, 2.1045001062643527, 2);
  sqcRZGate(q, -1.3071540562857975, 2);
  sqcRYGate(q, -2.3153389583581263, 3);
  sqcRZGate(q, -1.1104876336528255, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6063310537331548, 0);
  sqcRZGate(q, -1.321029566448966, 0);
  sqcRYGate(q, 2.5316124146805166, 1);
  sqcRZGate(q, -1.997917775334929, 1);
  sqcRYGate(q, 1.7218659831164405, 2);
  sqcRZGate(q, 3.12502340615124, 2);
  sqcRYGate(q, -3.067253981673236, 3);
  sqcRZGate(q, -2.039848292383904, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.1101508065765957, 0);
  sqcRZGate(q, 1.1288744776318769, 0);
  sqcRYGate(q, 2.9651209497640427, 1);
  sqcRZGate(q, 1.6747395294712613, 1);
  sqcRYGate(q, 1.7616175414625581, 2);
  sqcRZGate(q, 1.1246061469797022, 2);
  sqcRYGate(q, -2.95219615687877, 3);
  sqcRZGate(q, -0.8225990622821768, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7272139749198798, 0);
  sqcRZGate(q, 2.9263637258284123, 0);
  sqcRYGate(q, 0.4910006248729827, 1);
  sqcRZGate(q, -0.2184137996985198, 1);
  sqcRYGate(q, 0.6584678127356498, 2);
  sqcRZGate(q, 0.7364506792392268, 2);
  sqcRYGate(q, 3.091381768810064, 3);
  sqcRZGate(q, -1.0766312471202228, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.03520308404477834, 0);
  sqcRZGate(q, -2.6551211081020343, 0);
  sqcRYGate(q, 1.612297657072394, 1);
  sqcRZGate(q, -0.11628215388847885, 1);
  sqcRYGate(q, 1.9734151177494437, 2);
  sqcRZGate(q, -2.8354895126332265, 2);
  sqcRYGate(q, 0.48637943238776404, 3);
  sqcRZGate(q, 1.9921940968752425, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.4856112637524168, 0);
  sqcRZGate(q, 0.6157808791312327, 0);
  sqcRYGate(q, 0.07015848986378348, 1);
  sqcRZGate(q, -1.2866962626213567, 1);
  sqcRYGate(q, -0.4617725420459023, 2);
  sqcRZGate(q, 1.643733203796855, 2);
  sqcRYGate(q, -1.3836305954729538, 3);
  sqcRZGate(q, 2.4324632435056968, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.7226874598383204, 0);
  sqcRZGate(q, 0.49685061228834015, 0);
  sqcRYGate(q, -1.6986576366660586, 1);
  sqcRZGate(q, -0.4547115854143453, 1);
  sqcRYGate(q, -0.41272759191863084, 2);
  sqcRZGate(q, 0.6011314889707684, 2);
  sqcRYGate(q, -1.7053391283029278, 3);
  sqcRZGate(q, -2.191654484693449, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.937173405367142, 0);
  sqcRZGate(q, 2.950464513627786, 0);
  sqcRYGate(q, -0.626771578107956, 1);
  sqcRZGate(q, 2.635222948550984, 1);
  sqcRYGate(q, 0.9272711527243177, 2);
  sqcRZGate(q, 0.9669181014105197, 2);
  sqcRYGate(q, 2.3918655880442046, 3);
  sqcRZGate(q, 1.7702438724631766, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.1400910558606816, 0);
  sqcRZGate(q, -1.3096954931864437, 0);
  sqcRYGate(q, -1.3164823375908687, 1);
  sqcRZGate(q, -2.2527917513332163, 1);
  sqcRYGate(q, -1.4237418595591107, 2);
  sqcRZGate(q, 0.8647885375930525, 2);
  sqcRYGate(q, 3.0261207871287796, 3);
  sqcRZGate(q, 2.9230405708203677, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.6338744893644654, 0);
  sqcRZGate(q, 0.8597865265392831, 0);
  sqcRYGate(q, -0.8121757803778777, 1);
  sqcRZGate(q, -2.488088054939573, 1);
  sqcRYGate(q, 0.3851801455701152, 2);
  sqcRZGate(q, -1.6111245603901958, 2);
  sqcRYGate(q, -0.7849298740425521, 3);
  sqcRZGate(q, -1.7164977010376705, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8090380604518939, 0);
  sqcRZGate(q, 1.6372537042476842, 0);
  sqcRYGate(q, 2.632465298614497, 1);
  sqcRZGate(q, 0.0351724440256879, 1);
  sqcRYGate(q, 0.346108916399289, 2);
  sqcRZGate(q, 0.4878147915896891, 2);
  sqcRYGate(q, -0.7716053761144985, 3);
  sqcRZGate(q, 1.094881637334861, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.16003713697734767, 0);
  sqcRZGate(q, -1.8263436698429079, 0);
  sqcRYGate(q, -2.5945396439979915, 1);
  sqcRZGate(q, -2.6862899189984693, 1);
  sqcRYGate(q, -0.512239406958785, 2);
  sqcRZGate(q, 2.650519137504327, 2);
  sqcRYGate(q, -1.1661815009415444, 3);
  sqcRZGate(q, 0.9857643364350783, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7273565316117603, 0);
  sqcRZGate(q, 0.39860622978662413, 0);
  sqcRYGate(q, -2.630077412574353, 1);
  sqcRZGate(q, 2.76309695390112, 1);
  sqcRYGate(q, -2.4894516602616132, 2);
  sqcRZGate(q, 1.9118323134976511, 2);
  sqcRYGate(q, -1.474859153310551, 3);
  sqcRZGate(q, 2.5003488732697123, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.62695907583416, 0);
  sqcRZGate(q, -2.016408312620691, 0);
  sqcRYGate(q, -1.2789961009568627, 1);
  sqcRZGate(q, -1.0531873019317928, 1);
  sqcRYGate(q, -1.2540428889929611, 2);
  sqcRZGate(q, -0.5778204919635437, 2);
  sqcRYGate(q, 0.2435222994861901, 3);
  sqcRZGate(q, 3.086450829154027, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.112956107859741, 0);
  sqcRZGate(q, -1.9647286389775238, 0);
  sqcRYGate(q, 2.4968728961234525, 1);
  sqcRZGate(q, -2.0328073760084813, 1);
  sqcRYGate(q, 0.27787322051151975, 2);
  sqcRZGate(q, -0.8508911060291346, 2);
  sqcRYGate(q, -1.4705281802872947, 3);
  sqcRZGate(q, -0.18163941695352745, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3544051389502902, 0);
  sqcRZGate(q, 0.5794521277164577, 0);
  sqcRYGate(q, 0.5915458008422813, 1);
  sqcRZGate(q, -2.9517156995528926, 1);
  sqcRYGate(q, 0.7073358349044536, 2);
  sqcRZGate(q, 3.08355622589231, 2);
  sqcRYGate(q, -2.1163248473895724, 3);
  sqcRZGate(q, 0.7314135172965672, 3);

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
