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

  sqcRYGate(q, -0.08688466516872902, 0);
  sqcRYGate(q, 2.2813404461091005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7370707375360056, 0);
  sqcRYGate(q, 2.6266995935167246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7894809777540308, 2);
  sqcRYGate(q, 0.7630279536081491, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9623204703256434, 2);
  sqcRYGate(q, 2.7115007125114676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.23627543684218733, 1);
  sqcRYGate(q, -3.064448316023042, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5691411751325927, 1);
  sqcRYGate(q, 2.781567154471911, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.721226165300449, 0);
  sqcRYGate(q, 1.4558037524025114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7750635153006797, 0);
  sqcRYGate(q, -0.7617734119867627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8512904113941975, 2);
  sqcRYGate(q, -2.5747185815054303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8165649251217277, 2);
  sqcRYGate(q, 2.415477041107873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8702556506403663, 1);
  sqcRYGate(q, 2.2420461449058298, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6595700051724287, 1);
  sqcRYGate(q, -2.8714312618531284, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6152454917428226, 0);
  sqcRYGate(q, 0.6885389353821019, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7792670993819555, 0);
  sqcRYGate(q, 1.9971180894761211, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7417448271239337, 2);
  sqcRYGate(q, -2.1156092315693513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4765560284689894, 2);
  sqcRYGate(q, 2.403225290381553, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2418206351729726, 1);
  sqcRYGate(q, -1.3282461651720334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.41118648882155284, 1);
  sqcRYGate(q, -3.1103383614320443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7203921868713397, 0);
  sqcRYGate(q, -2.1813409578831013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9785732119715114, 0);
  sqcRYGate(q, 1.0514910608750645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7527776109031945, 2);
  sqcRYGate(q, 0.14955081990396124, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9132594066073259, 2);
  sqcRYGate(q, -1.9529044707600978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24599014054005686, 1);
  sqcRYGate(q, 1.376865302813143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.822036120355166, 1);
  sqcRYGate(q, -2.1438619591825665, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9108229367367846, 0);
  sqcRYGate(q, -2.865796169751514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5020201054157027, 0);
  sqcRYGate(q, -2.2952899076677618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6237431199218174, 2);
  sqcRYGate(q, 1.0569485972514812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.951015770682317, 2);
  sqcRYGate(q, -2.072960803041897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.41805011344443965, 1);
  sqcRYGate(q, -0.5431497846236631, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.263114755681414, 1);
  sqcRYGate(q, 0.6268918774273895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.40060052733818186, 0);
  sqcRYGate(q, 2.1633249699307813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0266035215893803, 0);
  sqcRYGate(q, -2.9727593537031765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6578527615432561, 2);
  sqcRYGate(q, -1.6915047097023068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0958180459841345, 2);
  sqcRYGate(q, 0.6389404493856858, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.809034385274853, 1);
  sqcRYGate(q, -0.7817119302573491, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7883298016836928, 1);
  sqcRYGate(q, -0.3449309582045927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0010802805506955, 0);
  sqcRYGate(q, -1.5562549402407786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.457084750906879, 0);
  sqcRYGate(q, 2.769683235198823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8441880145836236, 2);
  sqcRYGate(q, 0.8396511925693781, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09832333611817268, 2);
  sqcRYGate(q, -1.3585204691944925, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5554320502573808, 1);
  sqcRYGate(q, -2.9228455045662756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8964217939650255, 1);
  sqcRYGate(q, -1.1069603409945028, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0922290159478703, 0);
  sqcRYGate(q, 0.6604637539460381, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8789503652058035, 0);
  sqcRYGate(q, -0.08558683135652334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0895767878235567, 2);
  sqcRYGate(q, -2.220739448938085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4584388805542048, 2);
  sqcRYGate(q, 1.4900680628570713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5427624315716857, 1);
  sqcRYGate(q, 1.041559286982066, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9501157758721348, 1);
  sqcRYGate(q, -0.10281093895719934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0630271158767886, 0);
  sqcRYGate(q, 2.5374591597031664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8246636094619535, 0);
  sqcRYGate(q, 1.7252387998982686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1944186008244477, 2);
  sqcRYGate(q, 2.567998484674016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.295799938083334, 2);
  sqcRYGate(q, -1.3191402466093967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5744228355587966, 1);
  sqcRYGate(q, -1.1371149560447453, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0406051484562293, 1);
  sqcRYGate(q, -1.8839946443651574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5487167830109927, 0);
  sqcRYGate(q, 2.034786896803103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2393640978680978, 0);
  sqcRYGate(q, -0.4415500624614195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0277891746845782, 2);
  sqcRYGate(q, -0.28905559058135133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9866943214140438, 2);
  sqcRYGate(q, -1.2128130599597071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1350160428045157, 1);
  sqcRYGate(q, -0.5917914332289912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1273252320750213, 1);
  sqcRYGate(q, -0.9704694335645625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7284836313078102, 0);
  sqcRYGate(q, 1.4992793344733242, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4343179685179765, 0);
  sqcRYGate(q, 0.2993036372947424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6298619028658087, 2);
  sqcRYGate(q, -2.7485814675870657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.037998769651618, 2);
  sqcRYGate(q, -1.4935287325762845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0767633253551798, 1);
  sqcRYGate(q, -2.0270811987982222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8752584753783106, 1);
  sqcRYGate(q, -0.9176726923930253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2350971784743896, 0);
  sqcRYGate(q, -1.2000010363010618, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0797526251911274, 0);
  sqcRYGate(q, 0.7572365279927598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.76929142621798, 2);
  sqcRYGate(q, -1.8058176336774043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0807327200856758, 2);
  sqcRYGate(q, 1.8825644484906858, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9543148403742956, 1);
  sqcRYGate(q, 1.9280927038310356, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1226423252584068, 1);
  sqcRYGate(q, 0.5474953618843674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.19684138354699332, 0);
  sqcRYGate(q, -1.9250204036723284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1338695440442101, 0);
  sqcRYGate(q, 2.800832604703446, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.767694506171196, 2);
  sqcRYGate(q, -0.7501623914420312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.398697913265556, 2);
  sqcRYGate(q, -2.27710315534579, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.33702099174194977, 1);
  sqcRYGate(q, 0.46927150763748315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.052539707840767, 1);
  sqcRYGate(q, -2.6901750647297855, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.053288871235031, 0);
  sqcRYGate(q, 2.7837211861059297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7511551812680217, 0);
  sqcRYGate(q, 0.9624833956819474, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.486413504464126, 2);
  sqcRYGate(q, 0.00901283116431856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2403046670055855, 2);
  sqcRYGate(q, 0.8316501010169803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.094134607212724, 1);
  sqcRYGate(q, -2.7087220134721988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4777984892705254, 1);
  sqcRYGate(q, 0.2819168495272293, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.021388090189925955, 0);
  sqcRYGate(q, 2.195732882812326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.602967541273049, 0);
  sqcRYGate(q, -1.046449491163532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.28516718727888035, 2);
  sqcRYGate(q, -0.4761659756516136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6825483198224183, 2);
  sqcRYGate(q, 2.050724397468264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8492525177931691, 1);
  sqcRYGate(q, 0.8556469297108372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4985750592338893, 1);
  sqcRYGate(q, -2.898730532811334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09272617896782724, 0);
  sqcRYGate(q, 1.408727314471574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9601817558739596, 0);
  sqcRYGate(q, -2.56284996487994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9250706726855435, 2);
  sqcRYGate(q, 2.8635652208697335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7801938430139872, 2);
  sqcRYGate(q, 0.8079760668627207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1008760939389699, 1);
  sqcRYGate(q, 2.605980603494339, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41407085290728585, 1);
  sqcRYGate(q, 0.5584432608497057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7072786649754154, 0);
  sqcRYGate(q, 1.3125323090690817, 1);
  sqcRYGate(q, -2.3974402350322808, 2);
  sqcRYGate(q, 0.4573741702336686, 3);

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
