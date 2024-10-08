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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, -1.3281407470551396, 0);
  sqcRYGate(q, 2.849422639851058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9408924573239966, 0);
  sqcRYGate(q, -1.1979141106667033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1735957587791868, 2);
  sqcRYGate(q, 1.0409044097125353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7842035165731192, 2);
  sqcRYGate(q, -2.97501622979765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2541312646965162, 4);
  sqcRYGate(q, 0.79254569981297, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.721736071386347, 4);
  sqcRYGate(q, 0.7227443114201515, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.28846713561780124, 6);
  sqcRYGate(q, 3.1135130702193807, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5716914905812631, 6);
  sqcRYGate(q, -2.397948024715575, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5965345631417547, 8);
  sqcRYGate(q, 0.5479018153737399, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8636448276051762, 8);
  sqcRYGate(q, -2.484923637776403, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.602509291063507, 10);
  sqcRYGate(q, 0.6532429054611717, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.098224708406019, 10);
  sqcRYGate(q, -0.010590658750307291, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.507709637080284, 12);
  sqcRYGate(q, 2.130510806422158, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.8932907873711509, 12);
  sqcRYGate(q, -3.095972056808924, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.2786834389803232, 14);
  sqcRYGate(q, 0.6099066797147364, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.176243913949264, 14);
  sqcRYGate(q, -1.9835161204350866, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.9751593349232222, 16);
  sqcRYGate(q, -2.602223204825085, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.3942560935669266, 16);
  sqcRYGate(q, 0.664305459294987, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.34040754983890853, 18);
  sqcRYGate(q, -1.8868024309414517, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.4732676943872407, 18);
  sqcRYGate(q, -1.6364962241784182, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.21067213023591044, 1);
  sqcRYGate(q, -0.436921789081811, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1250638140254443, 1);
  sqcRYGate(q, -3.1234969869846454, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3864173277661358, 3);
  sqcRYGate(q, -2.282535511256678, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.86158929491222, 3);
  sqcRYGate(q, -0.19787203764333672, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4283286967047144, 5);
  sqcRYGate(q, -1.106132529332382, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4866321055709708, 5);
  sqcRYGate(q, -0.5026578564960981, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.6856259425230746, 7);
  sqcRYGate(q, 2.653385136975644, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.008298088060883835, 7);
  sqcRYGate(q, 2.886607845191233, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3375264739476287, 9);
  sqcRYGate(q, 0.7156046224094651, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.27972278073469337, 9);
  sqcRYGate(q, -0.4156858351381139, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.447044982109957, 11);
  sqcRYGate(q, -1.4397975932508515, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.021794053866972973, 11);
  sqcRYGate(q, 3.105646670585051, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 2.5735977569168695, 13);
  sqcRYGate(q, 1.192523922749963, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.0854633302994519, 13);
  sqcRYGate(q, -1.6864352852074056, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.0538148472846567, 15);
  sqcRYGate(q, 0.70063462987558, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -0.06701220384159345, 15);
  sqcRYGate(q, 0.8028206858515844, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.5420684214014564, 17);
  sqcRYGate(q, -1.6893240333773756, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.867629941350479, 17);
  sqcRYGate(q, -1.9157074281793527, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.068734666826927, 0);
  sqcRYGate(q, 1.3234181968009417, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.37593075865697134, 0);
  sqcRYGate(q, 1.6397605981585555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.149170057804792, 2);
  sqcRYGate(q, 0.22133562723667932, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9856794567186045, 2);
  sqcRYGate(q, 2.890874010291317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9339322044972957, 4);
  sqcRYGate(q, -2.4701298045795506, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.077013526226879, 4);
  sqcRYGate(q, -3.1146287017562626, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5728433753354816, 6);
  sqcRYGate(q, 1.5244617812829269, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.064545179688022, 6);
  sqcRYGate(q, -0.4519895529870116, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.875143996395326, 8);
  sqcRYGate(q, -1.9222876361579193, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.795168755358828, 8);
  sqcRYGate(q, -3.1383009101104, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.24988723189216078, 10);
  sqcRYGate(q, -1.9890855820442175, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.355744792706056, 10);
  sqcRYGate(q, -0.5123776618908908, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.1879735235785356, 12);
  sqcRYGate(q, 0.6883071159742936, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.2342243833772604, 12);
  sqcRYGate(q, 0.5745998544077731, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.9138470987755098, 14);
  sqcRYGate(q, 2.6448812144226257, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.4623541644220177, 14);
  sqcRYGate(q, 3.123589315616433, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.537159062404628, 16);
  sqcRYGate(q, 1.1276514543664342, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.06446431485031646, 16);
  sqcRYGate(q, -1.3598457766587009, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.2133951982902042, 18);
  sqcRYGate(q, 1.8470730831231261, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.0961885548826116, 18);
  sqcRYGate(q, 2.5578958337878337, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.570971913834967, 1);
  sqcRYGate(q, 3.118903291016675, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1611534088932751, 1);
  sqcRYGate(q, -1.8015044291558704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.342294785361894, 3);
  sqcRYGate(q, -0.7127867623516613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1864407449152839, 3);
  sqcRYGate(q, 0.3678438873329411, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.17343672775954747, 5);
  sqcRYGate(q, 1.545524088979966, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.0025974295930376854, 5);
  sqcRYGate(q, 2.7196020647335053, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9854505677098178, 7);
  sqcRYGate(q, 0.6238332615443518, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.016673558688427015, 7);
  sqcRYGate(q, 2.9134788363209316, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.1777061236753033, 9);
  sqcRYGate(q, -0.5980140459932164, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -0.10564400422379627, 9);
  sqcRYGate(q, -2.971407350702052, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.1201841580611025, 11);
  sqcRYGate(q, -2.78021829560065, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 0.05882411837649748, 11);
  sqcRYGate(q, 0.6446243337884079, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.5805256561641734, 13);
  sqcRYGate(q, 0.17511211479928246, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.044032936708249, 13);
  sqcRYGate(q, -2.100405376462664, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.331055777268771, 15);
  sqcRYGate(q, 2.148727862643827, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.9586489757187278, 15);
  sqcRYGate(q, 0.3982802086090773, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.6956764527059778, 17);
  sqcRYGate(q, 1.1564895961387585, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.2397657761367542, 17);
  sqcRYGate(q, 3.119734403180744, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.46547936825389136, 0);
  sqcRYGate(q, 2.7594825609974523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7292115346922401, 0);
  sqcRYGate(q, 1.3181454381738877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3546512647937237, 2);
  sqcRYGate(q, 1.0964290537931323, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2861148389651387, 2);
  sqcRYGate(q, 1.53418742588564, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.005036247180282, 4);
  sqcRYGate(q, 1.0855175549087366, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.010288138813890235, 4);
  sqcRYGate(q, 1.4623138536454117, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5596529673205772, 6);
  sqcRYGate(q, -1.1104963285371587, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.11805247601874846, 6);
  sqcRYGate(q, -3.081146557811897, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.628161561380371, 8);
  sqcRYGate(q, 2.319816187076597, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.443804462452495, 8);
  sqcRYGate(q, -0.5539669126830112, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.874964897074503, 10);
  sqcRYGate(q, 1.682248614112533, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.7695446599895153, 10);
  sqcRYGate(q, 0.005790054610313577, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.769234565576765, 12);
  sqcRYGate(q, 1.546823737226843, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.5338711295832523, 12);
  sqcRYGate(q, 3.010700680577198, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.082885043573719, 14);
  sqcRYGate(q, -2.0408731222578433, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -0.17258697896779, 14);
  sqcRYGate(q, 3.0300548204137803, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.312596480202635, 16);
  sqcRYGate(q, -1.3598791305927085, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 0.3114681995877639, 16);
  sqcRYGate(q, -3.0456500079836255, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.4766284061507444, 18);
  sqcRYGate(q, -2.139923795734333, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.2858109714637616, 18);
  sqcRYGate(q, -1.1305292772766098, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.7577900472743635, 1);
  sqcRYGate(q, 1.9781602304427455, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0629677966948825, 1);
  sqcRYGate(q, 2.9976223649845553, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5397834907686336, 3);
  sqcRYGate(q, 0.166855418352619, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.7206205093744975, 3);
  sqcRYGate(q, 0.04016124044241873, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3473722369975176, 5);
  sqcRYGate(q, -1.5979159517328454, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0248629249855368, 5);
  sqcRYGate(q, -0.11521169751899762, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0892252846960244, 7);
  sqcRYGate(q, 0.12685173084030035, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -3.0264674986233726, 7);
  sqcRYGate(q, -0.058383820252042494, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.1056546471443793, 9);
  sqcRYGate(q, -2.778823258614397, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.009699141845405101, 9);
  sqcRYGate(q, -0.011774003559950097, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.4998999045391628, 11);
  sqcRYGate(q, 1.4994166251521868, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.1157586363341236, 11);
  sqcRYGate(q, 0.5773064338559006, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -2.6001055553793515, 13);
  sqcRYGate(q, -1.3521781667728154, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.08627926448689749, 13);
  sqcRYGate(q, -0.11862837400821372, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.1719569955222648, 15);
  sqcRYGate(q, -2.515258493605876, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.9470323676814925, 15);
  sqcRYGate(q, -2.7812291116125922, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 3.090035778331528, 17);
  sqcRYGate(q, -2.9791726327859487, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.06666320198278795, 17);
  sqcRYGate(q, 3.0896441841638222, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.4279601721475843, 0);
  sqcRYGate(q, 1.0709728099505318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6548037281829588, 0);
  sqcRYGate(q, 2.811076531016143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.08670388503479, 2);
  sqcRYGate(q, 2.1026853722832266, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.10479728120578802, 2);
  sqcRYGate(q, 0.0842733369167973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2789694962572165, 4);
  sqcRYGate(q, -0.8905899766907478, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.10415712021388579, 4);
  sqcRYGate(q, -0.16318332095935606, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.92747069705088, 6);
  sqcRYGate(q, 2.517925834329006, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.38205270147917236, 6);
  sqcRYGate(q, 0.34071370769764003, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.823573589589854, 8);
  sqcRYGate(q, 0.4122264515495227, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.1388891313486034, 8);
  sqcRYGate(q, -2.914613381070037, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.6581622224299117, 10);
  sqcRYGate(q, -1.5878490371158476, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.9090278623862649, 10);
  sqcRYGate(q, 3.0794236505019827, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.9997686972591691, 12);
  sqcRYGate(q, -1.950772852011139, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.4799269247274072, 12);
  sqcRYGate(q, -0.7665336720690759, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.1869513576762416, 14);
  sqcRYGate(q, 2.966785241533636, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 3.018082939277823, 14);
  sqcRYGate(q, -0.3348286245044019, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.6291106263751787, 16);
  sqcRYGate(q, -2.7173070695487467, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 3.0481207057142106, 16);
  sqcRYGate(q, -2.992603757662419, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.4436190328244605, 18);
  sqcRYGate(q, 0.7313219121153973, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.382851446653912, 18);
  sqcRYGate(q, 1.2809029762483535, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.1791964032763491, 1);
  sqcRYGate(q, -1.0686206482684788, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0033939590498228323, 1);
  sqcRYGate(q, 2.8536547531165155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9655009678471351, 3);
  sqcRYGate(q, 2.2715524564685, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.727213355240728, 3);
  sqcRYGate(q, 3.0989457903568782, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.355188900305194, 5);
  sqcRYGate(q, -0.8793614357374603, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1304697319533243, 5);
  sqcRYGate(q, 3.0460726736326826, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.668309311749932, 7);
  sqcRYGate(q, -1.7667592235074574, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.043259137836727, 7);
  sqcRYGate(q, 0.04510972324037546, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3095806792675297, 9);
  sqcRYGate(q, 0.9260002149045876, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.0616795388337876, 9);
  sqcRYGate(q, 3.138605437699764, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.0172259320687926, 11);
  sqcRYGate(q, 0.6213965957089495, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.01594634088212803, 11);
  sqcRYGate(q, 0.11318120060689552, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.7779959570689425, 13);
  sqcRYGate(q, 0.8788727355623025, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -3.1313646039287257, 13);
  sqcRYGate(q, 0.07704853089374086, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -2.315677932752614, 15);
  sqcRYGate(q, -2.1646234786649243, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -3.1043872871135907, 15);
  sqcRYGate(q, -3.1081861718815826, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.8694878607673524, 17);
  sqcRYGate(q, 2.0230419761115614, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.03009160791388089, 17);
  sqcRYGate(q, 0.021559993840982124, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.3721147743948188, 0);
  sqcRYGate(q, -1.9417911178937952, 1);
  sqcRYGate(q, 2.6581899217659295, 2);
  sqcRYGate(q, -0.10265189083562375, 3);
  sqcRYGate(q, 1.9742043838085312, 4);
  sqcRYGate(q, 2.6430708606122213, 5);
  sqcRYGate(q, 1.659065334475749, 6);
  sqcRYGate(q, -2.1571884259266225, 7);
  sqcRYGate(q, 0.5331427926792882, 8);
  sqcRYGate(q, -0.9926192015373456, 9);
  sqcRYGate(q, -1.839246357617348, 10);
  sqcRYGate(q, -0.19629564775826047, 11);
  sqcRYGate(q, -1.9720105106273775, 12);
  sqcRYGate(q, -1.7581017175781293, 13);
  sqcRYGate(q, -0.20982913136807915, 14);
  sqcRYGate(q, 0.7218809843848737, 15);
  sqcRYGate(q, -0.6050933870276743, 16);
  sqcRYGate(q, 2.3781482840707096, 17);
  sqcRYGate(q, 2.509713446974092, 18);
  sqcRYGate(q, 0.5674104102300754, 19);

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
