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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -0.029054352370446263, 0);
  sqcRYGate(q, -0.7292380166080225, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.525131523469945, 0);
  sqcRYGate(q, -1.859143355445648, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1901579901432386, 0);
  sqcRYGate(q, 2.890825699171644, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.07344926202870283, 0);
  sqcRYGate(q, 3.0287301144257266, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1920747909848126, 0);
  sqcRYGate(q, 1.5251697299170122, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5490360018455691, 0);
  sqcRYGate(q, -0.24060243201722376, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7674975349022923, 1);
  sqcRYGate(q, 2.582852835276597, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.033069428115382, 1);
  sqcRYGate(q, 2.982544258085209, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4918570228048567, 1);
  sqcRYGate(q, -2.9317349437405285, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.049069280526396135, 1);
  sqcRYGate(q, 2.617812209812077, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8031556736171641, 2);
  sqcRYGate(q, 0.9780657612319126, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3993730027399991, 2);
  sqcRYGate(q, -0.9811025924616484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.59931030487809, 0);
  sqcRYGate(q, -2.4940937979049487, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.39658568750764994, 0);
  sqcRYGate(q, -2.6019000757495707, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.922998662939352, 0);
  sqcRYGate(q, 1.314704716625, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7291616606134164, 0);
  sqcRYGate(q, -1.1914779083797908, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.40149585843925983, 0);
  sqcRYGate(q, -0.6017897689249854, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.411806137121682, 0);
  sqcRYGate(q, -0.6109620215096494, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8757146279539798, 1);
  sqcRYGate(q, -2.376944710759448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21676272600609886, 1);
  sqcRYGate(q, 2.592958237160747, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2975166489992025, 1);
  sqcRYGate(q, 1.9074074664287268, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.0749045502059399, 1);
  sqcRYGate(q, -1.586471035862389, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7119514721840425, 2);
  sqcRYGate(q, -2.427186927355012, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.932537480767517, 2);
  sqcRYGate(q, 2.80902346453172, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7908104860447442, 0);
  sqcRYGate(q, 1.0828466803611672, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4534630153273294, 0);
  sqcRYGate(q, -2.528263972110314, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7264660751780756, 0);
  sqcRYGate(q, 1.5306531168889832, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.901494894937807, 0);
  sqcRYGate(q, -3.0701497892484935, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.022913079058163796, 0);
  sqcRYGate(q, 1.043171874620886, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3220368890261498, 0);
  sqcRYGate(q, 1.1156728054399885, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5982561294527837, 1);
  sqcRYGate(q, -2.0432077793962566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14496129141654207, 1);
  sqcRYGate(q, -1.7919550711901215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.092410302432284, 1);
  sqcRYGate(q, -1.4739704298947758, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3344920196106056, 1);
  sqcRYGate(q, 2.6614537860063514, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6566502757871994, 2);
  sqcRYGate(q, -0.2352421473234605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8050232223958222, 2);
  sqcRYGate(q, 0.11530591842199085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.827253993483504, 0);
  sqcRYGate(q, 0.12665712980375768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3235445502493561, 0);
  sqcRYGate(q, 0.39413083896768275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5569297765371873, 0);
  sqcRYGate(q, 0.7171284934297955, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9955945753267458, 0);
  sqcRYGate(q, -2.6770402173465544, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.042568450705910976, 0);
  sqcRYGate(q, 0.5472732494694085, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4759793306490192, 0);
  sqcRYGate(q, -2.1361414141948147, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3868492788031377, 1);
  sqcRYGate(q, -1.8949457897930702, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0110608178743163, 1);
  sqcRYGate(q, -1.3185209393778523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.094817508146886, 1);
  sqcRYGate(q, 0.6646791290783948, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7810368020190054, 1);
  sqcRYGate(q, 0.1525327962674794, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.864522042693954, 2);
  sqcRYGate(q, -1.0493388178281293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10108505527990629, 2);
  sqcRYGate(q, -2.3215436638115285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2218932434711844, 0);
  sqcRYGate(q, 2.468104951065129, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1257164309936849, 0);
  sqcRYGate(q, -1.8743159370196079, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9754899553387824, 0);
  sqcRYGate(q, 1.7535610508951003, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.043487801874187, 0);
  sqcRYGate(q, 1.9848944931521195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9006589673996337, 0);
  sqcRYGate(q, -0.2878186259673736, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.889760319389954, 0);
  sqcRYGate(q, 0.7327140765153537, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.53926346417892, 1);
  sqcRYGate(q, 0.8139806445344778, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41171861344383615, 1);
  sqcRYGate(q, 1.6551417087117972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7737478134036714, 1);
  sqcRYGate(q, 1.164982926070115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6019732110901961, 1);
  sqcRYGate(q, -3.1365386715583945, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4481407774811483, 2);
  sqcRYGate(q, 1.3395383400154801, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3116310880545745, 2);
  sqcRYGate(q, -1.010446814354739, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6531079694071391, 0);
  sqcRYGate(q, 0.4280875934166106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.174066039034367, 0);
  sqcRYGate(q, 2.9913706990282676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2687479147786167, 0);
  sqcRYGate(q, -1.9815483744540507, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.16855135584542502, 0);
  sqcRYGate(q, 1.988563122765865, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4105240470726556, 0);
  sqcRYGate(q, 0.5358393954209268, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2944149717617552, 0);
  sqcRYGate(q, 2.0661664802744975, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5509145314956067, 1);
  sqcRYGate(q, -2.0904505371870012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6159601880117753, 1);
  sqcRYGate(q, -1.1938362528603124, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2889405095074187, 1);
  sqcRYGate(q, -1.9908672098665732, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.270887400010856, 1);
  sqcRYGate(q, 1.5818983353902736, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2136633374926746, 2);
  sqcRYGate(q, -2.0467155759767994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9771884972401246, 2);
  sqcRYGate(q, 1.267977051078129, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6804617545143463, 0);
  sqcRYGate(q, 2.63452430455455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5207932488997806, 0);
  sqcRYGate(q, -3.086321782915992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.030186378804153, 0);
  sqcRYGate(q, 1.4599225873513735, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7438758250073403, 0);
  sqcRYGate(q, -1.4213180285546723, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8297672218562493, 0);
  sqcRYGate(q, 1.749378584546931, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.378029771710449, 0);
  sqcRYGate(q, 1.5662952243320984, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.073540899474092, 1);
  sqcRYGate(q, -1.638411649448932, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.2599492602120415, 1);
  sqcRYGate(q, -1.01468981002441, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8969403211925648, 1);
  sqcRYGate(q, 0.39822482136446347, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.09974644405790833, 1);
  sqcRYGate(q, 1.5927980465973304, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2690862268751095, 2);
  sqcRYGate(q, 2.805763071118667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2361696978541, 2);
  sqcRYGate(q, -1.7156687007114417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.084953430671136, 0);
  sqcRYGate(q, 3.075516655388249, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8120304839036563, 0);
  sqcRYGate(q, 2.913433988183473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2181987759664874, 0);
  sqcRYGate(q, 0.7749289090227871, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.111114907611299, 0);
  sqcRYGate(q, -1.1745219612644737, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3194242644216241, 0);
  sqcRYGate(q, 2.0201472561717306, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9974819220830287, 0);
  sqcRYGate(q, 1.219045714412081, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.10987086077714459, 1);
  sqcRYGate(q, 2.9070569082053916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.043183793320925, 1);
  sqcRYGate(q, 1.419827366067127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3208467636865002, 1);
  sqcRYGate(q, 0.7361470919302003, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.639276557028424, 1);
  sqcRYGate(q, -2.725207848466139, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7356621682117882, 2);
  sqcRYGate(q, 0.0004748987149501029, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1798620143756606, 2);
  sqcRYGate(q, 2.888404778300927, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.603437780288812, 0);
  sqcRYGate(q, -0.4932217550197278, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7055150343841144, 0);
  sqcRYGate(q, 0.6899059128939058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1461271621054783, 0);
  sqcRYGate(q, 1.7282225137614382, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0936057302757334, 0);
  sqcRYGate(q, 1.3692125866534979, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9421307470811355, 0);
  sqcRYGate(q, -2.0669678862889573, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.40509240277939185, 0);
  sqcRYGate(q, -0.28700644508237527, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7472886898709028, 1);
  sqcRYGate(q, -2.099552751347683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5730109123547176, 1);
  sqcRYGate(q, 1.399663064660448, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8541122666119514, 1);
  sqcRYGate(q, -0.2978345085998699, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6023814407845118, 1);
  sqcRYGate(q, -0.8696598460488021, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0609892962184801, 2);
  sqcRYGate(q, -2.978487547836253, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6415229877844171, 2);
  sqcRYGate(q, 0.08470419693305764, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3922205969649593, 0);
  sqcRYGate(q, 1.941931221930733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4756829157133775, 0);
  sqcRYGate(q, -0.9596000470258756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11404266337614448, 0);
  sqcRYGate(q, 2.4557924132487994, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2321766107686418, 0);
  sqcRYGate(q, -1.0410807692210453, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.13236272181133, 0);
  sqcRYGate(q, 3.1218094162999352, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1195437231516294, 0);
  sqcRYGate(q, 0.7087081089468299, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7566406883839409, 1);
  sqcRYGate(q, -0.9719636196866571, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9051481963434806, 1);
  sqcRYGate(q, 0.1328214288117513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9491926461491487, 1);
  sqcRYGate(q, 1.0640124142825629, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6159521288372503, 1);
  sqcRYGate(q, 1.936670341195687, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8972698381424671, 2);
  sqcRYGate(q, -0.5573226794805324, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6399232248739524, 2);
  sqcRYGate(q, -2.7913106111079435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9721958612923333, 0);
  sqcRYGate(q, 2.0027485715428988, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1139268867834762, 0);
  sqcRYGate(q, 2.1197956300265037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.272369041263591, 0);
  sqcRYGate(q, -1.8289859476189685, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.632418971432567, 0);
  sqcRYGate(q, -0.19324045667057665, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.001458088587313, 0);
  sqcRYGate(q, 1.2096046105709126, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.752488753885603, 0);
  sqcRYGate(q, -0.15577213984760796, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8994267004382468, 1);
  sqcRYGate(q, 0.8921173959722718, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.836721072435906, 1);
  sqcRYGate(q, 1.179350688070725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.023402057491021644, 1);
  sqcRYGate(q, 0.30402977449049295, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.449363693866007, 1);
  sqcRYGate(q, -0.7073615884617283, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.1325478843077358, 2);
  sqcRYGate(q, -1.8423381434355726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2791886951685684, 2);
  sqcRYGate(q, 2.9002903050538382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3027576975314787, 0);
  sqcRYGate(q, 2.6487691617488895, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03573059677150041, 0);
  sqcRYGate(q, -0.7603307323453594, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.666579894680389, 0);
  sqcRYGate(q, -0.6549330311290769, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3858053044288763, 0);
  sqcRYGate(q, 2.067485411283288, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2307852373020483, 0);
  sqcRYGate(q, 2.9527921231913727, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4794280663681372, 0);
  sqcRYGate(q, -2.1920207360176214, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4616797748068056, 1);
  sqcRYGate(q, 1.0959231433379113, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1708708720949332, 1);
  sqcRYGate(q, -2.704497852536986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.74918402583216, 1);
  sqcRYGate(q, -1.2866125308929004, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7524473195993668, 1);
  sqcRYGate(q, -0.8060003463755541, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0909724048436455, 2);
  sqcRYGate(q, -0.9875941130176835, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7334801943842217, 2);
  sqcRYGate(q, -3.015813824557251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2089053341297534, 0);
  sqcRYGate(q, -1.722365688399771, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6013048194859731, 0);
  sqcRYGate(q, 0.03371841954172473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5230062080006137, 0);
  sqcRYGate(q, -3.1302536702401462, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2459278402664706, 0);
  sqcRYGate(q, -2.2526631233313053, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4493054896183262, 0);
  sqcRYGate(q, -1.656544974522041, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.18576092489155618, 0);
  sqcRYGate(q, -2.9676497680567513, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.5752553368146809, 1);
  sqcRYGate(q, 0.4104588588534206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2531341542012155, 1);
  sqcRYGate(q, 2.4845727766167354, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0789161966443024, 1);
  sqcRYGate(q, 2.180991209699507, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.98373181771594, 1);
  sqcRYGate(q, -0.4697112496497615, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1091743208359146, 2);
  sqcRYGate(q, 2.2398780072454265, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.667695103788094, 2);
  sqcRYGate(q, -2.7206885549063777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9896847594783245, 0);
  sqcRYGate(q, 1.419072470810626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3031727000426003, 0);
  sqcRYGate(q, 0.2659083706786207, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.203763242888514, 0);
  sqcRYGate(q, -1.7906662406951046, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.97713057297864, 0);
  sqcRYGate(q, -0.23619907373366367, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.07899625749825465, 0);
  sqcRYGate(q, 2.4898879096901863, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9897909235847446, 0);
  sqcRYGate(q, -2.3335977289844325, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6876106122403298, 1);
  sqcRYGate(q, 1.7848386909798437, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7540488093035247, 1);
  sqcRYGate(q, 1.1986259233489442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1732504663991232, 1);
  sqcRYGate(q, 1.6337985414340128, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.6675124374203043, 1);
  sqcRYGate(q, 0.7992096024173182, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5902300501647064, 2);
  sqcRYGate(q, 0.6249085041767068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2041957693252852, 2);
  sqcRYGate(q, -2.2887017668795493, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4001864798768286, 0);
  sqcRYGate(q, 0.9690057513727073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.23730511108455, 0);
  sqcRYGate(q, 0.060755437186501234, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9596295664627599, 0);
  sqcRYGate(q, 0.20488501201262113, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4078534935327722, 0);
  sqcRYGate(q, 1.2221631754060374, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5584893756388529, 0);
  sqcRYGate(q, 1.4818729422067525, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7302640263726519, 0);
  sqcRYGate(q, -1.1047998426693302, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.42805070021411934, 1);
  sqcRYGate(q, 2.8241990789067857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3676588595383725, 1);
  sqcRYGate(q, -0.18806865655070215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.835510301364167, 1);
  sqcRYGate(q, -2.4823996346153634, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9980855317461195, 1);
  sqcRYGate(q, 0.972994435154091, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.945616814187921, 2);
  sqcRYGate(q, -1.7544589379060727, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.8994454851041467, 2);
  sqcRYGate(q, -1.5341022599835341, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.018841850512805, 0);
  sqcRYGate(q, 0.5263728081677485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4298044177225644, 0);
  sqcRYGate(q, 1.5597155357765973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3042999899790515, 0);
  sqcRYGate(q, 2.406920545079119, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.77011462550725, 0);
  sqcRYGate(q, -1.3590188107908068, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4889055423872635, 0);
  sqcRYGate(q, -3.139784941519271, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.21906314919966174, 0);
  sqcRYGate(q, -2.1824356072101323, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.611576961430725, 1);
  sqcRYGate(q, 0.6327460567684595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0456711757383883, 1);
  sqcRYGate(q, -0.874487629272626, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.097646521116469, 1);
  sqcRYGate(q, 1.0369494309827358, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9387427812247902, 1);
  sqcRYGate(q, -3.113330664115913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4737277705845795, 2);
  sqcRYGate(q, 2.132989120669255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.597627689254753, 2);
  sqcRYGate(q, 2.381571580286043, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4218864367543196, 0);
  sqcRYGate(q, -0.7327017763777152, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1266653833786666, 0);
  sqcRYGate(q, 2.5431083859194583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1843232308538663, 0);
  sqcRYGate(q, -2.2205539468539675, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9679839390536529, 0);
  sqcRYGate(q, 2.8000809404170655, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6155481775413043, 0);
  sqcRYGate(q, -0.21997733790528873, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.998761888346098, 0);
  sqcRYGate(q, 0.7902985102657846, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8432320704845538, 1);
  sqcRYGate(q, -2.3354786721803746, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7391486458760084, 1);
  sqcRYGate(q, -0.7026816112749875, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3524096815547866, 1);
  sqcRYGate(q, -0.4936650959433111, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8813496213564356, 1);
  sqcRYGate(q, 2.1546688306767887, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5944842285833847, 2);
  sqcRYGate(q, 0.19823667320801427, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1752156079777762, 2);
  sqcRYGate(q, 1.9876482455383417, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0651593240157684, 0);
  sqcRYGate(q, -2.218089252710913, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.165937611078398, 0);
  sqcRYGate(q, 1.9612937956340473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0240764322985925, 0);
  sqcRYGate(q, 2.8505115224998994, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.522535967488389, 0);
  sqcRYGate(q, -2.1051850970119927, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6288275147271138, 0);
  sqcRYGate(q, -0.39293219266865265, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.025981747672983946, 0);
  sqcRYGate(q, -1.234300424233224, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.1276344278940207, 1);
  sqcRYGate(q, -0.9692652068220281, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2860930370561579, 1);
  sqcRYGate(q, 1.727643385817061, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1358686714199364, 1);
  sqcRYGate(q, 1.874458310060679, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24959999371990185, 1);
  sqcRYGate(q, -0.4099813956849907, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.026118128801581264, 2);
  sqcRYGate(q, 0.7470141711246289, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0340026138509266, 2);
  sqcRYGate(q, 2.392640526153581, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.187124809440985, 0);
  sqcRYGate(q, 0.30758433358557724, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.791582672460736, 0);
  sqcRYGate(q, 2.9871263615410366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8989722560842824, 0);
  sqcRYGate(q, -2.0550173204073223, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.711958317334662, 0);
  sqcRYGate(q, 2.6651083159163553, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2774268528053712, 0);
  sqcRYGate(q, 0.5576179907250042, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8508200556077908, 0);
  sqcRYGate(q, -1.7152694528590322, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6973539529305737, 1);
  sqcRYGate(q, -0.5015173543237692, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8861851679489172, 1);
  sqcRYGate(q, 1.403760553112821, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7107166828073126, 1);
  sqcRYGate(q, -1.2566838596698489, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5673469071302224, 1);
  sqcRYGate(q, -3.112623593594781, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.107252417081927, 2);
  sqcRYGate(q, 2.801818954490188, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0002022493285265, 2);
  sqcRYGate(q, -1.5320403585507718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9370425202178643, 0);
  sqcRYGate(q, -2.5040854129711065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.517101335849411, 0);
  sqcRYGate(q, -2.3612873854751864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6942720164726062, 0);
  sqcRYGate(q, -1.3612483117876961, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.431993612507308, 0);
  sqcRYGate(q, 2.0413490185351826, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6678007393217233, 0);
  sqcRYGate(q, -1.3165677893863048, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7310295196340065, 0);
  sqcRYGate(q, -2.934269369241249, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.01971076691094081, 1);
  sqcRYGate(q, 2.87627731657879, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5361768913793448, 1);
  sqcRYGate(q, 0.38160318396455717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.757416803684225, 1);
  sqcRYGate(q, -0.13553962781431897, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2442007088548124, 1);
  sqcRYGate(q, 0.6537229376394187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7207914633656853, 2);
  sqcRYGate(q, 2.976942240770861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4245465720569457, 2);
  sqcRYGate(q, -1.7016079461047589, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7136711741454302, 0);
  sqcRYGate(q, -1.5091770151997876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.074856229113816, 0);
  sqcRYGate(q, 2.5997827698896523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3515396466418297, 0);
  sqcRYGate(q, 0.7758198501622043, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.39318600593528785, 0);
  sqcRYGate(q, 1.386978121343481, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7178612476763977, 0);
  sqcRYGate(q, 1.7235424418442784, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4711731683349814, 0);
  sqcRYGate(q, -2.5712327699667195, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.714379610396812, 1);
  sqcRYGate(q, 2.327608456926178, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9217245694370257, 1);
  sqcRYGate(q, 2.7605159187828483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.019509533557753, 1);
  sqcRYGate(q, -0.09949735594320838, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6134466480353868, 1);
  sqcRYGate(q, -2.474806516979115, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.10842430083855285, 2);
  sqcRYGate(q, -2.8479936346078776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4239974246348384, 2);
  sqcRYGate(q, -1.9459542113648665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4092735856869938, 0);
  sqcRYGate(q, -1.777988259332579, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.096770787582809, 0);
  sqcRYGate(q, -2.9205993239217767, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41906054766628204, 0);
  sqcRYGate(q, 1.6807857638987966, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8102981775121954, 0);
  sqcRYGate(q, -0.6627720342119662, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.24069742021789767, 0);
  sqcRYGate(q, 0.8843362664295933, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.49875541762759473, 0);
  sqcRYGate(q, -1.2849927368235814, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1832630182745492, 1);
  sqcRYGate(q, 1.9757880181782292, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2479275994688237, 1);
  sqcRYGate(q, -2.762200933727227, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6405997754730512, 1);
  sqcRYGate(q, 1.63208725418537, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7406204793133332, 1);
  sqcRYGate(q, 0.8984019697921309, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6394472372269794, 2);
  sqcRYGate(q, 0.6278400773808683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9743014178196505, 2);
  sqcRYGate(q, 2.0179756231995345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3441899567712663, 0);
  sqcRYGate(q, 1.5484997322746823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0590221827855095, 0);
  sqcRYGate(q, -0.21334137836788702, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2559010610758117, 0);
  sqcRYGate(q, -0.1808097150491126, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0520208798848776, 0);
  sqcRYGate(q, 2.220720180063908, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7703085104064962, 0);
  sqcRYGate(q, 1.5802964837892237, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.276384359882958, 0);
  sqcRYGate(q, -2.651137283040372, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.152396918272998, 1);
  sqcRYGate(q, 0.6775709659280904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.881669094952813, 1);
  sqcRYGate(q, -1.7148325807928835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.20460245398108512, 1);
  sqcRYGate(q, -0.1737427028992943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6658397032223808, 1);
  sqcRYGate(q, -0.5195738272906176, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3993797949366336, 2);
  sqcRYGate(q, -3.0016453035467747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8996462917732644, 2);
  sqcRYGate(q, -2.214047340259319, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9187023858802634, 0);
  sqcRYGate(q, -1.1153433630517555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.782467885333537, 0);
  sqcRYGate(q, -0.6185457241913213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2798635487196117, 0);
  sqcRYGate(q, -0.4191118228687567, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6345039123256608, 0);
  sqcRYGate(q, -2.963872906010779, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.101881906407814, 0);
  sqcRYGate(q, 0.5401906529766608, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.1341172465500773, 0);
  sqcRYGate(q, -0.16143502447877467, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6369291401391655, 1);
  sqcRYGate(q, 2.041544533730939, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0936226131356466, 1);
  sqcRYGate(q, -0.08270936092800732, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.68237702307705, 1);
  sqcRYGate(q, -1.0308183978165522, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7570638262100617, 1);
  sqcRYGate(q, -0.72808756666914, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5531017934274215, 2);
  sqcRYGate(q, -1.146421507799246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1874938390993126, 2);
  sqcRYGate(q, 2.472693000472713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0030179837360276, 0);
  sqcRYGate(q, -1.0300354180334086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3297701535835387, 0);
  sqcRYGate(q, 1.991749356084499, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5705570563721984, 0);
  sqcRYGate(q, -2.8219925758165276, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4785061634589365, 0);
  sqcRYGate(q, -2.561679151661311, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.335063034741557, 0);
  sqcRYGate(q, -1.5756655730788693, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.356071088511488, 0);
  sqcRYGate(q, 0.42744969254563703, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6959613833971954, 1);
  sqcRYGate(q, 0.4605649803963629, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8109808000499017, 1);
  sqcRYGate(q, -1.3614139004078796, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.33918471414546497, 1);
  sqcRYGate(q, 2.656501058672665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.173850197225552, 1);
  sqcRYGate(q, -1.063381863902527, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.280528348122309, 2);
  sqcRYGate(q, 0.3518666579775722, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2618189091494267, 2);
  sqcRYGate(q, -0.5663686749816836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9737963940006864, 0);
  sqcRYGate(q, -0.031322775560601056, 1);
  sqcRYGate(q, -1.4366685560800898, 2);
  sqcRYGate(q, -0.9220356113857622, 3);

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
