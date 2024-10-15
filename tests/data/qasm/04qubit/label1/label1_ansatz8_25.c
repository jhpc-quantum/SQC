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

  sqcRYGate(q, -1.8766168741557891, 0);
  sqcRYGate(q, 0.8797247768713904, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.776138534188302, 0);
  sqcRYGate(q, 0.6889870294121461, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3342816674526095, 2);
  sqcRYGate(q, 3.084914727125668, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6308769188421133, 2);
  sqcRYGate(q, 1.795010656065184, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.160528945052546, 0);
  sqcRYGate(q, -1.135240999082294, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1295409124101827, 0);
  sqcRYGate(q, -1.2373533104522167, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4900741564720707, 1);
  sqcRYGate(q, -1.8016009286899293, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3298907217440883, 1);
  sqcRYGate(q, 1.630026409717059, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.101951471867935, 0);
  sqcRYGate(q, 2.2477639366624897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4415251208415516, 0);
  sqcRYGate(q, -1.3554813396606888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0193024080931234, 2);
  sqcRYGate(q, 0.02200842330949815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.149361060771101, 2);
  sqcRYGate(q, -2.849301379523777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4997823269241308, 0);
  sqcRYGate(q, 2.286135111329187, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.1958733494671261, 0);
  sqcRYGate(q, 1.1102927587893998, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7967341411711182, 1);
  sqcRYGate(q, -0.22770085089837477, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7553703831763876, 1);
  sqcRYGate(q, -0.04054426715053161, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6886210518399551, 0);
  sqcRYGate(q, -0.04604215957582596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3964447709303052, 0);
  sqcRYGate(q, 0.13885644593495214, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0480321372598693, 2);
  sqcRYGate(q, 1.928993177429377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8410542931004192, 2);
  sqcRYGate(q, 3.0106916574914457, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.272976627427633, 0);
  sqcRYGate(q, -1.531303927613492, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6300163619992736, 0);
  sqcRYGate(q, 0.9927150120199725, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.47507236770263983, 1);
  sqcRYGate(q, 0.6012569519557794, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.024048225225289, 1);
  sqcRYGate(q, -2.652431739609885, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4033320957731508, 0);
  sqcRYGate(q, -2.679869765170604, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8447971807356796, 0);
  sqcRYGate(q, 1.5838899001848574, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0143903575188586, 2);
  sqcRYGate(q, -2.407867811262392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.234868223321691, 2);
  sqcRYGate(q, 2.904074521166658, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5375843244452332, 0);
  sqcRYGate(q, -2.6634760149215797, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6532184508688181, 0);
  sqcRYGate(q, -0.6607337588313535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.20214468454912726, 1);
  sqcRYGate(q, -3.038317741366825, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1965485894443457, 1);
  sqcRYGate(q, 2.542262310493188, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9282644656825025, 0);
  sqcRYGate(q, 2.809331885140157, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.262762664229475, 0);
  sqcRYGate(q, -0.645374587292791, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2735328934172006, 2);
  sqcRYGate(q, 1.0484021928830156, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.302051779609949, 2);
  sqcRYGate(q, 0.5477430169557618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4472048919886529, 0);
  sqcRYGate(q, -1.4341944455244675, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3420118269015635, 0);
  sqcRYGate(q, -0.6550309801747405, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.42234349096756424, 1);
  sqcRYGate(q, 0.5878253564213517, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.41716069515884197, 1);
  sqcRYGate(q, 1.47843591181993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.014017937418553, 0);
  sqcRYGate(q, 0.37798846189071256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3785741476036338, 0);
  sqcRYGate(q, -0.18757900830911786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8216171907038128, 2);
  sqcRYGate(q, 1.5202838765600335, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8473603008531949, 2);
  sqcRYGate(q, -0.31509674178614056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5115800983990679, 0);
  sqcRYGate(q, 2.346082060212281, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2779384687070783, 0);
  sqcRYGate(q, 1.7194617151070393, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.935723181364371, 1);
  sqcRYGate(q, -0.15078155116862124, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.507823725110133, 1);
  sqcRYGate(q, 2.730847751689798, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2896219898357222, 0);
  sqcRYGate(q, 0.9776781098290553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4071012975194463, 0);
  sqcRYGate(q, -1.968883525006808, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.423491435960554, 2);
  sqcRYGate(q, 3.0081662660966138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7266493427353995, 2);
  sqcRYGate(q, -1.828861379302329, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4730034302326081, 0);
  sqcRYGate(q, -1.3698821819899578, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5616530812715381, 0);
  sqcRYGate(q, 0.3789552742727675, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6161593023864222, 1);
  sqcRYGate(q, -1.5029492446947117, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9414706315336638, 1);
  sqcRYGate(q, 0.026675843701800872, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4779090777074804, 0);
  sqcRYGate(q, -1.26042183223422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.905327733074186, 0);
  sqcRYGate(q, 3.0068599157042284, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.23658608980458953, 2);
  sqcRYGate(q, 2.7432321722420676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.359651185819175, 2);
  sqcRYGate(q, 0.1659782489585577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6553971233689424, 0);
  sqcRYGate(q, 3.1176963816109873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9456936316324445, 0);
  sqcRYGate(q, 0.016711878166737765, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8785930916909357, 1);
  sqcRYGate(q, 0.6942550464978687, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.31016472277620455, 1);
  sqcRYGate(q, 0.13752360474035652, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.113027244436358, 0);
  sqcRYGate(q, -1.7323299591244734, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.05337795899931397, 0);
  sqcRYGate(q, 0.1596955537160313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6126897667648894, 2);
  sqcRYGate(q, -3.017481564559703, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20065042986875445, 2);
  sqcRYGate(q, -1.9590086797135076, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1753110259587598, 0);
  sqcRYGate(q, -2.5250892147867807, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3462025143360492, 0);
  sqcRYGate(q, 1.2162034553092926, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9740749207708257, 1);
  sqcRYGate(q, -1.5920508302906002, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.270014441982668, 1);
  sqcRYGate(q, -2.6752202457232723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5013439933340402, 0);
  sqcRYGate(q, -2.0322254958742887, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2884549072463294, 0);
  sqcRYGate(q, 1.6483776921208966, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5597237909260973, 2);
  sqcRYGate(q, 1.1067033115041196, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1241288296710579, 2);
  sqcRYGate(q, -2.4260969551906677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1986482583840354, 0);
  sqcRYGate(q, 0.3156692033626995, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.01471033575435805, 0);
  sqcRYGate(q, 1.0004923669375514, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.40257861549395285, 1);
  sqcRYGate(q, -0.2764800465407715, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5870955186871485, 1);
  sqcRYGate(q, -1.9483040507223182, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4552887258099041, 0);
  sqcRYGate(q, -2.884296967101601, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6095765931782697, 0);
  sqcRYGate(q, 1.9567411836833184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5222292899877246, 2);
  sqcRYGate(q, 0.17441456116237308, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.653656192762158, 2);
  sqcRYGate(q, -0.12937314052965743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8443221870338458, 0);
  sqcRYGate(q, 2.221296468028738, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3428644438560093, 0);
  sqcRYGate(q, -1.0603323569786518, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5029129704702657, 1);
  sqcRYGate(q, 1.4693201092642196, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1636899381754995, 1);
  sqcRYGate(q, -2.57811664028916, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.69299556700711, 0);
  sqcRYGate(q, 0.42648469988734306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5250827631607295, 0);
  sqcRYGate(q, -1.248446515407661, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4228668194750274, 2);
  sqcRYGate(q, -0.30983857625922795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8560911408628433, 2);
  sqcRYGate(q, -1.2914066394217656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7979250547372283, 0);
  sqcRYGate(q, -2.7141921878503634, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2861417588202504, 0);
  sqcRYGate(q, 3.1410408951114617, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.178086077948813, 1);
  sqcRYGate(q, 2.725020377123081, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4609429275015824, 1);
  sqcRYGate(q, 1.216367079837875, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.103229475853829, 0);
  sqcRYGate(q, 2.8416065384833176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2704187159813123, 0);
  sqcRYGate(q, 3.082209066877473, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0301643697200067, 2);
  sqcRYGate(q, 0.008317770284504533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3773643894578713, 2);
  sqcRYGate(q, 1.378003528217322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20590764015941157, 0);
  sqcRYGate(q, -0.742842447411248, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11862776172557064, 0);
  sqcRYGate(q, 1.6680463969993502, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7965288883729418, 1);
  sqcRYGate(q, -2.495647075410906, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.023285618229734, 1);
  sqcRYGate(q, -0.7854990117478851, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8657067319784852, 0);
  sqcRYGate(q, -2.480979573944732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.35639023492368455, 0);
  sqcRYGate(q, -2.1431159349152926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.17231050039535045, 2);
  sqcRYGate(q, 0.12928118380697828, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7495614077466062, 2);
  sqcRYGate(q, -0.33693656158715607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5169342105273365, 0);
  sqcRYGate(q, -2.144413242652252, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.2582102665466106, 0);
  sqcRYGate(q, 0.6574596928791715, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0522754441524214, 1);
  sqcRYGate(q, -0.6683900022389685, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9141698244881247, 1);
  sqcRYGate(q, -2.4473138570899766, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.43988016778658423, 0);
  sqcRYGate(q, -2.145133821179623, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4906042740558174, 0);
  sqcRYGate(q, -1.718834020541239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.254816217668968, 2);
  sqcRYGate(q, 1.3160207711384653, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1700951185840536, 2);
  sqcRYGate(q, -2.508396453829122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.061696612466338514, 0);
  sqcRYGate(q, 2.748886780169557, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9079644508927452, 0);
  sqcRYGate(q, 1.7821711638485862, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5557088874765848, 1);
  sqcRYGate(q, 0.5497669068008788, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7607602885164713, 1);
  sqcRYGate(q, 2.5599292324854157, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1863615834559367, 0);
  sqcRYGate(q, -1.2489938185141751, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7477819971872036, 0);
  sqcRYGate(q, -1.2084414587820191, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8818229302438754, 2);
  sqcRYGate(q, 2.7255669485630625, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2252304711715031, 2);
  sqcRYGate(q, 1.2936773167046773, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3971875685684072, 0);
  sqcRYGate(q, 1.0567345441427412, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.846481504832251, 0);
  sqcRYGate(q, -0.18066306668288146, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1366228469287387, 1);
  sqcRYGate(q, -1.6851001177666687, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8355301688400076, 1);
  sqcRYGate(q, -0.23109135681033255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3527676862736877, 0);
  sqcRYGate(q, 0.1346114173580118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6992646520597394, 0);
  sqcRYGate(q, -0.8604095386560374, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.956293313354382, 2);
  sqcRYGate(q, -0.5301010600923455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.151827675124333, 2);
  sqcRYGate(q, -1.6918489088296367, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.198790324505622, 0);
  sqcRYGate(q, 2.852244383409042, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7383922333732156, 0);
  sqcRYGate(q, -1.3382652730682045, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.028853494478689, 1);
  sqcRYGate(q, -2.67187799794037, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1712469456365593, 1);
  sqcRYGate(q, 2.2510041213649554, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4211511413434457, 0);
  sqcRYGate(q, 0.5915759905103268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2608212695562042, 0);
  sqcRYGate(q, 2.4727796061695484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.89574877224936, 2);
  sqcRYGate(q, -0.864070898816788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3535268771427043, 2);
  sqcRYGate(q, -0.49501104074619473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3944126901386331, 0);
  sqcRYGate(q, -0.3227190086225944, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9526502051596741, 0);
  sqcRYGate(q, 1.0850147874742024, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3559817615699006, 1);
  sqcRYGate(q, 1.3824507615471833, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7883512946746047, 1);
  sqcRYGate(q, -2.319094193822193, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9614734979606895, 0);
  sqcRYGate(q, -0.9464597193912248, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3511880097150148, 0);
  sqcRYGate(q, -0.6758720549326585, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3043658425047084, 2);
  sqcRYGate(q, 1.8619368978914912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4198894835045115, 2);
  sqcRYGate(q, -2.473606530799941, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2006760346079002, 0);
  sqcRYGate(q, -1.702325882900172, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6936227181695496, 0);
  sqcRYGate(q, -1.4550367700252318, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.038203818530788, 1);
  sqcRYGate(q, 1.1516247440224192, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.875053373393756, 1);
  sqcRYGate(q, 2.9889626474043087, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.473469702510596, 0);
  sqcRYGate(q, -2.7459739575095092, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5065943409188083, 0);
  sqcRYGate(q, 1.0707260345141565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3241288236453674, 2);
  sqcRYGate(q, -3.005377637296603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.651916304723037, 2);
  sqcRYGate(q, 0.765197958106449, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5660930432744335, 0);
  sqcRYGate(q, -0.5346686847765252, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.68904478999226, 0);
  sqcRYGate(q, -0.37747129998593554, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0105221632068346, 1);
  sqcRYGate(q, -1.7513280249809209, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8560789929482875, 1);
  sqcRYGate(q, -1.6751849649813373, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7271328521048415, 0);
  sqcRYGate(q, -0.612858526114036, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9815010416379066, 0);
  sqcRYGate(q, -2.422445304636175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0607777404650323, 2);
  sqcRYGate(q, -1.866581878285932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7588795207712835, 2);
  sqcRYGate(q, -1.8479288657813528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6850712002766102, 0);
  sqcRYGate(q, 2.6021664873967136, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3903158661625712, 0);
  sqcRYGate(q, 2.913496710617886, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5837446426099335, 1);
  sqcRYGate(q, 1.8412758012007946, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.291864221546976, 1);
  sqcRYGate(q, -1.2038668938624486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4857743753986883, 0);
  sqcRYGate(q, 0.3426982211765095, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0006125924775153, 0);
  sqcRYGate(q, 1.8630274412916414, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8029149229246304, 2);
  sqcRYGate(q, 0.9205301650477873, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5677532973396802, 2);
  sqcRYGate(q, 3.0511950868927955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4617763347379045, 0);
  sqcRYGate(q, -1.8923728237151514, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.038638711196373, 0);
  sqcRYGate(q, -3.1128625126598615, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.8051598387175596, 1);
  sqcRYGate(q, -1.4446469460239468, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6134576732813728, 1);
  sqcRYGate(q, -0.7529396073657386, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8897987513714094, 0);
  sqcRYGate(q, 3.0849783433637175, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.037229458075367, 0);
  sqcRYGate(q, -1.4430942360006844, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9731270504550409, 2);
  sqcRYGate(q, 2.6320571065575087, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3792359746826084, 2);
  sqcRYGate(q, 0.31342786018551916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4422748088860935, 0);
  sqcRYGate(q, -0.012944354640630706, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.11455677803061497, 0);
  sqcRYGate(q, 1.582474289595247, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.28815965239925934, 1);
  sqcRYGate(q, 2.45912961597496, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3017388502114091, 1);
  sqcRYGate(q, 1.2226282067412413, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3496539170502597, 0);
  sqcRYGate(q, 0.5776117627153037, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.570828976399604, 0);
  sqcRYGate(q, -3.0806848808680676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3947949817180193, 2);
  sqcRYGate(q, -2.8721155208627533, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.37255029751423, 2);
  sqcRYGate(q, -1.692356243695818, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9200885141701738, 0);
  sqcRYGate(q, 1.2612941462777785, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8212545812827257, 0);
  sqcRYGate(q, -0.26485693553758083, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0445516205876766, 1);
  sqcRYGate(q, -2.6673679054094843, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0795652422685373, 1);
  sqcRYGate(q, 0.9794250840316971, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6188056081924136, 0);
  sqcRYGate(q, -1.265451467802139, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2634795382597703, 0);
  sqcRYGate(q, 1.655759330896645, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.07123622335998078, 2);
  sqcRYGate(q, -0.21997680168242084, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1300393686171253, 2);
  sqcRYGate(q, -2.0935621199055907, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9254141274326457, 0);
  sqcRYGate(q, 1.7602299833856292, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1398241826469038, 0);
  sqcRYGate(q, -2.384012596257822, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9352545003208683, 1);
  sqcRYGate(q, -1.6980741888637203, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5276096649156168, 1);
  sqcRYGate(q, 0.33636031812293776, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.17371779544167332, 0);
  sqcRYGate(q, -2.717060821864516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1213014236615309, 0);
  sqcRYGate(q, 0.45370066835144485, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.249303636851181, 2);
  sqcRYGate(q, 2.89016261207903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.087300984739071, 2);
  sqcRYGate(q, -2.6803059162222844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.715351453917919, 0);
  sqcRYGate(q, 0.0983986757999907, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4648623425781278, 0);
  sqcRYGate(q, -2.5421500921756195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5436527569671625, 1);
  sqcRYGate(q, 1.5296980774399087, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1744997399324921, 1);
  sqcRYGate(q, 1.572928803702852, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5759427624566391, 0);
  sqcRYGate(q, -2.8681750897461065, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8148566630981618, 0);
  sqcRYGate(q, -2.10252052675693, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5295322683203305, 2);
  sqcRYGate(q, 0.10294202061865117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9612595898045355, 2);
  sqcRYGate(q, 2.1006484786504345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6539886549823597, 0);
  sqcRYGate(q, -3.031691131963399, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.995932013183726, 0);
  sqcRYGate(q, -2.6545561124529455, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8834969556858985, 1);
  sqcRYGate(q, -1.371558192908581, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10411631706729596, 1);
  sqcRYGate(q, -1.9079471680639033, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0908758258973674, 0);
  sqcRYGate(q, 0.4692742380452162, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9255180380362642, 0);
  sqcRYGate(q, -2.016463695071237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.218394096668187, 2);
  sqcRYGate(q, 0.2415539884920816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.27372586612608, 2);
  sqcRYGate(q, 1.1056156383882931, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4507225290230563, 0);
  sqcRYGate(q, 2.6800494331126914, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4875350283281792, 0);
  sqcRYGate(q, -0.9328272414322232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6660463986609244, 1);
  sqcRYGate(q, -2.8356965542208417, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1438695617546275, 1);
  sqcRYGate(q, -1.9323410725449377, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0534722966674455, 0);
  sqcRYGate(q, -2.1239654714028684, 1);
  sqcRYGate(q, -2.7556366084033064, 2);
  sqcRYGate(q, 0.7075150430112838, 3);

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
