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

  sqcRYGate(q, -0.2506418416656709, 0);
  sqcRZGate(q, -2.22419007623005, 0);
  sqcRYGate(q, 0.2960061733367877, 1);
  sqcRZGate(q, 2.4946838167293826, 1);
  sqcRYGate(q, 1.0166614807480512, 2);
  sqcRZGate(q, 0.7828230128844798, 2);
  sqcRYGate(q, 1.8165769444887632, 3);
  sqcRZGate(q, 3.065720705776643, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.23544987655128313, 0);
  sqcRZGate(q, 3.0621174618967326, 0);
  sqcRYGate(q, 1.9910213894441646, 1);
  sqcRZGate(q, 2.0679358370957277, 1);
  sqcRYGate(q, 2.6312569952850167, 2);
  sqcRZGate(q, 2.62108394194422, 2);
  sqcRYGate(q, 1.3459254334468633, 3);
  sqcRZGate(q, -2.49939307878004, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.6219637409166986, 0);
  sqcRZGate(q, -2.3953536424407567, 0);
  sqcRYGate(q, 0.6629840888358012, 1);
  sqcRZGate(q, 1.2298532235391972, 1);
  sqcRYGate(q, -1.3003385623061092, 2);
  sqcRZGate(q, 1.9317638923211295, 2);
  sqcRYGate(q, -1.4207737559341118, 3);
  sqcRZGate(q, -2.0784540368320292, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8743307789938868, 0);
  sqcRZGate(q, -0.03191840412583378, 0);
  sqcRYGate(q, -0.7634380029171534, 1);
  sqcRZGate(q, 2.25408010458254, 1);
  sqcRYGate(q, 1.0540200931295847, 2);
  sqcRZGate(q, 0.7046727961074204, 2);
  sqcRYGate(q, 2.9441164028098887, 3);
  sqcRZGate(q, 0.1145425067942849, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.889198893885225, 0);
  sqcRZGate(q, 0.49355545141498247, 0);
  sqcRYGate(q, -0.8488004421624018, 1);
  sqcRZGate(q, 1.2881450774234975, 1);
  sqcRYGate(q, -2.546369290331994, 2);
  sqcRZGate(q, -1.891674967990527, 2);
  sqcRYGate(q, 1.8757792244321922, 3);
  sqcRZGate(q, -1.567890566328277, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.547970032184603, 0);
  sqcRZGate(q, -1.9177931968608573, 0);
  sqcRYGate(q, 1.3180802448492308, 1);
  sqcRZGate(q, -2.710156858824517, 1);
  sqcRYGate(q, -2.0810315699438555, 2);
  sqcRZGate(q, 1.097957260462775, 2);
  sqcRYGate(q, -2.6896764715086934, 3);
  sqcRZGate(q, -1.8795327510440345, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.047155525896293, 0);
  sqcRZGate(q, -2.8763024013527603, 0);
  sqcRYGate(q, -0.969613228477483, 1);
  sqcRZGate(q, -0.9020243369218539, 1);
  sqcRYGate(q, -2.537782507716383, 2);
  sqcRZGate(q, 1.25304232188236, 2);
  sqcRYGate(q, 2.7433409811993856, 3);
  sqcRZGate(q, -0.5651930347427642, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.581938207233149, 0);
  sqcRZGate(q, 3.071985665790963, 0);
  sqcRYGate(q, -1.8714979495803163, 1);
  sqcRZGate(q, -1.6539915863921895, 1);
  sqcRYGate(q, -2.0769076844863683, 2);
  sqcRZGate(q, -1.081477239195784, 2);
  sqcRYGate(q, -3.0902960721893162, 3);
  sqcRZGate(q, -0.6544259289484423, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.8258274059183153, 0);
  sqcRZGate(q, -2.371129195106801, 0);
  sqcRYGate(q, -2.148229857146953, 1);
  sqcRZGate(q, 2.8183618569263342, 1);
  sqcRYGate(q, 1.0125157266615732, 2);
  sqcRZGate(q, -2.7128286305039286, 2);
  sqcRYGate(q, 0.9369744623638089, 3);
  sqcRZGate(q, 0.21877566680112093, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.945584379874232, 0);
  sqcRZGate(q, 1.559635872446676, 0);
  sqcRYGate(q, 0.4899191773442509, 1);
  sqcRZGate(q, 0.030111066569936003, 1);
  sqcRYGate(q, -2.654967928467258, 2);
  sqcRZGate(q, -1.8160997008017077, 2);
  sqcRYGate(q, -2.351297214162453, 3);
  sqcRZGate(q, -1.774513504139025, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0496365378982127, 0);
  sqcRZGate(q, -3.0518057736907642, 0);
  sqcRYGate(q, -2.877437958009025, 1);
  sqcRZGate(q, 0.3955582211594022, 1);
  sqcRYGate(q, 3.070465672662145, 2);
  sqcRZGate(q, -0.533965945102345, 2);
  sqcRYGate(q, 1.4055755059758628, 3);
  sqcRZGate(q, -2.716023963454051, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.761237756083928, 0);
  sqcRZGate(q, -1.6255296274530293, 0);
  sqcRYGate(q, 0.8750943025695334, 1);
  sqcRZGate(q, 0.5420158948852779, 1);
  sqcRYGate(q, 0.7680247355827658, 2);
  sqcRZGate(q, -1.6144832934339384, 2);
  sqcRYGate(q, 0.5970248140343246, 3);
  sqcRZGate(q, 1.3251436046121743, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -3.0624846595941704, 0);
  sqcRZGate(q, 2.9124730209113996, 0);
  sqcRYGate(q, -2.1886703829312437, 1);
  sqcRZGate(q, -1.7880897025125844, 1);
  sqcRYGate(q, -2.21222580239976, 2);
  sqcRZGate(q, 2.7621783777361393, 2);
  sqcRYGate(q, 0.4483701306849879, 3);
  sqcRZGate(q, 1.5187444060282358, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9245463050289313, 0);
  sqcRZGate(q, -0.4746216863071044, 0);
  sqcRYGate(q, -2.1054568771083217, 1);
  sqcRZGate(q, -2.4788280413092254, 1);
  sqcRYGate(q, -2.5448577915211756, 2);
  sqcRZGate(q, 0.4277947606833407, 2);
  sqcRYGate(q, 0.6864055515601198, 3);
  sqcRZGate(q, 1.5807730908204678, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6536140420333771, 0);
  sqcRZGate(q, -0.7321250737918268, 0);
  sqcRYGate(q, 0.8584488163659678, 1);
  sqcRZGate(q, 0.8440908937569627, 1);
  sqcRYGate(q, -0.5922140236154627, 2);
  sqcRZGate(q, 3.11000648002146, 2);
  sqcRYGate(q, -2.318959405911485, 3);
  sqcRZGate(q, 0.8298358325782081, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.8914050959453523, 0);
  sqcRZGate(q, -1.1140911967948828, 0);
  sqcRYGate(q, 1.0645394213365371, 1);
  sqcRZGate(q, -2.8004296098992225, 1);
  sqcRYGate(q, 3.10819021665466, 2);
  sqcRZGate(q, 2.5892734505028794, 2);
  sqcRYGate(q, -2.4155320180893725, 3);
  sqcRZGate(q, -2.8083621809118706, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.172180542708666, 0);
  sqcRZGate(q, 2.7954604297692773, 0);
  sqcRYGate(q, -2.417611620239285, 1);
  sqcRZGate(q, 2.259545791922406, 1);
  sqcRYGate(q, 0.4667136046665999, 2);
  sqcRZGate(q, -2.428922009425873, 2);
  sqcRYGate(q, -2.1005729866173084, 3);
  sqcRZGate(q, 3.092990626405821, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2130211137893765, 0);
  sqcRZGate(q, 3.0036434599183512, 0);
  sqcRYGate(q, 2.2970526820658166, 1);
  sqcRZGate(q, 2.6849515040726426, 1);
  sqcRYGate(q, 0.02809501173507556, 2);
  sqcRZGate(q, -0.17871188697994744, 2);
  sqcRYGate(q, 1.617635691289152, 3);
  sqcRZGate(q, -1.801266045977723, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.1093078120709274, 0);
  sqcRZGate(q, 3.0296079495360155, 0);
  sqcRYGate(q, 2.4236747540042174, 1);
  sqcRZGate(q, 1.4367652558368313, 1);
  sqcRYGate(q, 1.5583241930500726, 2);
  sqcRZGate(q, -0.3245043576438037, 2);
  sqcRYGate(q, 0.7783963896153825, 3);
  sqcRZGate(q, 0.08296307919017476, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.42343936582174546, 0);
  sqcRZGate(q, 0.5399006382349629, 0);
  sqcRYGate(q, 1.4554399778311577, 1);
  sqcRZGate(q, -2.994784522019433, 1);
  sqcRYGate(q, 2.031495340580849, 2);
  sqcRZGate(q, 0.0007214804119133333, 2);
  sqcRYGate(q, -1.8765579412297249, 3);
  sqcRZGate(q, 2.0963556009424877, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.14315196484709602, 0);
  sqcRZGate(q, -1.8398164926363192, 0);
  sqcRYGate(q, -2.4702909887145275, 1);
  sqcRZGate(q, -0.3726208902262051, 1);
  sqcRYGate(q, 1.5360542029703472, 2);
  sqcRZGate(q, -2.785549506506182, 2);
  sqcRYGate(q, -0.13811720122509646, 3);
  sqcRZGate(q, -1.1737109741545955, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.5174732819767405, 0);
  sqcRZGate(q, -1.6706471139786563, 0);
  sqcRYGate(q, -2.8137018254774433, 1);
  sqcRZGate(q, 1.4421345537665031, 1);
  sqcRYGate(q, 2.735698526408276, 2);
  sqcRZGate(q, -0.577761607890654, 2);
  sqcRYGate(q, -0.25240250213650217, 3);
  sqcRZGate(q, 0.15543879428071605, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.583341858943416, 0);
  sqcRZGate(q, -2.1212877893502244, 0);
  sqcRYGate(q, -1.243848742168552, 1);
  sqcRZGate(q, -1.5942708976810724, 1);
  sqcRYGate(q, -1.6125497709919738, 2);
  sqcRZGate(q, 1.2780138407157673, 2);
  sqcRYGate(q, 2.3335611741542452, 3);
  sqcRZGate(q, 0.028747526452978893, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.05797120472820527, 0);
  sqcRZGate(q, 1.861700793043669, 0);
  sqcRYGate(q, -1.568422446940031, 1);
  sqcRZGate(q, 1.3482067313654156, 1);
  sqcRYGate(q, -1.265015461236815, 2);
  sqcRZGate(q, 1.6400505915124928, 2);
  sqcRYGate(q, -1.218129777648168, 3);
  sqcRZGate(q, 1.7179598454196032, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.0019314026173216, 0);
  sqcRZGate(q, 3.047003745982693, 0);
  sqcRYGate(q, -2.9585260569579157, 1);
  sqcRZGate(q, 2.044559696111393, 1);
  sqcRYGate(q, 0.3047155861796804, 2);
  sqcRZGate(q, -1.9542524928042306, 2);
  sqcRYGate(q, 1.5774460579036165, 3);
  sqcRZGate(q, 0.3659033198036854, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.8894214931281743, 0);
  sqcRZGate(q, 2.811988370412644, 0);
  sqcRYGate(q, 2.5611015396467662, 1);
  sqcRZGate(q, 1.088914443658193, 1);
  sqcRYGate(q, 0.013570559327534813, 2);
  sqcRZGate(q, -1.0486635965363886, 2);
  sqcRYGate(q, 0.3830876097498497, 3);
  sqcRZGate(q, 1.538099228605072, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.5966244654374835, 0);
  sqcRZGate(q, 3.0352858748137526, 0);
  sqcRYGate(q, 1.5437932115854942, 1);
  sqcRZGate(q, 1.8632065942960478, 1);
  sqcRYGate(q, 0.44756108086949187, 2);
  sqcRZGate(q, -0.7242648833922027, 2);
  sqcRYGate(q, -2.210738598355145, 3);
  sqcRZGate(q, 2.931594796347973, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.431411086939814, 0);
  sqcRZGate(q, -1.3956579388372274, 0);
  sqcRYGate(q, -0.12465937270089913, 1);
  sqcRZGate(q, 1.5850479308697345, 1);
  sqcRYGate(q, -0.6430311354288952, 2);
  sqcRZGate(q, -2.728803320308867, 2);
  sqcRYGate(q, 0.9821173155536417, 3);
  sqcRZGate(q, 2.0471562086703163, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9836918618586834, 0);
  sqcRZGate(q, 0.09609176313107425, 0);
  sqcRYGate(q, -0.8823232111259546, 1);
  sqcRZGate(q, -2.4841185260314607, 1);
  sqcRYGate(q, 0.957691618245581, 2);
  sqcRZGate(q, 2.8769563569931105, 2);
  sqcRYGate(q, -0.561798621432394, 3);
  sqcRZGate(q, -2.5321150764737133, 3);

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
