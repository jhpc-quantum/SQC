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

  sqcRYGate(q, -0.5392283489678, 0);
  sqcRZGate(q, -1.132931876619705, 0);
  sqcRYGate(q, 1.307039705505506, 1);
  sqcRZGate(q, 2.6998330567827438, 1);
  sqcRYGate(q, -3.1365268318006847, 2);
  sqcRZGate(q, 0.21283145562433062, 2);
  sqcRYGate(q, 0.18818556088356964, 3);
  sqcRZGate(q, 0.6745692172104306, 3);
  sqcRYGate(q, 0.5738670968811699, 4);
  sqcRZGate(q, 0.41691559506328346, 4);
  sqcRYGate(q, -3.081329730958826, 5);
  sqcRZGate(q, 1.4330043889146813, 5);
  sqcRYGate(q, 3.120900569011605, 6);
  sqcRZGate(q, 3.1031547453152073, 6);
  sqcRYGate(q, 2.866404528882417, 7);
  sqcRZGate(q, -0.06524588976770752, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.2670132736500905, 0);
  sqcRZGate(q, 2.484080298444147, 0);
  sqcRYGate(q, 0.9110597077165723, 1);
  sqcRZGate(q, -0.7434846550665306, 1);
  sqcRYGate(q, -0.0018201310095845968, 2);
  sqcRZGate(q, 1.549903481469836, 2);
  sqcRYGate(q, 2.3060646294092373, 3);
  sqcRZGate(q, -0.3150079555239667, 3);
  sqcRYGate(q, -1.9754995112813392, 4);
  sqcRZGate(q, 0.5942303351853111, 4);
  sqcRYGate(q, 2.2162369112399505, 5);
  sqcRZGate(q, -2.0718113031960543, 5);
  sqcRYGate(q, -2.522917369947131, 6);
  sqcRZGate(q, 2.4833600253831016, 6);
  sqcRYGate(q, 1.9709347090638842, 7);
  sqcRZGate(q, -1.6582417191540593, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.5993417819157747, 0);
  sqcRZGate(q, 0.4954679612503433, 0);
  sqcRYGate(q, 2.0775158562390907, 1);
  sqcRZGate(q, -1.113494259490528, 1);
  sqcRYGate(q, -3.1214644428015754, 2);
  sqcRZGate(q, -2.5265296835029485, 2);
  sqcRYGate(q, 2.73065909220493, 3);
  sqcRZGate(q, 0.8665977053076633, 3);
  sqcRYGate(q, -2.9738083952529473, 4);
  sqcRZGate(q, -2.364239156957256, 4);
  sqcRYGate(q, -0.07228557663628976, 5);
  sqcRZGate(q, -3.0523621470799713, 5);
  sqcRYGate(q, 3.053040853245355, 6);
  sqcRZGate(q, 2.6191284947113, 6);
  sqcRYGate(q, 0.009380447336314391, 7);
  sqcRZGate(q, -1.6049328984880795, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.8903141096483234, 0);
  sqcRZGate(q, -0.7127560388394585, 0);
  sqcRYGate(q, 3.1139623901653457, 1);
  sqcRZGate(q, -0.738705019936817, 1);
  sqcRYGate(q, -3.1395747242030168, 2);
  sqcRZGate(q, -2.880737140577714, 2);
  sqcRYGate(q, -2.545861983153994, 3);
  sqcRZGate(q, 2.0269441899042357, 3);
  sqcRYGate(q, -0.2755751290642588, 4);
  sqcRZGate(q, -0.8673803743161103, 4);
  sqcRYGate(q, -1.2213365688524371, 5);
  sqcRZGate(q, -1.905066615415024, 5);
  sqcRYGate(q, 2.135935921858396, 6);
  sqcRZGate(q, 3.0026936321590663, 6);
  sqcRYGate(q, 1.29423160900041, 7);
  sqcRZGate(q, -1.680533650062928, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7705917767889816, 0);
  sqcRZGate(q, 2.8688872327902377, 0);
  sqcRYGate(q, -3.077923595197252, 1);
  sqcRZGate(q, -3.0491060541859856, 1);
  sqcRYGate(q, 3.114334757497072, 2);
  sqcRZGate(q, 2.9965743594614604, 2);
  sqcRYGate(q, -0.9433205235672713, 3);
  sqcRZGate(q, -1.5456756572944683, 3);
  sqcRYGate(q, -1.7085755076946514, 4);
  sqcRZGate(q, -2.0866758094739937, 4);
  sqcRYGate(q, -0.18369857847064155, 5);
  sqcRZGate(q, -0.38574695082936433, 5);
  sqcRYGate(q, 3.0574031906094863, 6);
  sqcRZGate(q, 2.2697176131846453, 6);
  sqcRYGate(q, 1.5656375586054905, 7);
  sqcRZGate(q, -2.1059005887017594, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.907520759782189, 0);
  sqcRZGate(q, 1.5744364422460464, 0);
  sqcRYGate(q, -2.6920466487250096, 1);
  sqcRZGate(q, -0.6374114634195632, 1);
  sqcRYGate(q, -0.0018339509410416502, 2);
  sqcRZGate(q, -2.9517613125378253, 2);
  sqcRYGate(q, -1.0527301510099556, 3);
  sqcRZGate(q, -0.6165383919384597, 3);
  sqcRYGate(q, -2.720505580250019, 4);
  sqcRZGate(q, -2.3740301727440882, 4);
  sqcRYGate(q, -0.4190220885061352, 5);
  sqcRZGate(q, -1.5516317335174703, 5);
  sqcRYGate(q, 2.6812597413067727, 6);
  sqcRZGate(q, 3.021628148374778, 6);
  sqcRYGate(q, 1.7951955312716708, 7);
  sqcRZGate(q, -2.115463893356739, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.1215807495269834, 0);
  sqcRZGate(q, 1.6714501877704895, 0);
  sqcRYGate(q, 2.801557228029829, 1);
  sqcRZGate(q, 2.7268966334517732, 1);
  sqcRYGate(q, 3.1412770176314635, 2);
  sqcRZGate(q, 1.8620177927059354, 2);
  sqcRYGate(q, -0.051396354608189476, 3);
  sqcRZGate(q, -0.06957285768937797, 3);
  sqcRYGate(q, 2.284089253398954, 4);
  sqcRZGate(q, 2.3470015578234453, 4);
  sqcRYGate(q, 2.738865189310672, 5);
  sqcRZGate(q, 1.0050598588587176, 5);
  sqcRYGate(q, -0.26164884322928383, 6);
  sqcRZGate(q, -1.880681705084766, 6);
  sqcRYGate(q, -2.671296266654199, 7);
  sqcRZGate(q, 2.7109347345760106, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.792303595866053, 0);
  sqcRZGate(q, -0.254338251508825, 0);
  sqcRYGate(q, -0.09415405713596225, 1);
  sqcRZGate(q, 2.8560547891025343, 1);
  sqcRYGate(q, 0.0023156198309699505, 2);
  sqcRZGate(q, 1.8827738329931618, 2);
  sqcRYGate(q, -1.80689533773825, 3);
  sqcRZGate(q, 1.0669469150603492, 3);
  sqcRYGate(q, -2.438961078836575, 4);
  sqcRZGate(q, 3.041075599694192, 4);
  sqcRYGate(q, -1.6757396479808069, 5);
  sqcRZGate(q, -1.0472792091373642, 5);
  sqcRYGate(q, 2.007217414649251, 6);
  sqcRZGate(q, 2.040745990734029, 6);
  sqcRYGate(q, -0.2636637077088775, 7);
  sqcRZGate(q, -0.05963555488131554, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.725849383240446, 0);
  sqcRZGate(q, -0.585813524834486, 0);
  sqcRYGate(q, -0.8810350496281316, 1);
  sqcRZGate(q, 1.0403792904945623, 1);
  sqcRYGate(q, 0.23080474339989157, 2);
  sqcRZGate(q, -2.332772330933734, 2);
  sqcRYGate(q, 1.9574253888855426, 3);
  sqcRZGate(q, -1.5967268664914114, 3);
  sqcRYGate(q, -0.11365535530959292, 4);
  sqcRZGate(q, -1.6654463326520965, 4);
  sqcRYGate(q, -0.19552938788811236, 5);
  sqcRZGate(q, -0.12300040636773907, 5);
  sqcRYGate(q, -1.8888207636919054, 6);
  sqcRZGate(q, -1.6856871621527272, 6);
  sqcRYGate(q, 0.17097160831644942, 7);
  sqcRZGate(q, -2.429929601352623, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.7586844022867627, 0);
  sqcRZGate(q, 2.0527956090831845, 0);
  sqcRYGate(q, -0.12925422178242663, 1);
  sqcRZGate(q, -1.8065532078639785, 1);
  sqcRYGate(q, -1.641637570091923, 2);
  sqcRZGate(q, 1.9764755460007715, 2);
  sqcRYGate(q, 0.021714667203860394, 3);
  sqcRZGate(q, -1.6531923911787023, 3);
  sqcRYGate(q, 2.732960905326921, 4);
  sqcRZGate(q, 1.2975092909738044, 4);
  sqcRYGate(q, -0.29660209262820914, 5);
  sqcRZGate(q, -2.077416184501545, 5);
  sqcRYGate(q, -1.8846559394805917, 6);
  sqcRZGate(q, -1.9739524772066177, 6);
  sqcRYGate(q, 2.828067707729447, 7);
  sqcRZGate(q, 0.5918079461629137, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.7918269120866857, 0);
  sqcRZGate(q, 1.7968018600532416, 0);
  sqcRYGate(q, -0.06925949969450206, 1);
  sqcRZGate(q, -1.7955593443452262, 1);
  sqcRYGate(q, -0.15885873839302198, 2);
  sqcRZGate(q, 1.636541893273297, 2);
  sqcRYGate(q, -0.7290458646564204, 3);
  sqcRZGate(q, -0.19529883157212946, 3);
  sqcRYGate(q, 2.8571135773823766, 4);
  sqcRZGate(q, -1.8474427672206382, 4);
  sqcRYGate(q, -1.5971727458693994, 5);
  sqcRZGate(q, -3.07351185166721, 5);
  sqcRYGate(q, -0.21380751117656516, 6);
  sqcRZGate(q, 1.4657189767990568, 6);
  sqcRYGate(q, -0.19006573055992793, 7);
  sqcRZGate(q, 2.253455566596531, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.9431421267616812, 0);
  sqcRZGate(q, -3.061746637160434, 0);
  sqcRYGate(q, 3.016497284124131, 1);
  sqcRZGate(q, 0.7444780899470298, 1);
  sqcRYGate(q, 3.132979098645227, 2);
  sqcRZGate(q, -1.324370597040688, 2);
  sqcRYGate(q, -0.031071560556076974, 3);
  sqcRZGate(q, -2.882132680956611, 3);
  sqcRYGate(q, -0.002662323627626079, 4);
  sqcRZGate(q, 1.5507346233617048, 4);
  sqcRYGate(q, -1.9321850220296146, 5);
  sqcRZGate(q, 2.9647290524527325, 5);
  sqcRYGate(q, 2.816963314654731, 6);
  sqcRZGate(q, -2.978793566471418, 6);
  sqcRYGate(q, -0.05485797353993326, 7);
  sqcRZGate(q, -0.3053611769278732, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0152295296616605, 0);
  sqcRZGate(q, -1.3231115816592642, 0);
  sqcRYGate(q, 0.11530395512038528, 1);
  sqcRZGate(q, -3.097625714187328, 1);
  sqcRYGate(q, 2.573779798564229, 2);
  sqcRZGate(q, -2.2485828928956915, 2);
  sqcRYGate(q, 0.7666441520355312, 3);
  sqcRZGate(q, -0.6539729881342112, 3);
  sqcRYGate(q, -2.39910331792306, 4);
  sqcRZGate(q, 2.678410483302462, 4);
  sqcRYGate(q, -0.7288822796269336, 5);
  sqcRZGate(q, -0.2024839648138279, 5);
  sqcRYGate(q, 3.131421596646616, 6);
  sqcRZGate(q, -3.1304796049412853, 6);
  sqcRYGate(q, 2.7835762584500685, 7);
  sqcRZGate(q, 2.0930329201328988, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.849767229073978, 0);
  sqcRZGate(q, -3.0349598636850414, 0);
  sqcRYGate(q, 0.9297236687017081, 1);
  sqcRZGate(q, 2.855217811239051, 1);
  sqcRYGate(q, -2.848802392250422, 2);
  sqcRZGate(q, -2.6431867948732495, 2);
  sqcRYGate(q, -0.0021907349852657854, 3);
  sqcRZGate(q, -1.829903334511243, 3);
  sqcRYGate(q, -2.9427813542044334, 4);
  sqcRZGate(q, 0.30498167185279457, 4);
  sqcRYGate(q, 2.3878500901072095, 5);
  sqcRZGate(q, -2.053754586306011, 5);
  sqcRYGate(q, -2.4962266411209995, 6);
  sqcRZGate(q, 3.0703523448923833, 6);
  sqcRYGate(q, -2.9497686172347892, 7);
  sqcRZGate(q, 2.6370214213643166, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.1130266536227063, 0);
  sqcRZGate(q, -2.9616156185303995, 0);
  sqcRYGate(q, 0.954021536092335, 1);
  sqcRZGate(q, 0.13220608489522245, 1);
  sqcRYGate(q, 1.706753498565463, 2);
  sqcRZGate(q, 3.0035798991309726, 2);
  sqcRYGate(q, 0.03870110253466707, 3);
  sqcRZGate(q, 1.4660421404200241, 3);
  sqcRYGate(q, -0.3722696799876496, 4);
  sqcRZGate(q, -1.789522493207092, 4);
  sqcRYGate(q, -3.08793875196851, 5);
  sqcRZGate(q, -1.458568395090471, 5);
  sqcRYGate(q, -0.511376598231025, 6);
  sqcRZGate(q, -2.7229617513781683, 6);
  sqcRYGate(q, -2.1330189365536394, 7);
  sqcRZGate(q, 3.0415627993532084, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.010000666823994, 0);
  sqcRZGate(q, -1.809283799353599, 0);
  sqcRYGate(q, -1.9819922289997534, 1);
  sqcRZGate(q, -2.5659328164903323, 1);
  sqcRYGate(q, 3.11318948602898, 2);
  sqcRZGate(q, 2.928332796761022, 2);
  sqcRYGate(q, -0.00044050514388730355, 3);
  sqcRZGate(q, -3.0249811790132206, 3);
  sqcRYGate(q, -2.0508460283357666, 4);
  sqcRZGate(q, 1.3661476361664389, 4);
  sqcRYGate(q, 1.0631502788185498, 5);
  sqcRZGate(q, -2.0678451940902587, 5);
  sqcRYGate(q, -2.253082623335257, 6);
  sqcRZGate(q, -1.473446647930037, 6);
  sqcRYGate(q, 1.5521410991526088, 7);
  sqcRZGate(q, -0.7590651808125491, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.4714193340170603, 0);
  sqcRZGate(q, 2.136451562811117, 0);
  sqcRYGate(q, -2.825005205742761, 1);
  sqcRZGate(q, 1.3856055780855911, 1);
  sqcRYGate(q, 0.7042129980423616, 2);
  sqcRZGate(q, 2.4593286239127177, 2);
  sqcRYGate(q, 3.136411653193644, 3);
  sqcRZGate(q, 2.7546354454848854, 3);
  sqcRYGate(q, -2.814481486024055, 4);
  sqcRZGate(q, -2.5033429488456034, 4);
  sqcRYGate(q, 0.013122383959401096, 5);
  sqcRZGate(q, 1.1876860501136237, 5);
  sqcRYGate(q, 1.3644020398509777, 6);
  sqcRZGate(q, -1.8207820889706456, 6);
  sqcRYGate(q, 2.531991759710282, 7);
  sqcRZGate(q, -2.5193341434321073, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6900633016298845, 0);
  sqcRZGate(q, -1.5476785874228831, 0);
  sqcRYGate(q, -0.8608389237418921, 1);
  sqcRZGate(q, -0.5998342456372117, 1);
  sqcRYGate(q, 3.103844574184745, 2);
  sqcRZGate(q, 2.4558386189648203, 2);
  sqcRYGate(q, 3.1402976670113163, 3);
  sqcRZGate(q, -0.5943839980460776, 3);
  sqcRYGate(q, -2.189961708860192, 4);
  sqcRZGate(q, 1.099688967676047, 4);
  sqcRYGate(q, 1.8566380210437066, 5);
  sqcRZGate(q, 1.006192415622387, 5);
  sqcRYGate(q, -1.4879506916328606, 6);
  sqcRZGate(q, 2.258373548470434, 6);
  sqcRYGate(q, -0.03427517266756919, 7);
  sqcRZGate(q, -1.7668483774827786, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.2370019906719385, 0);
  sqcRZGate(q, 0.3085127927394043, 0);
  sqcRYGate(q, 0.581519555110943, 1);
  sqcRZGate(q, -0.2953255063791692, 1);
  sqcRYGate(q, 3.103539326296491, 2);
  sqcRZGate(q, -1.3253325224749604, 2);
  sqcRYGate(q, -3.1412451629587066, 3);
  sqcRZGate(q, -0.48622681048543204, 3);
  sqcRYGate(q, 0.2616896949859573, 4);
  sqcRZGate(q, 1.8217428671246694, 4);
  sqcRYGate(q, -2.996693000498669, 5);
  sqcRZGate(q, -2.4660366509905516, 5);
  sqcRYGate(q, 0.008994034915565052, 6);
  sqcRZGate(q, 2.1591979169964253, 6);
  sqcRYGate(q, -2.48003700441347, 7);
  sqcRZGate(q, -3.08256168501476, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.0556346429132555, 0);
  sqcRZGate(q, 0.9586611350550919, 0);
  sqcRYGate(q, 1.845798670497868, 1);
  sqcRZGate(q, -2.160086378058267, 1);
  sqcRYGate(q, 0.1373426938621387, 2);
  sqcRZGate(q, 1.5094615257538182, 2);
  sqcRYGate(q, -0.004792872702388706, 3);
  sqcRZGate(q, 1.6411095062296353, 3);
  sqcRYGate(q, -1.8842275690097372, 4);
  sqcRZGate(q, -1.9491400569253514, 4);
  sqcRYGate(q, 1.1665054937199013, 5);
  sqcRZGate(q, -3.077856089508382, 5);
  sqcRYGate(q, 0.540398746440338, 6);
  sqcRZGate(q, -0.10436328372903064, 6);
  sqcRYGate(q, 1.7677002565475288, 7);
  sqcRZGate(q, 2.061336471198516, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4796203009329991, 0);
  sqcRZGate(q, -2.9590249839745995, 0);
  sqcRYGate(q, -2.9926068889262414, 1);
  sqcRZGate(q, 0.3595587631384342, 1);
  sqcRYGate(q, 0.28696026438532024, 2);
  sqcRZGate(q, -1.1530191648991328, 2);
  sqcRYGate(q, -0.027577173559425374, 3);
  sqcRZGate(q, 2.638044112040932, 3);
  sqcRYGate(q, -0.0007371547972851998, 4);
  sqcRZGate(q, -1.3908297397340352, 4);
  sqcRYGate(q, 1.3100753061672838, 5);
  sqcRZGate(q, -0.16922419587446225, 5);
  sqcRYGate(q, 0.5010448026234077, 6);
  sqcRZGate(q, -1.870994529089921, 6);
  sqcRYGate(q, -2.4830181925252623, 7);
  sqcRZGate(q, -1.7248524147422821, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0484946209748123, 0);
  sqcRZGate(q, 0.35999781563123406, 0);
  sqcRYGate(q, 2.1164732379574493, 1);
  sqcRZGate(q, 1.3465326844713843, 1);
  sqcRYGate(q, -2.7634855323679024, 2);
  sqcRZGate(q, -2.7458280418694327, 2);
  sqcRYGate(q, -0.02394019791969804, 3);
  sqcRZGate(q, 1.3815782931500336, 3);
  sqcRYGate(q, 0.2268494499090705, 4);
  sqcRZGate(q, 1.4494723489589745, 4);
  sqcRYGate(q, -1.007050767981882, 5);
  sqcRZGate(q, -2.984011057384018, 5);
  sqcRYGate(q, -0.810259852315481, 6);
  sqcRZGate(q, -0.7793440985227398, 6);
  sqcRYGate(q, 0.07797219767911301, 7);
  sqcRZGate(q, -2.9664108748334566, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.0544132382680793, 0);
  sqcRZGate(q, -0.3511520744026946, 0);
  sqcRYGate(q, -0.010356503687505736, 1);
  sqcRZGate(q, -1.6853619027613154, 1);
  sqcRYGate(q, -3.1262958562141128, 2);
  sqcRZGate(q, 0.47581409274495334, 2);
  sqcRYGate(q, -3.1263057459680432, 3);
  sqcRZGate(q, -1.8404527742671652, 3);
  sqcRYGate(q, 2.0495200593514378, 4);
  sqcRZGate(q, -2.276294210365257, 4);
  sqcRYGate(q, 1.674676912028529, 5);
  sqcRZGate(q, 2.714473982664487, 5);
  sqcRYGate(q, 0.26270889598611435, 6);
  sqcRZGate(q, -2.4680611212933687, 6);
  sqcRYGate(q, 3.095562873798902, 7);
  sqcRZGate(q, 2.492265150098224, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.180002289135631, 0);
  sqcRZGate(q, 1.7757501668058913, 0);
  sqcRYGate(q, 0.27972409382051544, 1);
  sqcRZGate(q, -2.308613984956786, 1);
  sqcRYGate(q, -0.6201595842278153, 2);
  sqcRZGate(q, 0.06861181928058677, 2);
  sqcRYGate(q, 0.5115461903897822, 3);
  sqcRZGate(q, -1.0951415245281773, 3);
  sqcRYGate(q, 3.106080784595415, 4);
  sqcRZGate(q, 0.5958844652536122, 4);
  sqcRYGate(q, -0.12519316699956565, 5);
  sqcRZGate(q, 0.45209800757209795, 5);
  sqcRYGate(q, 0.7312382901317779, 6);
  sqcRZGate(q, -2.8609767225870786, 6);
  sqcRYGate(q, 0.7248369253043432, 7);
  sqcRZGate(q, -3.0957202925871283, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.252321251941754, 0);
  sqcRZGate(q, 1.967084911699473, 0);
  sqcRYGate(q, 3.011728090246542, 1);
  sqcRZGate(q, 1.2668369532563064, 1);
  sqcRYGate(q, -3.1408929059095474, 2);
  sqcRZGate(q, 2.738973334116735, 2);
  sqcRYGate(q, -3.131530658381802, 3);
  sqcRZGate(q, 2.085075102619589, 3);
  sqcRYGate(q, -0.173069858025128, 4);
  sqcRZGate(q, -2.7028809285538773, 4);
  sqcRYGate(q, 0.7179904406867648, 5);
  sqcRZGate(q, -0.19140881888446237, 5);
  sqcRYGate(q, 3.018332813334949, 6);
  sqcRZGate(q, -2.473806787312979, 6);
  sqcRYGate(q, 0.7367501233290907, 7);
  sqcRZGate(q, 3.1216929833900924, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.4663271091957986, 0);
  sqcRZGate(q, -2.9184138687060095, 0);
  sqcRYGate(q, -1.2754079320201601, 1);
  sqcRZGate(q, -0.9913068341294099, 1);
  sqcRYGate(q, 2.9829907534963813, 2);
  sqcRZGate(q, 0.9072994366365407, 2);
  sqcRYGate(q, -0.500427203336279, 3);
  sqcRZGate(q, -1.6168003327713327, 3);
  sqcRYGate(q, 2.890624630652177, 4);
  sqcRZGate(q, 0.6614285970578849, 4);
  sqcRYGate(q, -0.1290385894420603, 5);
  sqcRZGate(q, -2.813196799238845, 5);
  sqcRYGate(q, -1.7706529456227273, 6);
  sqcRZGate(q, -2.7642882180379424, 6);
  sqcRYGate(q, -1.6136448097792766, 7);
  sqcRZGate(q, 2.164570707187633, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.4611299766533676, 0);
  sqcRZGate(q, 1.1948692936893432, 0);
  sqcRYGate(q, 1.3476747101259388, 1);
  sqcRZGate(q, -1.6054339455090787, 1);
  sqcRYGate(q, 1.6444102881942912, 2);
  sqcRZGate(q, 1.235740885075187, 2);
  sqcRYGate(q, -3.118104563815975, 3);
  sqcRZGate(q, -1.6767748143920347, 3);
  sqcRYGate(q, 2.734424702329087, 4);
  sqcRZGate(q, -0.5825117388420608, 4);
  sqcRYGate(q, 1.8112846037353914, 5);
  sqcRZGate(q, -0.15296490238183133, 5);
  sqcRYGate(q, -3.125245883285105, 6);
  sqcRZGate(q, -2.8243214935423975, 6);
  sqcRYGate(q, -2.0706220161718605, 7);
  sqcRZGate(q, 1.2006113650606371, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.13917778641116782, 0);
  sqcRZGate(q, 2.7539156366217914, 0);
  sqcRYGate(q, 2.222588980330481, 1);
  sqcRZGate(q, 0.534839399413821, 1);
  sqcRYGate(q, -3.0517918840741673, 2);
  sqcRZGate(q, -0.6933821950357074, 2);
  sqcRYGate(q, -3.139926874913952, 3);
  sqcRZGate(q, -1.9834019426869007, 3);
  sqcRYGate(q, 3.117280142570029, 4);
  sqcRZGate(q, -1.1853679106779493, 4);
  sqcRYGate(q, -0.08965861867615468, 5);
  sqcRZGate(q, 0.15216022508788662, 5);
  sqcRYGate(q, -0.1797533448956516, 6);
  sqcRZGate(q, -1.6046414028057292, 6);
  sqcRYGate(q, 2.530395905530213, 7);
  sqcRZGate(q, -2.943542517421176, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.963791642861155, 0);
  sqcRZGate(q, -1.3514982819775834, 0);
  sqcRYGate(q, 2.803436169903049, 1);
  sqcRZGate(q, -2.456873838142766, 1);
  sqcRYGate(q, 1.019925816827161, 2);
  sqcRZGate(q, -1.436074520828363, 2);
  sqcRYGate(q, -3.126737297022233, 3);
  sqcRZGate(q, -0.07760107668278149, 3);
  sqcRYGate(q, -2.253611652570017, 4);
  sqcRZGate(q, -1.8552787820849592, 4);
  sqcRYGate(q, 1.9601962008298415, 5);
  sqcRZGate(q, 1.9519589209299877, 5);
  sqcRYGate(q, -3.0347897150760024, 6);
  sqcRZGate(q, -2.953788232151517, 6);
  sqcRYGate(q, 2.78894360292669, 7);
  sqcRZGate(q, 2.6346227236921815, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.6994877529064127, 0);
  sqcRZGate(q, 2.7221961313852496, 0);
  sqcRYGate(q, 0.0019024660398061501, 1);
  sqcRZGate(q, -1.5703638755563225, 1);
  sqcRYGate(q, -2.608455713563892, 2);
  sqcRZGate(q, -0.17996701965896536, 2);
  sqcRYGate(q, 3.1015632398311275, 3);
  sqcRZGate(q, -1.3337491324550237, 3);
  sqcRYGate(q, 0.7923799586320044, 4);
  sqcRZGate(q, -1.3994161258333042, 4);
  sqcRYGate(q, -0.0034799676252429703, 5);
  sqcRZGate(q, 0.5007563891680069, 5);
  sqcRYGate(q, 2.2622305636287243, 6);
  sqcRZGate(q, -2.7887650533632984, 6);
  sqcRYGate(q, 2.035219617653343, 7);
  sqcRZGate(q, 2.5629656280530924, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.9392898740960381, 0);
  sqcRZGate(q, -3.110892021367513, 0);
  sqcRYGate(q, -0.13095330831347862, 1);
  sqcRZGate(q, 0.5633843537242926, 1);
  sqcRYGate(q, -1.372846060573849, 2);
  sqcRZGate(q, 2.878529410383075, 2);
  sqcRYGate(q, 3.1036308560207475, 3);
  sqcRZGate(q, -2.2846540784028044, 3);
  sqcRYGate(q, 0.10603102417912384, 4);
  sqcRZGate(q, -0.3881625610810017, 4);
  sqcRYGate(q, -3.139126299218948, 5);
  sqcRZGate(q, 3.0998768853310317, 5);
  sqcRYGate(q, 0.2324338271899853, 6);
  sqcRZGate(q, -1.499314355688936, 6);
  sqcRYGate(q, -1.7106931836944996, 7);
  sqcRZGate(q, -0.2580504717494865, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5787113080790665, 0);
  sqcRZGate(q, 2.0073181509177322, 0);
  sqcRYGate(q, 0.9335916179646299, 1);
  sqcRZGate(q, -0.14394586183524716, 1);
  sqcRYGate(q, 2.6965690596765564, 2);
  sqcRZGate(q, 0.6895197585070231, 2);
  sqcRYGate(q, -0.05015209890602938, 3);
  sqcRZGate(q, 1.6817969350045556, 3);
  sqcRYGate(q, -1.5427826463931078, 4);
  sqcRZGate(q, 0.023703609115893087, 4);
  sqcRYGate(q, -2.2799927926421866, 5);
  sqcRZGate(q, 2.415695719793825, 5);
  sqcRYGate(q, -2.9637865997057378, 6);
  sqcRZGate(q, 2.653405732708186, 6);
  sqcRYGate(q, -2.349308697926522, 7);
  sqcRZGate(q, -0.015358442420793317, 7);

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
