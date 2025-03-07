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

  sqcRYGate(q, -0.08004882093369048, 0);
  sqcRYGate(q, -1.410299715221409, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.048608719347662, 0);
  sqcRYGate(q, 0.7270241994065352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.930907754811158, 2);
  sqcRYGate(q, 1.2454939828273974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9543576720527265, 2);
  sqcRYGate(q, -2.007465026850223, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1166808699376323, 4);
  sqcRYGate(q, 2.3113858175614763, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2787363970806185, 4);
  sqcRYGate(q, -2.8748820945634295, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.817832365549636, 6);
  sqcRYGate(q, -2.012145224411035, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.30254791807600856, 6);
  sqcRYGate(q, 1.9481906995443887, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.18418683191664853, 0);
  sqcRYGate(q, -1.327698603878127, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7775934610383493, 0);
  sqcRYGate(q, -1.1175022550280265, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8722480588116532, 2);
  sqcRYGate(q, 2.7063724790769594, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.4691837668044032, 2);
  sqcRYGate(q, -2.771522442404342, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8641146981177704, 4);
  sqcRYGate(q, -2.443144802476748, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.6074527497307685, 4);
  sqcRYGate(q, -2.25805852793433, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.4380334660434855, 1);
  sqcRYGate(q, 0.013876778866912388, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0021152231331887, 1);
  sqcRYGate(q, -2.8815783165731914, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.788501579671149, 3);
  sqcRYGate(q, -2.1399744760791846, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.21966455252758674, 3);
  sqcRYGate(q, 0.5592482230864916, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.7967482825532584, 5);
  sqcRYGate(q, 1.900344449977041, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.053263459174147, 5);
  sqcRYGate(q, 0.39348738317958354, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.5029158776804286, 0);
  sqcRYGate(q, -2.710344419435118, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8666856536808434, 0);
  sqcRYGate(q, 0.5920228407309694, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.993221077156943, 1);
  sqcRYGate(q, 2.476203237486426, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1565322801332778, 1);
  sqcRYGate(q, -2.1948425974408012, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.613095716488254, 2);
  sqcRYGate(q, 0.5498260629673706, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.1436773013517898, 2);
  sqcRYGate(q, 2.6279116449546973, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.4236054924594854, 3);
  sqcRYGate(q, -0.7132686823905594, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.574183056591053, 3);
  sqcRYGate(q, 1.9471745876861815, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9491295996279687, 4);
  sqcRYGate(q, 2.789692279534918, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.7316561445510645, 4);
  sqcRYGate(q, -2.4351659214133545, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.392523071521465, 5);
  sqcRYGate(q, -0.41122318365033983, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.833936865341939, 5);
  sqcRYGate(q, 0.39332464590186067, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8949674219092412, 0);
  sqcRYGate(q, 1.8225215495370781, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9245375884849105, 0);
  sqcRYGate(q, -2.8732343350617957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.375111966970778, 2);
  sqcRYGate(q, -0.7447716152974783, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.169932695238865, 2);
  sqcRYGate(q, -2.1905501542867634, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.569986557322728, 4);
  sqcRYGate(q, -2.951351397189604, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.38229164124910664, 4);
  sqcRYGate(q, -0.5176787591653591, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8426188583960343, 6);
  sqcRYGate(q, 3.091074576063686, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.082477785712877, 6);
  sqcRYGate(q, -0.11401699142857834, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.080634167872815, 0);
  sqcRYGate(q, -0.8435102484649208, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5327239990936645, 0);
  sqcRYGate(q, -2.743075633553444, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8761765241953096, 2);
  sqcRYGate(q, -0.49829730478591117, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.8745816258423833, 2);
  sqcRYGate(q, 0.03627403385502029, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.027673183095633824, 4);
  sqcRYGate(q, 2.5508231053150583, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.0389315638735406, 4);
  sqcRYGate(q, 1.3029095957158017, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.7092943282218531, 1);
  sqcRYGate(q, 1.6451584694481471, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8817817851378544, 1);
  sqcRYGate(q, -1.4251905578912025, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.523073337128014, 3);
  sqcRYGate(q, -0.3892179491330282, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.2193381132277518, 3);
  sqcRYGate(q, 2.7902699099727997, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8471725866851019, 5);
  sqcRYGate(q, 2.1928343534954866, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.32990573297947673, 5);
  sqcRYGate(q, -0.9511048427129611, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.9033372970631266, 0);
  sqcRYGate(q, -2.679175242070037, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2978287925286702, 0);
  sqcRYGate(q, 1.3596994659199524, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3949673647285152, 1);
  sqcRYGate(q, -0.5112069964824638, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8001267388879372, 1);
  sqcRYGate(q, 1.033369692653495, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.02461561473387526, 2);
  sqcRYGate(q, -1.624656271414467, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.0526268652464947, 2);
  sqcRYGate(q, -0.7485736435997978, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.19899842805783516, 3);
  sqcRYGate(q, 0.4981527290714943, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6938018745407714, 3);
  sqcRYGate(q, -0.8139604368115417, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.23416071461091156, 4);
  sqcRYGate(q, -1.0611649884673113, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.5072378021067516, 4);
  sqcRYGate(q, 2.845065127781008, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.85550457268011, 5);
  sqcRYGate(q, -2.145824357056665, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.906416109511101, 5);
  sqcRYGate(q, -2.522891468693807, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.4206457090510525, 0);
  sqcRYGate(q, -2.2939849840711686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7205335024308996, 0);
  sqcRYGate(q, 0.8200423770388902, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5617814359696123, 2);
  sqcRYGate(q, -1.3766478856052426, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3027734831125892, 2);
  sqcRYGate(q, 2.533529313951187, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2663344735565616, 4);
  sqcRYGate(q, 1.5692620551175571, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4343926524267325, 4);
  sqcRYGate(q, -2.6561124781056624, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9513395736705332, 6);
  sqcRYGate(q, -2.4264436568593104, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2545638732169777, 6);
  sqcRYGate(q, 0.9739358201513895, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.752101414854067, 0);
  sqcRYGate(q, 1.7979803569107555, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.876523292934058, 0);
  sqcRYGate(q, 2.7296262280799306, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3719925404804245, 2);
  sqcRYGate(q, -1.1738621027091423, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.4235214361740192, 2);
  sqcRYGate(q, -1.8109004975284282, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.124116809489941, 4);
  sqcRYGate(q, -0.7298627724601774, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.0396213970171453, 4);
  sqcRYGate(q, -0.0976923956605734, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.98607973674972, 1);
  sqcRYGate(q, 0.7042468237160424, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5870206305129303, 1);
  sqcRYGate(q, -0.1926246182427909, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.11857342762048706, 3);
  sqcRYGate(q, 1.8596110070370682, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.16618419517948446, 3);
  sqcRYGate(q, -2.4806448075735013, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.4555469842238388, 5);
  sqcRYGate(q, -0.5913412991886264, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.252320746383687, 5);
  sqcRYGate(q, 2.236314388522589, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.6231603390059433, 0);
  sqcRYGate(q, 0.07583513631564642, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3943560049963322, 0);
  sqcRYGate(q, 0.7390616744718449, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2412729053352045, 1);
  sqcRYGate(q, -1.4841022541375484, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.021626931846825, 1);
  sqcRYGate(q, 0.6670963064920548, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9004626768933182, 2);
  sqcRYGate(q, -1.3314080967356616, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.2261284914612549, 2);
  sqcRYGate(q, 2.2795797475967845, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -3.012519422178607, 3);
  sqcRYGate(q, -2.5699751743203336, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.794837001994161, 3);
  sqcRYGate(q, 0.24809870184109695, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.7543152630686194, 4);
  sqcRYGate(q, -2.0201220771089865, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.3874351972600902, 4);
  sqcRYGate(q, -2.8406428796827448, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 3.124169445269713, 5);
  sqcRYGate(q, -2.241709396717579, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3431072203207917, 5);
  sqcRYGate(q, 1.3230103572890317, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4081568346101156, 0);
  sqcRYGate(q, -3.088539717737766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1749953527946175, 0);
  sqcRYGate(q, -0.16912676575369837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.040534526973891, 2);
  sqcRYGate(q, -0.31036709509977545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.20642096500237717, 2);
  sqcRYGate(q, -2.9307917396700742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.109266644547205, 4);
  sqcRYGate(q, -0.00039864710574774316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2824403309109167, 4);
  sqcRYGate(q, 2.9134805259138057, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0182688892114773, 6);
  sqcRYGate(q, 1.8636761570992144, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.259999473192698, 6);
  sqcRYGate(q, 2.103858758987548, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.037906130316915, 0);
  sqcRYGate(q, -2.334296543265299, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9886669645488722, 0);
  sqcRYGate(q, -1.9317677362296575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.074629838068272, 2);
  sqcRYGate(q, 2.6150642443291408, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.04520703805846882, 2);
  sqcRYGate(q, -1.250792332835345, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.2791742974597839, 4);
  sqcRYGate(q, -0.32708715048970516, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.4306267500240564, 4);
  sqcRYGate(q, -0.35404033979049704, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.9610649279091508, 1);
  sqcRYGate(q, 1.8213989207522054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.042946949422324, 1);
  sqcRYGate(q, -2.4520251160169773, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.818833478095849, 3);
  sqcRYGate(q, -3.0818007057779013, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.17195727912495706, 3);
  sqcRYGate(q, 1.1123436860540166, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.8596523420128126, 5);
  sqcRYGate(q, 2.3051379568380472, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.245894138986961, 5);
  sqcRYGate(q, -2.5389002205084026, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6334059834134715, 0);
  sqcRYGate(q, -0.053856552579474304, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9313687396796172, 0);
  sqcRYGate(q, -0.5563222643768232, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3552068228995153, 1);
  sqcRYGate(q, -1.7044561434246406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.684063459611985, 1);
  sqcRYGate(q, 1.9078861028101315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04152776739185127, 2);
  sqcRYGate(q, -2.793877708134509, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.605999638361836, 2);
  sqcRYGate(q, 0.5714313447332314, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.9678857735631774, 3);
  sqcRYGate(q, 0.1954664861802004, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.94943849167966, 3);
  sqcRYGate(q, -1.9117318730921644, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7535979658584153, 4);
  sqcRYGate(q, 3.008394416589975, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.117158568525643, 4);
  sqcRYGate(q, 0.5339642837455507, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.011748941130146, 5);
  sqcRYGate(q, -1.6697467601362226, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5094053096513413, 5);
  sqcRYGate(q, -0.9679950393438164, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8603232072888533, 0);
  sqcRYGate(q, -2.5666004985194553, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.332769328461098, 0);
  sqcRYGate(q, -1.3302002083955375, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.356121411089385, 2);
  sqcRYGate(q, -0.02447479733733814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.583693933621353, 2);
  sqcRYGate(q, 0.37727738548204726, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.475714287126989, 4);
  sqcRYGate(q, -1.0477373165283363, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6249573801571014, 4);
  sqcRYGate(q, 1.7595554392243278, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3429830742654247, 6);
  sqcRYGate(q, -1.6355042214856077, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1615741419245182, 6);
  sqcRYGate(q, -0.1160119540610749, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0199742113094166, 0);
  sqcRYGate(q, -2.7902848582453004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4252769588618968, 0);
  sqcRYGate(q, -2.2838759413567598, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9083642521347022, 2);
  sqcRYGate(q, 2.985436807827142, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.20901708199557884, 2);
  sqcRYGate(q, 0.368732681092923, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.3560076447558602, 4);
  sqcRYGate(q, 0.2246992873063007, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7660710039712088, 4);
  sqcRYGate(q, -2.6505647983732987, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 1.164549416220391, 1);
  sqcRYGate(q, 2.387640180312144, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7312520713036017, 1);
  sqcRYGate(q, -1.2318931107916813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6674398844456018, 3);
  sqcRYGate(q, 0.9230986831747652, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.0561928295852656, 3);
  sqcRYGate(q, -0.6134623411958682, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.639424149040372, 5);
  sqcRYGate(q, -0.13644987426281252, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.67198612797654, 5);
  sqcRYGate(q, 2.486880560865262, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6298781213618033, 0);
  sqcRYGate(q, 0.08134260974567385, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9133317156407617, 0);
  sqcRYGate(q, -1.067944754787763, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.531288616765961, 1);
  sqcRYGate(q, -1.6840967815251962, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.211529583782865, 1);
  sqcRYGate(q, -2.1939760782792783, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1358611087355297, 2);
  sqcRYGate(q, 1.7446079492598034, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.04139717222282228, 2);
  sqcRYGate(q, 1.4719313304516337, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.815441492793576, 3);
  sqcRYGate(q, 1.168224835774082, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.75568313049379, 3);
  sqcRYGate(q, 1.800092335059059, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.987910125144948, 4);
  sqcRYGate(q, 3.030043555402384, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.771957187734501, 4);
  sqcRYGate(q, -0.047364488520288184, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.1669850008895035, 5);
  sqcRYGate(q, -0.32958310746915487, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9094874914023228, 5);
  sqcRYGate(q, 3.114924193420925, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.808895690797854, 0);
  sqcRYGate(q, -0.49391403189290756, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6473081037269113, 0);
  sqcRYGate(q, 0.21314819407718402, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3810898768822013, 2);
  sqcRYGate(q, 2.6683511240283586, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9635343900650515, 2);
  sqcRYGate(q, -1.9868191513846525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.041267023911379, 4);
  sqcRYGate(q, -0.8320416547431189, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.115283748032647, 4);
  sqcRYGate(q, 2.267688896097675, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.716866449262218, 6);
  sqcRYGate(q, 0.45219775171288923, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6001103368676621, 6);
  sqcRYGate(q, 1.617920096194795, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.24025643636494465, 0);
  sqcRYGate(q, -0.3321376228132724, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9707236575568596, 0);
  sqcRYGate(q, -0.5624136405290756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5848265946772577, 2);
  sqcRYGate(q, 2.941926375984245, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.003735047829077, 2);
  sqcRYGate(q, -2.2547581067646094, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.843582883848816, 4);
  sqcRYGate(q, 2.4463331825312946, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.4692544346932253, 4);
  sqcRYGate(q, 0.3689775863939184, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.9348261591727605, 1);
  sqcRYGate(q, -2.3878242708237947, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.104075027619455, 1);
  sqcRYGate(q, 0.6760218110591067, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.477969989057521, 3);
  sqcRYGate(q, -0.28981989040262146, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4206544071188043, 3);
  sqcRYGate(q, 0.6590193787574716, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -3.0747887068593514, 5);
  sqcRYGate(q, 0.304640161593853, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.8198229674735362, 5);
  sqcRYGate(q, -1.929579367542659, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.977047258651388, 0);
  sqcRYGate(q, -1.0673409114762529, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.447946436041042, 0);
  sqcRYGate(q, -1.66726193872781, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3855356734389606, 1);
  sqcRYGate(q, -1.29095289728407, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.473631023538828, 1);
  sqcRYGate(q, 0.8324208205915142, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.063843293312238, 2);
  sqcRYGate(q, -0.9533919923586486, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.2685002050717668, 2);
  sqcRYGate(q, 1.8373496762111232, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.871776511508393, 3);
  sqcRYGate(q, 0.14747590685151835, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0451198036994804, 3);
  sqcRYGate(q, 0.7016885983050258, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.558318561722108, 4);
  sqcRYGate(q, -0.3030535973448094, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.902873141208428, 4);
  sqcRYGate(q, 2.037188071124191, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.7091836367853377, 5);
  sqcRYGate(q, -2.8566828436483056, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.07493091353143347, 5);
  sqcRYGate(q, 1.3862334945079045, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6723010904172372, 0);
  sqcRYGate(q, -1.2728221527461965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5779014312231854, 0);
  sqcRYGate(q, -2.755725913252874, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0777788603138383, 2);
  sqcRYGate(q, -0.48694372679433645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4701358017070874, 2);
  sqcRYGate(q, -0.3086905285629271, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.81405670801328, 4);
  sqcRYGate(q, -1.2264084712052954, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5754842787365861, 4);
  sqcRYGate(q, 2.1400704221426197, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2655239434364, 6);
  sqcRYGate(q, -2.881815268978259, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.621898764553009, 6);
  sqcRYGate(q, 0.4944709883856472, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.011063401479956, 0);
  sqcRYGate(q, -1.8616700019437267, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4487206880040154, 0);
  sqcRYGate(q, -0.7710862539640848, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.785185404528793, 2);
  sqcRYGate(q, -2.7735285624072503, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.153132839246604, 2);
  sqcRYGate(q, 1.696877544330758, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.5255881584123009, 4);
  sqcRYGate(q, 2.066774167001082, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.866218210128362, 4);
  sqcRYGate(q, -2.901092533805736, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.394165508584749, 1);
  sqcRYGate(q, 2.5842745334558948, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3219153340470076, 1);
  sqcRYGate(q, -2.278768211613575, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.97253268577401, 3);
  sqcRYGate(q, 1.3539425655249238, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.42082746746272315, 3);
  sqcRYGate(q, 1.4642970020164434, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.844281937169927, 5);
  sqcRYGate(q, 1.9223103097035263, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.3536582716898025, 5);
  sqcRYGate(q, 2.1630945400393085, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.0525705989198597, 0);
  sqcRYGate(q, -1.9222364583683609, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5633001823769312, 0);
  sqcRYGate(q, 0.7700382657544326, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.9822728829833736, 1);
  sqcRYGate(q, 2.1836810939835383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6250667666998876, 1);
  sqcRYGate(q, -2.2007332246004636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1183630560330142, 2);
  sqcRYGate(q, 1.8226829634462896, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.7796467245438299, 2);
  sqcRYGate(q, -1.4798305290316227, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.0981470798652007, 3);
  sqcRYGate(q, 0.9567284314482112, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.066027704185785, 3);
  sqcRYGate(q, 1.8104232426117237, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.419557293138877, 4);
  sqcRYGate(q, 1.817201301994219, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.54270877962441, 4);
  sqcRYGate(q, 0.6174214229377855, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.6198780937550963, 5);
  sqcRYGate(q, 1.5737916350297183, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.3287266817887393, 5);
  sqcRYGate(q, -2.959568633521832, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.474041192577911, 0);
  sqcRYGate(q, 2.991903522556705, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0663966600844939, 0);
  sqcRYGate(q, -2.408997291346752, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1671141431522667, 2);
  sqcRYGate(q, 1.6013653414733477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.211064699436568, 2);
  sqcRYGate(q, -0.5206218530785792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.940352962687951, 4);
  sqcRYGate(q, -2.7825158836849253, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9397671733918028, 4);
  sqcRYGate(q, -0.9081174109081755, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0951874828864483, 6);
  sqcRYGate(q, 1.0414036034955094, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2632126419565681, 6);
  sqcRYGate(q, 0.34710605541486944, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6234508463203938, 0);
  sqcRYGate(q, 1.0141488256729918, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.024173310226998, 0);
  sqcRYGate(q, 1.0005629628139134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.25087169406018633, 2);
  sqcRYGate(q, -0.3530944806174823, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.3702500663081962, 2);
  sqcRYGate(q, -1.2243968154056415, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.9941146943541639, 4);
  sqcRYGate(q, 0.8155074375226803, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.11915841576317021, 4);
  sqcRYGate(q, 1.7168491737896474, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.344509977262405, 1);
  sqcRYGate(q, 3.05257295832692, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.303951711636381, 1);
  sqcRYGate(q, 2.6714520182555317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6046616134837546, 3);
  sqcRYGate(q, -2.829712539861662, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0655110116357642, 3);
  sqcRYGate(q, 2.561557507362203, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8114241968152713, 5);
  sqcRYGate(q, -1.8996505939116268, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.172283561885063, 5);
  sqcRYGate(q, -1.769088529949193, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8390685943918672, 0);
  sqcRYGate(q, 0.8940164392838428, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3812134241575629, 0);
  sqcRYGate(q, -2.919014584383537, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.547204101154794, 1);
  sqcRYGate(q, 1.0325626259693463, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3592889973361615, 1);
  sqcRYGate(q, -1.235421216168088, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.30485742039666, 2);
  sqcRYGate(q, -1.1478404752188496, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.863779348630292, 2);
  sqcRYGate(q, -1.025548720104129, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.2363237058375347, 3);
  sqcRYGate(q, 3.0028913314739905, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4334515477119731, 3);
  sqcRYGate(q, 2.754528221009613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9104614255183385, 4);
  sqcRYGate(q, -0.16148896612718602, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.4924839292995316, 4);
  sqcRYGate(q, -0.38310798135463353, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.935467315937746, 5);
  sqcRYGate(q, -0.9319039082159385, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3350171795662096, 5);
  sqcRYGate(q, -0.26482171326038717, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.38595749128994594, 0);
  sqcRYGate(q, -2.352886103483889, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.30475444542637, 0);
  sqcRYGate(q, 2.2448964556803466, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7793670999345121, 2);
  sqcRYGate(q, 2.420441633125342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.490500458061892, 2);
  sqcRYGate(q, 2.568686211779282, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.262341540718217, 4);
  sqcRYGate(q, 3.0900657961380316, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9302470143112034, 4);
  sqcRYGate(q, 0.6734595186374247, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.239795310028472, 6);
  sqcRYGate(q, 1.932058986697961, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1175416350687728, 6);
  sqcRYGate(q, 0.985273855562636, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5780078530370365, 0);
  sqcRYGate(q, -0.70060114355298, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.62993917349084, 0);
  sqcRYGate(q, -0.605434090324251, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1672304562990816, 2);
  sqcRYGate(q, -0.7013587809471481, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.0919668601580665, 2);
  sqcRYGate(q, 0.8831964443221807, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0136250703633745, 4);
  sqcRYGate(q, -1.8204217189798557, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.3053000399648571, 4);
  sqcRYGate(q, 1.4702949295474854, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.1463966509837107, 1);
  sqcRYGate(q, -0.8183683800438635, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.454517044871814, 1);
  sqcRYGate(q, -0.3098176970275812, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3732308322470563, 3);
  sqcRYGate(q, -0.43250209313593313, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.3567353629612269, 3);
  sqcRYGate(q, 1.4429129559729887, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.1647442545564433, 5);
  sqcRYGate(q, -2.5781129741106334, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.546215687875888, 5);
  sqcRYGate(q, -0.01647913746099388, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.6187201407676102, 0);
  sqcRYGate(q, -2.1023009963370076, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0393863661454863, 0);
  sqcRYGate(q, 3.0117973207709663, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4861391152455248, 1);
  sqcRYGate(q, 0.1832416878515953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.48937966494792184, 1);
  sqcRYGate(q, 0.6147347098997689, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.452502891133209, 2);
  sqcRYGate(q, -0.15328236167934223, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.2005518269599063, 2);
  sqcRYGate(q, 0.8114422373220327, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.9608173812756853, 3);
  sqcRYGate(q, -1.0596158873709154, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0493314188679093, 3);
  sqcRYGate(q, 1.1366520846708719, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.070455357518435, 4);
  sqcRYGate(q, -0.7979456798725026, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.5640038157233775, 4);
  sqcRYGate(q, 2.7217154873561213, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.8273375915291723, 5);
  sqcRYGate(q, 3.026497764648089, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.767949852550089, 5);
  sqcRYGate(q, -0.05335516465387701, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9324602461748475, 0);
  sqcRYGate(q, -1.702183603233421, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.348929836005922, 0);
  sqcRYGate(q, -2.8930423119944644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.722951129067805, 2);
  sqcRYGate(q, -0.15670344743669862, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.13323619967409783, 2);
  sqcRYGate(q, -1.9087763294709923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0153703736700554, 4);
  sqcRYGate(q, 1.7350105106199931, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.2996591752552735, 4);
  sqcRYGate(q, 0.38763746046418485, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0847028827928087, 6);
  sqcRYGate(q, 1.486797989013839, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0568572658198296, 6);
  sqcRYGate(q, 0.5613099184254757, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8617715740579444, 0);
  sqcRYGate(q, -1.0994499562936335, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1068736455280697, 0);
  sqcRYGate(q, 1.1352284882139703, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9812607276348295, 2);
  sqcRYGate(q, 2.328473617764491, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.3056761066599991, 2);
  sqcRYGate(q, 2.8044506472603152, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.5788334457302885, 4);
  sqcRYGate(q, -1.6461321997717837, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.7902601986980926, 4);
  sqcRYGate(q, -0.9698547338033148, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.48673295308426745, 1);
  sqcRYGate(q, 0.9410271236413654, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3088067664209336, 1);
  sqcRYGate(q, -1.126505780238091, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.052234997444528, 3);
  sqcRYGate(q, 0.781374291226668, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.321915589303142, 3);
  sqcRYGate(q, -3.1180787733951454, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.0883693355619541, 5);
  sqcRYGate(q, -0.6280981295837357, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4257971582547544, 5);
  sqcRYGate(q, 1.5546302371753296, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.2211734307503157, 0);
  sqcRYGate(q, 1.2997725471108696, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.941080823753784, 0);
  sqcRYGate(q, 1.5544077553275777, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6590684707987893, 1);
  sqcRYGate(q, -0.8703072497130216, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.613854666859755, 1);
  sqcRYGate(q, -3.0345683293485752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5629007198252085, 2);
  sqcRYGate(q, 1.1017539616492131, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.337790525086733, 2);
  sqcRYGate(q, 0.40627087704432263, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.8143251830117753, 3);
  sqcRYGate(q, 0.7082684039765406, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3222135039632033, 3);
  sqcRYGate(q, -2.876177693157626, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.529157054101864, 4);
  sqcRYGate(q, -0.8496991813604486, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.287484921336139, 4);
  sqcRYGate(q, -2.285251281013067, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.20594025662211468, 5);
  sqcRYGate(q, -1.6148173987332242, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8182634605700505, 5);
  sqcRYGate(q, 2.2644901096046093, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.025253071493286938, 0);
  sqcRYGate(q, -0.3905040061678129, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3114480374840807, 0);
  sqcRYGate(q, 2.2800117500585584, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.20665501217888327, 2);
  sqcRYGate(q, -2.337734881963097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.23938879069247654, 2);
  sqcRYGate(q, 1.3531317889868046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.69694081783562, 4);
  sqcRYGate(q, -0.41377682123895354, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.9656449571369126, 4);
  sqcRYGate(q, -2.074880515486541, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6770884827276378, 6);
  sqcRYGate(q, 2.036596134154782, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8249269431071707, 6);
  sqcRYGate(q, 1.6572131763030802, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.9286754555978822, 0);
  sqcRYGate(q, -2.1168167426887896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7705776762759236, 0);
  sqcRYGate(q, -2.604319259396572, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.522786789110476, 2);
  sqcRYGate(q, 0.9419825086652904, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.0734347482443343, 2);
  sqcRYGate(q, 1.4582258816799978, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3189619368302683, 4);
  sqcRYGate(q, -1.0913703759917164, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.1974469001107222, 4);
  sqcRYGate(q, 2.13091499982026, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8887385964294765, 1);
  sqcRYGate(q, -1.4992226894552898, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2563742892001186, 1);
  sqcRYGate(q, -0.6344342810400646, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8234986033317522, 3);
  sqcRYGate(q, 1.5830335994872538, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.9638504834194026, 3);
  sqcRYGate(q, 0.2647684008482116, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5321725182639245, 5);
  sqcRYGate(q, 1.1193221553751211, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.980037601369788, 5);
  sqcRYGate(q, 2.7193761656953757, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.02065857045298, 0);
  sqcRYGate(q, -1.806994221944969, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8994681348395634, 0);
  sqcRYGate(q, -2.3024481340248024, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.6604524810251255, 1);
  sqcRYGate(q, -1.8016259427115275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3916032526448738, 1);
  sqcRYGate(q, 1.7827189538178212, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3702914254923196, 2);
  sqcRYGate(q, -0.27534479014458846, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -0.07428859022698792, 2);
  sqcRYGate(q, 2.2421142151285034, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.164831692943607, 3);
  sqcRYGate(q, -2.849444383053831, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.3802557653952965, 3);
  sqcRYGate(q, -2.2430333962804054, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.229671455580137, 4);
  sqcRYGate(q, -1.6198432745989433, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.1047784522248083, 4);
  sqcRYGate(q, -1.1187480993792365, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.6889214235852145, 5);
  sqcRYGate(q, 0.6383572503834314, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5961218587588002, 5);
  sqcRYGate(q, 2.2312165466767917, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2900257471666956, 0);
  sqcRYGate(q, 0.8369734805628388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6834335898459747, 0);
  sqcRYGate(q, -0.8312576282331774, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0323008916215652, 2);
  sqcRYGate(q, 2.1753946059514813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3593969439746956, 2);
  sqcRYGate(q, 2.54354163518259, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6348186953805917, 4);
  sqcRYGate(q, 0.04956884914400117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1390986467973008, 4);
  sqcRYGate(q, 2.7062127704755903, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.617689202745659, 6);
  sqcRYGate(q, -2.9855503143579503, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.871894969035411, 6);
  sqcRYGate(q, -0.023297947142164363, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7947248568590481, 0);
  sqcRYGate(q, -1.9212868060559258, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7779861182554253, 0);
  sqcRYGate(q, 1.556497370763868, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.288185657195459, 2);
  sqcRYGate(q, 2.2366760091819273, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.6679687891813293, 2);
  sqcRYGate(q, -1.2824662948635162, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.8375052204972935, 4);
  sqcRYGate(q, -0.4624504773703896, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.8644606363668095, 4);
  sqcRYGate(q, 1.3833647648426677, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3233043724607736, 1);
  sqcRYGate(q, 1.1857985747767419, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7525603231806217, 1);
  sqcRYGate(q, 1.3017182411344486, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4769842633900252, 3);
  sqcRYGate(q, -1.245905868511758, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.7004814077402575, 3);
  sqcRYGate(q, 1.4200941030513954, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.4196946177063072, 5);
  sqcRYGate(q, -1.1734869105911416, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3687106432182, 5);
  sqcRYGate(q, 0.8297469025201338, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.7851061836963518, 0);
  sqcRYGate(q, -0.24960771597085607, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.291576681864424, 0);
  sqcRYGate(q, 0.5525725073259171, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.214522003389399, 1);
  sqcRYGate(q, -2.445091200608434, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.117960654717911, 1);
  sqcRYGate(q, -2.015421954954788, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8206784398830083, 2);
  sqcRYGate(q, -1.8284597201225061, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.3899388594946465, 2);
  sqcRYGate(q, 2.8422437654067525, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.8475003225472457, 3);
  sqcRYGate(q, -1.225735188963619, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7630938059590435, 3);
  sqcRYGate(q, -2.9630951677642354, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9378536379650635, 4);
  sqcRYGate(q, -0.313816167189609, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.8474783929527803, 4);
  sqcRYGate(q, 2.952047454083158, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.7760094220574834, 5);
  sqcRYGate(q, -1.588237267820241, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.703787097980662, 5);
  sqcRYGate(q, 0.8266344686852171, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.1233298488117454, 0);
  sqcRYGate(q, -0.8293756594563317, 1);
  sqcRYGate(q, -1.2446889965929717, 2);
  sqcRYGate(q, 2.440367369387153, 3);
  sqcRYGate(q, -1.3802938779881166, 4);
  sqcRYGate(q, 1.695870337232928, 5);
  sqcRYGate(q, -1.6922037195727313, 6);
  sqcRYGate(q, -0.20476381976999747, 7);

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
