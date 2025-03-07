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

  sqcRYGate(q, 2.1512987572185454, 0);
  sqcRYGate(q, -2.2129067221734218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.209276455797557, 0);
  sqcRYGate(q, 0.8873347324665036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5333551333285329, 0);
  sqcRYGate(q, 2.013193913212346, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.658975250328997, 0);
  sqcRYGate(q, 1.8046501086931004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.49592078912022686, 0);
  sqcRYGate(q, 1.18080396825681, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.914374611588904, 0);
  sqcRYGate(q, -1.6156794193735573, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.20491868070472066, 1);
  sqcRYGate(q, -2.165497812284152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0492753862391138, 1);
  sqcRYGate(q, 1.8007703069387704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5828930364781097, 1);
  sqcRYGate(q, 0.20452246376427097, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.818792484896069, 1);
  sqcRYGate(q, 2.697200034086631, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6476068944487159, 2);
  sqcRYGate(q, -0.5598165278119983, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8285498206360478, 2);
  sqcRYGate(q, 2.0741059209724275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.358874556358816, 0);
  sqcRYGate(q, -1.6943173991251013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8905963748050651, 0);
  sqcRYGate(q, 1.8053528435646256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6852586351872545, 0);
  sqcRYGate(q, -2.310334923321894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.681062298013222, 0);
  sqcRYGate(q, 0.7729479455100208, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.050434418097277, 0);
  sqcRYGate(q, 2.907171233760179, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2391901041305733, 0);
  sqcRYGate(q, 0.3199892140627938, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.728698099639475, 1);
  sqcRYGate(q, 1.5025181921236515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1981666151865581, 1);
  sqcRYGate(q, -0.4928622984422999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.552172378567733, 1);
  sqcRYGate(q, 0.44645864024801324, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1149235864986378, 1);
  sqcRYGate(q, -0.19966814034136623, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9471290675194544, 2);
  sqcRYGate(q, -0.5922112662693504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8629662240516072, 2);
  sqcRYGate(q, -0.7461355397639755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9661453609768761, 0);
  sqcRYGate(q, 1.5218215692528627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2830399221053304, 0);
  sqcRYGate(q, 1.1967700512680963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.140610991698175, 0);
  sqcRYGate(q, 3.1025877717399224, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5394979098360949, 0);
  sqcRYGate(q, -1.3470912693683728, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.051991954566968, 0);
  sqcRYGate(q, 2.9163482730704047, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0010289870358893, 0);
  sqcRYGate(q, 0.16777935153840584, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.802308371984152, 1);
  sqcRYGate(q, 1.8537389369756683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2652704213022617, 1);
  sqcRYGate(q, 1.9172337471703154, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.680546848105342, 1);
  sqcRYGate(q, 2.062810414367708, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7995893334514017, 1);
  sqcRYGate(q, -2.207342696033497, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6570225467276787, 2);
  sqcRYGate(q, 0.771943410917256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.131260103718617, 2);
  sqcRYGate(q, 2.203994261528626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9742003968747666, 0);
  sqcRYGate(q, -2.419217137047254, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07127856197510515, 0);
  sqcRYGate(q, -0.9533956449613505, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3481317638892123, 0);
  sqcRYGate(q, -1.5597847290601639, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7903090211035018, 0);
  sqcRYGate(q, 2.7103127567690004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6103271097971579, 0);
  sqcRYGate(q, -1.6109278566524339, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8387128141376321, 0);
  sqcRYGate(q, 0.22754552986790486, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7097402962339086, 1);
  sqcRYGate(q, 1.356526474050097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9199376723191026, 1);
  sqcRYGate(q, 0.39846722016288005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.664634626520501, 1);
  sqcRYGate(q, -1.2223681126710262, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.984559293132916, 1);
  sqcRYGate(q, 2.3768085532091576, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.46687269278639, 2);
  sqcRYGate(q, -1.7466556092192353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.601173277773321, 2);
  sqcRYGate(q, -1.7366251280324543, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7398316082056233, 0);
  sqcRYGate(q, -0.3268227200745644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0421983548791465, 0);
  sqcRYGate(q, 1.1254182664675465, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4628254917151615, 0);
  sqcRYGate(q, -2.3216557866599694, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5162443429417352, 0);
  sqcRYGate(q, -0.5090158896241558, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5043769507503827, 0);
  sqcRYGate(q, -0.5747217537198486, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.259960808199632, 0);
  sqcRYGate(q, -0.5926745999658117, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3319766227985552, 1);
  sqcRYGate(q, 2.9655746688849054, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2330375850289954, 1);
  sqcRYGate(q, 1.4484690705296137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4975381677480988, 1);
  sqcRYGate(q, -0.11618598608396036, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.120495347915885, 1);
  sqcRYGate(q, 0.31033454664854776, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.193210835312448, 2);
  sqcRYGate(q, -1.563546758022803, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5713266919627193, 2);
  sqcRYGate(q, 1.6089265642021218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.454781821726428, 0);
  sqcRYGate(q, -1.7889495155027169, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0848099136631673, 0);
  sqcRYGate(q, 2.967991869474559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5655036876886728, 0);
  sqcRYGate(q, 1.0360547105151081, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8846685503862344, 0);
  sqcRYGate(q, -1.1181796136601756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2462730260737587, 0);
  sqcRYGate(q, -1.3761045416756394, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.152474096821147, 0);
  sqcRYGate(q, -1.0670710750946828, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6270767838429716, 1);
  sqcRYGate(q, -1.509800049361082, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5831766247237544, 1);
  sqcRYGate(q, -1.8454878209791832, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.785081447355332, 1);
  sqcRYGate(q, 3.091218354988222, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.130910034870806, 1);
  sqcRYGate(q, -2.0770536469233445, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.091346464875075, 2);
  sqcRYGate(q, 0.9717205861683977, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.063120185607143, 2);
  sqcRYGate(q, 1.5797306547586798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6095361758585531, 0);
  sqcRYGate(q, 1.191853505545354, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.979990454986173, 0);
  sqcRYGate(q, -0.6698784105077343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7339447022184418, 0);
  sqcRYGate(q, 2.8355792693459176, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.21567134812170366, 0);
  sqcRYGate(q, -0.30784440104247324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7971149105875287, 0);
  sqcRYGate(q, 0.7202735478051882, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.9076267492975685, 0);
  sqcRYGate(q, -1.2279441079192432, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.15942090669260797, 1);
  sqcRYGate(q, -2.859911463459579, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6468925066282802, 1);
  sqcRYGate(q, -0.26394848748338884, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8884661247786034, 1);
  sqcRYGate(q, -2.8155420488430907, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5245839475388874, 1);
  sqcRYGate(q, 1.868858114319679, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.3668669588921114, 2);
  sqcRYGate(q, 0.452766944850425, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3073897177662941, 2);
  sqcRYGate(q, -1.3131520810540738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5712793157599574, 0);
  sqcRYGate(q, 1.6150108886489578, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2539623910029534, 0);
  sqcRYGate(q, 2.2401902004986365, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2679735348713503, 0);
  sqcRYGate(q, 0.6696603951936693, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.806231788931778, 0);
  sqcRYGate(q, -0.353063882303503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.44967941354182983, 0);
  sqcRYGate(q, 0.5817209276182718, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7851183716008536, 0);
  sqcRYGate(q, -2.1483602926889858, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.054408310367129, 1);
  sqcRYGate(q, 2.83760956242689, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8446467643769191, 1);
  sqcRYGate(q, 2.6553866076588637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2076967492030084, 1);
  sqcRYGate(q, 0.45307806966445435, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.1003972773493516, 1);
  sqcRYGate(q, 1.7645118208521662, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9354429022550824, 2);
  sqcRYGate(q, -1.3216460141572375, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7063827953164195, 2);
  sqcRYGate(q, -2.144525155876398, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1378367702794998, 0);
  sqcRYGate(q, 0.901140333744749, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0160772157680795, 0);
  sqcRYGate(q, 2.8829116587735304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8924697267214485, 0);
  sqcRYGate(q, 0.7468226558197371, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6556858765469356, 0);
  sqcRYGate(q, -2.486549152647322, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.12654641620586402, 0);
  sqcRYGate(q, -1.5729307814536426, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9477128875677128, 0);
  sqcRYGate(q, -1.612116592769286, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.934657597554241, 1);
  sqcRYGate(q, 1.3560171205084461, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5674985839884124, 1);
  sqcRYGate(q, -0.05423817267463602, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.308005217883939, 1);
  sqcRYGate(q, 0.5793419014838621, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8416182952086043, 1);
  sqcRYGate(q, 1.2495637948722291, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1589596554368331, 2);
  sqcRYGate(q, -1.995291291010563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.55364553533617, 2);
  sqcRYGate(q, -2.4834360131111413, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5096715253966005, 0);
  sqcRYGate(q, 2.8166846799912983, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.06535928734612, 0);
  sqcRYGate(q, 1.1010805488678326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7203616961649439, 0);
  sqcRYGate(q, 0.20790310764385148, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2908421418968627, 0);
  sqcRYGate(q, 2.9125561864369574, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.351289952916584, 0);
  sqcRYGate(q, 2.0598025317819206, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.499402985847013, 0);
  sqcRYGate(q, 2.3504356912879865, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5940415782972583, 1);
  sqcRYGate(q, -1.8530350683385957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4164379466794133, 1);
  sqcRYGate(q, -1.1090781098643792, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0878585411733637, 1);
  sqcRYGate(q, -0.5335337326911311, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3434036736487896, 1);
  sqcRYGate(q, 3.0969036632924025, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.04399694508659, 2);
  sqcRYGate(q, -1.9191423978106428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5741642084693037, 2);
  sqcRYGate(q, -2.1733123009774546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5539960592431292, 0);
  sqcRYGate(q, -0.8131986568060867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5496489732916021, 0);
  sqcRYGate(q, -0.6233718038892292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.063343316802542, 0);
  sqcRYGate(q, 0.5967177098879891, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4717625560504484, 0);
  sqcRYGate(q, -3.044512446673955, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8890952965493959, 0);
  sqcRYGate(q, 3.1365088994379637, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1090078752912667, 0);
  sqcRYGate(q, 0.869523801152388, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6311021901490053, 1);
  sqcRYGate(q, 1.556787104063534, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.843417162716246, 1);
  sqcRYGate(q, 1.9528485501008568, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9287669776735346, 1);
  sqcRYGate(q, -0.9394383860240056, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9944283663173568, 1);
  sqcRYGate(q, -1.5091735871106016, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6923988395652243, 2);
  sqcRYGate(q, -2.9679248805821477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7432320785558963, 2);
  sqcRYGate(q, 1.1547754144305697, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.478052172214281, 0);
  sqcRYGate(q, 3.0059496579946, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4684711423192107, 0);
  sqcRYGate(q, 0.03714229046478312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.774042665202566, 0);
  sqcRYGate(q, 0.6319347776402573, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.123006536876102, 0);
  sqcRYGate(q, -1.0242936599682457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.703367741102765, 0);
  sqcRYGate(q, -0.6182761853788268, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8938939154025065, 0);
  sqcRYGate(q, -0.6724923163212169, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8616745937680639, 1);
  sqcRYGate(q, -1.1442783421219254, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4412252573608884, 1);
  sqcRYGate(q, 2.913996859433973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0401371318061807, 1);
  sqcRYGate(q, -1.3655732897306725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9513336298558834, 1);
  sqcRYGate(q, 1.3565830505429557, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.019803354700725584, 2);
  sqcRYGate(q, 2.149971554240566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5397760439112178, 2);
  sqcRYGate(q, 1.8842368057889973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3163026085978196, 0);
  sqcRYGate(q, -1.4210641291002195, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1224547078266367, 0);
  sqcRYGate(q, -1.5996588139531456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2177489274068771, 0);
  sqcRYGate(q, 1.2142305622830083, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.294725692265155, 0);
  sqcRYGate(q, 1.5733358843139493, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7325603543097585, 0);
  sqcRYGate(q, -2.8144415129214235, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3954464807568421, 0);
  sqcRYGate(q, 1.7925956409126673, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.464054707369395, 1);
  sqcRYGate(q, 0.4534768201862738, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.03281992294764564, 1);
  sqcRYGate(q, 3.0209377463806573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.013495996382463, 1);
  sqcRYGate(q, -2.7957012185746715, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6687720426524235, 1);
  sqcRYGate(q, 0.9250677129044725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9082886321055312, 2);
  sqcRYGate(q, 2.9218807302672816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8909177207357653, 2);
  sqcRYGate(q, -0.7331878342890175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0729509314316885, 0);
  sqcRYGate(q, -0.8167169483674791, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4857517397894611, 0);
  sqcRYGate(q, 0.32697744399002815, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.393199335211115, 0);
  sqcRYGate(q, 2.6636599744531653, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4131629349776391, 0);
  sqcRYGate(q, 0.06310701800024354, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8929381219347362, 0);
  sqcRYGate(q, -2.144221992003721, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6146971738047768, 0);
  sqcRYGate(q, 0.6971182395144256, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6537002504921645, 1);
  sqcRYGate(q, -1.9744673546356566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2117329687047946, 1);
  sqcRYGate(q, -0.9274586582417742, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4532551283203823, 1);
  sqcRYGate(q, 0.7240320672824758, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9995415828771893, 1);
  sqcRYGate(q, -2.3916400506066005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6054509353655373, 2);
  sqcRYGate(q, 2.272434510968984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.302857160550352, 2);
  sqcRYGate(q, 1.3891218818956081, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.849967112747359, 0);
  sqcRYGate(q, -3.02530899512956, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.016429654848524322, 0);
  sqcRYGate(q, -0.815176772849383, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0305756284894008, 0);
  sqcRYGate(q, -2.569710443151308, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.08092025131764, 0);
  sqcRYGate(q, -2.890617365305838, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.100222645688304, 0);
  sqcRYGate(q, 0.41540993753303046, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5496858299848797, 0);
  sqcRYGate(q, 0.9584465389051475, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.26756463085342946, 1);
  sqcRYGate(q, -0.4287941287960395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1020179406993966, 1);
  sqcRYGate(q, -1.3954017412427326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0464904677413855, 1);
  sqcRYGate(q, -2.2388963710055787, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3169958521888265, 1);
  sqcRYGate(q, 3.059032518540734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0999887195238511, 2);
  sqcRYGate(q, -0.4977235138779528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.470714121647437, 2);
  sqcRYGate(q, -0.7805334296946995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3132996237602511, 0);
  sqcRYGate(q, 1.9800430876582942, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.586565063525927, 0);
  sqcRYGate(q, -2.652480736229436, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.566144459260277, 0);
  sqcRYGate(q, 2.849069226613275, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8627031111937675, 0);
  sqcRYGate(q, -1.455996154741129, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9467060246499113, 0);
  sqcRYGate(q, 2.4084276781011864, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.2575576225710545, 0);
  sqcRYGate(q, 1.5402703992824796, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7588690965879011, 1);
  sqcRYGate(q, -0.39565893992265005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7777618474303556, 1);
  sqcRYGate(q, -2.389229880747436, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0552590844446414, 1);
  sqcRYGate(q, -1.5370401223568995, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.41650023074482284, 1);
  sqcRYGate(q, -2.5695629523851924, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5191759279316104, 2);
  sqcRYGate(q, 1.642338564198334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5091562234735214, 2);
  sqcRYGate(q, -1.7741906788616666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4506352774571454, 0);
  sqcRYGate(q, -0.8761233263933415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.644198337887195, 0);
  sqcRYGate(q, 1.8290461951013635, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5040472061138438, 0);
  sqcRYGate(q, 1.5282385903368958, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8357425750323704, 0);
  sqcRYGate(q, 2.4060536238195227, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2590651409938944, 0);
  sqcRYGate(q, -1.4398348840449087, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.06277627130958, 0);
  sqcRYGate(q, -0.3436324287360062, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8702713948775598, 1);
  sqcRYGate(q, 2.9319995938637113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.414162058260332, 1);
  sqcRYGate(q, 3.135022558734296, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6089004454188061, 1);
  sqcRYGate(q, 2.898315805546897, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6651982917786103, 1);
  sqcRYGate(q, -1.424069090135454, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9876617512651942, 2);
  sqcRYGate(q, 0.5263037417530365, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5671408631565126, 2);
  sqcRYGate(q, -2.675526344712179, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4861824866653586, 0);
  sqcRYGate(q, -2.0400280929978036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5479394413570668, 0);
  sqcRYGate(q, -0.6829919567148801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07475587930234351, 0);
  sqcRYGate(q, -0.5726955604384782, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0065921887576765, 0);
  sqcRYGate(q, 2.5993303992009578, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2039764454397812, 0);
  sqcRYGate(q, 1.5099865126185954, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7589885668683607, 0);
  sqcRYGate(q, 2.7467804378571006, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7703591682881177, 1);
  sqcRYGate(q, 2.132199948190669, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9338964079735201, 1);
  sqcRYGate(q, -2.807457870859955, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3743161850637704, 1);
  sqcRYGate(q, -1.601316094116468, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2633375485064873, 1);
  sqcRYGate(q, -2.6984632048173736, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7708980658065747, 2);
  sqcRYGate(q, -0.21123115955763708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6486292352603096, 2);
  sqcRYGate(q, -2.0672102960603063, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.577488323044245, 0);
  sqcRYGate(q, -1.6493413866670308, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5411989964026659, 0);
  sqcRYGate(q, 0.0024198309029498824, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2624921499358983, 0);
  sqcRYGate(q, 0.3428663758086678, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.790273482287967, 0);
  sqcRYGate(q, 1.7758706665675765, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3449738969950116, 0);
  sqcRYGate(q, -2.0191961805082066, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.2105397311151218, 0);
  sqcRYGate(q, 1.527493606518635, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.334872801527381, 1);
  sqcRYGate(q, 1.4983673385721001, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.820721282401374, 1);
  sqcRYGate(q, 1.2595682990159693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.37831527028361833, 1);
  sqcRYGate(q, -2.843263386247902, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.259764402782473, 1);
  sqcRYGate(q, 0.7065168299691086, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4864841719418704, 2);
  sqcRYGate(q, 3.00670915787829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5250215335193666, 2);
  sqcRYGate(q, -0.7447083409979035, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1609787897594641, 0);
  sqcRYGate(q, 1.6864073726763644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.141563929637225, 0);
  sqcRYGate(q, -0.8111288555321012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2234853292061674, 0);
  sqcRYGate(q, -1.954317649899883, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6112178944479529, 0);
  sqcRYGate(q, 1.9364594794134797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8932762949839688, 0);
  sqcRYGate(q, -3.1269420711849882, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5661308804234997, 0);
  sqcRYGate(q, 1.3123718455624926, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7521198362263781, 1);
  sqcRYGate(q, -0.6578169265142151, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2854061093987506, 1);
  sqcRYGate(q, 2.8233960583119626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1210349614835313, 1);
  sqcRYGate(q, -1.051600247062896, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1728930488339642, 1);
  sqcRYGate(q, 0.34569614541068105, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.874174754811811, 2);
  sqcRYGate(q, -2.0513494269052197, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.122058365116005, 2);
  sqcRYGate(q, 1.4535520178581827, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8647970497550703, 0);
  sqcRYGate(q, 2.675771289174484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.678900566898724, 0);
  sqcRYGate(q, 2.082104265672301, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7677428365543336, 0);
  sqcRYGate(q, 1.021352936056167, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6620233647869203, 0);
  sqcRYGate(q, 2.288083955027816, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.017782746343822, 0);
  sqcRYGate(q, -1.0408550141986126, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6760602541663374, 0);
  sqcRYGate(q, 2.936441791997918, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.15645443864328898, 1);
  sqcRYGate(q, -2.9091850538808908, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4390810068674096, 1);
  sqcRYGate(q, -0.2804048300349992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9400019371108765, 1);
  sqcRYGate(q, -0.0644745199004519, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2167031741747893, 1);
  sqcRYGate(q, 1.813697491622973, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2231875669884533, 2);
  sqcRYGate(q, 1.2417706446692514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.08421242813312127, 2);
  sqcRYGate(q, 2.6583160271800454, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7272084925240927, 0);
  sqcRYGate(q, -0.38851239670857945, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.48415319810079893, 0);
  sqcRYGate(q, 2.1759054291132798, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45256670208477257, 0);
  sqcRYGate(q, -2.213150655854787, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3769007533257636, 0);
  sqcRYGate(q, 2.8197876978820458, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8753814464048673, 0);
  sqcRYGate(q, -3.089120340486849, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4725943682690037, 0);
  sqcRYGate(q, 2.756640230342742, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4303379670388752, 1);
  sqcRYGate(q, 2.248341014713355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7065295722834413, 1);
  sqcRYGate(q, 2.4709659373483115, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7068470171191183, 1);
  sqcRYGate(q, -1.9098149500436268, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0554384395261602, 1);
  sqcRYGate(q, 1.6089275128478668, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.188166439114837, 2);
  sqcRYGate(q, 1.758145092439891, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0717094863894505, 2);
  sqcRYGate(q, -0.15159928646089593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2911239028939194, 0);
  sqcRYGate(q, 1.4228906531867516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8623486408205916, 0);
  sqcRYGate(q, 2.1284122298703263, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2937602338664127, 0);
  sqcRYGate(q, 1.835475135905297, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6974155623113303, 0);
  sqcRYGate(q, 2.357861538608269, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8786808413380526, 0);
  sqcRYGate(q, -1.3962909681118183, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.017521804469543, 0);
  sqcRYGate(q, 3.000754157629256, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4474703925838455, 1);
  sqcRYGate(q, 1.748850662576374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4587319115089212, 1);
  sqcRYGate(q, 3.0312249504708793, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.212209703881658, 1);
  sqcRYGate(q, -2.7777193666310076, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1229303362620904, 1);
  sqcRYGate(q, 0.48413671299277355, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11556783065567178, 2);
  sqcRYGate(q, -2.379143287478116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7767754362846997, 2);
  sqcRYGate(q, 1.1781585203891531, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.321892567471121, 0);
  sqcRYGate(q, 1.224227322854045, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.017146337110853595, 0);
  sqcRYGate(q, 0.03993913597538248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.09606848943660662, 0);
  sqcRYGate(q, 1.4098765441560994, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4006508642173148, 0);
  sqcRYGate(q, 1.166484933783865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7708334028139627, 0);
  sqcRYGate(q, 2.875959470253128, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7906512675031123, 0);
  sqcRYGate(q, -0.3432882940331587, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0396151476537177, 1);
  sqcRYGate(q, -2.9009300558289133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.026659335598543, 1);
  sqcRYGate(q, -1.1222307770369913, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.552560043582278, 1);
  sqcRYGate(q, 2.374795998604421, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9576449045373616, 1);
  sqcRYGate(q, -2.410029844445518, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1035823382972809, 2);
  sqcRYGate(q, 2.6298705865900738, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.008914864382111413, 2);
  sqcRYGate(q, 2.7403507961306213, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2632632974732863, 0);
  sqcRYGate(q, 0.4881642760582631, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1828119184068182, 0);
  sqcRYGate(q, -0.24407161233608843, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2736383621028655, 0);
  sqcRYGate(q, -0.7058175215467939, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.13639776358861, 0);
  sqcRYGate(q, 1.7679167325824778, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8387944459599028, 0);
  sqcRYGate(q, 0.5023123569770549, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8801679706576329, 0);
  sqcRYGate(q, 2.611642845811608, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8364655650293596, 1);
  sqcRYGate(q, 2.329281501341967, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7515692973135808, 1);
  sqcRYGate(q, 2.7153592560865176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7750473601699452, 1);
  sqcRYGate(q, -0.4735184861932087, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.855899705729711, 1);
  sqcRYGate(q, 2.6163086767523587, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8712542147180966, 2);
  sqcRYGate(q, 0.8545668713105435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7922114354882723, 2);
  sqcRYGate(q, -0.09133209976663448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.589926955608519, 0);
  sqcRYGate(q, 0.27983569222680876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8539382325893334, 0);
  sqcRYGate(q, 2.120126294291483, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.553273313345734, 0);
  sqcRYGate(q, -0.18483991458286209, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9138035324598115, 0);
  sqcRYGate(q, 3.1360903308033747, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5754353350875427, 0);
  sqcRYGate(q, -1.5550914124779203, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3433667027656652, 0);
  sqcRYGate(q, -1.884000212880865, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5117508747572326, 1);
  sqcRYGate(q, 2.9674258841897863, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5040756933798964, 1);
  sqcRYGate(q, 1.3971893299923455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1339245171154113, 1);
  sqcRYGate(q, -0.010540226402934871, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7720428912211128, 1);
  sqcRYGate(q, -0.936882007891441, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4273977485319902, 2);
  sqcRYGate(q, 3.007782040936244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.662244163500448, 2);
  sqcRYGate(q, 1.2596348955371504, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4064431185030621, 0);
  sqcRYGate(q, 1.8843194335746842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13155280668319833, 0);
  sqcRYGate(q, 0.29792812461129975, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.299559906543712, 0);
  sqcRYGate(q, -0.6037394802494429, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3504413887223428, 0);
  sqcRYGate(q, -0.18489954678279685, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8973169982444271, 0);
  sqcRYGate(q, 0.8138548668734353, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7284087472248806, 0);
  sqcRYGate(q, -2.646134899897839, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.39399695651647665, 1);
  sqcRYGate(q, 2.7819862494931415, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4936526130413212, 1);
  sqcRYGate(q, 1.4614011510155693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4800112116277901, 1);
  sqcRYGate(q, 1.1002728020139136, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.085123092108383, 1);
  sqcRYGate(q, -1.4012146780803045, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.691871773235584, 2);
  sqcRYGate(q, 0.20162385829738677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7859443865686877, 2);
  sqcRYGate(q, 2.357018396880372, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0204105672063104, 0);
  sqcRYGate(q, 0.12187962114188533, 1);
  sqcRYGate(q, -0.2986704768496032, 2);
  sqcRYGate(q, 2.557403089880233, 3);

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
