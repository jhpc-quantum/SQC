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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 2.380637864101698, 0);
  sqcRZGate(q, -1.6186412939469332, 0);
  sqcRYGate(q, 3.132062965600998, 1);
  sqcRZGate(q, 1.1012044420726248, 1);
  sqcRYGate(q, 3.1314874350071453, 2);
  sqcRZGate(q, -1.923972255801984, 2);
  sqcRYGate(q, 1.5813122890049238, 3);
  sqcRZGate(q, -0.6916081983883203, 3);
  sqcRYGate(q, 1.5842080524439421, 4);
  sqcRZGate(q, 3.1152930329418127, 4);
  sqcRYGate(q, 0.7472618409024725, 5);
  sqcRZGate(q, 3.1101880555068737, 5);
  sqcRYGate(q, -0.08966358491862449, 6);
  sqcRZGate(q, 2.9471539550108927, 6);
  sqcRYGate(q, 0.3432192685555933, 7);
  sqcRZGate(q, -0.546218971290722, 7);
  sqcRYGate(q, 0.5820014495421801, 8);
  sqcRZGate(q, 0.3550832912454691, 8);
  sqcRYGate(q, -0.24322896023979815, 9);
  sqcRZGate(q, -1.9896478736124001, 9);
  sqcRYGate(q, 0.007700051063140865, 10);
  sqcRZGate(q, -0.9925511609987442, 10);
  sqcRYGate(q, -0.04325808581670288, 11);
  sqcRZGate(q, 1.5090302539565217, 11);
  sqcRYGate(q, 1.0562414483625995, 12);
  sqcRZGate(q, 1.326618087332641, 12);
  sqcRYGate(q, 0.04627517438061357, 13);
  sqcRZGate(q, -0.10769589214129917, 13);
  sqcRYGate(q, 3.0827453638577116, 14);
  sqcRZGate(q, 3.131116407712708, 14);
  sqcRYGate(q, 1.567971282562563, 15);
  sqcRZGate(q, -0.12112785025983897, 15);
  sqcRYGate(q, -1.5786859042342383, 16);
  sqcRZGate(q, 1.3991773038637503, 16);
  sqcRYGate(q, 0.0007289909227351867, 17);
  sqcRZGate(q, 1.0339209203678328, 17);
  sqcRYGate(q, 0.21425477460204953, 18);
  sqcRZGate(q, -0.10851787258649158, 18);
  sqcRYGate(q, -0.19231404083999118, 19);
  sqcRZGate(q, 2.2779504629066887, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.0784488691818832, 0);
  sqcRZGate(q, 2.3072019777840964, 0);
  sqcRYGate(q, -0.04361602285612775, 1);
  sqcRZGate(q, -0.5423696072969557, 1);
  sqcRYGate(q, -1.5848175614908881, 2);
  sqcRZGate(q, 2.277126407455538, 2);
  sqcRYGate(q, 0.14231655340086088, 3);
  sqcRZGate(q, -3.1175263717464268, 3);
  sqcRYGate(q, -0.1784347401876211, 4);
  sqcRZGate(q, -3.0384160806547635, 4);
  sqcRYGate(q, 1.5198158889457982, 5);
  sqcRZGate(q, -1.9294327318040265, 5);
  sqcRYGate(q, -0.09171631095856102, 6);
  sqcRZGate(q, -2.6736410419131302, 6);
  sqcRYGate(q, 1.0871323094003174, 7);
  sqcRZGate(q, 0.14136726097853927, 7);
  sqcRYGate(q, 2.029396695730065, 8);
  sqcRZGate(q, -1.990137172908496, 8);
  sqcRYGate(q, 1.3299984509608698, 9);
  sqcRZGate(q, 1.3542830956998184, 9);
  sqcRYGate(q, 0.013103937741623994, 10);
  sqcRZGate(q, -1.81760148451967, 10);
  sqcRYGate(q, 3.090807387386046, 11);
  sqcRZGate(q, 0.03388492529856979, 11);
  sqcRYGate(q, -0.397754464986789, 12);
  sqcRZGate(q, -2.267098567603452, 12);
  sqcRYGate(q, 3.0854103821724403, 13);
  sqcRZGate(q, -0.3220081997528882, 13);
  sqcRYGate(q, -1.5718966842882975, 14);
  sqcRZGate(q, 3.0653422543697335, 14);
  sqcRYGate(q, 1.9250456279565498, 15);
  sqcRZGate(q, -2.250126981076349, 15);
  sqcRYGate(q, -1.76549144092981, 16);
  sqcRZGate(q, 1.8917104958033641, 16);
  sqcRYGate(q, -1.5712624972004827, 17);
  sqcRZGate(q, 1.8350127023980187, 17);
  sqcRYGate(q, -0.1927815843695772, 18);
  sqcRZGate(q, 1.3741346459983967, 18);
  sqcRYGate(q, 2.2353526542961295, 19);
  sqcRZGate(q, -2.897625178662357, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -1.932630958709598, 0);
  sqcRZGate(q, 2.6623793995014076, 0);
  sqcRYGate(q, -1.5697157003541795, 1);
  sqcRZGate(q, 1.54867327636505, 1);
  sqcRYGate(q, -1.5884952631988885, 2);
  sqcRZGate(q, 2.896114267486505, 2);
  sqcRYGate(q, -1.5685226464346762, 3);
  sqcRZGate(q, -2.7262998840186383, 3);
  sqcRYGate(q, -1.435703652862489, 4);
  sqcRZGate(q, 1.2476332460637298, 4);
  sqcRYGate(q, -1.7399589588263131, 5);
  sqcRZGate(q, 0.8380052307126011, 5);
  sqcRYGate(q, -2.294093987784299, 6);
  sqcRZGate(q, -3.0314794338092867, 6);
  sqcRYGate(q, 1.3186560414668964, 7);
  sqcRZGate(q, -0.32758449294027736, 7);
  sqcRYGate(q, -3.105875958697346, 8);
  sqcRZGate(q, -2.7372861241983535, 8);
  sqcRYGate(q, -1.0697833752798995, 9);
  sqcRZGate(q, 3.026795337750306, 9);
  sqcRYGate(q, 0.17918036978197008, 10);
  sqcRZGate(q, 1.2169394487331582, 10);
  sqcRYGate(q, -3.042858964752773, 11);
  sqcRZGate(q, -1.5916778675884231, 11);
  sqcRYGate(q, 0.8002371749207038, 12);
  sqcRZGate(q, -2.470962825953714, 12);
  sqcRYGate(q, 1.5468462964845007, 13);
  sqcRZGate(q, -1.7423642032990185, 13);
  sqcRYGate(q, 1.7358834231503373, 14);
  sqcRZGate(q, -0.5595976455984683, 14);
  sqcRYGate(q, -0.004419111731745659, 15);
  sqcRZGate(q, -1.9363299468760111, 15);
  sqcRYGate(q, 2.073338033969537, 16);
  sqcRZGate(q, -1.8478890805971857, 16);
  sqcRYGate(q, -1.5285485694442615, 17);
  sqcRZGate(q, 1.3212314074576592, 17);
  sqcRYGate(q, 1.5707396134864278, 18);
  sqcRZGate(q, -1.5511649599572168, 18);
  sqcRYGate(q, 2.254461044848667, 19);
  sqcRZGate(q, -0.316288550268796, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, 1.5724146211487504, 0);
  sqcRZGate(q, 0.13669957549562284, 0);
  sqcRYGate(q, -1.2802481073363756, 1);
  sqcRZGate(q, 1.4424636008779546, 1);
  sqcRYGate(q, -0.07041592508586524, 2);
  sqcRZGate(q, -1.0169981969270268, 2);
  sqcRYGate(q, -0.25642278520423467, 3);
  sqcRZGate(q, 0.22640381699628787, 3);
  sqcRYGate(q, -0.27481271791537215, 4);
  sqcRZGate(q, 0.520003400191114, 4);
  sqcRYGate(q, -2.601905962795159, 5);
  sqcRZGate(q, 1.2465545929627995, 5);
  sqcRYGate(q, 0.45070711878295455, 6);
  sqcRZGate(q, -2.8801758019108603, 6);
  sqcRYGate(q, 1.5949126864814962, 7);
  sqcRZGate(q, -3.140710876429264, 7);
  sqcRYGate(q, -0.026014756763810706, 8);
  sqcRZGate(q, -3.0330259400999338, 8);
  sqcRYGate(q, 1.9371150771210148, 9);
  sqcRZGate(q, 1.4843196561107854, 9);
  sqcRYGate(q, -3.0792682017593687, 10);
  sqcRZGate(q, 0.0625216791333356, 10);
  sqcRYGate(q, 3.072074528837996, 11);
  sqcRZGate(q, 2.663931182303903, 11);
  sqcRYGate(q, 1.56286971057909, 12);
  sqcRZGate(q, -1.5002029761563713, 12);
  sqcRYGate(q, -3.094583209161082, 13);
  sqcRZGate(q, 3.0485930742840215, 13);
  sqcRYGate(q, 3.054668608099538, 14);
  sqcRZGate(q, 2.5569830127618536, 14);
  sqcRYGate(q, -0.05436882377488049, 15);
  sqcRZGate(q, 2.0255404695624497, 15);
  sqcRYGate(q, -3.092931837362358, 16);
  sqcRZGate(q, -0.3030212610368963, 16);
  sqcRYGate(q, -0.044095677572580705, 17);
  sqcRZGate(q, 1.3880810977140214, 17);
  sqcRYGate(q, 2.6579377557379744, 18);
  sqcRZGate(q, 1.6176630730141115, 18);
  sqcRYGate(q, -1.570710808334331, 19);
  sqcRZGate(q, -0.20130897385468186, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcCZGate(q, 15, 16);
  sqcCZGate(q, 17, 18);
  sqcRYGate(q, -2.630104974259867, 0);
  sqcRZGate(q, 1.2514115240458352, 0);
  sqcRYGate(q, 2.0911624170594623, 1);
  sqcRZGate(q, 1.0930883628071548, 1);
  sqcRYGate(q, -1.5733717190141374, 2);
  sqcRZGate(q, -0.38132420375353093, 2);
  sqcRYGate(q, 0.4945404493131207, 3);
  sqcRZGate(q, -0.13192618783717244, 3);
  sqcRYGate(q, 1.520234923057636, 4);
  sqcRZGate(q, 1.9566534391515633, 4);
  sqcRYGate(q, -3.049056056779606, 5);
  sqcRZGate(q, 2.956405121211738, 5);
  sqcRYGate(q, 0.0029460852091771628, 6);
  sqcRZGate(q, -2.93533594036899, 6);
  sqcRYGate(q, -1.5216533670921482, 7);
  sqcRZGate(q, -2.6867642559387, 7);
  sqcRYGate(q, -0.018080877086801162, 8);
  sqcRZGate(q, 1.3523844128141886, 8);
  sqcRYGate(q, 1.294922870143049, 9);
  sqcRZGate(q, 1.1667410456882212, 9);
  sqcRYGate(q, -0.21493368260756007, 10);
  sqcRZGate(q, 1.0021179812423284, 10);
  sqcRYGate(q, -3.110809761827168, 11);
  sqcRZGate(q, -2.3731198983201947, 11);
  sqcRYGate(q, 1.6710956710798786, 12);
  sqcRZGate(q, 0.6157556181497386, 12);
  sqcRYGate(q, -1.6647457881709968, 13);
  sqcRZGate(q, -2.4358530229020836, 13);
  sqcRYGate(q, -0.0655257398191944, 14);
  sqcRZGate(q, 2.310349388502595, 14);
  sqcRYGate(q, -3.0268200867351833, 15);
  sqcRZGate(q, 1.5206238361868987, 15);
  sqcRYGate(q, 1.502415136852325, 16);
  sqcRZGate(q, -1.025267678104215, 16);
  sqcRYGate(q, -1.578686590440734, 17);
  sqcRZGate(q, -0.7875811934050683, 17);
  sqcRYGate(q, 1.5387323955818855, 18);
  sqcRZGate(q, -2.373913861478286, 18);
  sqcRYGate(q, -0.12315723564368142, 19);
  sqcRZGate(q, -2.1735917350452816, 19);

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
