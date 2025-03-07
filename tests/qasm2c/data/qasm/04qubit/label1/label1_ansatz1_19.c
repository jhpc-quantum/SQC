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

  sqcRYGate(q, 2.7263056155070964, 0);
  sqcRZGate(q, -2.9203423479523583, 0);
  sqcRYGate(q, 1.5896660533571207, 1);
  sqcRZGate(q, 1.3905110037049715, 1);
  sqcRYGate(q, 2.2435390949485168, 2);
  sqcRZGate(q, 1.8469205427003124, 2);
  sqcRYGate(q, -1.4620759120944165, 3);
  sqcRZGate(q, -2.424798322727829, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7467197893483873, 0);
  sqcRZGate(q, -3.0966405181151875, 0);
  sqcRYGate(q, -0.1534970737903123, 1);
  sqcRZGate(q, -1.690921848916846, 1);
  sqcRYGate(q, -0.9818526111253884, 2);
  sqcRZGate(q, -1.1603739046607142, 2);
  sqcRYGate(q, -0.3642290515501962, 3);
  sqcRZGate(q, -1.7611045231374058, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.494860023708004, 0);
  sqcRZGate(q, -1.2539048544410143, 0);
  sqcRYGate(q, 2.6757011252649834, 1);
  sqcRZGate(q, 0.3418417120947946, 1);
  sqcRYGate(q, -2.5286289640141875, 2);
  sqcRZGate(q, -1.5782297650746215, 2);
  sqcRYGate(q, -2.526444774224897, 3);
  sqcRZGate(q, 1.337630500874811, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.3310044995861765, 0);
  sqcRZGate(q, 0.984660557337978, 0);
  sqcRYGate(q, 0.03569297981569619, 1);
  sqcRZGate(q, -2.5644384254789907, 1);
  sqcRYGate(q, -2.0327019771753085, 2);
  sqcRZGate(q, 0.10779749125582505, 2);
  sqcRYGate(q, 2.5921082973598586, 3);
  sqcRZGate(q, 2.2779445073576134, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6466290352895818, 0);
  sqcRZGate(q, -1.5131072900426732, 0);
  sqcRYGate(q, 1.2204108003309473, 1);
  sqcRZGate(q, 1.9430758580801593, 1);
  sqcRYGate(q, 0.7163694442619502, 2);
  sqcRZGate(q, -2.021177886879424, 2);
  sqcRYGate(q, 1.7161811649482699, 3);
  sqcRZGate(q, 1.6429972087122842, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.8816672844081763, 0);
  sqcRZGate(q, 0.1679000286811112, 0);
  sqcRYGate(q, -1.246860846654113, 1);
  sqcRZGate(q, -1.938942295448915, 1);
  sqcRYGate(q, -0.01128260239229828, 2);
  sqcRZGate(q, -2.403094970081147, 2);
  sqcRYGate(q, 1.7210860168116122, 3);
  sqcRZGate(q, -0.32284027246575275, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.15938682895535902, 0);
  sqcRZGate(q, -2.0239113577511296, 0);
  sqcRYGate(q, 0.05696020711497063, 1);
  sqcRZGate(q, -0.6194668780258678, 1);
  sqcRYGate(q, -1.9796725586696875, 2);
  sqcRZGate(q, -0.9271444416752618, 2);
  sqcRYGate(q, 1.2154033340079433, 3);
  sqcRZGate(q, 0.9465211945977894, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.7325747784623529, 0);
  sqcRZGate(q, -0.7198532459504499, 0);
  sqcRYGate(q, -0.9022071296449674, 1);
  sqcRZGate(q, -0.6670136103730746, 1);
  sqcRYGate(q, -2.3405984276759026, 2);
  sqcRZGate(q, 1.2991377172153644, 2);
  sqcRYGate(q, 3.121691382145907, 3);
  sqcRZGate(q, 0.46615452207528835, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0001886549841235, 0);
  sqcRZGate(q, 1.6805403604217304, 0);
  sqcRYGate(q, -2.1730599667797037, 1);
  sqcRZGate(q, 1.4434276037862732, 1);
  sqcRYGate(q, 0.31699628993264933, 2);
  sqcRZGate(q, -0.8741396180494505, 2);
  sqcRYGate(q, 3.022852183313665, 3);
  sqcRZGate(q, -1.742911849025353, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.7271762134920854, 0);
  sqcRZGate(q, 2.9278097397905998, 0);
  sqcRYGate(q, -2.8908604461713363, 1);
  sqcRZGate(q, -0.057878632471762614, 1);
  sqcRYGate(q, -0.11150775180577126, 2);
  sqcRZGate(q, 1.2945217279673003, 2);
  sqcRYGate(q, 1.2000502954392624, 3);
  sqcRZGate(q, 2.508723012397435, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.4797219308672862, 0);
  sqcRZGate(q, -0.055713927088625326, 0);
  sqcRYGate(q, 0.25292566278296513, 1);
  sqcRZGate(q, 2.049057585843558, 1);
  sqcRYGate(q, -0.30182580397382797, 2);
  sqcRZGate(q, 2.069558469447051, 2);
  sqcRYGate(q, 0.7968066226582415, 3);
  sqcRZGate(q, 1.366156220549, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.4525740370541584, 0);
  sqcRZGate(q, 2.1813608742541666, 0);
  sqcRYGate(q, -1.277615119638999, 1);
  sqcRZGate(q, -2.384370973434273, 1);
  sqcRYGate(q, -0.2472469869529732, 2);
  sqcRZGate(q, 1.3913581610264445, 2);
  sqcRYGate(q, 1.477897382978828, 3);
  sqcRZGate(q, 0.6451491109935041, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.9836697185351947, 0);
  sqcRZGate(q, 2.337262229531813, 0);
  sqcRYGate(q, -0.004398233303520108, 1);
  sqcRZGate(q, -2.6795806054943365, 1);
  sqcRYGate(q, -1.9842207363088338, 2);
  sqcRZGate(q, 0.66782753789425, 2);
  sqcRYGate(q, 2.929712742062481, 3);
  sqcRZGate(q, -2.76133496205224, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1420734628275073, 0);
  sqcRZGate(q, -2.6383280567325835, 0);
  sqcRYGate(q, -2.8604383314238504, 1);
  sqcRZGate(q, 2.1461341194549357, 1);
  sqcRYGate(q, 0.8827211476530419, 2);
  sqcRZGate(q, 1.6795748516484945, 2);
  sqcRYGate(q, -2.193221370667615, 3);
  sqcRZGate(q, -0.4978146489527277, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 3.120409549599792, 0);
  sqcRZGate(q, 0.059753631433886234, 0);
  sqcRYGate(q, 0.385722622232036, 1);
  sqcRZGate(q, -0.6670589786040578, 1);
  sqcRYGate(q, -2.459563183171532, 2);
  sqcRZGate(q, -2.408648395482194, 2);
  sqcRYGate(q, -2.477019531334343, 3);
  sqcRZGate(q, 2.414249164118776, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.4410547436443744, 0);
  sqcRZGate(q, 1.0999269914944663, 0);
  sqcRYGate(q, -2.1196804466810004, 1);
  sqcRZGate(q, 0.8482406737602717, 1);
  sqcRYGate(q, 0.7964683585723948, 2);
  sqcRZGate(q, -0.92334705519103, 2);
  sqcRYGate(q, 2.5107747998231873, 3);
  sqcRZGate(q, -1.1004051332235099, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.708593492492749, 0);
  sqcRZGate(q, 2.8326075334730154, 0);
  sqcRYGate(q, 2.0047852225912566, 1);
  sqcRZGate(q, 0.20984396730123758, 1);
  sqcRYGate(q, 0.14141479475417806, 2);
  sqcRZGate(q, 0.5153147904530186, 2);
  sqcRYGate(q, -0.48477397461076954, 3);
  sqcRZGate(q, -1.8313931778449462, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.7196046568218961, 0);
  sqcRZGate(q, 0.15382221562880835, 0);
  sqcRYGate(q, -3.018536828738663, 1);
  sqcRZGate(q, 2.078602344580342, 1);
  sqcRYGate(q, 2.419973826369988, 2);
  sqcRZGate(q, 1.556734847748542, 2);
  sqcRYGate(q, -0.5945596125454646, 3);
  sqcRZGate(q, 2.3251953213681387, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.9455043775875767, 0);
  sqcRZGate(q, -0.9036732733521244, 0);
  sqcRYGate(q, -0.26010677783814007, 1);
  sqcRZGate(q, 0.20935800182272502, 1);
  sqcRYGate(q, -0.40076216911679385, 2);
  sqcRZGate(q, -1.3075850073561988, 2);
  sqcRYGate(q, 1.5035473563401132, 3);
  sqcRZGate(q, 2.1412103025962472, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.2985598968694747, 0);
  sqcRZGate(q, 2.7026946341225178, 0);
  sqcRYGate(q, -2.404239925216238, 1);
  sqcRZGate(q, -1.2336025320613733, 1);
  sqcRYGate(q, 1.805259063738493, 2);
  sqcRZGate(q, -2.4984143270008756, 2);
  sqcRYGate(q, -1.0853696388732739, 3);
  sqcRZGate(q, 2.1743166848568465, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5331123225491288, 0);
  sqcRZGate(q, -2.903690213505151, 0);
  sqcRYGate(q, 0.17857595158255088, 1);
  sqcRZGate(q, 1.2270869300515148, 1);
  sqcRYGate(q, -0.5407542018731348, 2);
  sqcRZGate(q, -0.7732590021569812, 2);
  sqcRYGate(q, -0.7010832801578298, 3);
  sqcRZGate(q, -2.689767074931669, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.122934486572192, 0);
  sqcRZGate(q, 1.9391730337254842, 0);
  sqcRYGate(q, 3.03486688003774, 1);
  sqcRZGate(q, -2.8621771085106076, 1);
  sqcRYGate(q, -2.5996021067230077, 2);
  sqcRZGate(q, -1.1002182942999799, 2);
  sqcRYGate(q, 1.226433662854038, 3);
  sqcRZGate(q, 0.32273677799334255, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3192436740115339, 0);
  sqcRZGate(q, 0.4474060133424697, 0);
  sqcRYGate(q, 2.630567529024039, 1);
  sqcRZGate(q, 0.6677104603447387, 1);
  sqcRYGate(q, 2.429718705891361, 2);
  sqcRZGate(q, -0.741458611938894, 2);
  sqcRYGate(q, 1.7558975995052357, 3);
  sqcRZGate(q, -2.8955704381430767, 3);

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
