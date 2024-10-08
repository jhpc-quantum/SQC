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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 2.156013116777117, 0);
  sqcRYGate(q, 0.6737204516009039, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.711011553919925, 0);
  sqcRYGate(q, -0.05789376516895005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.03711330643468934, 2);
  sqcRYGate(q, 2.933279470114293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13010120070558545, 2);
  sqcRYGate(q, 2.2535002222702674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.38161060903612076, 4);
  sqcRYGate(q, 1.4206310142771548, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9067299180106946, 4);
  sqcRYGate(q, 2.61888481466914, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0671137479354105, 6);
  sqcRYGate(q, 1.9159129148506784, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.5452271535970716, 6);
  sqcRYGate(q, -0.5667497925696781, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.2762629939122068, 1);
  sqcRYGate(q, -1.694491835140591, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7550132638648872, 1);
  sqcRYGate(q, -1.7202328055556428, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9291525868784647, 3);
  sqcRYGate(q, -1.5839623293653557, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.12413213893029429, 3);
  sqcRYGate(q, 0.25625195118570865, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6452128620901005, 5);
  sqcRYGate(q, 1.0369058645937588, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.06327648436986522, 5);
  sqcRYGate(q, -1.1949589242400371, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.40044864139552067, 0);
  sqcRYGate(q, 1.552540492702213, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4267562222389163, 0);
  sqcRYGate(q, -1.095264647472323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9512104081143599, 2);
  sqcRYGate(q, 0.9542171008679476, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5713676481047616, 2);
  sqcRYGate(q, -3.0606033800704755, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8314316112844047, 4);
  sqcRYGate(q, 0.8439952222462801, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.150676421566179, 4);
  sqcRYGate(q, 0.09750596433697911, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.2524294481766676, 6);
  sqcRYGate(q, -1.7774851049983094, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4055972117565725, 6);
  sqcRYGate(q, -1.8929607048356543, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.294976966597462, 1);
  sqcRYGate(q, -1.2358383814086285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.053590782791063, 1);
  sqcRYGate(q, -1.0194647451059318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5685596778863922, 3);
  sqcRYGate(q, -2.8901284446203634, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.019794868345676852, 3);
  sqcRYGate(q, 0.2936004795076106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.9015096648759018, 5);
  sqcRYGate(q, 1.5945753714901747, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.11364092032755657, 5);
  sqcRYGate(q, -3.11440655826769, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4525285561880361, 0);
  sqcRYGate(q, 1.4732949724916224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3014022711431736, 0);
  sqcRYGate(q, 1.7621324933130609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6163060001149514, 2);
  sqcRYGate(q, -1.926916826954724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1284316359163835, 2);
  sqcRYGate(q, 1.8260426564411067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4306604654402457, 4);
  sqcRYGate(q, 1.2688683490037482, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.04130323015413716, 4);
  sqcRYGate(q, 1.2178715729661238, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4699306135192615, 6);
  sqcRYGate(q, 2.529568283517589, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5571047467120787, 6);
  sqcRYGate(q, -0.9353719262324454, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.080946722977776, 1);
  sqcRYGate(q, 1.2080503873545014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4793984476953002, 1);
  sqcRYGate(q, 1.3148019215081554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8286881750883923, 3);
  sqcRYGate(q, 2.4495362509877565, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.0077546412288205, 3);
  sqcRYGate(q, 0.12478596926325541, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.5827819876889193, 5);
  sqcRYGate(q, -2.555314611108837, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4736067352396516, 5);
  sqcRYGate(q, 1.5777744201310586, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.943623741801639, 0);
  sqcRYGate(q, 0.3594074123446571, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8914972703290625, 0);
  sqcRYGate(q, 0.555085307783572, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0375160852815313, 2);
  sqcRYGate(q, 2.799710832901836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6739370717886262, 2);
  sqcRYGate(q, -2.8935489518687176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.09223350059149382, 4);
  sqcRYGate(q, 1.9353447697132768, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.030103931300801356, 4);
  sqcRYGate(q, 0.28913615841207285, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.9762692636120893, 6);
  sqcRYGate(q, -0.6541231215243333, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5403380710504591, 6);
  sqcRYGate(q, 1.5840858806883222, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.40881882610198456, 1);
  sqcRYGate(q, 2.839643412365604, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.409983727993965, 1);
  sqcRYGate(q, -2.0140095170713828, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.53247114205822, 3);
  sqcRYGate(q, 0.4000207680897184, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7932070111958005, 3);
  sqcRYGate(q, -3.1343210055611905, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.905605070572233, 5);
  sqcRYGate(q, -1.9796368469560681, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.698489072362081, 5);
  sqcRYGate(q, -3.1385299257343235, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.449384844483734, 0);
  sqcRYGate(q, -2.4572057465083286, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.126139730061273, 0);
  sqcRYGate(q, -2.1362019106364447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5481799608480282, 2);
  sqcRYGate(q, 2.7345556574641794, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0077679662971830155, 2);
  sqcRYGate(q, -2.150608806053013, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.951603511828102, 4);
  sqcRYGate(q, 0.3076289495452782, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0029645863497612117, 4);
  sqcRYGate(q, -2.726158817678815, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.6169447816537064, 6);
  sqcRYGate(q, 0.12598234995966887, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.177359164393438, 6);
  sqcRYGate(q, -0.04717683751617141, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.3135434449687016, 1);
  sqcRYGate(q, 0.4639638118796842, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.18321163659349113, 1);
  sqcRYGate(q, 0.7564286805035144, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.42396657625549783, 3);
  sqcRYGate(q, 2.684019446687615, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.669075840289136, 3);
  sqcRYGate(q, -3.080640753081515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.40360993815833, 5);
  sqcRYGate(q, 2.5643147382432185, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.960406998403608, 5);
  sqcRYGate(q, 2.9535645265154953, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.27469731564257494, 0);
  sqcRYGate(q, -1.2308151126921523, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0348873282117872, 0);
  sqcRYGate(q, -1.1065025957928727, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7727009853645006, 2);
  sqcRYGate(q, 2.0363338997945846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.027161949400730634, 2);
  sqcRYGate(q, 1.0051084794362195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8890546804515163, 4);
  sqcRYGate(q, -0.8157235944871041, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.1201652585036403, 4);
  sqcRYGate(q, -1.8515098116031803, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2943527114621547, 6);
  sqcRYGate(q, -2.7086168284151273, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7875030480411986, 6);
  sqcRYGate(q, -0.7276681310612918, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.8338053026204477, 1);
  sqcRYGate(q, -0.28978827575141525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1040192475091032, 1);
  sqcRYGate(q, -0.28801593588551544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.934133940697825, 3);
  sqcRYGate(q, -0.6738000641378515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.1253827557010574, 3);
  sqcRYGate(q, -1.53156042703376, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.3589570053556725, 5);
  sqcRYGate(q, -2.9537304369105097, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.09419033684124845, 5);
  sqcRYGate(q, 0.09725505607806846, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.6585236788512823, 0);
  sqcRYGate(q, -0.0451651854834532, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.229234652185025, 0);
  sqcRYGate(q, -3.1227953504554313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22576968500647243, 2);
  sqcRYGate(q, -3.0228518017299595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.749522464606511, 2);
  sqcRYGate(q, 3.137552843364913, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6702995692376363, 4);
  sqcRYGate(q, -2.5761787239250054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.029796030403437, 4);
  sqcRYGate(q, -0.4413079781588138, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.031834026998158294, 6);
  sqcRYGate(q, -1.354229758538315, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2870427739004296, 6);
  sqcRYGate(q, -3.1231737069183656, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8265438119867596, 1);
  sqcRYGate(q, -1.7912789948013021, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.141491637958446, 1);
  sqcRYGate(q, -2.6960423431088003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.580904690036384, 3);
  sqcRYGate(q, -3.1162499004283877, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.04395448722753883, 3);
  sqcRYGate(q, -2.6774272645199266, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7526091072690857, 5);
  sqcRYGate(q, 0.20875554722707168, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9145482605291027, 5);
  sqcRYGate(q, 3.1001612084110235, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7136086403965354, 0);
  sqcRYGate(q, 1.6858450868565267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.922603018731557, 0);
  sqcRYGate(q, 1.609991043445416, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.334129164399222, 2);
  sqcRYGate(q, -2.885749232590301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4009462935413284, 2);
  sqcRYGate(q, 1.5709249613742973, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06161558505044024, 4);
  sqcRYGate(q, 0.9646858981992814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.722154498972997, 4);
  sqcRYGate(q, 1.164346219903814, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7844269798223569, 6);
  sqcRYGate(q, -2.7429941888986282, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.606450455865868, 6);
  sqcRYGate(q, 0.986092365230844, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.913820377037696, 1);
  sqcRYGate(q, -1.5677419945328968, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6217059935749706, 1);
  sqcRYGate(q, -1.5723161345100207, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14249766328955357, 3);
  sqcRYGate(q, 0.17969598279408175, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.0005534978868846353, 3);
  sqcRYGate(q, -2.308745667282217, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.1065945728181363, 5);
  sqcRYGate(q, 1.7605898813260241, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.011454437182899336, 5);
  sqcRYGate(q, 0.26209607837407395, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4429854587913018, 0);
  sqcRYGate(q, -1.5725347789524047, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8083575403634935, 0);
  sqcRYGate(q, -1.5738789462364893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6098087092762334, 2);
  sqcRYGate(q, 1.5751877421584473, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2234292630721872, 2);
  sqcRYGate(q, 0.01404954298107887, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.05295279044956005, 4);
  sqcRYGate(q, -2.6950409971297495, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0619844453788603, 4);
  sqcRYGate(q, 0.025717239105560254, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7329351172601088, 6);
  sqcRYGate(q, 1.2846740424465288, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.479329845501927, 6);
  sqcRYGate(q, 2.2598156603117925, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5703248489418398, 1);
  sqcRYGate(q, -0.10115121115577005, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0006868688613343373, 1);
  sqcRYGate(q, 0.757630066932727, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5706351718999572, 3);
  sqcRYGate(q, -1.6906711873078093, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5714049575066298, 3);
  sqcRYGate(q, -0.6877052870665814, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.01556930813081, 5);
  sqcRYGate(q, 0.0011824189940017257, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5526975190076957, 5);
  sqcRYGate(q, -1.558570804685588, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.000772353687371444, 0);
  sqcRYGate(q, 1.5729161607283892, 1);
  sqcRYGate(q, 1.6322783247312191, 2);
  sqcRYGate(q, 1.5690210873506145, 3);
  sqcRYGate(q, 0.0005783083999855976, 4);
  sqcRYGate(q, 1.4032607049785062, 5);
  sqcRYGate(q, -3.1403756378881527, 6);
  sqcRYGate(q, 0.42055600906907303, 7);

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
