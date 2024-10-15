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

  sqcRYGate(q, -0.18302783629950795, 0);
  sqcRYGate(q, -2.7754493773364772, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5427087531462633, 0);
  sqcRYGate(q, -0.4584545710188239, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0180224973409469, 2);
  sqcRYGate(q, 2.05336726483342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.127237070382056, 2);
  sqcRYGate(q, 0.2376621140882902, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4863618989119136, 4);
  sqcRYGate(q, -1.947891960193422, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5260323449849081, 4);
  sqcRYGate(q, -0.5907301231084775, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.059367803044085884, 6);
  sqcRYGate(q, 1.2566734622758045, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8123534291335603, 6);
  sqcRYGate(q, 2.2477917447906637, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.322265632090111, 1);
  sqcRYGate(q, -1.2682580426295926, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2294744765464355, 1);
  sqcRYGate(q, 1.2112318625314087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8295369226128289, 3);
  sqcRYGate(q, -0.3844009579075741, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5047254547843396, 3);
  sqcRYGate(q, 2.069068111248625, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7445064123854936, 5);
  sqcRYGate(q, -2.594726649528531, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7869009682004418, 5);
  sqcRYGate(q, 1.5169275248175795, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.8119059161981093, 0);
  sqcRYGate(q, 0.2845091701037967, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5982570116862747, 0);
  sqcRYGate(q, -0.9597148972154012, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.227204981830551, 2);
  sqcRYGate(q, -1.6564343770740255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.785073668180723, 2);
  sqcRYGate(q, 1.3656216014345848, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3299707067357656, 4);
  sqcRYGate(q, -3.107099993996492, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1552148950290233, 4);
  sqcRYGate(q, 1.9483295980398383, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.740331055268466, 6);
  sqcRYGate(q, 0.3664409502953747, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6072828803423693, 6);
  sqcRYGate(q, 1.4359935346193176, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9637837649006207, 1);
  sqcRYGate(q, -3.1071902910214773, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1104494690770594, 1);
  sqcRYGate(q, -0.6869348805214148, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1078893283460167, 3);
  sqcRYGate(q, -2.285125758631974, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5535281939725678, 3);
  sqcRYGate(q, 1.3937966069995005, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0189706010249973, 5);
  sqcRYGate(q, 2.01156954450515, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.09958772325151208, 5);
  sqcRYGate(q, -0.7302292715876691, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.932379383835917, 0);
  sqcRYGate(q, 0.7890248352524084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.271915620410212, 0);
  sqcRYGate(q, -2.9451464708683694, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.125429404329198, 2);
  sqcRYGate(q, 0.7897618205159097, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3545456451093554, 2);
  sqcRYGate(q, -3.104094978647482, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.045453203451433, 4);
  sqcRYGate(q, -0.3768178654643721, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.7367045191761465, 4);
  sqcRYGate(q, -2.74476280455533, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.12156404610104919, 6);
  sqcRYGate(q, -2.7123093843134325, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.160977373523309, 6);
  sqcRYGate(q, -0.3015099723210737, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.1584657107285175, 1);
  sqcRYGate(q, 1.4220346786970914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.132871694922521, 1);
  sqcRYGate(q, 0.0465006351524222, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.449735940584917, 3);
  sqcRYGate(q, 2.553671991649577, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.902898144098903, 3);
  sqcRYGate(q, -0.878255014886244, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.0639002498459378, 5);
  sqcRYGate(q, -0.5950811862936609, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.08184868343643174, 5);
  sqcRYGate(q, 2.599086508348177, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4752421196408205, 0);
  sqcRYGate(q, -1.1006150358664084, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3280656201449226, 0);
  sqcRYGate(q, 2.8953936364466766, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6416603091215882, 2);
  sqcRYGate(q, 1.753730493193203, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8999001412277758, 2);
  sqcRYGate(q, -2.1472765643225173, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.812480489398931, 4);
  sqcRYGate(q, -0.11617819133827022, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.870802556207779, 4);
  sqcRYGate(q, 1.0226053151022647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6901362203823636, 6);
  sqcRYGate(q, -2.033167786616736, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.1082004694030925, 6);
  sqcRYGate(q, -0.4128958839124115, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3032474653503077, 1);
  sqcRYGate(q, -0.5449569652974071, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7813084190669466, 1);
  sqcRYGate(q, 2.2388232212178485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.02350935309235881, 3);
  sqcRYGate(q, 2.0611456144528857, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4538753831768092, 3);
  sqcRYGate(q, -1.1057281935448309, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4319541698968381, 5);
  sqcRYGate(q, 0.7809817074361156, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.030719943678026773, 5);
  sqcRYGate(q, -2.5517542948211194, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9473090834044215, 0);
  sqcRYGate(q, 0.8157405670181318, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2619913730014414, 0);
  sqcRYGate(q, 2.515907026509662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1839242537483239, 2);
  sqcRYGate(q, -1.3217989904418859, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1291940802274354, 2);
  sqcRYGate(q, -2.075514525934085, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1618501202150746, 4);
  sqcRYGate(q, -2.5355984602550032, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.752848020496152, 4);
  sqcRYGate(q, -0.6182271052925845, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7359504679142006, 6);
  sqcRYGate(q, -0.7136887748352041, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.289998033799189, 6);
  sqcRYGate(q, 1.797264179800288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.32380902417423657, 1);
  sqcRYGate(q, 0.45562023147702924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2323343683658292, 1);
  sqcRYGate(q, 2.0791132660324734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45260749515336673, 3);
  sqcRYGate(q, -2.0074182579455613, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.602826602260932, 3);
  sqcRYGate(q, -0.2984991202425995, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9024517190246577, 5);
  sqcRYGate(q, 2.815476155900911, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5986609631679425, 5);
  sqcRYGate(q, -1.6147731441313473, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5415576432523177, 0);
  sqcRYGate(q, -1.540435182203305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.431535909586247, 0);
  sqcRYGate(q, 0.5804794919184697, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0342005687482714, 2);
  sqcRYGate(q, -0.813368122726594, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1750526862935724, 2);
  sqcRYGate(q, 1.155920103898838, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3343225895528414, 4);
  sqcRYGate(q, 0.8846737878741804, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9561194090505925, 4);
  sqcRYGate(q, -2.1157000222779896, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4382965521791524, 6);
  sqcRYGate(q, -1.3149412188691474, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2196452521151299, 6);
  sqcRYGate(q, -1.8091948169204615, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0760050022433947, 1);
  sqcRYGate(q, 1.8006486434097972, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6297151142659323, 1);
  sqcRYGate(q, 1.2615510799523841, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6391328134759435, 3);
  sqcRYGate(q, 1.3476100620716964, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9234407340739789, 3);
  sqcRYGate(q, 0.08627007498923245, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0520030250465253, 5);
  sqcRYGate(q, 2.1344831632276544, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5865943865249372, 5);
  sqcRYGate(q, 1.011035213165409, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7901010587445076, 0);
  sqcRYGate(q, 1.3364325717215957, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0593377944370244, 0);
  sqcRYGate(q, 2.3272179547232206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4317452022671013, 2);
  sqcRYGate(q, 0.9444045339460322, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0825227843093868, 2);
  sqcRYGate(q, 1.8927251074011222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9178130743529491, 4);
  sqcRYGate(q, -2.5923922976695497, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.535293712581981, 4);
  sqcRYGate(q, -1.3384746970898425, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2766757704075282, 6);
  sqcRYGate(q, 2.9825396399115536, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9083600151351223, 6);
  sqcRYGate(q, -2.161717959870707, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8598207477445028, 1);
  sqcRYGate(q, -2.499729698217416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3843783584756033, 1);
  sqcRYGate(q, 0.43433589519640653, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8237846358228325, 3);
  sqcRYGate(q, -2.701517908760209, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.478344605880312, 3);
  sqcRYGate(q, 0.49243711530194234, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.492673801898732, 5);
  sqcRYGate(q, 3.03753338785947, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4316050100352076, 5);
  sqcRYGate(q, -2.2107711591556285, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0585392149149744, 0);
  sqcRYGate(q, -2.9479722290727595, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.213783634083339, 0);
  sqcRYGate(q, 1.9357064315309829, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5680366834617736, 2);
  sqcRYGate(q, 1.3645388840873176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.027718949080598243, 2);
  sqcRYGate(q, -2.8911716039261868, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.167744702761883, 4);
  sqcRYGate(q, 3.1235939542797246, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5138251272903984, 4);
  sqcRYGate(q, -2.59618565627199, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.234405293186569, 6);
  sqcRYGate(q, -0.6434281450725752, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.6492422602835539, 6);
  sqcRYGate(q, -0.9825374304778007, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0284132799025847, 1);
  sqcRYGate(q, 0.11416212714748752, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1317771677205781, 1);
  sqcRYGate(q, 1.5448832842271383, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6622760433616737, 3);
  sqcRYGate(q, 2.6459716937203455, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3694898412316308, 3);
  sqcRYGate(q, -2.52661884362785, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.429113514506358, 5);
  sqcRYGate(q, -3.0570549586566917, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6096484426049367, 5);
  sqcRYGate(q, 1.5120897900152326, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.118271599346788, 0);
  sqcRYGate(q, 0.18403494270766418, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.38267989191773033, 0);
  sqcRYGate(q, -2.579219517851776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.773756099973359, 2);
  sqcRYGate(q, -1.2906210997064385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5940278477276055, 2);
  sqcRYGate(q, -1.774108010478284, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4758106794498635, 4);
  sqcRYGate(q, -2.175357687883799, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.3187020430727783, 4);
  sqcRYGate(q, -1.4330303899723436, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.25215645791769, 6);
  sqcRYGate(q, -2.3807764590288034, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9816333828490664, 6);
  sqcRYGate(q, 1.3301055238453257, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2960767864654414, 1);
  sqcRYGate(q, 1.6812994118923044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7118717125247611, 1);
  sqcRYGate(q, 2.2863914226479753, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8859304077491539, 3);
  sqcRYGate(q, 0.9021804614400767, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3046950895204501, 3);
  sqcRYGate(q, 1.6251381796483955, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8871966615636036, 5);
  sqcRYGate(q, 1.983728577254495, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.054269359686166, 5);
  sqcRYGate(q, 1.026875309306437, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3028773254828954, 0);
  sqcRYGate(q, -2.0602903749020527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.125804801870522, 0);
  sqcRYGate(q, -2.174858723073333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.04430099823380823, 2);
  sqcRYGate(q, -2.326105542984635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.26164787376862314, 2);
  sqcRYGate(q, -2.594396992973635, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.012956667698554946, 4);
  sqcRYGate(q, -2.670929892862404, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0701057967116223, 4);
  sqcRYGate(q, 0.8325916169672718, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.286050411936373, 6);
  sqcRYGate(q, -0.39330841445193804, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5864114679443, 6);
  sqcRYGate(q, 0.5391908670916221, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.404594070986934, 1);
  sqcRYGate(q, 0.7195146136433971, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6084630501325301, 1);
  sqcRYGate(q, -1.2012816732086478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7593295226183954, 3);
  sqcRYGate(q, -1.0176438292835748, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.625646829363169, 3);
  sqcRYGate(q, -1.6665786921030288, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.742375102178777, 5);
  sqcRYGate(q, -2.138648894443385, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.581546351515032, 5);
  sqcRYGate(q, -2.2943601855596074, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7054787940954732, 0);
  sqcRYGate(q, -2.5879149521009435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.375556461323253, 0);
  sqcRYGate(q, 1.2453744011622279, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.550229982702812, 2);
  sqcRYGate(q, -0.724518902986539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6384228160324882, 2);
  sqcRYGate(q, 2.0674174629392006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5774845314123431, 4);
  sqcRYGate(q, 1.0099977751231437, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.097423532491054, 4);
  sqcRYGate(q, -0.5356459669047853, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.176151601284273, 6);
  sqcRYGate(q, -2.3620724653215412, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0927066610173854, 6);
  sqcRYGate(q, 0.7313353263705052, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8591487286859985, 1);
  sqcRYGate(q, -0.5093143785482936, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3971662151950377, 1);
  sqcRYGate(q, -0.8254912056667494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4974987626879432, 3);
  sqcRYGate(q, -1.6058997652703566, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.460239640681292, 3);
  sqcRYGate(q, -2.1084181956843837, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2622219211525305, 5);
  sqcRYGate(q, 2.0813090611265137, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.12779535791594804, 5);
  sqcRYGate(q, 0.9537668374414611, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.533806508395183, 0);
  sqcRYGate(q, -0.18951419390785773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.696537643522985, 0);
  sqcRYGate(q, 2.6069547928108543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14507410548149657, 2);
  sqcRYGate(q, 0.4629361284004823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8584730470342024, 2);
  sqcRYGate(q, 0.523456221213312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9380289552474075, 4);
  sqcRYGate(q, -2.3308694013559297, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.038433793756603, 4);
  sqcRYGate(q, -1.345285747067786, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2183731894471448, 6);
  sqcRYGate(q, -0.05830709693468261, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1925977258636842, 6);
  sqcRYGate(q, -0.875304698820761, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.191529240645879, 1);
  sqcRYGate(q, 3.0916355001339717, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4524941230753887, 1);
  sqcRYGate(q, -2.562265553239975, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4113266556444022, 3);
  sqcRYGate(q, -1.6416965662912337, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.160030363546765, 3);
  sqcRYGate(q, 1.777302950314804, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.962061989845118, 5);
  sqcRYGate(q, 0.12382046418400273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.386511014372666, 5);
  sqcRYGate(q, -0.3353015612160357, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.12207754689126382, 0);
  sqcRYGate(q, -3.0422750079997125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3485432334123342, 0);
  sqcRYGate(q, -2.4122579480331785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5312359060135305, 2);
  sqcRYGate(q, -1.2341647554041133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.677355189367789, 2);
  sqcRYGate(q, -2.5747308010476844, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2247510497777438, 4);
  sqcRYGate(q, -0.9058247660802593, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1105008336055975, 4);
  sqcRYGate(q, -0.10403167135685544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0381820346658255, 6);
  sqcRYGate(q, 0.1253331314541093, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4581844079334525, 6);
  sqcRYGate(q, 1.8651994773313358, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.053997024398545, 1);
  sqcRYGate(q, -2.101095149703662, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8832518354876839, 1);
  sqcRYGate(q, -1.7820220840202319, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8899149475236046, 3);
  sqcRYGate(q, -1.908306289688212, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5354860310434638, 3);
  sqcRYGate(q, 2.160929806334722, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5983479076620353, 5);
  sqcRYGate(q, -1.8547464152483568, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7309808638800623, 5);
  sqcRYGate(q, 1.1019327060964992, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.1258204272058765, 0);
  sqcRYGate(q, 1.2581211339022853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9030089638049006, 0);
  sqcRYGate(q, -0.5978459998676043, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8031532911313635, 2);
  sqcRYGate(q, -1.6621912212785956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.30378369277648637, 2);
  sqcRYGate(q, 3.024418828280019, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6711872570175199, 4);
  sqcRYGate(q, -1.72110031958279, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.45674897662201, 4);
  sqcRYGate(q, -0.24248505393105635, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9491859919962478, 6);
  sqcRYGate(q, 2.700561719329703, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.4616729012404304, 6);
  sqcRYGate(q, -0.6413861464607679, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2242987044785636, 1);
  sqcRYGate(q, -1.5252369841268987, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.077759162097081, 1);
  sqcRYGate(q, 2.8453422359220086, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5326480913681788, 3);
  sqcRYGate(q, -0.9159706348846414, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.5030321808421507, 3);
  sqcRYGate(q, -0.16229989280163284, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4540581475718397, 5);
  sqcRYGate(q, 2.6609341857740145, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6014073870122866, 5);
  sqcRYGate(q, 1.164825226896896, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.12298778436763, 0);
  sqcRYGate(q, -0.6058159822214773, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0476524343720515, 0);
  sqcRYGate(q, 2.2758372185504276, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6717524114907027, 2);
  sqcRYGate(q, -2.3386908208823103, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7343773904595658, 2);
  sqcRYGate(q, -2.650172945715614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2425169741009654, 4);
  sqcRYGate(q, -0.9580189580003503, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.13211409946800412, 4);
  sqcRYGate(q, -0.08979941499227634, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1050577104131853, 6);
  sqcRYGate(q, 0.5448542545043766, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.0808756890277453, 6);
  sqcRYGate(q, -0.5561444957954472, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0609993282735228, 1);
  sqcRYGate(q, 0.8648776264295838, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9700523979615108, 1);
  sqcRYGate(q, 1.6138646898879134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.269230257800527, 3);
  sqcRYGate(q, -2.9396105443893017, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3100969022326578, 3);
  sqcRYGate(q, -1.6355966675265248, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.4368124255614468, 5);
  sqcRYGate(q, 2.9740988925416265, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.109566439733764, 5);
  sqcRYGate(q, -0.724000848250653, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.940185702785171, 0);
  sqcRYGate(q, -0.48443329748539543, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6620285024157527, 0);
  sqcRYGate(q, -2.747912810569664, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6778722954587098, 2);
  sqcRYGate(q, 1.8031100415140056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.692311367928648, 2);
  sqcRYGate(q, 2.1589599046097585, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.352591095762678, 4);
  sqcRYGate(q, 2.8160923838909473, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5040219202857772, 4);
  sqcRYGate(q, 0.15056399189437109, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9977132345999118, 6);
  sqcRYGate(q, 0.7266189191936624, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2865880984846525, 6);
  sqcRYGate(q, 1.9420160663178694, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0796278838552271, 1);
  sqcRYGate(q, 1.2751911098780366, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9153500238521097, 1);
  sqcRYGate(q, 2.8762179094377376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7052219820725958, 3);
  sqcRYGate(q, -0.03992159553734265, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.38464562693448645, 3);
  sqcRYGate(q, -2.5507467415685694, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6209956581088942, 5);
  sqcRYGate(q, 0.08153199269079531, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.828764694207847, 5);
  sqcRYGate(q, 0.5821816485995739, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.019279400387719466, 0);
  sqcRYGate(q, 0.9860042283918837, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0039088308413848, 0);
  sqcRYGate(q, 0.23386208607124814, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3850272389178464, 2);
  sqcRYGate(q, -2.6051765709737236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5999406652177686, 2);
  sqcRYGate(q, -1.5437370985721603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.938424871473472, 4);
  sqcRYGate(q, 1.4190732010082607, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.303077981557674, 4);
  sqcRYGate(q, -0.9697132615661201, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.8256289056932575, 6);
  sqcRYGate(q, -1.3005044212885937, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.9466682962077916, 6);
  sqcRYGate(q, -0.6601417282453178, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0161635456289324, 1);
  sqcRYGate(q, -1.8822285421726628, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0767414967982925, 1);
  sqcRYGate(q, 0.32980778622462464, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7021838331624721, 3);
  sqcRYGate(q, 0.7778510472139912, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.746838643421702, 3);
  sqcRYGate(q, 3.0029382328636482, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7725952405010756, 5);
  sqcRYGate(q, -0.5880544219205722, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.8741113129540388, 5);
  sqcRYGate(q, -1.065721308658752, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4634454981210316, 0);
  sqcRYGate(q, -1.0961919035945922, 1);
  sqcRYGate(q, -0.6542867960879037, 2);
  sqcRYGate(q, 2.6151346521372134, 3);
  sqcRYGate(q, -0.3021376259441423, 4);
  sqcRYGate(q, 2.251307865197854, 5);
  sqcRYGate(q, 0.27768258945472796, 6);
  sqcRYGate(q, -0.8895565805310932, 7);

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
