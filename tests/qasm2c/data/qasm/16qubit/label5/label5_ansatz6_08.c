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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 2.8236724238591426, 0);
  sqcRYGate(q, -2.187965883710624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4994499472034678, 0);
  sqcRYGate(q, 1.915595626110023, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9827401478066253, 1);
  sqcRYGate(q, -0.19963115333129378, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.60044225073701, 1);
  sqcRYGate(q, -3.048217969015892, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7704806073473223, 2);
  sqcRYGate(q, -0.426096753713293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6282629117443026, 2);
  sqcRYGate(q, -1.723265430234903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3399391210990377, 3);
  sqcRYGate(q, -0.3647561775636028, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8608925806227106, 3);
  sqcRYGate(q, -1.6297439347103808, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.455044167598356, 4);
  sqcRYGate(q, 1.5544586363147885, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.925031085551749, 4);
  sqcRYGate(q, 3.0857020183969968, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.022881117058548228, 5);
  sqcRYGate(q, 3.1318692381409985, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1719602520769703, 5);
  sqcRYGate(q, -2.151366559791013, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8189111989993068, 6);
  sqcRYGate(q, 0.396469315743091, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4402827107109557, 6);
  sqcRYGate(q, -0.9071094956576397, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.23329049060559548, 7);
  sqcRYGate(q, -2.8655029644098677, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.848551904328566, 7);
  sqcRYGate(q, 0.01077803027469245, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.1974466914198079, 8);
  sqcRYGate(q, -2.6408116057115465, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.891535430922204, 8);
  sqcRYGate(q, -2.074813353019172, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.316948725695158, 9);
  sqcRYGate(q, 2.7681580398391405, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1059038558732848, 9);
  sqcRYGate(q, 1.5870355541297048, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.5735428585857436, 10);
  sqcRYGate(q, -3.099038515209526, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.571137424935881, 10);
  sqcRYGate(q, -1.1481380911685015, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.1329692490485328, 11);
  sqcRYGate(q, 2.535034563680653, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.3119556824459697, 11);
  sqcRYGate(q, -1.0453699783919719, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.021843713189142, 12);
  sqcRYGate(q, -1.2681566977680463, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.8367956446137303, 12);
  sqcRYGate(q, 0.09606994442095917, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7777389380452626, 13);
  sqcRYGate(q, 1.947489457509705, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.8150035322409415, 13);
  sqcRYGate(q, -0.28100390569510636, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.9385569090622354, 14);
  sqcRYGate(q, -3.0214092636339163, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.2011524463455787, 14);
  sqcRYGate(q, -1.421072860617822, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.7230484214292137, 0);
  sqcRYGate(q, 1.4207148583674494, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19784448324774961, 0);
  sqcRYGate(q, 0.8428967408087169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.32626272735142775, 1);
  sqcRYGate(q, -0.15452709561646583, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4670449232340164, 1);
  sqcRYGate(q, -1.4060912298434165, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.785469514396941, 2);
  sqcRYGate(q, -0.6226384340816695, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4474288883336701, 2);
  sqcRYGate(q, -0.9037042629223178, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.203477258426268, 3);
  sqcRYGate(q, -1.1442656339949586, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6221946159159685, 3);
  sqcRYGate(q, 1.549091431843249, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5306048545228643, 4);
  sqcRYGate(q, 2.8987085568060396, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.824393068919012, 4);
  sqcRYGate(q, 3.085180890395027, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8884062258840366, 5);
  sqcRYGate(q, -1.524447909568659, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.007684629396283127, 5);
  sqcRYGate(q, -1.0324416568163204, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.367716167433496, 6);
  sqcRYGate(q, -2.8251501436637185, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0569247123649574, 6);
  sqcRYGate(q, -0.00018632447348493667, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5539500452468977, 7);
  sqcRYGate(q, -1.5602643101396207, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.9507270008087914, 7);
  sqcRYGate(q, -1.5898552768852479, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.567019997502417, 8);
  sqcRYGate(q, -1.732366392765731, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.869350532666708, 8);
  sqcRYGate(q, 1.593431164202571, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7116883556534623, 9);
  sqcRYGate(q, -2.9869955842812033, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.34147220756725727, 9);
  sqcRYGate(q, 2.9039296652726496, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.9132990687047533, 10);
  sqcRYGate(q, -1.4851192162436648, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.004166670567447461, 10);
  sqcRYGate(q, 3.1364459355496317, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0436450995591677, 11);
  sqcRYGate(q, -1.983266865813074, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.4149171987061293, 11);
  sqcRYGate(q, -1.2343745059499627, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.331617522426131, 12);
  sqcRYGate(q, 2.1006992324338936, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.1673214721206728, 12);
  sqcRYGate(q, 1.7694275770362347, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.2170648008731284, 13);
  sqcRYGate(q, 2.6884400217011497, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.3097255306930231, 13);
  sqcRYGate(q, 3.078641505100601, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.443911022433241, 14);
  sqcRYGate(q, -0.9190751587470363, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.0365416061880057, 14);
  sqcRYGate(q, -2.074640712212115, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9289496093432518, 0);
  sqcRYGate(q, 0.38191426740005874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2334116143815772, 0);
  sqcRYGate(q, -2.450541859392125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1688346672602188, 1);
  sqcRYGate(q, -0.6634469649579948, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.10289605918611322, 1);
  sqcRYGate(q, 1.7452487182397944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8305005152620994, 2);
  sqcRYGate(q, 1.3949804090452977, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.27276341205107624, 2);
  sqcRYGate(q, 0.7697705339863514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8537619097057387, 3);
  sqcRYGate(q, 1.0084758300014869, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7087510787010958, 3);
  sqcRYGate(q, -2.898705647325168, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5840956306289572, 4);
  sqcRYGate(q, -1.597683002288739, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5075242359257839, 4);
  sqcRYGate(q, 2.5239959933659075, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5372872960723738, 5);
  sqcRYGate(q, 1.376558361149101, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1302128312247497, 5);
  sqcRYGate(q, 1.424683976439653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.7914526858384258, 6);
  sqcRYGate(q, -1.3699207784330991, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6291343327342744, 6);
  sqcRYGate(q, 0.019612060330937986, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3941184544550507, 7);
  sqcRYGate(q, 1.1029123284448499, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.1216791795345706, 7);
  sqcRYGate(q, 1.1941302268420573, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.17441245699356855, 8);
  sqcRYGate(q, 0.8970222105062797, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.3269009521306721, 8);
  sqcRYGate(q, 3.140088445058974, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0678973213334029, 9);
  sqcRYGate(q, 2.452981283201524, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6244262253595175, 9);
  sqcRYGate(q, 1.1288333691837131, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.7060364055422, 10);
  sqcRYGate(q, 2.6238381569148745, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.08137977762726067, 10);
  sqcRYGate(q, 3.0323588458770914, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.0491326731196886, 11);
  sqcRYGate(q, 1.631885626219625, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.082910278731901, 11);
  sqcRYGate(q, 3.1401099029907935, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.7473635922184306, 12);
  sqcRYGate(q, -1.2786676375620503, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.5584396600568806, 12);
  sqcRYGate(q, -2.0050713763864287, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.2546317735025507, 13);
  sqcRYGate(q, 2.75934603872686, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.7260504671040131, 13);
  sqcRYGate(q, -0.024888332853876705, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.8904168059534374, 14);
  sqcRYGate(q, -2.875995648144955, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.478974390979131, 14);
  sqcRYGate(q, 1.3595954380060737, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6770540130257239, 0);
  sqcRYGate(q, -1.4260814966976465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3243703223618724, 0);
  sqcRYGate(q, 2.3482969862215395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5599696768558076, 1);
  sqcRYGate(q, -1.5328737662701155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.311566968896193, 1);
  sqcRYGate(q, 0.5952714550037423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.812896374147548, 2);
  sqcRYGate(q, -1.472584708198725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4490930370353219, 2);
  sqcRYGate(q, -0.8952970550658854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8283502250548556, 3);
  sqcRYGate(q, -2.6584586238082757, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1361012176941174, 3);
  sqcRYGate(q, -3.1364275219800004, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6662047279980987, 4);
  sqcRYGate(q, 2.721442610020466, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1409816592700324, 4);
  sqcRYGate(q, 0.6054401195243129, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.707718755846952, 5);
  sqcRYGate(q, 1.5889262761499092, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.562848359198471, 5);
  sqcRYGate(q, 0.8618839864429784, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5639780657443474, 6);
  sqcRYGate(q, -1.6060425987918983, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6030681966224263, 6);
  sqcRYGate(q, 1.576233843909079, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5705082414633793, 7);
  sqcRYGate(q, 0.6629564572680069, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5939667299054479, 7);
  sqcRYGate(q, -1.587043892254698, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5572566107637105, 8);
  sqcRYGate(q, 0.23393878160560097, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.1114127361957302, 8);
  sqcRYGate(q, 1.5358078740494925, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.35932338833849203, 9);
  sqcRYGate(q, 0.14783788505078038, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.002980342475609632, 9);
  sqcRYGate(q, 0.0030397335603851165, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8089189570575943, 10);
  sqcRYGate(q, -1.0803838987020442, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.009269945893374933, 10);
  sqcRYGate(q, 0.6404259476329208, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.619557519997476, 11);
  sqcRYGate(q, 0.3204615059955797, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9071380547597618, 11);
  sqcRYGate(q, 0.042151479451581146, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.419851937778658, 12);
  sqcRYGate(q, -0.7263831654541644, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.4138239895804174, 12);
  sqcRYGate(q, 1.678188166630476, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.7176990839497668, 13);
  sqcRYGate(q, 0.922075934899789, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.9570021934373942, 13);
  sqcRYGate(q, -1.3990790763345562, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.126555007245063, 14);
  sqcRYGate(q, 0.3675939939144377, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.443703462716414, 14);
  sqcRYGate(q, -0.8529086248833737, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.8419131812242142, 0);
  sqcRYGate(q, -2.46175494651869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4236103838726817, 0);
  sqcRYGate(q, -2.235694313125097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9313182249345324, 1);
  sqcRYGate(q, -0.7039776790300104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04709346309437006, 1);
  sqcRYGate(q, -2.389286709370193, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8768257075610173, 2);
  sqcRYGate(q, -2.4090688370341518, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8738522056931584, 2);
  sqcRYGate(q, 1.4921266232409092, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1328479537709697, 3);
  sqcRYGate(q, -1.2419377241048863, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.320876993375084, 3);
  sqcRYGate(q, 1.3756927790899232, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.752952308710268, 4);
  sqcRYGate(q, -2.272879483880324, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6227007755592338, 4);
  sqcRYGate(q, -1.8536273814128377, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5319861097048886, 5);
  sqcRYGate(q, 0.5658150781176725, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.141548681219589, 5);
  sqcRYGate(q, -0.0544314630238662, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.5659338154256259, 6);
  sqcRYGate(q, -1.57129954353816, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5662506916058447, 6);
  sqcRYGate(q, -0.2509801026045082, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1699800211212152, 7);
  sqcRYGate(q, 3.1285707701901173, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.315402837564211, 7);
  sqcRYGate(q, -3.107375191139809, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7301350015946086, 8);
  sqcRYGate(q, -0.29189997368365805, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.9819957635526446, 8);
  sqcRYGate(q, 0.006593376131708517, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.129186227386962, 9);
  sqcRYGate(q, 1.6597364500882268, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5126739646606269, 9);
  sqcRYGate(q, -1.6430551231510642, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.6689325952797598, 10);
  sqcRYGate(q, 1.5453000473971445, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.573552563063118, 10);
  sqcRYGate(q, 0.4178838548821325, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.924205554928105, 11);
  sqcRYGate(q, -2.4205790654612938, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.9107970878951015, 11);
  sqcRYGate(q, -3.137174893568732, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.6781783138126487, 12);
  sqcRYGate(q, 1.872063353057608, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.7337493654991505, 12);
  sqcRYGate(q, 1.3676361966831863, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.15048224547793995, 13);
  sqcRYGate(q, 0.5131456888762012, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.0954132768288716, 13);
  sqcRYGate(q, -3.0752281928602687, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.330281791511165, 14);
  sqcRYGate(q, 1.3573171484718431, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.10409511986185027, 14);
  sqcRYGate(q, 0.7415166403044202, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.9423842394596185, 0);
  sqcRYGate(q, 2.091854301431251, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5806180695844328, 0);
  sqcRYGate(q, -1.955842833459392, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.658011881734315, 1);
  sqcRYGate(q, 2.27069129362271, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14050728782533817, 1);
  sqcRYGate(q, 1.8081641724750606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3441229973374895, 2);
  sqcRYGate(q, -1.1150409328130237, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0339579006896118, 2);
  sqcRYGate(q, -2.8293426351814137, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0723339314099452, 3);
  sqcRYGate(q, 1.1271979472450295, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0016243598405303317, 3);
  sqcRYGate(q, 3.1391752508417117, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1188485316793764, 4);
  sqcRYGate(q, 1.5772044844224182, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9971035058620347, 4);
  sqcRYGate(q, 0.520531475629479, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5961940041980955, 5);
  sqcRYGate(q, 1.3958011056881476, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.17391021739092008, 5);
  sqcRYGate(q, 1.7263596336298286, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.13551597862668188, 6);
  sqcRYGate(q, -1.4854379611041457, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.0010172127456122837, 6);
  sqcRYGate(q, -3.170337528889854e-05, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2589747846839154, 7);
  sqcRYGate(q, 1.77991660474627, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.7395542338052834, 7);
  sqcRYGate(q, -3.1213249123813425, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.7352193638362969, 8);
  sqcRYGate(q, -1.571594865862358, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5358358737968665, 8);
  sqcRYGate(q, -0.42597345834356576, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7196488454142442, 9);
  sqcRYGate(q, -0.09227785791806209, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0010756992527918285, 9);
  sqcRYGate(q, -3.1399446766105523, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.0864789869995612, 10);
  sqcRYGate(q, 0.36138909605503705, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1331920401559414, 10);
  sqcRYGate(q, -1.9460740518947557, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.1346783083113783, 11);
  sqcRYGate(q, 2.487041786940097, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.016083874895454816, 11);
  sqcRYGate(q, 1.800251293960378, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.510228245665118, 12);
  sqcRYGate(q, -1.8303634114516856, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.811729245082172, 12);
  sqcRYGate(q, 0.6814014787949487, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.8792429370569192, 13);
  sqcRYGate(q, 1.5140865796146459, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.13981756291849623, 13);
  sqcRYGate(q, 1.9755792210384253, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.3888728308158216, 14);
  sqcRYGate(q, 1.35555083127509, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.6523654133517391, 14);
  sqcRYGate(q, -2.0461271031956048, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5962673948209787, 0);
  sqcRYGate(q, -2.0252667172281082, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9899637103282197, 0);
  sqcRYGate(q, 2.202059553081252, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7425644658185329, 1);
  sqcRYGate(q, 2.0882147683308494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8559636770721215, 1);
  sqcRYGate(q, 0.23795600677982875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.659550614882599, 2);
  sqcRYGate(q, -0.666389171648433, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0037066034652957, 2);
  sqcRYGate(q, 1.2978106721933318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5851503417978847, 3);
  sqcRYGate(q, 1.7549679381395757, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.139897934293359, 3);
  sqcRYGate(q, -1.5912895758992038, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3728590946445394, 4);
  sqcRYGate(q, 1.543642691386553, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0939825804837806, 4);
  sqcRYGate(q, 1.5613798217434658, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.41841094379157, 5);
  sqcRYGate(q, -3.0992455843659803, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3885701511715087, 5);
  sqcRYGate(q, 3.140880119629207, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9660009568235206, 6);
  sqcRYGate(q, 0.359388030690325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.4518487771725226, 6);
  sqcRYGate(q, -1.8514806907412995, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.376689042847588, 7);
  sqcRYGate(q, 1.5719041767844368, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.0393341846935564, 7);
  sqcRYGate(q, 3.1411098915192555, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.3256983299363956, 8);
  sqcRYGate(q, -2.7435298520148197, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.09192530204564164, 8);
  sqcRYGate(q, -0.0008426053825545837, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5959535622960814, 9);
  sqcRYGate(q, 2.409078954319323, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0056275466275490515, 9);
  sqcRYGate(q, -2.5950427586742753, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.0588638301463797, 10);
  sqcRYGate(q, -1.5738594900593605, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.9823338845741084, 10);
  sqcRYGate(q, -2.5615500845102903, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.568036298417197, 11);
  sqcRYGate(q, 1.5825503656025328, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.4753707073915496, 11);
  sqcRYGate(q, 2.3402214262148213, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5643297206320455, 12);
  sqcRYGate(q, -0.7219303225271964, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1168069692461606, 12);
  sqcRYGate(q, 1.5941476923246385, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7160005342027749, 13);
  sqcRYGate(q, -1.814641023338406, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.24931551536527072, 13);
  sqcRYGate(q, 2.6102413703435565, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.7033028756464863, 14);
  sqcRYGate(q, -2.495041235476786, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.486066884160929, 14);
  sqcRYGate(q, -0.17757691509946305, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.8112619058299401, 0);
  sqcRYGate(q, -2.6131419212352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1054461804048885, 0);
  sqcRYGate(q, -1.6649278736328246, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07660233913074332, 1);
  sqcRYGate(q, 1.385680656777269, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.485687950653878, 1);
  sqcRYGate(q, 0.4058047635169253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.522978475130615, 2);
  sqcRYGate(q, -1.5712821390214797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3943193356102395, 2);
  sqcRYGate(q, -0.10279224576229097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5778068019337954, 3);
  sqcRYGate(q, 1.5700479638046143, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.570227762537472, 3);
  sqcRYGate(q, 2.1981953231454283, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.838421582573169, 4);
  sqcRYGate(q, 1.323157136617346, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.025305784244623375, 4);
  sqcRYGate(q, 0.004335045924764671, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7695279251046866, 5);
  sqcRYGate(q, 2.516088634259392, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0006370621465681126, 5);
  sqcRYGate(q, 8.755782233649256e-05, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6872084654856367, 6);
  sqcRYGate(q, 0.6984948909599105, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.24738170792802539, 6);
  sqcRYGate(q, -1.6535721169076951, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8035415688464562, 7);
  sqcRYGate(q, 0.32382040282748203, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.5859602188650777, 7);
  sqcRYGate(q, 3.136809462836279, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5647039318535763, 8);
  sqcRYGate(q, -1.569877146040513, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5077156872045974, 8);
  sqcRYGate(q, 2.9457972965239936, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.10641005830010748, 9);
  sqcRYGate(q, -1.5706741692025206, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5795419851757988, 9);
  sqcRYGate(q, 0.8798860520157463, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.475427689934536, 10);
  sqcRYGate(q, 1.5761173014158911, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5697070681791125, 10);
  sqcRYGate(q, -0.002841742302498952, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.0870716964930276, 11);
  sqcRYGate(q, -1.562773163057627, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6244842589595136, 11);
  sqcRYGate(q, -1.662928940134209, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5756036868648957, 12);
  sqcRYGate(q, -1.5753606960727164, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5133103779771613, 12);
  sqcRYGate(q, -1.0688179034330116, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.9171622778678699, 13);
  sqcRYGate(q, -2.52923461086431, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.4941029866355733, 13);
  sqcRYGate(q, 0.003947373861341335, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.6205293047785654, 14);
  sqcRYGate(q, -0.7652481990525493, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.0178283935791983, 14);
  sqcRYGate(q, 3.103054538741025, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -3.099442337340936, 0);
  sqcRYGate(q, -0.14446292106696512, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9918656595964697, 0);
  sqcRYGate(q, 2.8782504109069365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.02114939838955, 1);
  sqcRYGate(q, -1.5699297536127634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5157272188001967, 1);
  sqcRYGate(q, -1.145723853335049, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.478874470669572, 2);
  sqcRYGate(q, -1.365060671486189, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3301799487006647, 2);
  sqcRYGate(q, -0.0936251522245728, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6445055806813969, 3);
  sqcRYGate(q, 1.7250630990707412, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1406109317968687, 3);
  sqcRYGate(q, 0.01245474788035984, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.528542556785089, 4);
  sqcRYGate(q, -1.344084596521665, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5514534198772343, 4);
  sqcRYGate(q, 0.019364976454906646, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0944042983784783, 5);
  sqcRYGate(q, 0.31572800617110097, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.09574710946256548, 5);
  sqcRYGate(q, 0.410084023082085, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.554474525908435, 6);
  sqcRYGate(q, -1.871063738939072, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.366017205051661, 6);
  sqcRYGate(q, 3.141132004846652, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.10339138443096, 7);
  sqcRYGate(q, -2.5944455975293708, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1910370575701825, 7);
  sqcRYGate(q, 1.5783029154296255, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.22016118333349954, 8);
  sqcRYGate(q, 2.6350544859667346, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1365956761667526, 8);
  sqcRYGate(q, -0.0004422932417869064, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.363055776912506, 9);
  sqcRYGate(q, 1.4847066848201764, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.0004127093280601457, 9);
  sqcRYGate(q, 1.2219675752961563, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6814455540279694, 10);
  sqcRYGate(q, 1.263402326830895, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.0003442635540656785, 10);
  sqcRYGate(q, -0.0013109222590752543, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.28963383278477295, 11);
  sqcRYGate(q, -1.596233470975637, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.5983147558423547, 11);
  sqcRYGate(q, -1.54133415363835, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.541742231476067, 12);
  sqcRYGate(q, -1.2221722839735785, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.1284728001771596, 12);
  sqcRYGate(q, -0.4281192650847494, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5686489018976895, 13);
  sqcRYGate(q, 1.2836442583887024, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.1201136149561526, 13);
  sqcRYGate(q, -0.3915404228530273, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.792212275300474, 14);
  sqcRYGate(q, -1.4021023297825155, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.007094556850577407, 14);
  sqcRYGate(q, -1.920782817833936, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.946278932877952, 0);
  sqcRYGate(q, -1.2739752647844105, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7446142371605475, 0);
  sqcRYGate(q, -3.1318831111419834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.047339600688425555, 1);
  sqcRYGate(q, -1.421984631066901, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1341641931066406, 1);
  sqcRYGate(q, 0.35139793807807956, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4499257138888098, 2);
  sqcRYGate(q, -1.7511550430279623, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8886121882209097, 2);
  sqcRYGate(q, 0.6053910286850703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.945885982519254, 3);
  sqcRYGate(q, 0.2558956635253065, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0983200168102614, 3);
  sqcRYGate(q, -3.1364967922240936, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2788251796984502, 4);
  sqcRYGate(q, -0.18513697757988992, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0025611975383995423, 4);
  sqcRYGate(q, 3.1174757324623648, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8082002301989641, 5);
  sqcRYGate(q, 2.603095423872065, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5792842534826859, 5);
  sqcRYGate(q, -1.5388151499050853, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.135462514566911, 6);
  sqcRYGate(q, -1.5847387374006439, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.141508184898581, 6);
  sqcRYGate(q, -3.0704383669690127, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.020234636230985537, 7);
  sqcRYGate(q, 3.1059747373565227, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.0351064543263906, 7);
  sqcRYGate(q, -1.5462084880473828, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.2657541063179938, 8);
  sqcRYGate(q, 2.5256664160537996, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5647366853830333, 8);
  sqcRYGate(q, 1.4688355003134168, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7816512953674826, 9);
  sqcRYGate(q, 1.3466430638504974, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.6795327586495956, 9);
  sqcRYGate(q, -0.009707661716948479, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.13533853498006726, 10);
  sqcRYGate(q, 1.177253777329339, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.14090019398981, 10);
  sqcRYGate(q, 0.012243818341285795, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7502974699047438, 11);
  sqcRYGate(q, -1.6173296956567507, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.2571244895585423, 11);
  sqcRYGate(q, -1.6294620477004322, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.9842401222354273, 12);
  sqcRYGate(q, 2.9925343259271284, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.006881858606762385, 12);
  sqcRYGate(q, -0.0017889004475537707, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.15335327304026825, 13);
  sqcRYGate(q, -0.5492865350953826, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5013806990383238, 13);
  sqcRYGate(q, -1.4524417262876326, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.7961662924254784, 14);
  sqcRYGate(q, 1.2171900702619336, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.141575166563723, 14);
  sqcRYGate(q, -3.0801621266202224, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.551322397565975, 0);
  sqcRYGate(q, 0.34893797001987004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3502781266143442, 0);
  sqcRYGate(q, -1.5334465763354101, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7827524715381649, 1);
  sqcRYGate(q, -1.3403951811988568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.00823635982273263, 1);
  sqcRYGate(q, -3.1267716371738836, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8188679925920574, 2);
  sqcRYGate(q, -0.6205285155562397, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1064425496992754, 2);
  sqcRYGate(q, 0.021019724534904197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.500919607609709, 3);
  sqcRYGate(q, 3.022643981473039, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5419668437017684, 3);
  sqcRYGate(q, -2.1943939840634474, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5777829189604553, 4);
  sqcRYGate(q, 2.2775820084713008, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.003765465113300337, 4);
  sqcRYGate(q, 0.37669555513024733, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8543416712813698, 5);
  sqcRYGate(q, 0.43564413668532037, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.011485098701982594, 5);
  sqcRYGate(q, -3.128214686184627, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8786336135135314, 6);
  sqcRYGate(q, 0.007783937599235692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.675337146451937, 6);
  sqcRYGate(q, -3.1371622927504657, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6220864959344845, 7);
  sqcRYGate(q, 0.08442558068939444, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.338643134132013e-05, 7);
  sqcRYGate(q, 0.00400246119835046, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5700999107097873, 8);
  sqcRYGate(q, -0.4651223670624924, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.004246665763348645, 8);
  sqcRYGate(q, -0.9550780352935007, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.4674405511186333, 9);
  sqcRYGate(q, -0.6439667197539896, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.14944899017367202, 9);
  sqcRYGate(q, -1.5743696402327387, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7972438845015485, 10);
  sqcRYGate(q, 0.19900526836714327, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5999237365273453, 10);
  sqcRYGate(q, -1.2147872393768016, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.571058084282708, 11);
  sqcRYGate(q, -0.9784983345462507, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5536979364528696, 11);
  sqcRYGate(q, 2.560803398676826, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5709911305400395, 12);
  sqcRYGate(q, -1.5849835956181346, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.077407806336522, 12);
  sqcRYGate(q, 1.9927153644667022, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.43378310398926, 13);
  sqcRYGate(q, -0.4174818505610398, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4404571636351573, 13);
  sqcRYGate(q, 0.012866663031535124, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.3087472898450265, 14);
  sqcRYGate(q, 2.52655041144834, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.5482835819502947, 14);
  sqcRYGate(q, 0.017372228607210438, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.061364424415568664, 0);
  sqcRYGate(q, 1.5817491873439504, 1);
  sqcRYGate(q, -2.5695147014979924, 2);
  sqcRYGate(q, -1.5764313319965613, 3);
  sqcRYGate(q, 1.5706764810191902, 4);
  sqcRYGate(q, -1.557340478646137, 5);
  sqcRYGate(q, -1.819999872737272, 6);
  sqcRYGate(q, -2.6217690574889887, 7);
  sqcRYGate(q, 3.010092543752223, 8);
  sqcRYGate(q, -1.5654168711643175, 9);
  sqcRYGate(q, 1.5709035953952188, 10);
  sqcRYGate(q, -1.570774714413032, 11);
  sqcRYGate(q, -1.569679200357732, 12);
  sqcRYGate(q, 1.694457488109971, 13);
  sqcRYGate(q, -0.8365866738331671, 14);
  sqcRYGate(q, 1.5717199244042641, 15);

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
