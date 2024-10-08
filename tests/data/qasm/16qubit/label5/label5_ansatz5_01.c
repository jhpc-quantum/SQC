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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 0.8129937187782164, 0);
  sqcRYGate(q, 2.1364004069238343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0247088584598187, 0);
  sqcRYGate(q, -0.9892158307016929, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6280120693727564, 2);
  sqcRYGate(q, 2.853353392461273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1056961753710826, 2);
  sqcRYGate(q, 1.4304508268104845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.48760715090852375, 4);
  sqcRYGate(q, 3.073555540015671, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9899992875942631, 4);
  sqcRYGate(q, 0.46135176986193116, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.13930267607128224, 6);
  sqcRYGate(q, -2.296872429544396, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4614606546940028, 6);
  sqcRYGate(q, 2.3002458148071456, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.507867596228821, 8);
  sqcRYGate(q, 0.7850717342550103, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.593809732655247, 8);
  sqcRYGate(q, 2.2857946065713644, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.0487114066040928, 10);
  sqcRYGate(q, -0.3230536832115929, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.4086669100719336, 10);
  sqcRYGate(q, -1.2224626628591997, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3878218763582124, 12);
  sqcRYGate(q, -3.035196844785748, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.1149130158587326, 12);
  sqcRYGate(q, -0.052071877601953524, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.7650360441025497, 14);
  sqcRYGate(q, -0.4540520917435602, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.0700558697567137, 14);
  sqcRYGate(q, -1.3686543262522042, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.084643383493042, 1);
  sqcRYGate(q, -0.5391427595186232, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4417719079981166, 1);
  sqcRYGate(q, 0.02412184962574404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.889939639044846, 3);
  sqcRYGate(q, -2.6365929680252354, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5810336462303485, 3);
  sqcRYGate(q, 1.8085439936228278, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7767396504500321, 5);
  sqcRYGate(q, -1.8417539218552825, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0915384423249, 5);
  sqcRYGate(q, -1.5532555176885205, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.903544510594667, 7);
  sqcRYGate(q, 0.7458847219691563, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5594296796698666, 7);
  sqcRYGate(q, 2.25998258768621, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.4810975570766906, 9);
  sqcRYGate(q, -1.7710042348859039, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5714640750333224, 9);
  sqcRYGate(q, 0.0018426541855613289, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.521956663452049, 11);
  sqcRYGate(q, -2.5534228748874814, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.06547900097877145, 11);
  sqcRYGate(q, -3.1368858836983056, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.928703562217569, 13);
  sqcRYGate(q, 0.7352524487464482, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.590367833102797, 13);
  sqcRYGate(q, -0.9443431028724092, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.7828061470542762, 0);
  sqcRYGate(q, 0.29572036485143316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1349022920201337, 0);
  sqcRYGate(q, 2.1112309942163323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.1408733936585604, 2);
  sqcRYGate(q, -3.1404413566179312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5648535696818202, 2);
  sqcRYGate(q, 1.4936870331001526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.563547402307158, 4);
  sqcRYGate(q, 1.3573170457859471, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.02471788444035675, 4);
  sqcRYGate(q, 1.50150787281361, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.03773627840645767, 6);
  sqcRYGate(q, -1.3014908032773238, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2378808666084777, 6);
  sqcRYGate(q, -0.4802685655417447, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4584108313696457, 8);
  sqcRYGate(q, -0.3976357318164325, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5722548220679962, 8);
  sqcRYGate(q, 0.25918630370281015, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.473166399862701, 10);
  sqcRYGate(q, -3.03363753580818, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.018812238357997155, 10);
  sqcRYGate(q, -1.8880731918327713, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.9549446292334443, 12);
  sqcRYGate(q, -0.9314558750976341, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.1554099762781476, 12);
  sqcRYGate(q, -1.5091860567601156, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.42204937898256834, 14);
  sqcRYGate(q, 1.220155811638265, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.899882884451818, 14);
  sqcRYGate(q, -1.1583682634222057, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.122759248964339, 1);
  sqcRYGate(q, 0.30180865997190787, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5808549938747687, 1);
  sqcRYGate(q, -0.10020449993973297, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4804764600471252, 3);
  sqcRYGate(q, 0.8811323714027388, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5289775961844407, 3);
  sqcRYGate(q, -0.5579641451405379, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.8554649139046586, 5);
  sqcRYGate(q, -1.7991124072833315, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3437173047264348, 5);
  sqcRYGate(q, 3.138608732626263, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.666770465108475, 7);
  sqcRYGate(q, 0.6814810207049673, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.5780516729870637, 7);
  sqcRYGate(q, 1.3132816201011055, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5701263068215634, 9);
  sqcRYGate(q, -1.1755888467749473, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.7145583014813734, 9);
  sqcRYGate(q, 0.5717917418064209, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.8324587850871696, 11);
  sqcRYGate(q, 3.1337134122637713, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.009904053674361535, 11);
  sqcRYGate(q, -1.577742344630687, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.6691810985923428, 13);
  sqcRYGate(q, -2.1726388460009796, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.8913510568672471, 13);
  sqcRYGate(q, 1.6309450151177458, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.440520545386513, 0);
  sqcRYGate(q, -2.961335191441607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.80965230047113, 0);
  sqcRYGate(q, 0.7475061165207484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5875700890690638, 2);
  sqcRYGate(q, -2.811761611552405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.140839433807518, 2);
  sqcRYGate(q, 1.5539205182434532, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.756160259891753, 4);
  sqcRYGate(q, 1.9383432681732007, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1402361603385534, 4);
  sqcRYGate(q, 0.003909514164468497, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4768693851858963, 6);
  sqcRYGate(q, -1.5719231493724095, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5547051311931617, 6);
  sqcRYGate(q, 0.9819278777284887, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5692294781937353, 8);
  sqcRYGate(q, 0.01369333873423975, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.00031208205158586707, 8);
  sqcRYGate(q, -1.581636051296362, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.567263303571492, 10);
  sqcRYGate(q, -1.567716461451979, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5984480798691103, 10);
  sqcRYGate(q, -1.5852423881586946, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.979988001960427, 12);
  sqcRYGate(q, -2.3251813989790824, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.3713696668211703, 12);
  sqcRYGate(q, 0.5495330767330326, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.0614947206818748, 14);
  sqcRYGate(q, 0.9369481693455023, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.3274990182481679, 14);
  sqcRYGate(q, 0.05956284765930176, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5688697329955348, 1);
  sqcRYGate(q, 2.917657091276579, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9692473176568392, 1);
  sqcRYGate(q, 1.5521091484783405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0756013065469405, 3);
  sqcRYGate(q, 2.3898781656605603, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6092864931703807, 3);
  sqcRYGate(q, -0.005300713420314502, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.8586953783442407, 5);
  sqcRYGate(q, 1.5692332259312218, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5807965827306782, 5);
  sqcRYGate(q, -1.5646030952406893, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.568819149842324, 7);
  sqcRYGate(q, 1.573715975570277, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.4778681073974054, 7);
  sqcRYGate(q, -0.6076384025772, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.129531957558884, 9);
  sqcRYGate(q, 1.5710881680187985, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5590122254202354, 9);
  sqcRYGate(q, 1.5647975556825555, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.5701251934480878, 11);
  sqcRYGate(q, 1.5701479167801076, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.565480784320116, 11);
  sqcRYGate(q, 1.5544724653222997, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.6732155742756794, 13);
  sqcRYGate(q, 2.0407342351108615, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.3920104152990107, 13);
  sqcRYGate(q, 1.5450171720261965, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.2426755573338495, 0);
  sqcRYGate(q, 0.7918360774402842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1583964777796027, 0);
  sqcRYGate(q, 1.7738980149775294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.777894540741778, 2);
  sqcRYGate(q, -1.2746206606342216, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.374039849329133, 2);
  sqcRYGate(q, 2.2439778959005725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.204778117881634, 4);
  sqcRYGate(q, -1.56668035484944, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.600407910892017, 4);
  sqcRYGate(q, 1.5836186615184547, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5715057374212835, 6);
  sqcRYGate(q, -1.5709477523607809, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8210233843810179, 6);
  sqcRYGate(q, 1.5601923833989142, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5712028571729117, 8);
  sqcRYGate(q, -1.5697846956400578, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.7520204300704372, 8);
  sqcRYGate(q, 1.5677764061749617, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5768600717778642, 10);
  sqcRYGate(q, -1.5315180824977266, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5453498681104155, 10);
  sqcRYGate(q, -1.5791963830048035, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5703378745540615, 12);
  sqcRYGate(q, 1.5718903878780957, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.5415596912149354, 12);
  sqcRYGate(q, 2.193869990569167, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.29622403062948344, 14);
  sqcRYGate(q, 0.12406296104999014, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.8151444356190964, 14);
  sqcRYGate(q, -1.5861483852669354, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.6857777580147584, 1);
  sqcRYGate(q, 1.8018242511026612, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1363182818557225, 1);
  sqcRYGate(q, 0.07670095865144688, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5477353652425574, 3);
  sqcRYGate(q, 1.5714692636470897, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5885082433597995, 3);
  sqcRYGate(q, 2.7789771200747624, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.574370867940914, 5);
  sqcRYGate(q, -1.6191586741793547, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.004132728171903499, 5);
  sqcRYGate(q, -1.5552076648571902, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.20836008457144, 7);
  sqcRYGate(q, 1.5697927993450653, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.9781487472464346, 7);
  sqcRYGate(q, 0.0020773696738644026, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5715856802262511, 9);
  sqcRYGate(q, 1.5288600139240096, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.134636574609641, 9);
  sqcRYGate(q, -1.558107382241799, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.557945643271493, 11);
  sqcRYGate(q, -1.571958068724951, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.579439240729285, 11);
  sqcRYGate(q, 0.37740028912802526, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.6693113519195233, 13);
  sqcRYGate(q, -0.27554919246829, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 0.003758397858669602, 13);
  sqcRYGate(q, 3.1392164363452144, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5537617533568007, 0);
  sqcRYGate(q, -1.7683141711157426, 1);
  sqcRYGate(q, -2.9116733218561386, 2);
  sqcRYGate(q, 1.5886123896113098, 3);
  sqcRYGate(q, 0.002313962486120147, 4);
  sqcRYGate(q, 1.5846341058049989, 5);
  sqcRYGate(q, 0.0475170556911797, 6);
  sqcRYGate(q, 1.2096352412891092, 7);
  sqcRYGate(q, -3.1361025250083316, 8);
  sqcRYGate(q, -1.5723100381528106, 9);
  sqcRYGate(q, -0.04040370579700185, 10);
  sqcRYGate(q, -1.6212942733710098, 11);
  sqcRYGate(q, 0.0044775833389358866, 12);
  sqcRYGate(q, 1.4728999637843465, 13);
  sqcRYGate(q, 1.9814947176058952, 14);
  sqcRYGate(q, -2.2704682847206836, 15);

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
