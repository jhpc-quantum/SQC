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

  sqcRYGate(q, -2.942625579881457, 0);
  sqcRYGate(q, -3.0597270062242647, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.428316087321156, 0);
  sqcRYGate(q, -2.464873805231181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4468597918098078, 1);
  sqcRYGate(q, 1.2599906924516755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2875245711527805, 1);
  sqcRYGate(q, 2.974740465304433, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9315854928002028, 2);
  sqcRYGate(q, 1.326949654571475, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7389000571544653, 2);
  sqcRYGate(q, -1.3836930990204654, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3692312083496136, 0);
  sqcRYGate(q, 2.168567012374374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.133980429739579, 0);
  sqcRYGate(q, 2.0733978927281367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8621564758658016, 1);
  sqcRYGate(q, 2.464610866074167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4850996978248054, 1);
  sqcRYGate(q, 0.5079988900523761, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.728789904681573, 2);
  sqcRYGate(q, -1.3226801287855903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6428023581200623, 2);
  sqcRYGate(q, 0.12352353765182134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1810775279877033, 0);
  sqcRYGate(q, 1.1701329868134565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3630025959666163, 0);
  sqcRYGate(q, -0.11917700469686696, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4947262682051683, 1);
  sqcRYGate(q, -1.8014404936328203, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6328692783644336, 1);
  sqcRYGate(q, 1.2313183468655078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7111150074412447, 2);
  sqcRYGate(q, 1.6140478074280642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5804803674207546, 2);
  sqcRYGate(q, -0.6974901245048829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.19546620092558964, 0);
  sqcRYGate(q, -0.9125097566291585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.659798061755521, 0);
  sqcRYGate(q, 0.26960753300552787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.818607544082113, 1);
  sqcRYGate(q, -0.5460635562483427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.229267839204177, 1);
  sqcRYGate(q, 2.0759153211762005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0756240069297975, 2);
  sqcRYGate(q, -2.733306587148672, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.376541783824288, 2);
  sqcRYGate(q, -2.361661594773391, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5850433750631883, 0);
  sqcRYGate(q, 0.2803490082166277, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.095931759659563, 0);
  sqcRYGate(q, 0.06979784041108554, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.057777619722967, 1);
  sqcRYGate(q, 2.0727002457324337, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2900736718803536, 1);
  sqcRYGate(q, 0.267511438232828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7326083075027212, 2);
  sqcRYGate(q, 2.701315311281019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.579058886771332, 2);
  sqcRYGate(q, 1.9034058143460266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07146248088025065, 0);
  sqcRYGate(q, 1.8811148851218444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.268629912748392, 0);
  sqcRYGate(q, 2.016357931023856, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2729343260238082, 1);
  sqcRYGate(q, -0.3111353226893169, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9557619118829885, 1);
  sqcRYGate(q, -1.8185350804276466, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7963382952893625, 2);
  sqcRYGate(q, -1.9941134234735536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0471782022592935, 2);
  sqcRYGate(q, -0.297573085138992, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7009007235435976, 0);
  sqcRYGate(q, 3.1255122323564297, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.538592345165286, 0);
  sqcRYGate(q, 2.2114812357358304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9643773181197952, 1);
  sqcRYGate(q, 1.5115898217299064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.049441123398204, 1);
  sqcRYGate(q, 2.27265153718392, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08675462563355535, 2);
  sqcRYGate(q, 0.1258994570430753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2527612212981518, 2);
  sqcRYGate(q, -0.6377601774922822, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3004147412172236, 0);
  sqcRYGate(q, 2.7858409360823173, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5416604139341645, 0);
  sqcRYGate(q, 0.055474571287860916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6675362529449281, 1);
  sqcRYGate(q, -2.7443462141632677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.975285425992225, 1);
  sqcRYGate(q, 3.079608247611751, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.37263128651014826, 2);
  sqcRYGate(q, 0.8682849109477716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.56981087637658, 2);
  sqcRYGate(q, 1.8259107019178127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4059679407967387, 0);
  sqcRYGate(q, -1.056943226549137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4054052334071931, 0);
  sqcRYGate(q, 1.157807464950098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8158485499061006, 1);
  sqcRYGate(q, 0.2794573701646979, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1299831181699704, 1);
  sqcRYGate(q, 1.6306635405840937, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.009361805538493, 2);
  sqcRYGate(q, -1.8970348750411137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7504182184005349, 2);
  sqcRYGate(q, -2.987060724913729, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4269155618575604, 0);
  sqcRYGate(q, -2.905553457054482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.10495023292628226, 0);
  sqcRYGate(q, -2.5030819510220215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1733803379375622, 1);
  sqcRYGate(q, 2.558770826965288, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8341468700769532, 1);
  sqcRYGate(q, 1.3215549211311115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9289260924800264, 2);
  sqcRYGate(q, -1.7401751195474549, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.821781765247198, 2);
  sqcRYGate(q, 1.4241416745481366, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.763373817566933, 0);
  sqcRYGate(q, 0.22697321898577527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15334535981108655, 0);
  sqcRYGate(q, 2.441275712203418, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0118725783110225, 1);
  sqcRYGate(q, -0.9862053974334222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5079701158572224, 1);
  sqcRYGate(q, 1.3407985937080076, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.014824844268711, 2);
  sqcRYGate(q, 2.274664572578194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.119896165151802, 2);
  sqcRYGate(q, -0.5895127340616773, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7181413714133607, 0);
  sqcRYGate(q, 1.3612778964100982, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2700782091571812, 0);
  sqcRYGate(q, -0.5974815692294202, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24300458471714495, 1);
  sqcRYGate(q, -2.850100240669933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2389589246447192, 1);
  sqcRYGate(q, 1.7657192776538009, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9618831748782286, 2);
  sqcRYGate(q, -2.131665562631605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21586852928106914, 2);
  sqcRYGate(q, 0.08082758166663417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07610255098056484, 0);
  sqcRYGate(q, -2.6547877021183837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5477532566599778, 0);
  sqcRYGate(q, -1.9055934137697945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.926888869257661, 1);
  sqcRYGate(q, -2.3273385319779387, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.012253547310524, 1);
  sqcRYGate(q, -2.8538890380376447, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0395013707674665, 2);
  sqcRYGate(q, -2.987002745695693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6248964639183927, 2);
  sqcRYGate(q, 1.9410933795276981, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.275449006560856, 0);
  sqcRYGate(q, 2.9687330209518974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.37443481809736934, 0);
  sqcRYGate(q, -2.5168019260462016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2169876989882233, 1);
  sqcRYGate(q, 0.2467005039728187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.33960367898948735, 1);
  sqcRYGate(q, -1.6008980996881128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9895166524732507, 2);
  sqcRYGate(q, 0.6067956043206605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1929257970372271, 2);
  sqcRYGate(q, 1.0134739625785378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24557232552159824, 0);
  sqcRYGate(q, -2.958208760892735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4800955865956325, 0);
  sqcRYGate(q, 1.1988498036319148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4072828027189366, 1);
  sqcRYGate(q, 2.9188959267848418, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.30136732641527253, 1);
  sqcRYGate(q, 0.42593561497559806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1007247111445086, 2);
  sqcRYGate(q, -0.8265825057878216, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.126859597399058, 2);
  sqcRYGate(q, -2.1378918467989134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0269920859083275, 0);
  sqcRYGate(q, -0.3307816093551943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3359490332336383, 0);
  sqcRYGate(q, -3.0621764913983514, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6355668768658045, 1);
  sqcRYGate(q, 1.1194491788642251, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.938379670610594, 1);
  sqcRYGate(q, 3.0683629291125314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6442477578853745, 2);
  sqcRYGate(q, 1.6349824159717352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.853569374745148, 2);
  sqcRYGate(q, 2.2714750047130923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.352705248730911, 0);
  sqcRYGate(q, -1.8135841444593044, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.298204613494352, 0);
  sqcRYGate(q, 1.0556080864649562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.262087211334091, 1);
  sqcRYGate(q, 2.974660958575219, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.15365929645123888, 1);
  sqcRYGate(q, -2.496409620901785, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.29262536733994976, 2);
  sqcRYGate(q, -1.1793051950069213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.31753756362550334, 2);
  sqcRYGate(q, -0.3784832014158485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.502122813056818, 0);
  sqcRYGate(q, 1.7815636026322481, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7764621568929986, 0);
  sqcRYGate(q, -2.480684571576432, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02625168646806634, 1);
  sqcRYGate(q, 2.593519009631479, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3809707451163071, 1);
  sqcRYGate(q, 1.8938688097269034, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.866436049317617, 2);
  sqcRYGate(q, 0.8148228841823134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.151921747752354, 2);
  sqcRYGate(q, -0.23947433921862493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0831615021044456, 0);
  sqcRYGate(q, -2.8715275430335625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2484022802347186, 0);
  sqcRYGate(q, 1.403670362216977, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.469455041084766, 1);
  sqcRYGate(q, -2.9239542109165195, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.94556535936699, 1);
  sqcRYGate(q, 1.6951203408127817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3785994629482612, 2);
  sqcRYGate(q, -2.3843899929966965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8447388843395265, 2);
  sqcRYGate(q, 2.623022695220211, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.220052711723251, 0);
  sqcRYGate(q, -1.7202092679312344, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1186329908416772, 0);
  sqcRYGate(q, 1.925110820184508, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8043425594654052, 1);
  sqcRYGate(q, 2.8140617231435274, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4899580360275135, 1);
  sqcRYGate(q, -1.310862606159446, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8607755567433493, 2);
  sqcRYGate(q, -2.773700696185803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7331453457372468, 2);
  sqcRYGate(q, 1.5726475904640134, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1456975617096834, 0);
  sqcRYGate(q, -0.5680809566007361, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7694126376539848, 0);
  sqcRYGate(q, 1.735054770421913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4005348890291676, 1);
  sqcRYGate(q, 2.2411174372118423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1107221874249333, 1);
  sqcRYGate(q, 0.8840154043026452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3219904965558058, 2);
  sqcRYGate(q, 2.478986910421892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.055907207085332, 2);
  sqcRYGate(q, -0.5482302537375308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4844584198615671, 0);
  sqcRYGate(q, -1.3173458094728987, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1124775649455483, 0);
  sqcRYGate(q, 0.5521548859170036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4775052959267767, 1);
  sqcRYGate(q, -1.8736956337916755, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0005730878732693, 1);
  sqcRYGate(q, -1.5742516356900256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5247964669560423, 2);
  sqcRYGate(q, -1.1590093799764025, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6565323545975879, 2);
  sqcRYGate(q, 2.377056046403529, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8137316268182273, 0);
  sqcRYGate(q, 3.07370983868777, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6924806658001021, 0);
  sqcRYGate(q, 3.004488898437692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1321862655968427, 1);
  sqcRYGate(q, 2.953472813392817, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.807400711224785, 1);
  sqcRYGate(q, 1.6209361565973024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7818145138459336, 2);
  sqcRYGate(q, -2.5521077865821815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.06585504449556545, 2);
  sqcRYGate(q, -1.986536481009871, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9095685911701623, 0);
  sqcRYGate(q, 1.1325920068906, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3463362009754665, 0);
  sqcRYGate(q, -2.885897101025509, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5350824330559514, 1);
  sqcRYGate(q, 2.344325619416279, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.061647334725336, 1);
  sqcRYGate(q, -0.8826845227139026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.175246913501827, 2);
  sqcRYGate(q, 2.4400955382241074, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3023025539902133, 2);
  sqcRYGate(q, 1.6590259251702877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6299205050795758, 0);
  sqcRYGate(q, 2.213317960357511, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6744982361288976, 0);
  sqcRYGate(q, -1.1665024629172438, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7008770561509063, 1);
  sqcRYGate(q, 0.9434282799036775, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6059582576813005, 1);
  sqcRYGate(q, 2.9498975550230084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0383690801826058, 2);
  sqcRYGate(q, -0.03732131289100135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1982242960427492, 2);
  sqcRYGate(q, -0.5025624304151899, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8515751656051869, 0);
  sqcRYGate(q, -2.1566006523975423, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4829150927663666, 0);
  sqcRYGate(q, -2.917065649715159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.749050193172941, 1);
  sqcRYGate(q, -0.9943168864372184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.33703660989534173, 1);
  sqcRYGate(q, 0.8449114831874116, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.44500734478694864, 2);
  sqcRYGate(q, 2.0639573491111722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2739216592490936, 2);
  sqcRYGate(q, 1.2835493127826196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.431303484285827, 0);
  sqcRYGate(q, 1.0542572350577957, 1);
  sqcRYGate(q, 0.4799911391876441, 2);
  sqcRYGate(q, -1.529968319154258, 3);

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
