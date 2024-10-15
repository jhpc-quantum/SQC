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

  sqcRYGate(q, -0.4977214407354893, 0);
  sqcRYGate(q, -1.923747815936962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2457226928532883, 0);
  sqcRYGate(q, -2.283589493721507, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7988118772522568, 0);
  sqcRYGate(q, -1.5093896034697867, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4116265522212035, 0);
  sqcRYGate(q, 1.7531437192392278, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5556215745954161, 0);
  sqcRYGate(q, -2.6124120820412955, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9174967531959446, 0);
  sqcRYGate(q, 2.4277053644684075, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1146470224789162, 1);
  sqcRYGate(q, 2.4250251661688784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.241809353035329, 1);
  sqcRYGate(q, -1.0537041331744836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8915434667939561, 1);
  sqcRYGate(q, -0.36430847997461185, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4470257867707197, 1);
  sqcRYGate(q, -1.3393731828106183, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.393265444811747, 2);
  sqcRYGate(q, -2.907948549806178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2377458391842495, 2);
  sqcRYGate(q, 2.157489993437253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.588527775014713, 0);
  sqcRYGate(q, 2.4229031553916722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.83829121413667, 0);
  sqcRYGate(q, -0.7527084191557698, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5266366992197171, 0);
  sqcRYGate(q, 2.6834236775665983, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.241928241102782, 0);
  sqcRYGate(q, 2.2474721272271125, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1143359099849897, 0);
  sqcRYGate(q, -0.16667587926508443, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2577017467923772, 0);
  sqcRYGate(q, -1.690346154797096, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3512078699193664, 1);
  sqcRYGate(q, -0.6894140898516233, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1033238479633063, 1);
  sqcRYGate(q, -1.8878740173111552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6617113500670935, 1);
  sqcRYGate(q, 1.804817657635744, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5251928284715373, 1);
  sqcRYGate(q, 2.2491217388478635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7490126563970663, 2);
  sqcRYGate(q, 2.1278033327283428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.812500753382305, 2);
  sqcRYGate(q, 0.5824462870185076, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6097564880779918, 0);
  sqcRYGate(q, -0.8029126520343137, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.660088829208394, 0);
  sqcRYGate(q, 1.111718124649082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.395451682868548, 0);
  sqcRYGate(q, 0.013341069974955213, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2776788483794954, 0);
  sqcRYGate(q, 0.5179010362040231, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0404906017829845, 0);
  sqcRYGate(q, 1.2464063246199963, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7410014766068, 0);
  sqcRYGate(q, 2.752835991954814, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.851200499800466, 1);
  sqcRYGate(q, 1.2084159138315078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8624922674268078, 1);
  sqcRYGate(q, -0.5621556226496054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.639766385554145, 1);
  sqcRYGate(q, -0.682480143239494, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1940340787796542, 1);
  sqcRYGate(q, -1.8584693046112113, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8414339228942125, 2);
  sqcRYGate(q, 2.477946948956144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8137935323180983, 2);
  sqcRYGate(q, -1.967129369260082, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.28179699702335714, 0);
  sqcRYGate(q, -2.671385135600235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0294272175530668, 0);
  sqcRYGate(q, -2.710595499722711, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0045200601578816, 0);
  sqcRYGate(q, 2.4253962151447355, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4842247640388793, 0);
  sqcRYGate(q, -0.8735248248016293, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0428721247735138, 0);
  sqcRYGate(q, 3.0738039103863803, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.483303922591329, 0);
  sqcRYGate(q, -1.7874674994022801, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8505620224051627, 1);
  sqcRYGate(q, 2.793069690047014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0665545914202355, 1);
  sqcRYGate(q, 1.541445634028963, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.981706790862944, 1);
  sqcRYGate(q, -2.477255838548939, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3998046846545042, 1);
  sqcRYGate(q, -0.6986083442908981, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.508302916409282, 2);
  sqcRYGate(q, -0.9834166794647317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6800719377304305, 2);
  sqcRYGate(q, 2.2467938014210755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6355919167265807, 0);
  sqcRYGate(q, 1.3435697041227144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8158196378240499, 0);
  sqcRYGate(q, -1.1886875099866265, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4729086722288095, 0);
  sqcRYGate(q, -3.1140449105494743, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9990566424929304, 0);
  sqcRYGate(q, 1.2395561310725307, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.986904391516364, 0);
  sqcRYGate(q, -1.1869085868555205, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.17134554388375278, 0);
  sqcRYGate(q, -0.6878926179389628, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5188425060227564, 1);
  sqcRYGate(q, 0.6822824169033606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8721185846388129, 1);
  sqcRYGate(q, 2.4227706563746003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.107606581865462, 1);
  sqcRYGate(q, -2.8752476858449696, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.088424268576603, 1);
  sqcRYGate(q, -0.49576076385587237, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.014982739440896, 2);
  sqcRYGate(q, -3.0759621132697106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8169758748092812, 2);
  sqcRYGate(q, -1.9715727166990495, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9637266018196287, 0);
  sqcRYGate(q, -1.3208339083478053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.431014316199681, 0);
  sqcRYGate(q, 1.0161067168736873, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5373167505251413, 0);
  sqcRYGate(q, 2.6631289465574426, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8725379397807025, 0);
  sqcRYGate(q, 1.5174820423262683, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.46360789982664746, 0);
  sqcRYGate(q, 0.45705283095359134, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.50382736123732, 0);
  sqcRYGate(q, -0.06843444889523376, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9829985207106793, 1);
  sqcRYGate(q, -0.5443964410286322, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.150352266738924, 1);
  sqcRYGate(q, -2.3461378744121455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07190839344223804, 1);
  sqcRYGate(q, 1.9841656751540473, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.626636870942872, 1);
  sqcRYGate(q, 2.6258275865782132, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7755054230118724, 2);
  sqcRYGate(q, -1.4167367021117165, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.08370626104822, 2);
  sqcRYGate(q, -0.07957107798964902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0044032441641510545, 0);
  sqcRYGate(q, 0.16919265857498725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8531449414407766, 0);
  sqcRYGate(q, 2.558283977944712, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2549586087227667, 0);
  sqcRYGate(q, 1.2072547138797571, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9321343774691233, 0);
  sqcRYGate(q, 1.3258513578604263, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.40979874409592115, 0);
  sqcRYGate(q, -1.7062591790184944, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5354888743422848, 0);
  sqcRYGate(q, -2.9486311927618565, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0990332525784217, 1);
  sqcRYGate(q, -2.7563472753218448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7151333836443898, 1);
  sqcRYGate(q, -0.6174117927912679, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.956274793901831, 1);
  sqcRYGate(q, -2.2464295883949656, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8109850377158914, 1);
  sqcRYGate(q, 0.19838702049059317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1118441473627643, 2);
  sqcRYGate(q, 0.07806798357212408, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.24529614154119628, 2);
  sqcRYGate(q, 2.348487545490047, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2895972327864866, 0);
  sqcRYGate(q, 2.157647973509225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9393781741067402, 0);
  sqcRYGate(q, -0.49469440373439194, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.07799645665468205, 0);
  sqcRYGate(q, 3.140504679683666, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.329669235539479, 0);
  sqcRYGate(q, -2.725412016701092, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3342643565520893, 0);
  sqcRYGate(q, -2.447131438048268, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.35675662642756656, 0);
  sqcRYGate(q, -0.24642270858690374, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9470258013905752, 1);
  sqcRYGate(q, 1.712702183511495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.748064323691766, 1);
  sqcRYGate(q, 2.7357514067736552, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0591061112173632, 1);
  sqcRYGate(q, 0.4277212487725194, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4748708446931444, 1);
  sqcRYGate(q, 1.0824970544675707, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.64487882798381, 2);
  sqcRYGate(q, 0.9157246250688489, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4970738412908018, 2);
  sqcRYGate(q, 1.1022072670362366, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9429443353709344, 0);
  sqcRYGate(q, -1.776867655596334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7159444164661329, 0);
  sqcRYGate(q, -2.798658443849868, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1687070241436461, 0);
  sqcRYGate(q, 1.523671901285007, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8900973349488646, 0);
  sqcRYGate(q, -2.7468627497714633, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.08723106302406425, 0);
  sqcRYGate(q, -2.2232261673172937, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7119779489582188, 0);
  sqcRYGate(q, 1.6020593175650433, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9984615764056795, 1);
  sqcRYGate(q, -1.7470410293711938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4010786953452448, 1);
  sqcRYGate(q, 0.8964089667415845, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3446300391933894, 1);
  sqcRYGate(q, -2.99722883298637, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.41804660756191847, 1);
  sqcRYGate(q, 1.8115281754418495, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.112712099432434, 2);
  sqcRYGate(q, -1.68017478186386, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.402686652715396, 2);
  sqcRYGate(q, 0.16487693377303891, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13553021776965918, 0);
  sqcRYGate(q, -1.469901121625498, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.16079126451300357, 0);
  sqcRYGate(q, -2.2237120708597904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8975314686950124, 0);
  sqcRYGate(q, -1.2350628766027403, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.077567021510764, 0);
  sqcRYGate(q, -0.31230738321095625, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.027115577860943794, 0);
  sqcRYGate(q, -1.4911079877441804, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5556733280364115, 0);
  sqcRYGate(q, 2.6747626861388203, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0117437782724927, 1);
  sqcRYGate(q, -0.6808045007102024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8029413519847828, 1);
  sqcRYGate(q, 2.06870766347916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9792412252538648, 1);
  sqcRYGate(q, 0.9463535194706827, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1707387714265365, 1);
  sqcRYGate(q, 1.1159330293199392, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1598539229777245, 2);
  sqcRYGate(q, -2.138721583518192, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.263991888276494, 2);
  sqcRYGate(q, 1.3591336999640098, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9097750680980399, 0);
  sqcRYGate(q, -0.330936950620409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5370531291868265, 0);
  sqcRYGate(q, 2.9896268375270942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.462156754116136, 0);
  sqcRYGate(q, -2.6836703955965744, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.692296564918914, 0);
  sqcRYGate(q, -1.996889822416484, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3184377332755646, 0);
  sqcRYGate(q, -1.53715177746216, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.574887785177796, 0);
  sqcRYGate(q, -0.3585708952323996, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.16249543765783356, 1);
  sqcRYGate(q, -1.7349834098677146, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9643908498171747, 1);
  sqcRYGate(q, -1.719780709216015, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.118092760801165, 1);
  sqcRYGate(q, 1.2024377987190489, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.973474242262621, 1);
  sqcRYGate(q, 1.636922786164269, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4698520112521067, 2);
  sqcRYGate(q, -2.369590661488344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3692086699800345, 2);
  sqcRYGate(q, 1.990520509500966, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.489631253903105, 0);
  sqcRYGate(q, 1.1011070194982118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.06899307111348651, 0);
  sqcRYGate(q, -1.5393634490061523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.61780788751018, 0);
  sqcRYGate(q, 1.5302842939399912, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8705941206304706, 0);
  sqcRYGate(q, 1.6969384706865742, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.007784243704851167, 0);
  sqcRYGate(q, -1.743715388665454, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.871564450570976, 0);
  sqcRYGate(q, 2.5862595085545923, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6609436817897016, 1);
  sqcRYGate(q, -0.8280072207364194, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9222875712015215, 1);
  sqcRYGate(q, 0.7301276387820419, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9511596164674847, 1);
  sqcRYGate(q, -2.6008861320393737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.172826309831825, 1);
  sqcRYGate(q, 0.5420973810795947, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2522067945709459, 2);
  sqcRYGate(q, -1.5009379718861755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.30197554398670784, 2);
  sqcRYGate(q, -2.2774465006611684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5940632108117363, 0);
  sqcRYGate(q, 3.0253596304873014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3658034522816505, 0);
  sqcRYGate(q, -2.9035134733603734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8687179515435814, 0);
  sqcRYGate(q, -0.5419668430757228, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.599966970204325, 0);
  sqcRYGate(q, 1.9985822138087892, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9503562012284203, 0);
  sqcRYGate(q, 0.7896719529485843, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6208533448197355, 0);
  sqcRYGate(q, 2.8652041657820084, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.8158107820755554, 1);
  sqcRYGate(q, 2.208388771610693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4782367628125668, 1);
  sqcRYGate(q, 0.44761709591564713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5425148054542112, 1);
  sqcRYGate(q, -1.6448267233272142, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7108778374847821, 1);
  sqcRYGate(q, -0.749610333832572, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8669656926161253, 2);
  sqcRYGate(q, 3.1227225205221587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.432608534901523, 2);
  sqcRYGate(q, -0.9912442488224812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.551240437755717, 0);
  sqcRYGate(q, 2.9731788348998283, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.576699434883558, 0);
  sqcRYGate(q, -0.9633287757747153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5278674601916724, 0);
  sqcRYGate(q, 2.2342932002553146, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1317637982747304, 0);
  sqcRYGate(q, -1.9333047038750488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8615181455469436, 0);
  sqcRYGate(q, -1.6804300537426187, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1800314981703348, 0);
  sqcRYGate(q, -1.0560276181905879, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9874257062408338, 1);
  sqcRYGate(q, -0.21392090078582784, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.603437428976607, 1);
  sqcRYGate(q, -0.9985151344130836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.23778734551804118, 1);
  sqcRYGate(q, 2.7955206842097224, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0987028957649925, 1);
  sqcRYGate(q, -2.90265964926539, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.893274138096556, 2);
  sqcRYGate(q, -0.0620299187136026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9964259493230306, 2);
  sqcRYGate(q, -1.2234799336819224, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7585972784730286, 0);
  sqcRYGate(q, -2.906024511514926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1266180459562207, 0);
  sqcRYGate(q, 2.6618354480108026, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.516502159718653, 0);
  sqcRYGate(q, 0.8735984472906587, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7734600785613492, 0);
  sqcRYGate(q, 1.6508297248464894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2183691313749305, 0);
  sqcRYGate(q, -2.3629294036060857, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.325564198517208, 0);
  sqcRYGate(q, -2.7769658898920966, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0915593036129403, 1);
  sqcRYGate(q, -0.09090184608000751, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0002862351096864, 1);
  sqcRYGate(q, 1.4102497654436572, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6380498922337, 1);
  sqcRYGate(q, -2.938457700987667, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6731010876428831, 1);
  sqcRYGate(q, -2.7920022226487635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9995845767305727, 2);
  sqcRYGate(q, 2.9366929098822103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5077629971828634, 2);
  sqcRYGate(q, -0.8107174117394421, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5711410292136712, 0);
  sqcRYGate(q, -2.9660555048952704, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4516541251110216, 0);
  sqcRYGate(q, 1.6231670324563874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8082446341447359, 0);
  sqcRYGate(q, -1.5823509113836822, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5673141501391314, 0);
  sqcRYGate(q, 0.5249381140685037, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.747602965463064, 0);
  sqcRYGate(q, 1.8440196153198058, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.282497701579766, 0);
  sqcRYGate(q, 1.9527545271647666, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1870470872591703, 1);
  sqcRYGate(q, -2.5041814013662744, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.521622857944231, 1);
  sqcRYGate(q, 0.6287855320886323, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1440592200943571, 1);
  sqcRYGate(q, -1.3358625450807888, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6054092075038413, 1);
  sqcRYGate(q, -2.5123753995904763, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.388353831470254, 2);
  sqcRYGate(q, -0.43377682926535077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.378091420462571, 2);
  sqcRYGate(q, -2.977459680847851, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9304358511909003, 0);
  sqcRYGate(q, -1.8997282844024186, 1);
  sqcRYGate(q, 2.2919114167486017, 2);
  sqcRYGate(q, 0.9860302643708571, 3);

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
