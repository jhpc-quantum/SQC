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

  sqcRYGate(q, -3.057007881918185, 0);
  sqcRZGate(q, -1.1367957337883956, 0);
  sqcRYGate(q, 0.41100187963922447, 1);
  sqcRZGate(q, -2.5211209512109467, 1);
  sqcRYGate(q, -2.5841570422895837, 2);
  sqcRZGate(q, 1.0593833141239315, 2);
  sqcRYGate(q, 0.16373429771133252, 3);
  sqcRZGate(q, -1.8659072447939686, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.6823164326361892, 0);
  sqcRZGate(q, 2.2341367857628636, 0);
  sqcRYGate(q, 2.513058252349524, 1);
  sqcRZGate(q, 0.7777854080775842, 1);
  sqcRYGate(q, -1.8339432685970876, 2);
  sqcRZGate(q, 0.5561288994242062, 2);
  sqcRYGate(q, 1.726400156141555, 3);
  sqcRZGate(q, -1.2964722276599063, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4938440491929387, 0);
  sqcRZGate(q, 1.9307224650610744, 0);
  sqcRYGate(q, -0.4498355276933541, 1);
  sqcRZGate(q, 1.3823044809457583, 1);
  sqcRYGate(q, 1.1097979603268329, 2);
  sqcRZGate(q, -0.638846517466823, 2);
  sqcRYGate(q, -2.9633046559034764, 3);
  sqcRZGate(q, -1.6174475738382421, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.15928623687536078, 0);
  sqcRZGate(q, -0.837899967302504, 0);
  sqcRYGate(q, -1.7564105289115721, 1);
  sqcRZGate(q, -1.597250542119789, 1);
  sqcRYGate(q, -0.9718298444516497, 2);
  sqcRZGate(q, -2.5044625221442436, 2);
  sqcRYGate(q, -1.9612636096236153, 3);
  sqcRZGate(q, -2.8384844923284476, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0965784479878824, 0);
  sqcRZGate(q, 1.4271989014996251, 0);
  sqcRYGate(q, -2.342716739689794, 1);
  sqcRZGate(q, 2.505375257719288, 1);
  sqcRYGate(q, 0.29328723532311995, 2);
  sqcRZGate(q, -3.011470498314541, 2);
  sqcRYGate(q, -1.3222637313240921, 3);
  sqcRZGate(q, -1.9095548593937108, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.0333098895595354, 0);
  sqcRZGate(q, 0.8255417633855471, 0);
  sqcRYGate(q, 2.0635902191461115, 1);
  sqcRZGate(q, 2.3772587983868463, 1);
  sqcRYGate(q, 0.8012955983707598, 2);
  sqcRZGate(q, -1.8089441870140677, 2);
  sqcRYGate(q, -0.9803312716291073, 3);
  sqcRZGate(q, 1.483514088707607, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3924055134209394, 0);
  sqcRZGate(q, -2.6691292390855277, 0);
  sqcRYGate(q, 2.9683802444226814, 1);
  sqcRZGate(q, -0.9944606066123753, 1);
  sqcRYGate(q, 1.668348482051138, 2);
  sqcRZGate(q, 1.8004298815972115, 2);
  sqcRYGate(q, -0.6794295992425115, 3);
  sqcRZGate(q, -2.9442913154905797, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3570042069013178, 0);
  sqcRZGate(q, -0.6835143845634781, 0);
  sqcRYGate(q, 1.3559386438638854, 1);
  sqcRZGate(q, -1.9392859632716135, 1);
  sqcRYGate(q, 0.048861077780620654, 2);
  sqcRZGate(q, -0.9812867609103738, 2);
  sqcRYGate(q, 0.4273960350257608, 3);
  sqcRZGate(q, -0.21811095228846114, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7127270254761522, 0);
  sqcRZGate(q, 1.1470464430518816, 0);
  sqcRYGate(q, 2.0210883986058814, 1);
  sqcRZGate(q, -1.7980459608278312, 1);
  sqcRYGate(q, 2.220460813170063, 2);
  sqcRZGate(q, 2.7448080781971367, 2);
  sqcRYGate(q, -2.2591338252719924, 3);
  sqcRZGate(q, 2.547518297557448, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -3.061302369984643, 0);
  sqcRZGate(q, 2.3676644004259555, 0);
  sqcRYGate(q, 2.0262508999958264, 1);
  sqcRZGate(q, 1.2199287566974073, 1);
  sqcRYGate(q, -1.8369065966357407, 2);
  sqcRZGate(q, -0.7006838605918251, 2);
  sqcRYGate(q, -0.38824778031481655, 3);
  sqcRZGate(q, 0.8105557165359806, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.0097996803198765, 0);
  sqcRZGate(q, 0.780364994698112, 0);
  sqcRYGate(q, -2.953048554512276, 1);
  sqcRZGate(q, -2.0423514737613093, 1);
  sqcRYGate(q, -2.445095746329683, 2);
  sqcRZGate(q, 0.4236675503320024, 2);
  sqcRYGate(q, 0.5771442729671548, 3);
  sqcRZGate(q, -2.442292195117518, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.1687224735145287, 0);
  sqcRZGate(q, -2.3859337011582875, 0);
  sqcRYGate(q, -1.7161376553870455, 1);
  sqcRZGate(q, -3.068479400096883, 1);
  sqcRYGate(q, 1.9766292763120739, 2);
  sqcRZGate(q, -0.2748124077666416, 2);
  sqcRYGate(q, -0.6023900216451477, 3);
  sqcRZGate(q, -2.2667317426312583, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.809127298394423, 0);
  sqcRZGate(q, 1.8441666340901646, 0);
  sqcRYGate(q, 1.3213400517040996, 1);
  sqcRZGate(q, -2.5062431608632116, 1);
  sqcRYGate(q, 1.1479381620878648, 2);
  sqcRZGate(q, -1.7040647259945543, 2);
  sqcRYGate(q, -0.6182563352354176, 3);
  sqcRZGate(q, 0.5306741580171481, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.744955215317794, 0);
  sqcRZGate(q, -3.0951191953225625, 0);
  sqcRYGate(q, -1.1165106109350011, 1);
  sqcRZGate(q, 0.7687177156019094, 1);
  sqcRYGate(q, -1.156828643269404, 2);
  sqcRZGate(q, 0.7301516749366349, 2);
  sqcRYGate(q, 0.10622466879467184, 3);
  sqcRZGate(q, 0.27372173302290115, 3);

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
