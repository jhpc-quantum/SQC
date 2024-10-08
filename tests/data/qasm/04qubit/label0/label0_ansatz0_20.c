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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.028651454314394247, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.03946647838526503, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.09311609433020109, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.6259102931327026, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.8166347940894116, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.21672658971789457, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9858054449495202, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.027791760536625583, 0);
  sqcRZGate(q, 0.09063196105170507, 1);
  sqcRZGate(q, 0.007830360351982129, 2);
  sqcRZGate(q, -0.20096004625015362, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.12312872374083166, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.018171110738612547, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.12609605394554194, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5778958447839763, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.849632021923339, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.27106524386193503, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8565328057135579, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.001194164630249368, 0);
  sqcRZGate(q, 0.1289142617660577, 1);
  sqcRZGate(q, -0.003595148191823729, 2);
  sqcRZGate(q, -0.14241956622072138, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2445496143630604, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.02890627595232838, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.10043071032049299, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.6331193028054274, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.844688721792874, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.31985037637665303, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8233135923116701, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.09594822553391175, 0);
  sqcRZGate(q, 0.24411853821602741, 1);
  sqcRZGate(q, -0.008503877294716137, 2);
  sqcRZGate(q, -0.09928535945854808, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.15302307688021805, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.036935775171874546, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.14636301970947668, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5014556322582983, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.7815751545151779, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3167685055866588, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7378841094308072, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.16525118106260236, 0);
  sqcRZGate(q, 0.13387276972812032, 1);
  sqcRZGate(q, 0.1082073132768239, 2);
  sqcRZGate(q, -0.12121948406989472, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.09525154089228996, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.14533840144668994, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.15728537230227954, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.49933118645418, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.8497439114337784, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.30046365669948477, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.6861162218051243, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.18963679593658456, 0);
  sqcRZGate(q, -0.09662503312702347, 1);
  sqcRZGate(q, 0.11104993953519837, 2);
  sqcRZGate(q, -0.06913265781970415, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.25050317017494644, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.04010630729549712, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.06104537619023349, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.47785009617567464, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.8839979463893677, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.298134690980094, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.64756416092234, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.0518138985040208, 0);
  sqcRZGate(q, -0.17419517827572675, 1);
  sqcRZGate(q, 0.1948951388506954, 2);
  sqcRZGate(q, -0.07669182101269739, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.3209193657878939, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.04544148634466081, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.08995033936457472, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.23452279852212923, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.7141010966241415, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.41564935043502527, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5553979086462713, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.15481713605718744, 0);
  sqcRZGate(q, 0.021904773710182155, 1);
  sqcRZGate(q, 0.06647333097645201, 2);
  sqcRZGate(q, -0.025677239390571396, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.010758494530684216, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.007465632521024883, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.19180928872601238, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.17454342490008465, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.6351751388944831, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3707508571892632, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.5485285780994036, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.12240287146726192, 0);
  sqcRZGate(q, 0.10218233759050617, 1);
  sqcRZGate(q, 0.057704118362892305, 2);
  sqcRZGate(q, -0.11982261433619436, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.08103111544606739, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.03999772109863902, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.056033062335174064, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.15744888672748097, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.4550842352658577, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.43205562648612306, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3638227514257897, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.12897856319553633, 0);
  sqcRZGate(q, 0.07760691131314622, 1);
  sqcRZGate(q, -0.06675853398512842, 2);
  sqcRZGate(q, -0.06501342209262803, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.0603792265525477, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.05500509577162361, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.0023276920092745205, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2028530612588692, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.2982742782394975, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3019368293907644, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.31255821737809203, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.10593857923464005, 0);
  sqcRZGate(q, 0.0373685490481648, 1);
  sqcRZGate(q, -0.004071194029906346, 2);
  sqcRZGate(q, -0.09994620140240594, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.060880331637402745, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.06420040886573444, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.035619515573549775, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2533486176425241, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.09246145162906923, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.292139012498618, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.24471546006529676, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.017343890320458535, 0);
  sqcRZGate(q, -0.023489917675330277, 1);
  sqcRZGate(q, -0.02723466380152782, 2);
  sqcRZGate(q, -0.1275724102592319, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.14157579355279257, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.02719892555795049, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1306411915147052, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.21144515994031024, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.20627120331809037, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.27078912005424594, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.09394902416054877, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.0701379545307989, 0);
  sqcRZGate(q, -0.013508891092199332, 1);
  sqcRZGate(q, -0.0027849081418710128, 2);
  sqcRZGate(q, -0.1484672081693372, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09733812515478896, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.027168584886254985, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.12567232606134468, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.11142156598875678, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.3604120414403755, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.2840119326293275, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.02391659303861235, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.00012636793922324698, 0);
  sqcRZGate(q, 0.013599007041120539, 1);
  sqcRZGate(q, 0.06303940126768912, 2);
  sqcRZGate(q, -0.12593938449669917, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.18703520682019945, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.030911254601524427, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.09355385068896147, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.07759663994531413, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5748566432684282, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3098672152072906, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.1339281789035637, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.008928680667322893, 0);
  sqcRZGate(q, -0.05619579236975136, 1);
  sqcRZGate(q, 0.05234528135263744, 2);
  sqcRZGate(q, -0.048328712119020255, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2570346486870578, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.06773541437832883, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.0943396049663846, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.08429715834606404, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7810197037954865, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.23218277286702055, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.12275075136984737, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.019000432365964336, 0);
  sqcRZGate(q, -0.12314574010190289, 1);
  sqcRZGate(q, 0.1411809938111779, 2);
  sqcRZGate(q, -0.046048219392389095, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.22692081777143036, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.1881867397873316, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.18073658432460885, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.07173813725148835, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9535319321239693, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.18661312254842774, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.18495297041356704, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.03196617787165277, 0);
  sqcRZGate(q, -0.16893517785571016, 1);
  sqcRZGate(q, 0.15387946028645022, 2);
  sqcRZGate(q, -0.009152145450316637, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09469361346870135, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.24152152212356268, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.20023695251381174, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.027370488686990657, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.0254652059940248, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.18484066076062267, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.22764707310028065, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.11059922394634496, 0);
  sqcRZGate(q, -0.20461204011520984, 1);
  sqcRZGate(q, 0.32662371894750125, 2);
  sqcRZGate(q, 0.02245126430352333, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.10850988695491426, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.32527124401824054, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.12206664156012677, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2052267969471425, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.0599921662915297, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.058933769645951796, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.22658520755081038, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2079235913223825, 0);
  sqcRZGate(q, 0.13003973630188645, 1);
  sqcRZGate(q, 0.3940778747335457, 2);
  sqcRZGate(q, 0.009467297136241464, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.08028140199617712, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.30212012703809465, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1251970105935902, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.04315594349624553, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 1.0975281018968375, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.08997812171487342, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.31941092378739816, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.21369350697328293, 0);
  sqcRZGate(q, 0.3018306706081756, 1);
  sqcRZGate(q, 0.3570137359435365, 2);
  sqcRZGate(q, 0.13625391822658603, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.01702583703343076, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.16174839421096326, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.14529045351788733, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.0039630984056476795, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.9563154166739122, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.033747164682846165, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.29384507439500246, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.329897287951703, 0);
  sqcRZGate(q, 0.10155647942822917, 1);
  sqcRZGate(q, 0.35884579749406453, 2);
  sqcRZGate(q, 0.13876929876798716, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.01743001171133759, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.14483028119900307, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.14800593909452497, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.13840844003058808, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.7808399008111833, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.0325934673833738, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.385660614500945, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.32111921104872726, 0);
  sqcRZGate(q, -0.22433292825643228, 1);
  sqcRZGate(q, 0.4158075996532785, 2);
  sqcRZGate(q, 0.32130645595067064, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.01984431069661418, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.22997585373651724, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.04715595417897138, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.13174558309548612, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4445514707167393, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.017521940634641516, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.2623760174132162, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.3366953113474956, 0);
  sqcRZGate(q, -0.2846892124382493, 1);
  sqcRZGate(q, 0.44866236227043144, 2);
  sqcRZGate(q, 0.2767201275789339, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.18341088741402065, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.018591450031239593, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.010531415699334603, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.552309499674922, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.15066013457787883, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.11492097970328018, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.28112009978983804, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4049125348710871, 0);
  sqcRZGate(q, -0.22113450436688104, 1);
  sqcRZGate(q, 0.5068983830537128, 2);
  sqcRZGate(q, 0.5196571431212685, 3);

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
