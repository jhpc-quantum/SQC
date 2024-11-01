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

  sqcRYGate(q, -2.6248386397993855, 0);
  sqcRYGate(q, 1.29461030151968, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7149638641037317, 0);
  sqcRYGate(q, -3.0867379083246154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.40316861615569266, 1);
  sqcRYGate(q, -0.5937772077739176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9299235495859444, 1);
  sqcRYGate(q, -2.823537599133524, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1819360627714737, 2);
  sqcRYGate(q, 1.434996883815701, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0034428160937108702, 2);
  sqcRYGate(q, -0.0007027075899452839, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7855574996211256, 3);
  sqcRYGate(q, 2.1868576473653505, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8272151026562278, 3);
  sqcRYGate(q, -2.031822895709043, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.28457569867430127, 4);
  sqcRYGate(q, 1.549170211036774, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6332162508709143, 4);
  sqcRYGate(q, -0.06420429091055091, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.190853561822343, 5);
  sqcRYGate(q, 0.09355066485468821, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8427250720024464, 5);
  sqcRYGate(q, -0.9370235604225483, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0423778873734264, 6);
  sqcRYGate(q, -1.8846993365165892, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.21028150567471207, 6);
  sqcRYGate(q, 1.3091216147802824, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.08987180120547311, 7);
  sqcRYGate(q, 1.5707155505232766, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.5189215899584385, 7);
  sqcRYGate(q, 3.141576852826401, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.040255171093931, 8);
  sqcRYGate(q, 1.960542961203827, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.125827735735971, 8);
  sqcRYGate(q, -2.5168777383781804, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7920222420338936, 9);
  sqcRYGate(q, 1.2843187674397512, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.1392023716841524, 9);
  sqcRYGate(q, 0.025121107785161634, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.36430474059464224, 10);
  sqcRYGate(q, -2.760171036448833, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.01710675299603869, 10);
  sqcRYGate(q, -0.0205544772304456, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.9623722807436814, 11);
  sqcRYGate(q, -1.6761846665417055, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.8014325967503506, 11);
  sqcRYGate(q, -0.1505944739829932, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.100153010756612, 12);
  sqcRYGate(q, 1.4452039735213207, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.0038489601687714333, 12);
  sqcRYGate(q, 0.003082025463981175, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.9999501349552253, 13);
  sqcRYGate(q, 0.11589178719993044, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.3038851712987332, 13);
  sqcRYGate(q, 1.8557339988318142, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.83087282992225, 14);
  sqcRYGate(q, -1.5490673869515403, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.157682762672547, 14);
  sqcRYGate(q, -2.209175044282838, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.49510348437480667, 0);
  sqcRYGate(q, -2.176896462179286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4144052328978214, 0);
  sqcRYGate(q, -1.961950091310725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3149087918909954, 1);
  sqcRYGate(q, 2.9293503545155644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5474063327549556, 1);
  sqcRYGate(q, 1.5714806018189544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.622635911747036, 2);
  sqcRYGate(q, 0.4870562682746388, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6659369095902701, 2);
  sqcRYGate(q, 1.3372760174543306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1053825243539668, 3);
  sqcRYGate(q, -1.6852603503979207, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.861372883245422, 3);
  sqcRYGate(q, 3.003494814991405, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.022537454664913, 4);
  sqcRYGate(q, 0.7450456931648562, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.0030518367595053775, 4);
  sqcRYGate(q, 0.0016954801292259347, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2278351111491168, 5);
  sqcRYGate(q, 1.6675968207482672, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.206350384249121, 5);
  sqcRYGate(q, -1.452513420589181, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.748952334010213, 6);
  sqcRYGate(q, -2.544418757387757, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.607230752639828, 6);
  sqcRYGate(q, 0.8495743381441517, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7624517156611987, 7);
  sqcRYGate(q, -0.8540218170708869, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.002689357149471938, 7);
  sqcRYGate(q, 3.1414255964479114, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.600550106207096, 8);
  sqcRYGate(q, -0.19986471105581227, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.876594886376789, 8);
  sqcRYGate(q, 1.1704002268291624, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7845254623016142, 9);
  sqcRYGate(q, 2.6063100894808366, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.8162474774351356, 9);
  sqcRYGate(q, 0.5852492190966441, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5084752001970196, 10);
  sqcRYGate(q, -0.09507087294055525, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.114143357482678, 10);
  sqcRYGate(q, -0.16324875655574722, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2391855536776706, 11);
  sqcRYGate(q, -2.5641963231138365, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.08218048627604979, 11);
  sqcRYGate(q, -3.058150011915213, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.8238830318566253, 12);
  sqcRYGate(q, 1.2643673162997304, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.0261745950963754, 12);
  sqcRYGate(q, -1.354620079507765, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7341406709558633, 13);
  sqcRYGate(q, -0.1667720764965199, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.9784089645322122, 13);
  sqcRYGate(q, -3.056257118388126, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.2626805465669318, 14);
  sqcRYGate(q, 3.111017060386488, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.131996479122169, 14);
  sqcRYGate(q, 0.576965693932701, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.018188221946338956, 0);
  sqcRYGate(q, -0.6696003223361011, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.08451565425000507, 0);
  sqcRYGate(q, 1.8700536892371196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.221191389378198, 1);
  sqcRYGate(q, -2.740272714643674, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9517859655907293, 1);
  sqcRYGate(q, -2.803054293874301, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8596608398366359, 2);
  sqcRYGate(q, 2.122446563510322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.002606900872018869, 2);
  sqcRYGate(q, -0.0008823853755022973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.886035589651906, 3);
  sqcRYGate(q, -1.1107701803515662, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0546693303497254, 3);
  sqcRYGate(q, -2.196755437163079, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0410588207879186, 4);
  sqcRYGate(q, -2.729401016005193, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.036417952883208, 4);
  sqcRYGate(q, 0.7267653876701071, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3218368497268402, 5);
  sqcRYGate(q, 1.6478327748355739, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9585632357562033, 5);
  sqcRYGate(q, -3.0437549142134004, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6400106475216563, 6);
  sqcRYGate(q, 2.4283883162348388, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0891558389097393, 6);
  sqcRYGate(q, -2.561282528878166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.230972253894326, 7);
  sqcRYGate(q, 0.9143456620818253, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.140518556601526, 7);
  sqcRYGate(q, 0.000273473702130989, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.058332836810602195, 8);
  sqcRYGate(q, -0.10942213609810647, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0518085603701628, 8);
  sqcRYGate(q, -1.0635187159315826, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.90976540464249, 9);
  sqcRYGate(q, -0.2916704237907357, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.671184028696979, 9);
  sqcRYGate(q, 1.1521118106902701, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9372556066460294, 10);
  sqcRYGate(q, -2.7658373733849864, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.43270580215881005, 10);
  sqcRYGate(q, 2.8656125232493856, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7540453776174165, 11);
  sqcRYGate(q, 0.3424834979918163, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.123085546170601, 11);
  sqcRYGate(q, -0.016611654368745125, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.02697455706269114, 12);
  sqcRYGate(q, 1.4826291216536012, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.670998604356522, 12);
  sqcRYGate(q, 1.8375523302822063, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.2529604283080804, 13);
  sqcRYGate(q, -0.8458903262359456, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.0908341665501666, 13);
  sqcRYGate(q, 2.144788330503247, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.7367453515161957, 14);
  sqcRYGate(q, -0.6834785501990606, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.26335130227003, 14);
  sqcRYGate(q, 0.645373903004546, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.7082905066220497, 0);
  sqcRYGate(q, 1.7397354192765944, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05880505153813738, 0);
  sqcRYGate(q, 2.764660697090748, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.505803450521375, 1);
  sqcRYGate(q, 2.9480792378638996, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8007284019195511, 1);
  sqcRYGate(q, -0.906019835225095, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.28212021355860895, 2);
  sqcRYGate(q, -1.1532056299124953, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.334399415083067, 2);
  sqcRYGate(q, -0.0006472303756002162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5734230927891908, 3);
  sqcRYGate(q, 0.24140453825078284, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.13149638147065, 3);
  sqcRYGate(q, -0.7736566129930909, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0550053671379696, 4);
  sqcRYGate(q, 1.4945578073124433, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.611957999973193, 4);
  sqcRYGate(q, -2.648411199844114, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.227704544528561, 5);
  sqcRYGate(q, 1.498064346674753, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9396019532063331, 5);
  sqcRYGate(q, -2.8739678295376057, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.405649483518415, 6);
  sqcRYGate(q, 1.540673167210641, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.850220809667528, 6);
  sqcRYGate(q, 1.024781718258781, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5473559964999932, 7);
  sqcRYGate(q, -0.08660393293847068, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6661091106035975, 7);
  sqcRYGate(q, 0.0006694127070388678, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.996487958725873, 8);
  sqcRYGate(q, 1.9042051794116395, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.8479526685468501, 8);
  sqcRYGate(q, -3.070274619299345, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.0600095343153826, 9);
  sqcRYGate(q, -0.03742596256030245, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.6662120987787628, 9);
  sqcRYGate(q, -3.1208486813602616, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.1899414688131555, 10);
  sqcRYGate(q, 2.301025316790241, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.004663987345022462, 10);
  sqcRYGate(q, -0.09739488558268444, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.8601320824444871, 11);
  sqcRYGate(q, -1.6572385072002644, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1407248686350915, 11);
  sqcRYGate(q, -0.3613530805604874, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.5499463295938236, 12);
  sqcRYGate(q, -0.3034037199974966, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.1714923081777737, 12);
  sqcRYGate(q, -3.136486535561052, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.396457827956344, 13);
  sqcRYGate(q, 2.8199484419840104, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.6649381417720233, 13);
  sqcRYGate(q, -1.8629901635037807, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.16529192060476677, 14);
  sqcRYGate(q, 1.7799136398146782, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.9492565752931305, 14);
  sqcRYGate(q, 2.139769674988287, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.329636932333782, 0);
  sqcRYGate(q, -1.3069349330518891, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5582959972445476, 0);
  sqcRYGate(q, 3.080184818386148, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1481904538124583, 1);
  sqcRYGate(q, -1.5994187193993803, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.13603312881835, 1);
  sqcRYGate(q, -0.9370232257236752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1589053475425649, 2);
  sqcRYGate(q, -0.9070350300003351, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6743095647401964, 2);
  sqcRYGate(q, -2.2115392547138653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6174000381068899, 3);
  sqcRYGate(q, -0.6821604950459124, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1699371861508192, 3);
  sqcRYGate(q, -0.3873875487010253, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.4833038152894085, 4);
  sqcRYGate(q, -2.5535435457571443, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.33142813999592935, 4);
  sqcRYGate(q, -0.03066234612782637, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.393502065350801, 5);
  sqcRYGate(q, 3.078149459686185, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7400451161981274, 5);
  sqcRYGate(q, -3.115645336601807, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.727318533816586, 6);
  sqcRYGate(q, -1.8748434439350175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.530179813619632, 6);
  sqcRYGate(q, -1.2282138391420834, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.7772888720209492, 7);
  sqcRYGate(q, -0.7379381439456756, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.6936505215875792, 7);
  sqcRYGate(q, -3.1413843629788616, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.2977475524357988, 8);
  sqcRYGate(q, 0.4462011668763514, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.1591610481642332, 8);
  sqcRYGate(q, -0.6912550917782188, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.8698423707165426, 9);
  sqcRYGate(q, 2.2401479880480406, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.003433802586974024, 9);
  sqcRYGate(q, 3.1409536084511056, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.003304576677372, 10);
  sqcRYGate(q, 1.4452976136640254, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.0904275683248885, 10);
  sqcRYGate(q, 2.55851228920423, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.062140953114544, 11);
  sqcRYGate(q, 0.7141455854269534, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.3020984989993636, 11);
  sqcRYGate(q, 0.00552549616565703, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.0595955666656334, 12);
  sqcRYGate(q, -0.6755350761468835, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.2450953037645016, 12);
  sqcRYGate(q, -1.7925974736222035, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.5909328028036887, 13);
  sqcRYGate(q, -0.46653858207431037, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.12088328923729552, 13);
  sqcRYGate(q, 2.8050271329493603, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.056053270470810546, 14);
  sqcRYGate(q, 2.9875911922507434, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.4278476308708808, 14);
  sqcRYGate(q, -0.05955291476505014, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.9962322728267843, 0);
  sqcRYGate(q, -1.1968123808685927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.615199491784466, 0);
  sqcRYGate(q, -1.6558760120485596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7709849610348103, 1);
  sqcRYGate(q, 1.6673506007904635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05186048625882478, 1);
  sqcRYGate(q, -3.1322101718308644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9642870261486998, 2);
  sqcRYGate(q, 2.5180605169477617, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9294643936881672, 2);
  sqcRYGate(q, 1.0391168557292132, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6938827939517945, 3);
  sqcRYGate(q, 2.194317775585409, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9209855062920345, 3);
  sqcRYGate(q, -3.077203700374006, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4937602058770225, 4);
  sqcRYGate(q, -2.415340658111527, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4304104916096216, 4);
  sqcRYGate(q, -2.3456617981981993, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5570484579950143, 5);
  sqcRYGate(q, 0.7352918029935108, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.005395769409543227, 5);
  sqcRYGate(q, 1.9665115966406388, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7233677186633314, 6);
  sqcRYGate(q, 1.1543283595194695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.36533254491281, 6);
  sqcRYGate(q, -2.3439723033839175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6377551834056403, 7);
  sqcRYGate(q, -1.676657577964175, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.7350717862621354, 7);
  sqcRYGate(q, -0.004922703628335114, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.964499421872747, 8);
  sqcRYGate(q, -0.586777168191448, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5279070194265615, 8);
  sqcRYGate(q, -2.791049857659497, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9863833060008196, 9);
  sqcRYGate(q, 3.0841655189754547, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.009535021453271675, 9);
  sqcRYGate(q, 3.1389674796167064, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.557164056398789, 10);
  sqcRYGate(q, 2.746926250894256, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.0001919190100967416, 10);
  sqcRYGate(q, -1.2134769432379593, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.101922198884334, 11);
  sqcRYGate(q, 2.0620848457453995, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.670682382210468, 11);
  sqcRYGate(q, 3.094972200607816, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.4582726725689166, 12);
  sqcRYGate(q, 1.5251953124517437, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.6854793158459666, 12);
  sqcRYGate(q, -1.872234392121813, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.10760925672871795, 13);
  sqcRYGate(q, -3.0359416677999875, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8112349790497158, 13);
  sqcRYGate(q, -0.9145273154754796, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.668426866970307, 14);
  sqcRYGate(q, -0.7567696865146303, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.4811713370803207, 14);
  sqcRYGate(q, -0.10793805156933978, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.8002778525839802, 0);
  sqcRYGate(q, 0.5419644930156687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5817859719947479, 0);
  sqcRYGate(q, 0.165125703226364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6410243764859107, 1);
  sqcRYGate(q, -2.9742474514521478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0733794897188296, 1);
  sqcRYGate(q, 2.816727481120754, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6664354321410952, 2);
  sqcRYGate(q, -1.2242258391909826, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0030504688817178677, 2);
  sqcRYGate(q, -3.0568235727009507, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.554634686155852, 3);
  sqcRYGate(q, 0.43614063503472045, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.1169377854052507, 3);
  sqcRYGate(q, 0.00026898096404278954, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.25243112781056, 4);
  sqcRYGate(q, -1.591277163448023, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4865243649076345, 4);
  sqcRYGate(q, 3.1375631935143593, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.12507152720556736, 5);
  sqcRYGate(q, 2.184555696375233, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.00010825553509281533, 5);
  sqcRYGate(q, 0.9016910417057975, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.084824500795496, 6);
  sqcRYGate(q, -0.9955076909294611, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5586973277448144, 6);
  sqcRYGate(q, -0.3794134989817071, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9934767463204217, 7);
  sqcRYGate(q, -2.469215698350956, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.43289643168657205, 7);
  sqcRYGate(q, -1.5919515849602437, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.114693103058566, 8);
  sqcRYGate(q, 0.12981097117737803, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7214579188172048, 8);
  sqcRYGate(q, -3.131468570842589, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.1206530215709813, 9);
  sqcRYGate(q, -1.5408322256233324, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.4481180087111971, 9);
  sqcRYGate(q, 2.437693723895541, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.7609026610961235, 10);
  sqcRYGate(q, -2.266147376974935, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6043978391710727, 10);
  sqcRYGate(q, -5.20208298171454e-05, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.6392034363144132, 11);
  sqcRYGate(q, -0.9117902169180079, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.06358907048808, 11);
  sqcRYGate(q, -2.7998965228423884, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.4828747293839015, 12);
  sqcRYGate(q, 1.1502580582763207, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.6494392097908843, 12);
  sqcRYGate(q, -1.0371458005651388, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.1368039399656586, 13);
  sqcRYGate(q, -0.39772476389576955, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.09581494562490178, 13);
  sqcRYGate(q, -0.8833426502156145, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.9001763946553885, 14);
  sqcRYGate(q, 0.9141493185908126, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.0638777821912835, 14);
  sqcRYGate(q, -0.8627755853510995, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.9114112683132407, 0);
  sqcRYGate(q, 2.1665396314556036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9576989752587166, 0);
  sqcRYGate(q, 2.4506103580485488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0161378572386237, 1);
  sqcRYGate(q, -2.6717062364849693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2477976656332732, 1);
  sqcRYGate(q, -0.6234698682256816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6895762129417387, 2);
  sqcRYGate(q, -1.685474517448676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.141545463526639, 2);
  sqcRYGate(q, 0.1656745438269459, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.202958685655304, 3);
  sqcRYGate(q, -2.540941609124959, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.020107396911472, 3);
  sqcRYGate(q, -0.009977585792645464, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0515869473262973, 4);
  sqcRYGate(q, 0.23554787627356877, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0647259342401942, 4);
  sqcRYGate(q, -3.1135328453780984, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6165795809989163, 5);
  sqcRYGate(q, 0.7571519879734847, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.127495392575855, 5);
  sqcRYGate(q, 1.600460366966077, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.062175025089963046, 6);
  sqcRYGate(q, -1.6496092045847446, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2176092936875335, 6);
  sqcRYGate(q, -0.0009090341474009326, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6556288751613562, 7);
  sqcRYGate(q, -1.3805413586507103, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.020863543517365635, 7);
  sqcRYGate(q, 1.6443615275693473, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.3667141190371275, 8);
  sqcRYGate(q, -1.5413498839846635, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7287895710810943, 8);
  sqcRYGate(q, -1.0106812590104681, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6002009511705297, 9);
  sqcRYGate(q, 0.5519395788574482, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.141004929057874, 9);
  sqcRYGate(q, -2.5657299951320245, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.34820461784833145, 10);
  sqcRYGate(q, 1.5530908913986856, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.607734266892562, 10);
  sqcRYGate(q, -0.165361231786008, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.1188961757845564, 11);
  sqcRYGate(q, -2.9474903119834153, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.4793003715695354, 11);
  sqcRYGate(q, -0.40791601131057825, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.7505264542835574, 12);
  sqcRYGate(q, 1.5886660194266262, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.0550291502791116, 12);
  sqcRYGate(q, -3.1044865452395003, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 2.7880651028160504, 13);
  sqcRYGate(q, 1.0112656538540516, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.27999729195724454, 13);
  sqcRYGate(q, -0.15841742770386524, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.2780466365228423, 14);
  sqcRYGate(q, -1.2172734721735914, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.0953242947140254, 14);
  sqcRYGate(q, -2.9793487153013185, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.5858784068981739, 0);
  sqcRYGate(q, -0.7896737667983506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.820818036847375, 0);
  sqcRYGate(q, -2.9864856389599326, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7043710903308216, 1);
  sqcRYGate(q, 0.31390638190658926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.930258774509052, 1);
  sqcRYGate(q, -2.168988522165675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4425335358624505, 2);
  sqcRYGate(q, 2.8158256732866627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.001422224996764, 2);
  sqcRYGate(q, -2.930997239288209, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2952837899951275, 3);
  sqcRYGate(q, 0.5543250200402294, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.21044658834286606, 3);
  sqcRYGate(q, -2.2405380262396397, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0806828199939418, 4);
  sqcRYGate(q, 0.25911216290824246, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.05258098500268016, 4);
  sqcRYGate(q, 0.06500428200890643, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.797702422684202, 5);
  sqcRYGate(q, -1.2220322875796583, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1335805893760247, 5);
  sqcRYGate(q, -3.1232819152871087, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6604605803581227, 6);
  sqcRYGate(q, -1.4444870519712996, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3292562282087435, 6);
  sqcRYGate(q, 0.16209844126454917, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.12940434544847967, 7);
  sqcRYGate(q, 0.7473136790374308, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.22945317179801705, 7);
  sqcRYGate(q, 0.013571275574196578, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.5927350850607648, 8);
  sqcRYGate(q, -1.1237446697844389, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.863981537949524, 8);
  sqcRYGate(q, 1.77137289354088, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.903020474369312, 9);
  sqcRYGate(q, 1.545642273864801, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.347340574051426, 9);
  sqcRYGate(q, -1.035496426981042, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.0800032549383456, 10);
  sqcRYGate(q, 2.38574548306832, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.1414705876194122, 10);
  sqcRYGate(q, 8.937181917811898e-05, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.2752548739273735, 11);
  sqcRYGate(q, 1.5357528053753757, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.8004082752860355, 11);
  sqcRYGate(q, 0.18843845157503125, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.1925920133533356, 12);
  sqcRYGate(q, 0.72735445669319, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 9.658723000338654e-05, 12);
  sqcRYGate(q, -3.1237663273629637, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -3.102120319342614, 13);
  sqcRYGate(q, 2.97487413239952, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.4950448527134155, 13);
  sqcRYGate(q, 2.8773477986538087, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.062535055063064, 14);
  sqcRYGate(q, -1.1900264563523726, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.7195815541840513, 14);
  sqcRYGate(q, -3.08546841897965, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.440468001681647, 0);
  sqcRYGate(q, 1.4528830685038645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03921285603921287, 0);
  sqcRYGate(q, 0.391501184628613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2004239031916217, 1);
  sqcRYGate(q, 0.2716602277092309, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4328936399092127, 1);
  sqcRYGate(q, -3.0400638000756244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6475594868155875, 2);
  sqcRYGate(q, -1.645271273692293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.002060554245978286, 2);
  sqcRYGate(q, 5.7991484957759843e-05, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4282218625671224, 3);
  sqcRYGate(q, 1.9968539422494704, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9145781293033934, 3);
  sqcRYGate(q, 0.741647951424385, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.048665126308018, 4);
  sqcRYGate(q, 2.1780551528902117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6402343340931465, 4);
  sqcRYGate(q, 2.672276931315815, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8819406345406469, 5);
  sqcRYGate(q, -0.5497886730486634, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1220761822889913, 5);
  sqcRYGate(q, -0.033459014253203155, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1907910406057964, 6);
  sqcRYGate(q, 2.8980913676052613, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1392077321614122, 6);
  sqcRYGate(q, -0.9499114261554014, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5495985062330508, 7);
  sqcRYGate(q, 1.833138562751897, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.6108847080064033, 7);
  sqcRYGate(q, -2.7401738126459194, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.7424448743479357, 8);
  sqcRYGate(q, 1.5667389276289938, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7981933430366652, 8);
  sqcRYGate(q, -0.1618094062826822, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5698119530336028, 9);
  sqcRYGate(q, 1.068404376475538, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.99108597734657, 9);
  sqcRYGate(q, -0.9998907889730058, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.9212967700703323, 10);
  sqcRYGate(q, -0.15913560612680033, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.079956227777141, 10);
  sqcRYGate(q, -0.008141050962762186, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9085812855267051, 11);
  sqcRYGate(q, 2.735088096382405, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.7681007043565407, 11);
  sqcRYGate(q, -0.13968819176435954, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.7810751246684695, 12);
  sqcRYGate(q, 2.61579799085451, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.0036492038733602072, 12);
  sqcRYGate(q, 3.124812594961891, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.6975063115939083, 13);
  sqcRYGate(q, -0.2689999618670882, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.688824123030892, 13);
  sqcRYGate(q, 2.6913888272634052, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.6309656192759183, 14);
  sqcRYGate(q, 2.068144969254233, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.07588017985079783, 14);
  sqcRYGate(q, -0.18754803548262164, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.7428950846888723, 0);
  sqcRYGate(q, 0.5744809563486976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.12624405941071, 0);
  sqcRYGate(q, -2.641886972112766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.997329544280519, 1);
  sqcRYGate(q, 2.8254359817091173, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6831283355944566, 1);
  sqcRYGate(q, 2.583331314046957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.006989721367142495, 2);
  sqcRYGate(q, -1.8311179749710362, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9717505579910739, 2);
  sqcRYGate(q, 0.8238812127546673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2430769843312115, 3);
  sqcRYGate(q, 0.3425607721340116, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.22145190764755593, 3);
  sqcRYGate(q, 3.074613858884339, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7795958915125123, 4);
  sqcRYGate(q, 2.3324646152035573, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.056700715209832, 4);
  sqcRYGate(q, -0.15911918613455653, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.795025192315256, 5);
  sqcRYGate(q, -1.5037293539501453, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3646811439109179, 5);
  sqcRYGate(q, 2.9696186017594375, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4982340015735867, 6);
  sqcRYGate(q, 1.4095807526857698, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.113090479004464, 6);
  sqcRYGate(q, -3.1414596789608487, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2947074965006635, 7);
  sqcRYGate(q, -1.5730911360869733, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 2.950119805902983, 7);
  sqcRYGate(q, -0.0966661632039818, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.519169079680431, 8);
  sqcRYGate(q, -1.5277450430073274, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6383457716425626, 8);
  sqcRYGate(q, 1.062662431395922, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.7667572003740695, 9);
  sqcRYGate(q, 2.8108837603990624, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.10356140546176, 9);
  sqcRYGate(q, -0.01153903836274437, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5260732406753676, 10);
  sqcRYGate(q, -1.488428962521687, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.011981056370426124, 10);
  sqcRYGate(q, 2.9378134022208013, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5176755445693288, 11);
  sqcRYGate(q, 1.7700929922061912, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.6756807143510895, 11);
  sqcRYGate(q, 3.0002761446179744, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.8918580885820326, 12);
  sqcRYGate(q, -1.2593623867212889, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 3.088037349923778, 12);
  sqcRYGate(q, 0.24803439920336603, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.530170307996848, 13);
  sqcRYGate(q, 1.0596463935306921, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.6782444030151433, 13);
  sqcRYGate(q, -0.11018201244361504, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.3977450654303954, 14);
  sqcRYGate(q, -2.8000818833446557, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.5013463091194663, 14);
  sqcRYGate(q, -0.7691281717275915, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.3053297361968488, 0);
  sqcRYGate(q, 2.803805964110851, 1);
  sqcRYGate(q, -3.112326333242281, 2);
  sqcRYGate(q, -2.3654173102378, 3);
  sqcRYGate(q, -3.013470443062503, 4);
  sqcRYGate(q, 0.2614651543673361, 5);
  sqcRYGate(q, 3.0629865556314324, 6);
  sqcRYGate(q, -2.8240198521653976, 7);
  sqcRYGate(q, -3.1015241097949806, 8);
  sqcRYGate(q, 1.113848816512702, 9);
  sqcRYGate(q, -3.0879943584117546, 10);
  sqcRYGate(q, -0.5888194257142745, 11);
  sqcRYGate(q, 3.1146177910823454, 12);
  sqcRYGate(q, 0.2652472421679697, 13);
  sqcRYGate(q, 1.615559954357348, 14);
  sqcRYGate(q, 2.79354515721633, 15);

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
