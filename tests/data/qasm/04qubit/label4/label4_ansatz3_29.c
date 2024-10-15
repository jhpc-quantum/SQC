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

  sqcRYGate(q, -0.15707815317556087, 0);
  sqcRZGate(q, -1.770878444127785, 0);
  sqcRYGate(q, -2.6101918364624583, 1);
  sqcRZGate(q, 1.7112155460909442, 1);
  sqcRYGate(q, -1.3111130774174216, 2);
  sqcRZGate(q, 1.9761199816320927, 2);
  sqcRYGate(q, -0.1520547116786446, 3);
  sqcRZGate(q, -2.536394415415569, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.08854936984486361, 0);
  sqcRZGate(q, 2.281367725636821, 0);
  sqcRYGate(q, -1.1852951308156054, 1);
  sqcRZGate(q, -2.216898674731827, 1);
  sqcRYGate(q, 1.4740215219092518, 2);
  sqcRZGate(q, 1.0501808755824271, 2);
  sqcRYGate(q, -0.8114771298461098, 3);
  sqcRZGate(q, -1.8905677717203897, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.211470010958867, 0);
  sqcRZGate(q, 2.286120711136972, 0);
  sqcRYGate(q, 1.2991457834748301, 1);
  sqcRZGate(q, 0.3088842244262259, 1);
  sqcRYGate(q, -0.42704902818334567, 2);
  sqcRZGate(q, 2.6366026224584536, 2);
  sqcRYGate(q, 0.8701048404809898, 3);
  sqcRZGate(q, -0.09682065089108088, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.147341055780858, 0);
  sqcRZGate(q, -1.3246993754475485, 0);
  sqcRYGate(q, -2.717900589715987, 1);
  sqcRZGate(q, -1.783072640503189, 1);
  sqcRYGate(q, -1.5058719966627976, 2);
  sqcRZGate(q, -1.0830325401995609, 2);
  sqcRYGate(q, -1.2799110451233053, 3);
  sqcRZGate(q, -0.7266597997739953, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.11760110180251597, 0);
  sqcRZGate(q, 0.7839993748560865, 0);
  sqcRYGate(q, 1.640571594407426, 1);
  sqcRZGate(q, -1.7712474616810467, 1);
  sqcRYGate(q, 0.8684924212879044, 2);
  sqcRZGate(q, -2.5949333501858063, 2);
  sqcRYGate(q, -1.5198068854818914, 3);
  sqcRZGate(q, 1.7450918657312586, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.257025826146857, 0);
  sqcRZGate(q, 2.6327740772745356, 0);
  sqcRYGate(q, -1.2540826407831247, 1);
  sqcRZGate(q, -2.466741077805498, 1);
  sqcRYGate(q, -2.013406274792122, 2);
  sqcRZGate(q, -3.0082976650115634, 2);
  sqcRYGate(q, 1.2418019092402193, 3);
  sqcRZGate(q, -0.7234824754546546, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.877785616096765, 0);
  sqcRZGate(q, -0.1723562268409472, 0);
  sqcRYGate(q, 0.5041372938957709, 1);
  sqcRZGate(q, -3.0409421012583073, 1);
  sqcRYGate(q, 2.2204822860571456, 2);
  sqcRZGate(q, 0.4478816665383869, 2);
  sqcRYGate(q, 1.1827820874723636, 3);
  sqcRZGate(q, 2.029679746393919, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.6323930672457598, 0);
  sqcRZGate(q, -1.3268983444908802, 0);
  sqcRYGate(q, -1.4971377338827407, 1);
  sqcRZGate(q, -0.3905388410263577, 1);
  sqcRYGate(q, -2.4671132633922266, 2);
  sqcRZGate(q, -1.1930587938996569, 2);
  sqcRYGate(q, -2.665493862254911, 3);
  sqcRZGate(q, -1.2813654536869126, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.591076546053757, 0);
  sqcRZGate(q, 2.66275695574069, 0);
  sqcRYGate(q, -1.1555493863267658, 1);
  sqcRZGate(q, -0.7361085634923245, 1);
  sqcRYGate(q, 1.2819881735127427, 2);
  sqcRZGate(q, -2.658493037596136, 2);
  sqcRYGate(q, -1.7177899769904927, 3);
  sqcRZGate(q, -2.342218616236044, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.9574162622140427, 0);
  sqcRZGate(q, -2.942041532387592, 0);
  sqcRYGate(q, -2.7518012079121177, 1);
  sqcRZGate(q, -2.6878965304003812, 1);
  sqcRYGate(q, 2.7885488121187594, 2);
  sqcRZGate(q, 2.8030943250810556, 2);
  sqcRYGate(q, -2.6766574409593042, 3);
  sqcRZGate(q, -2.7320746791384325, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.9794513923387576, 0);
  sqcRZGate(q, -1.7023013082526788, 0);
  sqcRYGate(q, 1.2359682946054038, 1);
  sqcRZGate(q, 0.3931446824184306, 1);
  sqcRYGate(q, 0.14767028765680212, 2);
  sqcRZGate(q, 1.5751382090050594, 2);
  sqcRYGate(q, 3.072520719590764, 3);
  sqcRZGate(q, -0.4438915735499416, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.0790278179370811, 0);
  sqcRZGate(q, 2.184354711658668, 0);
  sqcRYGate(q, -0.07822241514724061, 1);
  sqcRZGate(q, -0.5533643660294105, 1);
  sqcRYGate(q, 0.6654267921545562, 2);
  sqcRZGate(q, -1.8494232095565364, 2);
  sqcRYGate(q, 2.0307202077708273, 3);
  sqcRZGate(q, 0.9166753317600002, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7018741227136752, 0);
  sqcRZGate(q, 2.8691293041452073, 0);
  sqcRYGate(q, -2.733522555174886, 1);
  sqcRZGate(q, 1.440453373388305, 1);
  sqcRYGate(q, 2.069552920442594, 2);
  sqcRZGate(q, -1.6794514259196727, 2);
  sqcRYGate(q, 2.808627673714972, 3);
  sqcRZGate(q, -1.2967325021888654, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.5540110124222795, 0);
  sqcRZGate(q, 2.0082485550067224, 0);
  sqcRYGate(q, -2.8015041257668347, 1);
  sqcRZGate(q, 0.6976528006853432, 1);
  sqcRYGate(q, -2.5637975388769476, 2);
  sqcRZGate(q, 2.2701208631066363, 2);
  sqcRYGate(q, 0.9369282139557136, 3);
  sqcRZGate(q, 1.504389209706581, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.0353212434077435, 0);
  sqcRZGate(q, -2.7398557785131175, 0);
  sqcRYGate(q, 2.1927873344026185, 1);
  sqcRZGate(q, -2.218197858159333, 1);
  sqcRYGate(q, 1.6459459758380328, 2);
  sqcRZGate(q, 0.8352190428168166, 2);
  sqcRYGate(q, -2.510543870785671, 3);
  sqcRZGate(q, -1.4173908069188805, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.08906222325234214, 0);
  sqcRZGate(q, -0.030994218305423885, 0);
  sqcRYGate(q, -3.1075597884183273, 1);
  sqcRZGate(q, 0.5765367525086775, 1);
  sqcRYGate(q, 0.2993151631108093, 2);
  sqcRZGate(q, -1.9835139347879478, 2);
  sqcRYGate(q, -0.14840329945065012, 3);
  sqcRZGate(q, 0.6715764498430284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 3.0692358253691743, 0);
  sqcRZGate(q, -0.7256221039735298, 0);
  sqcRYGate(q, -1.761653220659205, 1);
  sqcRZGate(q, -0.6290187311120521, 1);
  sqcRYGate(q, 2.814835905647556, 2);
  sqcRZGate(q, 0.7318380816191018, 2);
  sqcRYGate(q, -1.0319971570421835, 3);
  sqcRZGate(q, -0.6643308640476109, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.9262033112650006, 0);
  sqcRZGate(q, -0.8673899353680685, 0);
  sqcRYGate(q, 2.558463194691115, 1);
  sqcRZGate(q, -1.2136684698374376, 1);
  sqcRYGate(q, 0.003248065510060237, 2);
  sqcRZGate(q, 2.1951669756117544, 2);
  sqcRYGate(q, -0.9369822245155017, 3);
  sqcRZGate(q, 0.46524341929244944, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.8863853266010746, 0);
  sqcRZGate(q, 0.642766906700767, 0);
  sqcRYGate(q, 0.30379215520360336, 1);
  sqcRZGate(q, 1.7578780084995165, 1);
  sqcRYGate(q, -1.5032704065160278, 2);
  sqcRZGate(q, -2.4250761475420197, 2);
  sqcRYGate(q, -2.9399193079114854, 3);
  sqcRZGate(q, -1.9035478645054438, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8664172512662036, 0);
  sqcRZGate(q, -0.4649943196619466, 0);
  sqcRYGate(q, 0.29729360010297246, 1);
  sqcRZGate(q, 2.9848646462719626, 1);
  sqcRYGate(q, -1.6852459790775536, 2);
  sqcRZGate(q, 1.1928864022964842, 2);
  sqcRYGate(q, 0.9588870129028848, 3);
  sqcRZGate(q, 1.0620115646821082, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.719178065853789, 0);
  sqcRZGate(q, -1.1504785277433494, 0);
  sqcRYGate(q, 0.4298099278969279, 1);
  sqcRZGate(q, 0.09965412363674185, 1);
  sqcRYGate(q, 0.2912162257655453, 2);
  sqcRZGate(q, 1.5014409217660791, 2);
  sqcRYGate(q, 2.616013007923962, 3);
  sqcRZGate(q, 2.179624869603993, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -2.2031368278614463, 0);
  sqcRZGate(q, 1.9398967673181255, 0);
  sqcRYGate(q, 2.6554226469197757, 1);
  sqcRZGate(q, 0.10577625105155476, 1);
  sqcRYGate(q, 0.46696844944288224, 2);
  sqcRZGate(q, -2.8242938556325266, 2);
  sqcRYGate(q, 0.9405983909537373, 3);
  sqcRZGate(q, -1.7903096857810055, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 1.2769748049513139, 0);
  sqcRZGate(q, -0.4264015148699221, 0);
  sqcRYGate(q, -2.4860140985543238, 1);
  sqcRZGate(q, 1.9565901373483454, 1);
  sqcRYGate(q, 1.9806577816085302, 2);
  sqcRZGate(q, 0.0722224734975349, 2);
  sqcRYGate(q, 3.114903289296783, 3);
  sqcRZGate(q, 0.44000669953587385, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.3901133159628527, 0);
  sqcRZGate(q, -2.49198843370898, 0);
  sqcRYGate(q, 0.2630226989570712, 1);
  sqcRZGate(q, -0.11250572703373418, 1);
  sqcRYGate(q, 1.6364058236788457, 2);
  sqcRZGate(q, 1.6721654000162822, 2);
  sqcRYGate(q, -1.4692980060943783, 3);
  sqcRZGate(q, -0.37923292604801895, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.2892604701368553, 0);
  sqcRZGate(q, -0.6873480999138382, 0);
  sqcRYGate(q, 2.4678783507952735, 1);
  sqcRZGate(q, -2.446452474759919, 1);
  sqcRYGate(q, 0.3145501692099959, 2);
  sqcRZGate(q, -2.3198266120296713, 2);
  sqcRYGate(q, -0.4139065012497221, 3);
  sqcRZGate(q, -1.214709841934087, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -1.4068314262431936, 0);
  sqcRZGate(q, 1.5154583333959228, 0);
  sqcRYGate(q, -3.0468214961401325, 1);
  sqcRZGate(q, -0.08856782430477228, 1);
  sqcRYGate(q, 1.8785622426971464, 2);
  sqcRZGate(q, -2.4407177989431723, 2);
  sqcRYGate(q, 0.5845342570390598, 3);
  sqcRZGate(q, -0.3086962957233981, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.42718463096793935, 0);
  sqcRZGate(q, 0.28948579882413034, 0);
  sqcRYGate(q, 0.8929947359676377, 1);
  sqcRZGate(q, -0.9682029732008015, 1);
  sqcRYGate(q, 0.7134961214655854, 2);
  sqcRZGate(q, 2.2723700446354282, 2);
  sqcRYGate(q, 0.45490354411746453, 3);
  sqcRZGate(q, -2.9558330450396966, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.21951700894942316, 0);
  sqcRZGate(q, -0.8259448717996989, 0);
  sqcRYGate(q, -0.15561376318340805, 1);
  sqcRZGate(q, -1.552904581262258, 1);
  sqcRYGate(q, 0.6877074974490593, 2);
  sqcRZGate(q, 0.8366159201927675, 2);
  sqcRYGate(q, -1.9236790792318965, 3);
  sqcRZGate(q, -3.1048271482284875, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.888110220262428, 0);
  sqcRZGate(q, 1.278448065274051, 0);
  sqcRYGate(q, 2.263562801383105, 1);
  sqcRZGate(q, -0.08211281499311962, 1);
  sqcRYGate(q, -1.5384491025788947, 2);
  sqcRZGate(q, 2.8638076506371783, 2);
  sqcRYGate(q, 0.6865367515991253, 3);
  sqcRZGate(q, 0.2525710810670088, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.4948920820542346, 0);
  sqcRZGate(q, 1.1523369975615116, 0);
  sqcRYGate(q, 0.9352180636949704, 1);
  sqcRZGate(q, -0.05182788000918049, 1);
  sqcRYGate(q, -0.8754205431286607, 2);
  sqcRZGate(q, -2.7135189763563354, 2);
  sqcRYGate(q, 0.9959668817186748, 3);
  sqcRZGate(q, 0.44467806942563903, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 0.7365371058777148, 0);
  sqcRZGate(q, 3.0001935816550396, 0);
  sqcRYGate(q, -3.114273788271035, 1);
  sqcRZGate(q, -2.3652775449810384, 1);
  sqcRYGate(q, 1.651929446843017, 2);
  sqcRZGate(q, -2.9893303841606693, 2);
  sqcRYGate(q, 1.754978643615418, 3);
  sqcRZGate(q, 1.3083496657490628, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, -0.8529093733889938, 0);
  sqcRZGate(q, -0.044352577924387765, 0);
  sqcRYGate(q, -0.9353765049557426, 1);
  sqcRZGate(q, -0.02867113583013481, 1);
  sqcRYGate(q, 1.7948830788372383, 2);
  sqcRZGate(q, -1.8110915895865025, 2);
  sqcRYGate(q, -2.253701128232741, 3);
  sqcRZGate(q, 2.3343812151652927, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcRYGate(q, 2.485989273384581, 0);
  sqcRZGate(q, 1.7147284364143252, 0);
  sqcRYGate(q, 3.064490785963582, 1);
  sqcRZGate(q, 1.1319382039612655, 1);
  sqcRYGate(q, 1.0713726099535559, 2);
  sqcRZGate(q, 2.3290004944307743, 2);
  sqcRYGate(q, 1.0314684682863333, 3);
  sqcRZGate(q, 1.9167787229034698, 3);

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
