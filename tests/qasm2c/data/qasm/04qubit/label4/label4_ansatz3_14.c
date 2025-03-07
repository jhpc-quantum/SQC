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

  sqcRYGate(q, -1.788435904750524, 0);
  sqcRZGate(q, 0.4846304286830749, 0);
  sqcRYGate(q, 2.4171328631497615, 1);
  sqcRZGate(q, -0.3027215713584411, 1);
  sqcRYGate(q, -1.9670553146144831, 2);
  sqcRZGate(q, -1.0190908190337353, 2);
  sqcRYGate(q, -2.3341920215636502, 3);
  sqcRZGate(q, -1.8204930984093934, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0828448195751266, 0);
  sqcRZGate(q, -1.961984308030919, 0);
  sqcRYGate(q, -2.208077309145388, 1);
  sqcRZGate(q, 0.8202790405545419, 1);
  sqcRYGate(q, 0.8442753387804961, 2);
  sqcRZGate(q, 1.98341252113503, 2);
  sqcRYGate(q, 2.683651778637629, 3);
  sqcRZGate(q, 1.8382503761334092, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.14676901288365313, 0);
  sqcRZGate(q, 1.2322954291356754, 0);
  sqcRYGate(q, -3.079310793083846, 1);
  sqcRZGate(q, -1.4589623172741824, 1);
  sqcRYGate(q, 0.0358499318290956, 2);
  sqcRZGate(q, -2.233886580232735, 2);
  sqcRYGate(q, 3.105553001479625, 3);
  sqcRZGate(q, 1.7100190653464675, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.5989887899325517, 0);
  sqcRZGate(q, 0.15817185328476124, 0);
  sqcRYGate(q, 2.6306279375898405, 1);
  sqcRZGate(q, 2.6535181819670797, 1);
  sqcRYGate(q, -1.7019515832708243, 2);
  sqcRZGate(q, -0.7786277595644888, 2);
  sqcRYGate(q, -2.820601127264507, 3);
  sqcRZGate(q, 2.0749168673009484, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.209705621678975, 0);
  sqcRZGate(q, -1.8484101174416525, 0);
  sqcRYGate(q, -1.830686151228603, 1);
  sqcRZGate(q, 1.796633987341574, 1);
  sqcRYGate(q, -1.5785630393864736, 2);
  sqcRZGate(q, -2.2578461568385046, 2);
  sqcRYGate(q, -2.767621984460314, 3);
  sqcRZGate(q, 0.661911279536338, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.1104978284464027, 0);
  sqcRZGate(q, 2.9134728491454394, 0);
  sqcRYGate(q, -0.9466319908909382, 1);
  sqcRZGate(q, 0.10151989303988797, 1);
  sqcRYGate(q, 2.810035702009952, 2);
  sqcRZGate(q, 1.5263225642732898, 2);
  sqcRYGate(q, 0.5087991469261783, 3);
  sqcRZGate(q, -0.5559968946543067, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.33341621537373, 0);
  sqcRZGate(q, 0.15141573802342917, 0);
  sqcRYGate(q, -2.9475544669070364, 1);
  sqcRZGate(q, -0.057137291130324085, 1);
  sqcRYGate(q, -2.5903866243712725, 2);
  sqcRZGate(q, -0.6730076286476496, 2);
  sqcRYGate(q, 2.0858080246352824, 3);
  sqcRZGate(q, -0.6605012006278947, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.7020582462811622, 0);
  sqcRZGate(q, 1.162993197453805, 0);
  sqcRYGate(q, 1.1178180386381475, 1);
  sqcRZGate(q, 0.9304840987396945, 1);
  sqcRYGate(q, 1.8459062066883147, 2);
  sqcRZGate(q, -2.9658489250561084, 2);
  sqcRYGate(q, -0.07847381483287173, 3);
  sqcRZGate(q, -1.207836363421305, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.7409018971324786, 0);
  sqcRZGate(q, 3.129913186725591, 0);
  sqcRYGate(q, 1.123863994088869, 1);
  sqcRZGate(q, -0.05589833809031575, 1);
  sqcRYGate(q, 0.561385834708096, 2);
  sqcRZGate(q, 1.870372320153514, 2);
  sqcRYGate(q, 0.1060430038883232, 3);
  sqcRZGate(q, 2.0386107620385037, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4123992538138879, 0);
  sqcRZGate(q, 1.7785150905203482, 0);
  sqcRYGate(q, -1.9204163483306305, 1);
  sqcRZGate(q, -2.0292460194578776, 1);
  sqcRYGate(q, -0.37767927186848826, 2);
  sqcRZGate(q, 0.9022173402202577, 2);
  sqcRYGate(q, 2.245730129885172, 3);
  sqcRZGate(q, 1.9825844342106151, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0570941970877241, 0);
  sqcRZGate(q, -2.483533348404008, 0);
  sqcRYGate(q, 0.42029270055669415, 1);
  sqcRZGate(q, -0.5118697191246522, 1);
  sqcRYGate(q, -2.605895692956423, 2);
  sqcRZGate(q, -1.8858212426715115, 2);
  sqcRYGate(q, 2.505453879516942, 3);
  sqcRZGate(q, 3.024186208659185, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5168815760412492, 0);
  sqcRZGate(q, -1.4712209687431812, 0);
  sqcRYGate(q, -0.9054354072269746, 1);
  sqcRZGate(q, 0.5496879472698168, 1);
  sqcRYGate(q, 1.5121697648747139, 2);
  sqcRZGate(q, 1.435894494689636, 2);
  sqcRYGate(q, 2.1693296164033553, 3);
  sqcRZGate(q, 0.25114419378770797, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4754150746528234, 0);
  sqcRZGate(q, -1.241059250094311, 0);
  sqcRYGate(q, -2.1194141412484977, 1);
  sqcRZGate(q, 2.385732417266699, 1);
  sqcRYGate(q, -2.2431710242464016, 2);
  sqcRZGate(q, -1.9666341780707282, 2);
  sqcRYGate(q, -2.989165984245369, 3);
  sqcRZGate(q, -1.7682537073489835, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.514574651277039, 0);
  sqcRZGate(q, -0.26890212900034083, 0);
  sqcRYGate(q, -1.8588444161281217, 1);
  sqcRZGate(q, 1.013238902992752, 1);
  sqcRYGate(q, 1.4540549184922815, 2);
  sqcRZGate(q, -2.302664765746224, 2);
  sqcRYGate(q, -0.35462782138925875, 3);
  sqcRZGate(q, -0.5179880405675727, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.35383358805209214, 0);
  sqcRZGate(q, -0.5446251118643355, 0);
  sqcRYGate(q, -2.3932271981930198, 1);
  sqcRZGate(q, -0.5137463086302319, 1);
  sqcRYGate(q, -1.1958460106431978, 2);
  sqcRZGate(q, 3.092174728223276, 2);
  sqcRYGate(q, 1.2721481737384368, 3);
  sqcRZGate(q, 1.3587607137070787, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.676530678715024, 0);
  sqcRZGate(q, -0.1589808726595297, 0);
  sqcRYGate(q, -3.0445029454156907, 1);
  sqcRZGate(q, 0.19637541996675778, 1);
  sqcRYGate(q, -2.320661404909584, 2);
  sqcRZGate(q, -1.528004593246708, 2);
  sqcRYGate(q, -1.1987289083728214, 3);
  sqcRZGate(q, 1.1982606538045122, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.4849777137888136, 0);
  sqcRZGate(q, -1.7414528050886202, 0);
  sqcRYGate(q, -1.602394726592446, 1);
  sqcRZGate(q, 3.0691153773381608, 1);
  sqcRYGate(q, -2.3875270472921146, 2);
  sqcRZGate(q, 1.2067506760384514, 2);
  sqcRYGate(q, 2.8636096634022463, 3);
  sqcRZGate(q, -0.8274292940190175, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.3998025640571785, 0);
  sqcRZGate(q, -1.234640703888022, 0);
  sqcRYGate(q, -1.9013963279821673, 1);
  sqcRZGate(q, -1.1553237828209673, 1);
  sqcRYGate(q, -1.5318027728142394, 2);
  sqcRZGate(q, -1.64013522340193, 2);
  sqcRYGate(q, 2.4379755354315953, 3);
  sqcRZGate(q, -1.740718268143606, 3);

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
