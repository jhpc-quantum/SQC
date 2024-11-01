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

  sqcRYGate(q, 1.0444134866670873, 0);
  sqcRYGate(q, 1.8559232156355312, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.308269210126344, 0);
  sqcRYGate(q, -0.19221388178497176, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8569274693415816, 2);
  sqcRYGate(q, -3.0445764109724585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3866256097885064, 2);
  sqcRYGate(q, -0.4046878424706343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7087563710285836, 4);
  sqcRYGate(q, 3.101096081578551, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5310541886973348, 4);
  sqcRYGate(q, 2.266188753797186, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.063942913225536, 6);
  sqcRYGate(q, -2.322895618171587, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.08029096212930181, 6);
  sqcRYGate(q, 0.6304630806302969, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2856075580845663, 1);
  sqcRYGate(q, -0.9280065645740654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6433181546250799, 1);
  sqcRYGate(q, 0.4415824834565781, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5832722546276154, 3);
  sqcRYGate(q, 1.7874420287224115, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8275326338499039, 3);
  sqcRYGate(q, 0.6398160116018868, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.6604599401998283, 5);
  sqcRYGate(q, -1.1744197538695222, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.430600353817755, 5);
  sqcRYGate(q, -2.9099032600599104, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8982287738947514, 0);
  sqcRYGate(q, -0.022765179765243282, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.085264170703632, 0);
  sqcRYGate(q, 1.7713677833094694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.616682808519048, 2);
  sqcRYGate(q, -2.8799891797832546, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.76080103327262, 2);
  sqcRYGate(q, -1.6141213951426299, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6720611000345877, 4);
  sqcRYGate(q, -1.0636554041891275, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3164924148539683, 4);
  sqcRYGate(q, -0.7353199568123525, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0728909284905472, 6);
  sqcRYGate(q, 2.0636374377536466, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.960363113246226, 6);
  sqcRYGate(q, 2.3687447488662063, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6201429984204516, 1);
  sqcRYGate(q, -1.3602608548817372, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1032488879439653, 1);
  sqcRYGate(q, 1.0740612025522687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.552135452754263, 3);
  sqcRYGate(q, 0.9483850703833315, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.79705220116629, 3);
  sqcRYGate(q, 0.8078722734390587, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6436314576172051, 5);
  sqcRYGate(q, 0.9982640200899712, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3399035216975852, 5);
  sqcRYGate(q, -0.5898884782849245, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5811065526393016, 0);
  sqcRYGate(q, -1.964508981427385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.928756147194181, 0);
  sqcRYGate(q, 0.33447686231883816, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2487113596136212, 2);
  sqcRYGate(q, 1.2290223048446949, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4431288765965808, 2);
  sqcRYGate(q, 2.390007036461525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.769593634893871, 4);
  sqcRYGate(q, 1.8188786034943925, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9999467167108014, 4);
  sqcRYGate(q, 0.49628141103567347, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5884371068295673, 6);
  sqcRYGate(q, 1.4494588897470098, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9202352596833858, 6);
  sqcRYGate(q, 3.1304073079342696, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5201573499829728, 1);
  sqcRYGate(q, 2.4174048167021276, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.114031086929444, 1);
  sqcRYGate(q, -2.5698086732620524, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5814689461891133, 3);
  sqcRYGate(q, 1.921259451164804, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2993106519938866, 3);
  sqcRYGate(q, -1.6235124718889526, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.113561241943049, 5);
  sqcRYGate(q, -0.718055950255981, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5268663404624556, 5);
  sqcRYGate(q, 1.1421059939584772, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.122395904622829, 0);
  sqcRYGate(q, 1.7060205660754466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.32144361122990345, 0);
  sqcRYGate(q, -2.5026935596301727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4836311796611863, 2);
  sqcRYGate(q, 0.26464148597049736, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.077924797010069, 2);
  sqcRYGate(q, -1.669002071896605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5330766882852291, 4);
  sqcRYGate(q, -1.5092901677602875, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0504051735186373, 4);
  sqcRYGate(q, 2.4577078720512042, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5486647387599723, 6);
  sqcRYGate(q, -1.8390556879410318, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3685184289584926, 6);
  sqcRYGate(q, -1.7527387362932847, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.017301442494037, 1);
  sqcRYGate(q, 1.8026873026319334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09205613633354837, 1);
  sqcRYGate(q, -1.876295724066904, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2613292098991287, 3);
  sqcRYGate(q, 1.7670960241539584, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.777972350320135, 3);
  sqcRYGate(q, 1.8132830409169385, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5128899377827381, 5);
  sqcRYGate(q, -0.46527146147323334, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.869710193515588, 5);
  sqcRYGate(q, 2.3964903439538334, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.2936360415109247, 0);
  sqcRYGate(q, -1.9924885484015649, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1777991206418539, 0);
  sqcRYGate(q, 0.9114540410369076, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5222635281175663, 2);
  sqcRYGate(q, 1.8066641468825138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2481963912789533, 2);
  sqcRYGate(q, 0.9967359634527176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.927487712392929, 4);
  sqcRYGate(q, 1.4663953197584911, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.004302646827913, 4);
  sqcRYGate(q, -2.5878530241349855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7639019204400627, 6);
  sqcRYGate(q, -1.4904401253484898, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.03215316727531281, 6);
  sqcRYGate(q, 1.0531103145100642, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8973143075104, 1);
  sqcRYGate(q, -0.31502859475845835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.36417432580598147, 1);
  sqcRYGate(q, 0.7351892855074489, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2631082549790946, 3);
  sqcRYGate(q, 0.0596827260237018, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6961851134397143, 3);
  sqcRYGate(q, 1.2580066601900184, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.58640883521574, 5);
  sqcRYGate(q, -1.0137752086061504, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4767427037213636, 5);
  sqcRYGate(q, -2.545961886082928, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6514353621479256, 0);
  sqcRYGate(q, -2.8221983689313204, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8105052262717428, 0);
  sqcRYGate(q, 2.4733033437720464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4024700694854424, 2);
  sqcRYGate(q, -1.9788782402627065, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0035206885041377, 2);
  sqcRYGate(q, -3.0772042894688303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8183802266274933, 4);
  sqcRYGate(q, -2.628848975185577, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4972546756424476, 4);
  sqcRYGate(q, -0.28234516181042796, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.0577919893514993, 6);
  sqcRYGate(q, 2.6208154183701953, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.199133178066477, 6);
  sqcRYGate(q, 2.992029940382703, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4239017325271002, 1);
  sqcRYGate(q, -0.07764972791765651, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.237486816004127, 1);
  sqcRYGate(q, -3.017704170364198, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7645081435350165, 3);
  sqcRYGate(q, -1.9364271746404373, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.16341752649828845, 3);
  sqcRYGate(q, 3.122363866612315, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.0467090109533963, 5);
  sqcRYGate(q, 2.9379094311914207, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.706619051989252, 5);
  sqcRYGate(q, -2.9145319941039314, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0637117946344983, 0);
  sqcRYGate(q, 2.646360190448556, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.45608342430340043, 0);
  sqcRYGate(q, -0.3709777563999639, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6049002430037613, 2);
  sqcRYGate(q, 2.004744176535394, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.973374138022022, 2);
  sqcRYGate(q, 0.16815544432667462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6811696671565928, 4);
  sqcRYGate(q, 2.175244848584313, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9859824700370652, 4);
  sqcRYGate(q, 2.008960524207115, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9237500152390545, 6);
  sqcRYGate(q, -0.3618403782829018, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.12361669697501, 6);
  sqcRYGate(q, 1.9956063087345692, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0831788633266317, 1);
  sqcRYGate(q, -1.2355644402136363, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1569690567949233, 1);
  sqcRYGate(q, 2.064048510523925, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6201800682292231, 3);
  sqcRYGate(q, 2.9146663948319795, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9633037273545546, 3);
  sqcRYGate(q, 1.655336137568753, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.2511976208045024, 5);
  sqcRYGate(q, 0.5442323658816609, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.972271660822253, 5);
  sqcRYGate(q, -1.6175821575294655, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.39602459251650757, 0);
  sqcRYGate(q, 1.6267289658193134, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7212503666092653, 0);
  sqcRYGate(q, -1.3379999376997274, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2773237509078927, 2);
  sqcRYGate(q, -2.482809840929301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4293768638988311, 2);
  sqcRYGate(q, -0.7897537420952627, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0707749381977043, 4);
  sqcRYGate(q, 2.9713464887539716, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.03422450608467, 4);
  sqcRYGate(q, 0.39540493549632316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.438249831831822, 6);
  sqcRYGate(q, 1.7049040437203509, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8836942998543422, 6);
  sqcRYGate(q, 1.1554207470831863, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7406263667263238, 1);
  sqcRYGate(q, -2.669904771174887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.908637473357248, 1);
  sqcRYGate(q, 1.7523652127233915, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.863162505469989, 3);
  sqcRYGate(q, -3.0518968257800307, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.102000022303848, 3);
  sqcRYGate(q, 1.0760522009876787, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.105316765361471, 5);
  sqcRYGate(q, 2.635118308073431, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.037657497762713, 5);
  sqcRYGate(q, -1.2310856126461251, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6349815837365202, 0);
  sqcRYGate(q, -1.731226604411835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.851906165615097, 0);
  sqcRYGate(q, 1.3674987181964235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.935508222737008, 2);
  sqcRYGate(q, -3.078650034314052, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.295366666606363, 2);
  sqcRYGate(q, 2.7724513202974768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4694544669400464, 4);
  sqcRYGate(q, 0.0936612015427459, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9487175090389863, 4);
  sqcRYGate(q, 1.865912968144275, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8550802872158383, 6);
  sqcRYGate(q, 1.2067354448354117, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0061453187242084, 6);
  sqcRYGate(q, 0.11473152470369487, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9849201795122545, 1);
  sqcRYGate(q, -1.3227716555462896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3981471261317036, 1);
  sqcRYGate(q, -2.756738595947059, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7353784057894135, 3);
  sqcRYGate(q, 0.6547893467486814, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7256971467807247, 3);
  sqcRYGate(q, 1.8671091853771289, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3899957935524139, 5);
  sqcRYGate(q, -2.199367178830585, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.748757003448988, 5);
  sqcRYGate(q, 2.4571294141210878, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7907366366113586, 0);
  sqcRYGate(q, -0.9363182469454232, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.89066507367325, 0);
  sqcRYGate(q, -0.9523877928677412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7284311268259165, 2);
  sqcRYGate(q, 2.4105732394093784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6730534818149765, 2);
  sqcRYGate(q, 0.05185433583992779, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8109154728931882, 4);
  sqcRYGate(q, -2.7183092139506666, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0696922019398807, 4);
  sqcRYGate(q, -1.5845522470321323, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.677066087798989, 6);
  sqcRYGate(q, -3.0590621726228577, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5681114800516296, 6);
  sqcRYGate(q, 2.8154918685093944, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7096727167833103, 1);
  sqcRYGate(q, 0.09023683624501687, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7979289376219576, 1);
  sqcRYGate(q, -0.16435927667350647, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.90682983027074, 3);
  sqcRYGate(q, 1.7896471089762334, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.06844109205977844, 3);
  sqcRYGate(q, -0.3236663549759654, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6990371194110955, 5);
  sqcRYGate(q, 0.8052741450841258, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0813467998611692, 5);
  sqcRYGate(q, -0.10018478717370499, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.0478238364481403, 0);
  sqcRYGate(q, -0.17409468143503748, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7920584991935855, 0);
  sqcRYGate(q, -1.1858235917232187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6961466648271842, 2);
  sqcRYGate(q, -2.8218169402522904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7206468999176536, 2);
  sqcRYGate(q, 1.4130293580095976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5831731958071504, 4);
  sqcRYGate(q, 1.7512293337790947, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0267381759011087, 4);
  sqcRYGate(q, -1.1592971981878375, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.08260728882391623, 6);
  sqcRYGate(q, 2.435869052327315, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5870525968393567, 6);
  sqcRYGate(q, 2.5535572316850086, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9710987999207283, 1);
  sqcRYGate(q, -2.0084351025867244, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.114049555581697, 1);
  sqcRYGate(q, -1.6613013675245962, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.337627768853593, 3);
  sqcRYGate(q, -0.21423116417519347, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6726249622251803, 3);
  sqcRYGate(q, 1.2015813532875346, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.636887498936272, 5);
  sqcRYGate(q, -2.7272152772431557, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9032984422413053, 5);
  sqcRYGate(q, -0.6509178125115893, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.37927911149499244, 0);
  sqcRYGate(q, -1.0590182007121722, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9483933386608222, 0);
  sqcRYGate(q, 1.665643857375223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8203497570754923, 2);
  sqcRYGate(q, 1.95815851732708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6283739033437894, 2);
  sqcRYGate(q, -2.2424861528213125, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7270042316029105, 4);
  sqcRYGate(q, 0.9417062822724214, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.6135537094210113, 4);
  sqcRYGate(q, 0.7705340020962725, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6741942570109423, 6);
  sqcRYGate(q, -2.680574532955976, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.19559241202278788, 6);
  sqcRYGate(q, -1.7328319229508695, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6581885010826833, 1);
  sqcRYGate(q, -1.7110727212976249, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6274022774386925, 1);
  sqcRYGate(q, 2.939725837095408, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5601931863588856, 3);
  sqcRYGate(q, -3.011532562492263, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7641800840651163, 3);
  sqcRYGate(q, 1.9549362180250953, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.198060858927665, 5);
  sqcRYGate(q, 1.8642624155308427, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9044299715254187, 5);
  sqcRYGate(q, -3.091775166963715, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9716293414435802, 0);
  sqcRYGate(q, 1.0692486901099603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22841780614977125, 0);
  sqcRYGate(q, -2.856536166497004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3017583382092184, 2);
  sqcRYGate(q, -0.9325737160827474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4022945260811621, 2);
  sqcRYGate(q, 0.8975127510797732, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.412549011634006, 4);
  sqcRYGate(q, -0.28793992582382427, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2504581412233788, 4);
  sqcRYGate(q, -0.7590326981094059, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9753344288809862, 6);
  sqcRYGate(q, -2.6149481954050087, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.14223745771276786, 6);
  sqcRYGate(q, -0.9486482072491174, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6251873474524774, 1);
  sqcRYGate(q, -2.256869745587697, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09942816564259437, 1);
  sqcRYGate(q, 1.0482372067781829, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.872214531611786, 3);
  sqcRYGate(q, 2.672781430688724, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6751348178146404, 3);
  sqcRYGate(q, 1.4403173546424395, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.079262346251803, 5);
  sqcRYGate(q, 2.3325787048132827, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4039878952584037, 5);
  sqcRYGate(q, 2.190166722544568, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9379912135547244, 0);
  sqcRYGate(q, 1.7172064069167723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4074808625235757, 0);
  sqcRYGate(q, -2.635741915034073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7555435353432673, 2);
  sqcRYGate(q, -2.1213931688723218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8021128337405381, 2);
  sqcRYGate(q, 1.0267552829829478, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2629114682720026, 4);
  sqcRYGate(q, -0.8930149818492021, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5150575089022659, 4);
  sqcRYGate(q, 1.0345140723990116, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5602079398408186, 6);
  sqcRYGate(q, -2.589482411842745, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.7331212883810463, 6);
  sqcRYGate(q, 1.3043899605500968, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.6613730783251857, 1);
  sqcRYGate(q, 1.3833669977753138, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0040378449367646, 1);
  sqcRYGate(q, -1.1517294027954057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6945807826703065, 3);
  sqcRYGate(q, 1.361447704151342, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6904690711036565, 3);
  sqcRYGate(q, 1.2827360983517675, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.1140112819244834, 5);
  sqcRYGate(q, -2.748496599483958, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.9860192077774332, 5);
  sqcRYGate(q, -1.2106946400451633, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6288603052020587, 0);
  sqcRYGate(q, 1.9314426532570732, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10512334623207308, 0);
  sqcRYGate(q, 3.009665958981842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2875469465174316, 2);
  sqcRYGate(q, -2.626581890485589, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4557199726141314, 2);
  sqcRYGate(q, -1.5886064141745442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8084105626428422, 4);
  sqcRYGate(q, -0.2194677384259656, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0055754784137632, 4);
  sqcRYGate(q, 0.5283932824092902, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8311218956036324, 6);
  sqcRYGate(q, 0.19115076105423423, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5628423757879495, 6);
  sqcRYGate(q, -1.5057574702648306, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3374872362139447, 1);
  sqcRYGate(q, -0.7175299143295621, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7364070292529554, 1);
  sqcRYGate(q, 0.9771258340335525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.03339545061990577, 3);
  sqcRYGate(q, -2.122400944985654, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8202453946669852, 3);
  sqcRYGate(q, -0.34154254992349947, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9744129072332128, 5);
  sqcRYGate(q, -1.075231996657867, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.783902424043786, 5);
  sqcRYGate(q, 1.689214625389448, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.013529216134124056, 0);
  sqcRYGate(q, 0.09207124144038031, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1133081005646401, 0);
  sqcRYGate(q, -0.9363470226859256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.023959684287902516, 2);
  sqcRYGate(q, -1.2941321226466955, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49479721159645873, 2);
  sqcRYGate(q, -0.3930937019094216, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6623039670973663, 4);
  sqcRYGate(q, 2.3473214640034072, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4218576002244718, 4);
  sqcRYGate(q, -2.8924401388938117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8156629767584941, 6);
  sqcRYGate(q, -2.557628142999178, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.957366766475352, 6);
  sqcRYGate(q, 2.929216710558546, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.29199584786654925, 1);
  sqcRYGate(q, -0.5951330602845916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4340376735488565, 1);
  sqcRYGate(q, 2.327405722816181, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14563705296250345, 3);
  sqcRYGate(q, -0.9487651167692901, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.14624788442011205, 3);
  sqcRYGate(q, -1.6338114060368705, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8666151951343148, 5);
  sqcRYGate(q, -1.7364038259182468, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.03986213911413472, 5);
  sqcRYGate(q, -1.1518187467289422, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6278794183628653, 0);
  sqcRYGate(q, -1.385205774841177, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7858897443311215, 0);
  sqcRYGate(q, -2.0234704102396295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4758424788883058, 2);
  sqcRYGate(q, 1.1372093189344958, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.470281957515517, 2);
  sqcRYGate(q, -2.7328058910079758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4773530098120795, 4);
  sqcRYGate(q, -1.2347667867918901, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3812972913865025, 4);
  sqcRYGate(q, 0.7254570588716729, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.568447416248973, 6);
  sqcRYGate(q, -2.1978620469696226, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2999583006786732, 6);
  sqcRYGate(q, 3.017634179139995, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9862447974065756, 1);
  sqcRYGate(q, 0.6144308530184134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8354125878690453, 1);
  sqcRYGate(q, -2.2155689126808222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0741591108360176, 3);
  sqcRYGate(q, -0.01755941472232791, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0717364497258552, 3);
  sqcRYGate(q, -2.1908224070349824, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5397207892839582, 5);
  sqcRYGate(q, -0.05978609453288135, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.645484527532364, 5);
  sqcRYGate(q, -1.7781837240840934, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7517179198307025, 0);
  sqcRYGate(q, -1.8857779877068523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2773972822230462, 0);
  sqcRYGate(q, 0.5779184008467, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7142326275236339, 2);
  sqcRYGate(q, -1.0393079966086909, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3214911028945022, 2);
  sqcRYGate(q, -0.4964125413606455, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4249783303159225, 4);
  sqcRYGate(q, -0.47933066772089467, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.620832991902863, 4);
  sqcRYGate(q, -0.00025343837176183825, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8315132892076376, 6);
  sqcRYGate(q, -0.6744795611158916, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8995684071921328, 6);
  sqcRYGate(q, 2.514031484787762, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.7135369461138104, 1);
  sqcRYGate(q, -1.6802247977533558, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3843836087267807, 1);
  sqcRYGate(q, -1.824481813307606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3237377285497393, 3);
  sqcRYGate(q, -2.7957130088366227, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7668981652993974, 3);
  sqcRYGate(q, 2.7963868412065933, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7595158240415101, 5);
  sqcRYGate(q, 0.8979043807453478, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.0959146259227763, 5);
  sqcRYGate(q, -0.22442610407110536, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.2968653304024675, 0);
  sqcRYGate(q, -1.2332436930831543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.561746514364535, 0);
  sqcRYGate(q, 1.4351885880479627, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0824705969152406, 2);
  sqcRYGate(q, 1.1010912818135257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7060055900535867, 2);
  sqcRYGate(q, 1.6393252349693626, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3722437467252746, 4);
  sqcRYGate(q, -0.30608737443603984, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9051241085997503, 4);
  sqcRYGate(q, -1.4081381259246997, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6535029429952671, 6);
  sqcRYGate(q, 0.13404629865103979, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4160735345648898, 6);
  sqcRYGate(q, -1.8839058685821388, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9861999630540204, 1);
  sqcRYGate(q, -1.085775596817739, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3994470010505973, 1);
  sqcRYGate(q, -3.0502235669432953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3075879001540645, 3);
  sqcRYGate(q, -0.3126635234018043, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.6193783158522923, 3);
  sqcRYGate(q, -2.1992154071743233, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3926489139507678, 5);
  sqcRYGate(q, -1.8254568782293175, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.0122777853287062, 5);
  sqcRYGate(q, 2.697636516428569, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3056101417981063, 0);
  sqcRYGate(q, 2.9895899737717073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18378646903965912, 0);
  sqcRYGate(q, 2.9433132789131577, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8253938523203912, 2);
  sqcRYGate(q, -1.4661991457036772, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4055839225094195, 2);
  sqcRYGate(q, -0.3416292446999296, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7255702444667955, 4);
  sqcRYGate(q, 1.9999168471847881, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4992108197906893, 4);
  sqcRYGate(q, -1.415887303845114, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4028376524637416, 6);
  sqcRYGate(q, -0.9014864682196979, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.454351290773404, 6);
  sqcRYGate(q, 0.37415589622619916, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.919285843594552, 1);
  sqcRYGate(q, -1.3922933361565493, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1597468460038656, 1);
  sqcRYGate(q, -0.6872388576320655, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7197499808272818, 3);
  sqcRYGate(q, 1.252708921746816, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.45312042137797415, 3);
  sqcRYGate(q, 0.42521024313446976, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.9399015112886366, 5);
  sqcRYGate(q, 2.1467097716872474, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.19276865423129408, 5);
  sqcRYGate(q, 0.5260655009022468, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.8638320706747398, 0);
  sqcRYGate(q, 2.0080099275727306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.935297922590556, 0);
  sqcRYGate(q, -2.107581682895531, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9444610487609861, 2);
  sqcRYGate(q, -0.4625251333729752, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.656750351322862, 2);
  sqcRYGate(q, -2.8651519822665192, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3394050892853899, 4);
  sqcRYGate(q, -0.9165011443368617, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1867800072508359, 4);
  sqcRYGate(q, 0.1679540258782497, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8984603642496536, 6);
  sqcRYGate(q, -2.485296137370751, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3916167987590788, 6);
  sqcRYGate(q, -0.5804066304136732, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.078472453841956, 1);
  sqcRYGate(q, 2.8397276757966523, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41222964846523436, 1);
  sqcRYGate(q, 1.5483181448631143, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6447133176093436, 3);
  sqcRYGate(q, -2.788349287446389, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9525036823047648, 3);
  sqcRYGate(q, -0.6075848158963977, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.316476151106824, 5);
  sqcRYGate(q, 0.721490547401614, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9247164807764774, 5);
  sqcRYGate(q, 0.7267000246441148, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.993106932704666, 0);
  sqcRYGate(q, -0.5086988030615714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3301732919822378, 0);
  sqcRYGate(q, 2.957082417347847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8159875002623393, 2);
  sqcRYGate(q, -1.2146386575645103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7729446303164802, 2);
  sqcRYGate(q, -1.511583374805486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.270115918683221, 4);
  sqcRYGate(q, 2.176040712105154, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.052621729998597, 4);
  sqcRYGate(q, 0.3497690128373927, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.499417804238327, 6);
  sqcRYGate(q, 0.04741298639924288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8143475255131034, 6);
  sqcRYGate(q, -0.5448374853926058, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.28423066228126365, 1);
  sqcRYGate(q, 1.4763529429424243, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.08255814941943, 1);
  sqcRYGate(q, -1.3264733941755837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8047631117891632, 3);
  sqcRYGate(q, 2.339201569978299, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.004253306763371232, 3);
  sqcRYGate(q, 2.2554383894684578, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5651003449589824, 5);
  sqcRYGate(q, 1.6556140835297926, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9413457473447375, 5);
  sqcRYGate(q, -2.494817963951664, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6714865491818518, 0);
  sqcRYGate(q, -2.727125725347813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.413724438756837, 0);
  sqcRYGate(q, 0.28612076128687125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8163295525134333, 2);
  sqcRYGate(q, -0.860903527545861, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.451218078453365, 2);
  sqcRYGate(q, 2.4760302005905306, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0767875186830036, 4);
  sqcRYGate(q, 0.6023571449330446, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3300329234872387, 4);
  sqcRYGate(q, 2.9865609700765505, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.602514054436285, 6);
  sqcRYGate(q, -2.6088372305115013, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.3923053138056907, 6);
  sqcRYGate(q, -2.5663807791806885, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.7196118199349506, 1);
  sqcRYGate(q, -1.607930194214667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8779768259944163, 1);
  sqcRYGate(q, 0.6593360730163553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8791852964015855, 3);
  sqcRYGate(q, 0.8492528207563907, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3619876816503056, 3);
  sqcRYGate(q, -0.9255279006746973, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.403710637793858, 5);
  sqcRYGate(q, -0.4214608455999341, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.35554631037364, 5);
  sqcRYGate(q, 1.6898618013847242, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6732352636303545, 0);
  sqcRYGate(q, -2.54142469683976, 1);
  sqcRYGate(q, -2.931924102228859, 2);
  sqcRYGate(q, -1.8609282138273735, 3);
  sqcRYGate(q, -1.1393886914572802, 4);
  sqcRYGate(q, -0.8124316994391618, 5);
  sqcRYGate(q, 2.0035310617645523, 6);
  sqcRYGate(q, -0.32729831444772756, 7);

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
