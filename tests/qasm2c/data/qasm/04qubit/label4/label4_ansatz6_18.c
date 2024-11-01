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

  sqcRYGate(q, 0.5235279995039057, 0);
  sqcRYGate(q, -0.15310996829349932, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8295524008437427, 0);
  sqcRYGate(q, -1.5170820815268746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.038528158958213, 1);
  sqcRYGate(q, 0.8946058670089654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7887663489966195, 1);
  sqcRYGate(q, -0.2061319901623424, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7919136286253794, 2);
  sqcRYGate(q, -0.21149825125691368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7862988173547731, 2);
  sqcRYGate(q, -2.9540250750237638, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7847062145120858, 0);
  sqcRYGate(q, -1.591193959387688, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.698255241469191, 0);
  sqcRYGate(q, 2.495148284321162, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.708844002777538, 1);
  sqcRYGate(q, 1.1266046197073267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9109438333296052, 1);
  sqcRYGate(q, 0.9833581904322983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5652446873329788, 2);
  sqcRYGate(q, 1.7238218913029897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.530465220905615, 2);
  sqcRYGate(q, 0.8739645267839463, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5986320735523423, 0);
  sqcRYGate(q, -1.970265734302723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5483272430706454, 0);
  sqcRYGate(q, 2.7196060924457623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.006090035321969722, 1);
  sqcRYGate(q, -2.6016468805249797, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.655325974247622, 1);
  sqcRYGate(q, 0.7057342784633525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4663254062953204, 2);
  sqcRYGate(q, -2.572195466535222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6553629118117819, 2);
  sqcRYGate(q, -2.9398204385599143, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0038164432732475, 0);
  sqcRYGate(q, -1.5161011722179332, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3233445880789816, 0);
  sqcRYGate(q, 1.5912203362379551, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2902089758636024, 1);
  sqcRYGate(q, -2.4969273540164525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.25983850454869195, 1);
  sqcRYGate(q, 2.318230594425423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.750225890182992, 2);
  sqcRYGate(q, 2.9383082949214083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.173321404169471, 2);
  sqcRYGate(q, 3.1323291201517214, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2648726822395675, 0);
  sqcRYGate(q, 1.9000107878012464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3225494917074716, 0);
  sqcRYGate(q, -2.76582948718587, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5267712326555616, 1);
  sqcRYGate(q, 2.0790456620424953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07505039698776805, 1);
  sqcRYGate(q, 0.6124020569326983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.622419998177868, 2);
  sqcRYGate(q, -0.22156898591152885, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5185272485661347, 2);
  sqcRYGate(q, 1.105257731345644, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2801722286329538, 0);
  sqcRYGate(q, 0.23086683661046692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10228491842487596, 0);
  sqcRYGate(q, -2.459302963796017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7302665032571227, 1);
  sqcRYGate(q, 2.4859955370548343, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.022759090968666, 1);
  sqcRYGate(q, -1.6863350081508726, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6959798681023415, 2);
  sqcRYGate(q, -2.3568107923137136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6945043096558674, 2);
  sqcRYGate(q, -2.6175805235235106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1844755277199004, 0);
  sqcRYGate(q, -0.07013857905726263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8844780432515527, 0);
  sqcRYGate(q, -2.7400135563029204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1172223895417663, 1);
  sqcRYGate(q, -0.717612377734845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9292737655906105, 1);
  sqcRYGate(q, 0.3604978258383645, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9867061761268902, 2);
  sqcRYGate(q, -0.4986650109668792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4732370721507775, 2);
  sqcRYGate(q, 2.160051663736358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8802188040549606, 0);
  sqcRYGate(q, -2.0759778011057124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8866043317407204, 0);
  sqcRYGate(q, 2.93296773190639, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0919932228879743, 1);
  sqcRYGate(q, -2.3521339705788513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7509406586513125, 1);
  sqcRYGate(q, -1.5655906745064558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0161593764767023, 2);
  sqcRYGate(q, 0.8091226506039071, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6629246233219124, 2);
  sqcRYGate(q, -0.8441052902212127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3991048427480686, 0);
  sqcRYGate(q, 2.9184523773836126, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8232484297774523, 0);
  sqcRYGate(q, 0.10045373051151171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.388510669964405, 1);
  sqcRYGate(q, 0.5656801068110808, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.999966934378583, 1);
  sqcRYGate(q, 0.39286632713030034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07584013861265149, 2);
  sqcRYGate(q, 0.9102872740452498, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6625645112685192, 2);
  sqcRYGate(q, -2.142692439070867, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9212039166839664, 0);
  sqcRYGate(q, -2.007988165189064, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2052358208012248, 0);
  sqcRYGate(q, -2.0048107332635627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5898353050164924, 1);
  sqcRYGate(q, -1.116547413514861, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2175368990294262, 1);
  sqcRYGate(q, 2.916254252088544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.599192532141639, 2);
  sqcRYGate(q, 1.0020250507242414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6718333488359982, 2);
  sqcRYGate(q, -0.22816731435648932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22819492839046304, 0);
  sqcRYGate(q, 0.24062232990080368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8787502346371491, 0);
  sqcRYGate(q, -1.8969267782545964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.905514202650104, 1);
  sqcRYGate(q, -3.078636578738473, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.872800130378254, 1);
  sqcRYGate(q, 0.20843863538881996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7561189209908792, 2);
  sqcRYGate(q, -2.9000272772086366, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41443846413963303, 2);
  sqcRYGate(q, -1.4578318020785666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4862029847840237, 0);
  sqcRYGate(q, -0.007627796770432127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8278036588511823, 0);
  sqcRYGate(q, 1.3452767643604755, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.413672044057253, 1);
  sqcRYGate(q, -1.3888570861529528, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6383566281837796, 1);
  sqcRYGate(q, -1.230445623165552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.378512415249609, 2);
  sqcRYGate(q, 2.0507672135804724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4671639919985013, 2);
  sqcRYGate(q, -1.6285503848336855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3371297894511822, 0);
  sqcRYGate(q, 1.24523807516666, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9550248105424692, 0);
  sqcRYGate(q, 2.8082445634843065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7386167996666515, 1);
  sqcRYGate(q, 0.3495381850025829, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9266389636900667, 1);
  sqcRYGate(q, 2.6341382326268024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.32700327899081827, 2);
  sqcRYGate(q, 2.1361676490530064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3823946329320513, 2);
  sqcRYGate(q, 0.7478556321749847, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30875348751917053, 0);
  sqcRYGate(q, 1.8210421097970246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.41703878306539677, 0);
  sqcRYGate(q, -0.43665946299697256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2330303228559631, 1);
  sqcRYGate(q, 2.2651052307083184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4360783048140666, 1);
  sqcRYGate(q, -1.4247095136494372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7245614060302603, 2);
  sqcRYGate(q, 2.7901465225708133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0085889388990443, 2);
  sqcRYGate(q, -0.787350632348284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7137318274075675, 0);
  sqcRYGate(q, -1.741992008408356, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.98857725668122, 0);
  sqcRYGate(q, 1.3418216379399475, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.932046878810634, 1);
  sqcRYGate(q, -1.703349953990125, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.229936151800624, 1);
  sqcRYGate(q, -2.709021364083767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8815402284556155, 2);
  sqcRYGate(q, -2.3194962931236964, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.852961029537016, 2);
  sqcRYGate(q, -0.1042330952080972, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.31620308174643846, 0);
  sqcRYGate(q, -2.719793426435894, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5453988527749747, 0);
  sqcRYGate(q, -2.7603250060918127, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6213182972683349, 1);
  sqcRYGate(q, 2.7020098047288243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.12751343363364123, 1);
  sqcRYGate(q, 3.129656304138297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.959527976094301, 2);
  sqcRYGate(q, -0.7212426007748887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.802583660303157, 2);
  sqcRYGate(q, 2.3260999610124253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6097728220693499, 0);
  sqcRYGate(q, -1.7094371033768692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.872024492998701, 0);
  sqcRYGate(q, 1.5809519857016274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4510039923805866, 1);
  sqcRYGate(q, 0.8726104582814238, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.359490501852748, 1);
  sqcRYGate(q, 2.9098242229518854, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.242002721249345, 2);
  sqcRYGate(q, -0.11636765053112359, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9685861433394028, 2);
  sqcRYGate(q, -2.918385792916265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7756670768590523, 0);
  sqcRYGate(q, 2.337384754007988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3316971506162334, 0);
  sqcRYGate(q, 1.498256657210081, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.112123355791965, 1);
  sqcRYGate(q, -0.1589561242459574, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.946937465064472, 1);
  sqcRYGate(q, 1.5169044472593036, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.654715628862993, 2);
  sqcRYGate(q, -1.5097388340283877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8493025563821591, 2);
  sqcRYGate(q, 1.823933303023527, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9031809564401019, 0);
  sqcRYGate(q, 2.8349760372276185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.902338559758831, 0);
  sqcRYGate(q, 2.475157028783301, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.266122972682625, 1);
  sqcRYGate(q, -0.6541147769991333, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.302447008730291, 1);
  sqcRYGate(q, 1.601982036317282, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.974203087283772, 2);
  sqcRYGate(q, -0.18610525381073906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0026814703374436, 2);
  sqcRYGate(q, -2.23398187064718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0959408232500243, 0);
  sqcRYGate(q, 2.8754376152009082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.788683738794759, 0);
  sqcRYGate(q, 3.039945466707855, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9672932570860227, 1);
  sqcRYGate(q, -1.5032180062147205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.072157123989378, 1);
  sqcRYGate(q, 1.5034574178158566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.312735622094707, 2);
  sqcRYGate(q, 1.5221693462899957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.641028816854583, 2);
  sqcRYGate(q, 2.003529929823749, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8334077353284831, 0);
  sqcRYGate(q, 0.7078793601153172, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.429831682754795, 0);
  sqcRYGate(q, -1.3877991803973189, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9749511342854841, 1);
  sqcRYGate(q, 1.6164097733302052, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3470697165448886, 1);
  sqcRYGate(q, -2.0008373289891823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.072675612054129, 2);
  sqcRYGate(q, 0.7094120875552905, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.699527709026612, 2);
  sqcRYGate(q, -1.1056779676338904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.05317686703452158, 0);
  sqcRYGate(q, 1.4371448947010617, 1);
  sqcRYGate(q, 1.668228815299534, 2);
  sqcRYGate(q, -1.7800271696445336, 3);

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
