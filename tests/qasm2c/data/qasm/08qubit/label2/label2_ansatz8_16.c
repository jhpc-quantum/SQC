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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.8358901504527694, 0);
  sqcRYGate(q, -0.7715800485633943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.360710454772942, 0);
  sqcRYGate(q, 0.43630270386500397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8185350693753226, 2);
  sqcRYGate(q, 2.323966590539738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5192103161949895, 2);
  sqcRYGate(q, 1.7841755649154623, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1123638174817962, 4);
  sqcRYGate(q, 0.9411374034420614, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5237557102983603, 4);
  sqcRYGate(q, -0.1656612811500855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3892853363881654, 6);
  sqcRYGate(q, 0.07587758311712502, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5373592530191145, 6);
  sqcRYGate(q, 2.0661348086517433, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9246893418658444, 0);
  sqcRYGate(q, -1.1736784752357385, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.24225695445565965, 0);
  sqcRYGate(q, 2.956728491136074, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0471345554785323, 2);
  sqcRYGate(q, 2.5098861582210596, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.885884972691712, 2);
  sqcRYGate(q, -1.3348055322683754, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.406045044217306, 4);
  sqcRYGate(q, 2.693746693322506, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.822259204454214, 4);
  sqcRYGate(q, -0.48454883096560314, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7669384341650964, 1);
  sqcRYGate(q, -0.5291615776198413, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.036683563853427, 1);
  sqcRYGate(q, -1.8905415479897016, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.26240920594022454, 3);
  sqcRYGate(q, 2.0674450272728677, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.371675064624419, 3);
  sqcRYGate(q, 0.38854231521439603, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7146240202840237, 5);
  sqcRYGate(q, 1.741561475409893, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.875368135432866, 5);
  sqcRYGate(q, -0.25029841571028033, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5937663970251696, 0);
  sqcRYGate(q, -2.685693209376393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8957489560710465, 0);
  sqcRYGate(q, 0.16584377709060846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7906865583864424, 2);
  sqcRYGate(q, -2.8600722792380227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7559112798503627, 2);
  sqcRYGate(q, -2.8150695071331246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5189480769714567, 4);
  sqcRYGate(q, 2.6609044378252054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.539614879456558, 4);
  sqcRYGate(q, -2.6209950728315623, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5030677226281606, 6);
  sqcRYGate(q, -2.3294771574564233, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5941153549808726, 6);
  sqcRYGate(q, -2.4401452359691578, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2094172019912248, 0);
  sqcRYGate(q, 0.16949549089021507, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3039374632092338, 0);
  sqcRYGate(q, 1.0542746340191507, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.399607270984632, 2);
  sqcRYGate(q, -1.5050439485943083, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1421404845572747, 2);
  sqcRYGate(q, 1.462409189082175, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.1303789113021212, 4);
  sqcRYGate(q, 2.842755159076176, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.840101925356972, 4);
  sqcRYGate(q, -1.488815677131295, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0263536282492023, 1);
  sqcRYGate(q, 2.7703304286149524, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6742971105475988, 1);
  sqcRYGate(q, -2.7726057920618157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8664063459246747, 3);
  sqcRYGate(q, -0.6744083676467545, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.6475846413910453, 3);
  sqcRYGate(q, 1.188374762097474, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.772990903654246, 5);
  sqcRYGate(q, -1.9817077963776193, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5312986556544486, 5);
  sqcRYGate(q, -0.8019102597156769, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.5882066985981225, 0);
  sqcRYGate(q, 0.863046785503279, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9632454889989089, 0);
  sqcRYGate(q, -1.0830587260756568, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.992872148221033, 2);
  sqcRYGate(q, -0.23651789610784357, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.07236360299050748, 2);
  sqcRYGate(q, 2.1316278279290333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1990456724117764, 4);
  sqcRYGate(q, 1.8654446592248648, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.89617180470736, 4);
  sqcRYGate(q, -0.3510926146308755, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6846928588365861, 6);
  sqcRYGate(q, 3.1183424206458037, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4711817252585152, 6);
  sqcRYGate(q, -0.614997401687277, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1486644141783655, 0);
  sqcRYGate(q, 2.074001463768385, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7795154622958766, 0);
  sqcRYGate(q, 1.824734997231271, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.733478361275957, 2);
  sqcRYGate(q, 2.135665188660745, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3705349653459193, 2);
  sqcRYGate(q, 0.28547685690915026, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9884892110611332, 4);
  sqcRYGate(q, 0.33777839892076145, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.36214232142458, 4);
  sqcRYGate(q, -0.622410009589577, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.0704270989405291, 1);
  sqcRYGate(q, -1.2114628113962438, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.23851317646505726, 1);
  sqcRYGate(q, 1.4549733136639134, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8895232183954972, 3);
  sqcRYGate(q, 0.633302356359894, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.4631119397124248, 3);
  sqcRYGate(q, -2.250386516563256, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8198551695016674, 5);
  sqcRYGate(q, 0.3745344204045597, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4833165515798412, 5);
  sqcRYGate(q, -2.8529652834486474, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9261279230290522, 0);
  sqcRYGate(q, 1.6126102484641553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9411173627190159, 0);
  sqcRYGate(q, -0.6716573729655051, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2312522050796124, 2);
  sqcRYGate(q, -1.067147518025073, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9215166802498856, 2);
  sqcRYGate(q, 0.6114957877685301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0131682616475084, 4);
  sqcRYGate(q, -2.249497349715732, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5279917010977964, 4);
  sqcRYGate(q, -3.140854066719934, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2874702643939109, 6);
  sqcRYGate(q, -2.7961869369842813, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0351681942996969, 6);
  sqcRYGate(q, 0.8843156946399298, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7346052554199018, 0);
  sqcRYGate(q, -0.06786700464706119, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5930465500955302, 0);
  sqcRYGate(q, 1.8136693675268605, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1050888042591454, 2);
  sqcRYGate(q, -0.0356219208890779, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3800160363361587, 2);
  sqcRYGate(q, -1.1179230951242056, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.1557994965736995, 4);
  sqcRYGate(q, 0.31853607370763104, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.301450772550121, 4);
  sqcRYGate(q, 1.3761008907424157, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8642078501713084, 1);
  sqcRYGate(q, 1.1579239061074127, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3019570094615145, 1);
  sqcRYGate(q, -2.686628684784932, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8401800895296869, 3);
  sqcRYGate(q, -1.4926921699312659, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.2488458118428527, 3);
  sqcRYGate(q, 2.308594679826449, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.1326194462452683, 5);
  sqcRYGate(q, -0.7217254529060942, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.5918685748194257, 5);
  sqcRYGate(q, 1.542052634347825, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.0358084735223216, 0);
  sqcRYGate(q, -1.430738261763306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7607486275677497, 0);
  sqcRYGate(q, 2.7375475961325866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3468704538447867, 2);
  sqcRYGate(q, -0.694118457998548, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.006948014844898789, 2);
  sqcRYGate(q, -1.4827589613957812, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3323509578581971, 4);
  sqcRYGate(q, -2.0504625582447873, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4753608925486243, 4);
  sqcRYGate(q, -2.650026551048135, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7214208704477914, 6);
  sqcRYGate(q, -2.7998631200156323, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8779312381526347, 6);
  sqcRYGate(q, -2.5931539266911896, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.572168116966324, 0);
  sqcRYGate(q, 0.05824067506543236, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4031735424757376, 0);
  sqcRYGate(q, 0.41504201705908456, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.08385518027700112, 2);
  sqcRYGate(q, -0.21528292603474508, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.8374530962075313, 2);
  sqcRYGate(q, -1.0730541822776394, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.182627161323749, 4);
  sqcRYGate(q, -0.8124924218791043, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4624480726829472, 4);
  sqcRYGate(q, 2.191019249431061, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4672081085442539, 1);
  sqcRYGate(q, 0.5892479985801504, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7666035255993959, 1);
  sqcRYGate(q, -1.6413064466376799, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6107651522501858, 3);
  sqcRYGate(q, 0.8620467934454437, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6721304358080654, 3);
  sqcRYGate(q, -2.8531777514934746, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1863591254091688, 5);
  sqcRYGate(q, -1.1620714626484019, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.27215839760544, 5);
  sqcRYGate(q, -0.5912111855032443, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.6814793073555238, 0);
  sqcRYGate(q, -0.20588013651399795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8822617748695185, 0);
  sqcRYGate(q, 0.42541632076631414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.204549851751337, 2);
  sqcRYGate(q, 2.0898799051563723, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3263260469085285, 2);
  sqcRYGate(q, -3.0748969076850496, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.33294420161616584, 4);
  sqcRYGate(q, -2.2516124085995264, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4853801337421606, 4);
  sqcRYGate(q, -2.6675929126339946, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2775724881950508, 6);
  sqcRYGate(q, 0.804396073887567, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.06414834999083663, 6);
  sqcRYGate(q, -2.1629457443913402, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3240095497611293, 0);
  sqcRYGate(q, -2.6384975253584164, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7416924041049247, 0);
  sqcRYGate(q, 1.5890092378636025, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8510811850088098, 2);
  sqcRYGate(q, -0.06894531121924796, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.1302788033428635, 2);
  sqcRYGate(q, -2.0150223572657353, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3568072799265138, 4);
  sqcRYGate(q, 0.8715759529126874, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.13125238994878963, 4);
  sqcRYGate(q, 0.28572555933054616, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.1350271568928036, 1);
  sqcRYGate(q, -0.46367826813970936, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7310915430159577, 1);
  sqcRYGate(q, -2.5993564832323677, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.12564718170257463, 3);
  sqcRYGate(q, -3.063889930765905, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8434235982722811, 3);
  sqcRYGate(q, 2.1331743224155137, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.600013291962216, 5);
  sqcRYGate(q, -0.07397794706692729, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3373415992790703, 5);
  sqcRYGate(q, -0.7574488093921139, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.08411537986951, 0);
  sqcRYGate(q, -2.913550524119564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.049781166129578, 0);
  sqcRYGate(q, 1.3335478916419472, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4043485135990057, 2);
  sqcRYGate(q, -1.6914229950565574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5315734151327107, 2);
  sqcRYGate(q, 1.3489554775668542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.049689264381276, 4);
  sqcRYGate(q, -1.9401893610914644, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.4605223610935147, 4);
  sqcRYGate(q, -0.29826781908308586, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4612298971254303, 6);
  sqcRYGate(q, -2.809052907642945, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1664097257599724, 6);
  sqcRYGate(q, -3.0338667551457528, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.444198053307242, 0);
  sqcRYGate(q, 0.13216435004611604, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8644584539139293, 0);
  sqcRYGate(q, -0.8378410279668529, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.780040485023831, 2);
  sqcRYGate(q, 0.0787476342554454, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7907526135087211, 2);
  sqcRYGate(q, -1.577269692971251, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.2696229530983473, 4);
  sqcRYGate(q, 0.4843181895320147, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.4046675164642477, 4);
  sqcRYGate(q, -0.5418187656015288, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0770211449432352, 1);
  sqcRYGate(q, -2.3238091038935296, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3461401823861074, 1);
  sqcRYGate(q, 0.3841250312861942, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9231304979792454, 3);
  sqcRYGate(q, 1.8686937053683865, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8207762070710305, 3);
  sqcRYGate(q, 0.16719898794137045, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3095699274271597, 5);
  sqcRYGate(q, 2.5804349379078633, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.21246846869588992, 5);
  sqcRYGate(q, 2.17370514398005, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.18070915829486278, 0);
  sqcRYGate(q, 2.1226126592076664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5635342479181844, 0);
  sqcRYGate(q, -0.7710810699275736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.979234929265092, 2);
  sqcRYGate(q, -2.1719849625422336, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7687849226508074, 2);
  sqcRYGate(q, -2.5876732755013796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9465408829182564, 4);
  sqcRYGate(q, -1.2338016703193746, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3027381515203288, 4);
  sqcRYGate(q, -1.4784613729998313, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.075252220014063, 6);
  sqcRYGate(q, 0.908318661114043, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8831646227402454, 6);
  sqcRYGate(q, 0.5219667170012713, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8367783876592618, 0);
  sqcRYGate(q, -3.0263413753838115, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9567548359647504, 0);
  sqcRYGate(q, -0.18432456088754615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.968064687229893, 2);
  sqcRYGate(q, -2.9531515793180807, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.916319742534546, 2);
  sqcRYGate(q, 0.682370931318764, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5223320960838701, 4);
  sqcRYGate(q, -1.3860831138682572, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.08770814807014526, 4);
  sqcRYGate(q, 0.1552380217698781, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.7835500558635933, 1);
  sqcRYGate(q, -2.3248421007370137, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3007140200814535, 1);
  sqcRYGate(q, 2.943152721794045, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2876877720898645, 3);
  sqcRYGate(q, 2.584338160974825, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.3390957308084268, 3);
  sqcRYGate(q, -2.9587118468244507, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.0887143202691285, 5);
  sqcRYGate(q, 1.9626893273473753, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8430099394056924, 5);
  sqcRYGate(q, 1.2875248678294886, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.8254018938272277, 0);
  sqcRYGate(q, -2.175005731367143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3076909982727614, 0);
  sqcRYGate(q, 2.670174717397535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1036475183482805, 2);
  sqcRYGate(q, -1.359476722136283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6870643881778666, 2);
  sqcRYGate(q, 1.812141670796688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.58008452778732, 4);
  sqcRYGate(q, 2.9461544493561203, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4871347911989634, 4);
  sqcRYGate(q, 2.944130265943772, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6625873857880307, 6);
  sqcRYGate(q, -0.4216373524783577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2904953155423406, 6);
  sqcRYGate(q, 0.8439970271079912, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8652457589517568, 0);
  sqcRYGate(q, -0.3583449114474487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.727769239898111, 0);
  sqcRYGate(q, 1.6074792930717527, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.153720603839947, 2);
  sqcRYGate(q, -1.8911234131412433, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.604630241066574, 2);
  sqcRYGate(q, 0.37796616631831936, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.5713462572390595, 4);
  sqcRYGate(q, 1.1145759492244776, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.26651267357841724, 4);
  sqcRYGate(q, -2.3647441388214556, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.194996614831134, 1);
  sqcRYGate(q, 0.26221169201322964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4607746501533594, 1);
  sqcRYGate(q, -2.3975174073069927, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7910604025780188, 3);
  sqcRYGate(q, -0.8111655877270123, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.9961153302523793, 3);
  sqcRYGate(q, 0.41787235533864076, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.08870586494597, 5);
  sqcRYGate(q, 3.0410990494547114, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.6238932224772715, 5);
  sqcRYGate(q, -1.2052203130649088, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.1078133954342921, 0);
  sqcRYGate(q, 1.3242604934556892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.943730215211556, 0);
  sqcRYGate(q, 2.239347878361027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5443522007861832, 2);
  sqcRYGate(q, -0.20796760820044202, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4931172662101922, 2);
  sqcRYGate(q, 0.5262455435698081, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6917720264267637, 4);
  sqcRYGate(q, 2.5921616845210687, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7302125950254212, 4);
  sqcRYGate(q, 2.1997211206974407, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.28920189057763596, 6);
  sqcRYGate(q, 0.01917766674943699, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.729227939892104, 6);
  sqcRYGate(q, 2.730542474611227, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.437059604783804, 0);
  sqcRYGate(q, 0.18669242353623094, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9802108809535557, 0);
  sqcRYGate(q, -1.7255119189082047, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.093025286398267, 2);
  sqcRYGate(q, -0.9896186700108167, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.6999571298457101, 2);
  sqcRYGate(q, 1.9700192250081487, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2696901301874792, 4);
  sqcRYGate(q, 2.998359759119735, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.125285710662479, 4);
  sqcRYGate(q, -1.3631293428226632, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.1881564272872946, 1);
  sqcRYGate(q, -1.348200986068921, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7934220379378242, 1);
  sqcRYGate(q, -3.011171761471561, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0347864415897225, 3);
  sqcRYGate(q, 0.9855431208817702, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.7833332329750515, 3);
  sqcRYGate(q, -1.4953286002467847, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1672004038552934, 5);
  sqcRYGate(q, 2.2978360118907046, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.5064924004769464, 5);
  sqcRYGate(q, 1.617623719498213, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.320456177984027, 0);
  sqcRYGate(q, -1.5007849972671838, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7000229419687676, 0);
  sqcRYGate(q, -0.7320276354964861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.918352609026192, 2);
  sqcRYGate(q, 2.396493750808599, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7793706324828833, 2);
  sqcRYGate(q, 1.0254229067980862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5808273906040171, 4);
  sqcRYGate(q, -1.8154952669282354, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0767660078424353, 4);
  sqcRYGate(q, 2.23871337871154, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5709577020745114, 6);
  sqcRYGate(q, 1.1639873749932663, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6038335429287915, 6);
  sqcRYGate(q, 2.444592840346272, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3198015332720923, 0);
  sqcRYGate(q, 0.02381291467057789, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8536197173735913, 0);
  sqcRYGate(q, 2.5248631441324836, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.95836872019929, 2);
  sqcRYGate(q, 0.4516538444721006, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.6780051993706628, 2);
  sqcRYGate(q, -1.23563859499561, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.3451380900209778, 4);
  sqcRYGate(q, -1.5225422439238088, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0721664131254705, 4);
  sqcRYGate(q, 2.2583098816042924, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9763075639906873, 1);
  sqcRYGate(q, 1.184325696519994, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5343577636117636, 1);
  sqcRYGate(q, -2.5445057586241497, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.7055227585392865, 3);
  sqcRYGate(q, 0.2492986364406306, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.4173480395179483, 3);
  sqcRYGate(q, 0.5645319066137056, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6681404939078295, 5);
  sqcRYGate(q, 1.7240507441162762, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7675131653555392, 5);
  sqcRYGate(q, -1.2011622462728084, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8570151142562185, 0);
  sqcRYGate(q, 2.005304948640018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.259399154624287, 0);
  sqcRYGate(q, 1.0568744490493653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3316808361806274, 2);
  sqcRYGate(q, -1.7366084124736596, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.15710071770029, 2);
  sqcRYGate(q, 2.1203968695083093, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7872685105040444, 4);
  sqcRYGate(q, -2.515941637378191, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6944649814465957, 4);
  sqcRYGate(q, -2.393968300774466, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.9446226225252544, 6);
  sqcRYGate(q, 2.120355712780906, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8233355937316031, 6);
  sqcRYGate(q, -3.026462146778495, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5261984119273189, 0);
  sqcRYGate(q, -0.8481591731980922, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.813694379616664, 0);
  sqcRYGate(q, 0.6929411788653542, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.780268827337884, 2);
  sqcRYGate(q, 2.634810623927296, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.2327040422496003, 2);
  sqcRYGate(q, 1.256282504175715, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.623666221861387, 4);
  sqcRYGate(q, -3.0370008441488876, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8500604671970227, 4);
  sqcRYGate(q, -0.6801055825460474, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.9363207749343472, 1);
  sqcRYGate(q, 1.9306041145909394, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5132810187157778, 1);
  sqcRYGate(q, -0.23599935215152978, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7893212797275133, 3);
  sqcRYGate(q, -2.308711206303923, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.037487738788669844, 3);
  sqcRYGate(q, 0.5425250035603065, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.529917816437143, 5);
  sqcRYGate(q, -2.6451507986900484, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.256151950161243, 5);
  sqcRYGate(q, -0.7908708686532151, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.4070768161401199, 0);
  sqcRYGate(q, 2.2822505681665355, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.016497089878827, 0);
  sqcRYGate(q, 2.038482517881716, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0343744328478968, 2);
  sqcRYGate(q, 3.107031958207301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8860012890675124, 2);
  sqcRYGate(q, -0.21870048905585904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6279621054866413, 4);
  sqcRYGate(q, -0.27160488825602463, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7194764520597041, 4);
  sqcRYGate(q, 0.38274447652671173, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8855962266240924, 6);
  sqcRYGate(q, 0.33909647280503175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6874730026028562, 6);
  sqcRYGate(q, 1.3952780028985727, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1215470999214516, 0);
  sqcRYGate(q, 0.7426790854928269, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9904753209979458, 0);
  sqcRYGate(q, -2.602597315188545, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9871474773545906, 2);
  sqcRYGate(q, -0.716055145336622, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.804905033238607, 2);
  sqcRYGate(q, -0.24501308803985108, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.7254673035547429, 4);
  sqcRYGate(q, -2.655736175001564, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.6041068640429317, 4);
  sqcRYGate(q, 1.365306890727331, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.414413398755212, 1);
  sqcRYGate(q, -1.703496823484365, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8341658181378708, 1);
  sqcRYGate(q, -2.344810457867784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.08367947127877412, 3);
  sqcRYGate(q, -2.2043766693221825, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3427175012949055, 3);
  sqcRYGate(q, 1.5056018640496323, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5649037248109696, 5);
  sqcRYGate(q, -2.6931304182944222, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1459247997049062, 5);
  sqcRYGate(q, 1.379743890829803, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.286182639831215, 0);
  sqcRYGate(q, 1.8352306582312181, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8887088070035444, 0);
  sqcRYGate(q, 2.9102928986748284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3358964518806262, 2);
  sqcRYGate(q, 0.6755772734891696, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3998538304303727, 2);
  sqcRYGate(q, -0.24496819354216004, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6987668586127067, 4);
  sqcRYGate(q, 2.5542877129328807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6787765942567349, 4);
  sqcRYGate(q, 1.6970966146898767, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.562652884278772, 6);
  sqcRYGate(q, 0.7433164048434345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.80093762261887, 6);
  sqcRYGate(q, 1.3596526049969178, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8830222953514548, 0);
  sqcRYGate(q, -2.964315612289787, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0147587739981563, 0);
  sqcRYGate(q, 0.9813247988412472, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3137251787885351, 2);
  sqcRYGate(q, 0.8445440072971682, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.46947902323998236, 2);
  sqcRYGate(q, 0.7826739327797136, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.4117105756746052, 4);
  sqcRYGate(q, -0.7798160241182375, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.4576772343621807, 4);
  sqcRYGate(q, 2.3242305681022533, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.739489368538876, 1);
  sqcRYGate(q, 1.3068817918537994, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.130479832858865, 1);
  sqcRYGate(q, -1.7009892498160102, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.941842968710361, 3);
  sqcRYGate(q, 0.040524989467478324, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.13677086071035, 3);
  sqcRYGate(q, 1.7759110424392075, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.32067383304777547, 5);
  sqcRYGate(q, 1.9703619813566693, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.847857210214364, 5);
  sqcRYGate(q, -1.4709755632710564, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.450718043212152, 0);
  sqcRYGate(q, 2.613177810536794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2566925813786773, 0);
  sqcRYGate(q, -0.2288388352306813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.39449527207731083, 2);
  sqcRYGate(q, -2.4513345689694126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0019330770348853, 2);
  sqcRYGate(q, 1.4809341753634726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.549464537596468, 4);
  sqcRYGate(q, 0.04159327838427983, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6488593006891477, 4);
  sqcRYGate(q, 0.7935324418102829, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.8946368534251614, 6);
  sqcRYGate(q, 0.746397995329262, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7164179901439858, 6);
  sqcRYGate(q, 2.8648519257050817, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5093742869971183, 0);
  sqcRYGate(q, -0.34556602657120994, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.290880760916981, 0);
  sqcRYGate(q, 1.4361656336471214, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6506069379492174, 2);
  sqcRYGate(q, -1.2378834448170124, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.9710143864995574, 2);
  sqcRYGate(q, -1.1483378173080065, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1436731338159112, 4);
  sqcRYGate(q, -0.026378171361690905, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.010588299772742, 4);
  sqcRYGate(q, -2.5030762240719464, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.501617426779428, 1);
  sqcRYGate(q, 0.177759319440286, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.5769298933035594, 1);
  sqcRYGate(q, -2.985965159391951, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8699244134204536, 3);
  sqcRYGate(q, -2.146877390024831, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.8248216782017165, 3);
  sqcRYGate(q, 0.5909904821892231, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.61586870010038, 5);
  sqcRYGate(q, 2.856760315738831, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.20221770982016096, 5);
  sqcRYGate(q, 1.7179687212074217, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.765884615050819, 0);
  sqcRYGate(q, -2.1287444783832097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9565328886755059, 0);
  sqcRYGate(q, 0.7728625567734454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9012796530502749, 2);
  sqcRYGate(q, 2.9858021073396674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7251990297035626, 2);
  sqcRYGate(q, 1.427653366878932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9309142812041782, 4);
  sqcRYGate(q, 0.17082537398487574, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.678861940520795, 4);
  sqcRYGate(q, 2.655299167780987, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.1150028722765732, 6);
  sqcRYGate(q, -0.03207943896307336, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.23022003428313254, 6);
  sqcRYGate(q, 0.8522889583880903, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.624773906100661, 0);
  sqcRYGate(q, -1.8023865914675075, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1357327709520035, 0);
  sqcRYGate(q, -1.2858132745471362, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8626024666681502, 2);
  sqcRYGate(q, 1.454721914540145, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5554370559866353, 2);
  sqcRYGate(q, 0.30681745843307784, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.5218919049199586, 4);
  sqcRYGate(q, 1.194712871506935, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.45974458360067505, 4);
  sqcRYGate(q, -0.2529472021321828, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.8205088022325375, 1);
  sqcRYGate(q, 1.7388879215908093, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.530002621697638, 1);
  sqcRYGate(q, 1.0200156540832692, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7508052716404225, 3);
  sqcRYGate(q, -2.079896187029938, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.493213461650223, 3);
  sqcRYGate(q, 0.2460689411281427, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.5537393889277085, 5);
  sqcRYGate(q, 2.5588817430191138, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.721602388495545, 5);
  sqcRYGate(q, -1.5976967118275984, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.437969404930188, 0);
  sqcRYGate(q, -1.9445569277826404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.639452908293342, 0);
  sqcRYGate(q, 1.3489000964351088, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5766978499684675, 2);
  sqcRYGate(q, -1.110752468988135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8383856688590825, 2);
  sqcRYGate(q, -1.6309445428242064, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7539751064063553, 4);
  sqcRYGate(q, -0.05919199818427323, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.020918874619268, 4);
  sqcRYGate(q, -1.1171253628042148, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0665903891616262, 6);
  sqcRYGate(q, 2.4763801403579953, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9543456849135534, 6);
  sqcRYGate(q, -1.8956736481660519, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.44575025485516306, 0);
  sqcRYGate(q, -1.0215570094496538, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.35811110230427, 0);
  sqcRYGate(q, 2.7615895008071623, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6904103119218887, 2);
  sqcRYGate(q, -1.7557628490064223, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.14682301582919, 2);
  sqcRYGate(q, 2.478435555016461, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1962312460273432, 4);
  sqcRYGate(q, 1.5586694026038912, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.33202878627412247, 4);
  sqcRYGate(q, -1.970859609695021, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.15214014072432747, 1);
  sqcRYGate(q, 0.2825549233086241, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.968060182729918, 1);
  sqcRYGate(q, 2.1302513138040498, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.012129433250108512, 3);
  sqcRYGate(q, 2.8539109299206773, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.821403641505723, 3);
  sqcRYGate(q, 1.2594071780725236, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.3949696676652481, 5);
  sqcRYGate(q, 0.8710223389108656, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.1165967569081254, 5);
  sqcRYGate(q, 0.7339522407014778, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.24718382050200202, 0);
  sqcRYGate(q, -1.6188030009445296, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1120159644519294, 0);
  sqcRYGate(q, -1.2136221423625544, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7577643657201538, 2);
  sqcRYGate(q, 2.0367788750001727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0224388600192382, 2);
  sqcRYGate(q, -2.1313679415751716, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3552594031223926, 4);
  sqcRYGate(q, -1.9837169919723099, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0006625158545320768, 4);
  sqcRYGate(q, -1.7403091900541936, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0076738074833262, 6);
  sqcRYGate(q, 1.9107433734680248, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9090322803046667, 6);
  sqcRYGate(q, -2.24720820808848, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3593242403707992, 0);
  sqcRYGate(q, 1.034307761689878, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4523259605412266, 0);
  sqcRYGate(q, -2.792033316304684, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4541272389297051, 2);
  sqcRYGate(q, -2.480889984989852, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.456260547071163, 2);
  sqcRYGate(q, 1.3294179979376004, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.931634837624045, 4);
  sqcRYGate(q, -1.4496472218109009, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.028699096459642, 4);
  sqcRYGate(q, 0.9877825144775868, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.8860504025933302, 1);
  sqcRYGate(q, -0.03640230640677075, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.032097818600024024, 1);
  sqcRYGate(q, -0.7019136702413687, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9348142109799107, 3);
  sqcRYGate(q, 1.3511862032831239, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.279742232727397, 3);
  sqcRYGate(q, 0.07504571051382575, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.14581904356218614, 5);
  sqcRYGate(q, 0.5908791189420493, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8040175788112295, 5);
  sqcRYGate(q, -1.3758558248546537, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.414615607457935, 0);
  sqcRYGate(q, 1.5467398549817195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0502893157778033, 0);
  sqcRYGate(q, 2.220034559466248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11184963394999414, 2);
  sqcRYGate(q, -1.7130015344212581, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5924130471311777, 2);
  sqcRYGate(q, -1.6823605830089872, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10391482757971074, 4);
  sqcRYGate(q, 0.16557603524866138, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.426177410498072, 4);
  sqcRYGate(q, 2.112470524063568, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6206590618780912, 6);
  sqcRYGate(q, 1.7585574576251943, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0245873805648893, 6);
  sqcRYGate(q, 2.3691426514843967, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.938569182770232, 0);
  sqcRYGate(q, -1.624238202431071, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1084206178141573, 0);
  sqcRYGate(q, 2.602843562255956, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.21599582029131786, 2);
  sqcRYGate(q, -0.6846306256660846, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4030198344560967, 2);
  sqcRYGate(q, -1.7659295322592443, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.051844577799593276, 4);
  sqcRYGate(q, 1.9475371846550837, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.4687947584265153, 4);
  sqcRYGate(q, -1.810061055554133, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.1813338874814256, 1);
  sqcRYGate(q, 0.4568305022983168, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7458534715358192, 1);
  sqcRYGate(q, 1.4316877527368448, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24985419502644923, 3);
  sqcRYGate(q, -0.10952429525579532, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.671343977865024, 3);
  sqcRYGate(q, 0.09256730753134834, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4999828998236637, 5);
  sqcRYGate(q, 1.8314877463941635, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.434725207434436, 5);
  sqcRYGate(q, 2.2497821705048144, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.25653348040855, 0);
  sqcRYGate(q, -2.916470335377078, 1);
  sqcRYGate(q, -0.05519858892556062, 2);
  sqcRYGate(q, -2.937866602410079, 3);
  sqcRYGate(q, -0.021792758351742374, 4);
  sqcRYGate(q, -0.20229534369296065, 5);
  sqcRYGate(q, -0.9594247999331859, 6);
  sqcRYGate(q, -1.2055917807224965, 7);

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
