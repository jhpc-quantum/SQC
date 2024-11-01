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

  sqcRYGate(q, -3.0688243819616896, 0);
  sqcRYGate(q, 2.971553503004516, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.006582570760591544, 0);
  sqcRYGate(q, 2.240121415069261, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.420945157916159, 1);
  sqcRYGate(q, 2.26850210959676, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7137779918949043, 1);
  sqcRYGate(q, 0.6011433663523684, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6566604564608984, 2);
  sqcRYGate(q, -2.9100949895902026, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5010582170517086, 2);
  sqcRYGate(q, -2.328363439432936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.544877249183271, 0);
  sqcRYGate(q, -0.17116000227587364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9143810962763066, 0);
  sqcRYGate(q, -1.202304898091071, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5019875611772617, 1);
  sqcRYGate(q, 0.24286545067617044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9913170372425002, 1);
  sqcRYGate(q, -2.836432318804223, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4938629748884698, 2);
  sqcRYGate(q, -2.7082775586542285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3037970341215603, 2);
  sqcRYGate(q, -0.34654277370455855, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8470851841096512, 0);
  sqcRYGate(q, 2.194969749173876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3396392135898076, 0);
  sqcRYGate(q, 0.9117083395936074, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3031605826394255, 1);
  sqcRYGate(q, -1.9374182456515225, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.844656689596655, 1);
  sqcRYGate(q, 1.411409076003105, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1996309227352344, 2);
  sqcRYGate(q, -0.6811156712984383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.933943135493796, 2);
  sqcRYGate(q, -0.30127730976740086, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9717250100690995, 0);
  sqcRYGate(q, -2.3836675169639454, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9055689864331686, 0);
  sqcRYGate(q, 2.416933188591822, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1939687639050252, 1);
  sqcRYGate(q, 0.763960250459689, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16780943206893986, 1);
  sqcRYGate(q, -2.351786049512529, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.571839772396109, 2);
  sqcRYGate(q, -3.051159625638737, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1424320972797328, 2);
  sqcRYGate(q, 1.393731881299551, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8043860212483596, 0);
  sqcRYGate(q, -3.0316354234738765, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.03848148789975, 0);
  sqcRYGate(q, -1.2410392769498362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.06201418913359626, 1);
  sqcRYGate(q, -3.0231725109573966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4673358314762526, 1);
  sqcRYGate(q, 0.3565956788446933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8177004376124872, 2);
  sqcRYGate(q, 2.529593943967116, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5067203590979839, 2);
  sqcRYGate(q, -2.1585935748199896, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8501035427482024, 0);
  sqcRYGate(q, -0.9351540746865812, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2002903991045972, 0);
  sqcRYGate(q, -2.0192671800582964, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6148637832605539, 1);
  sqcRYGate(q, 1.593108763303135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.30130792862934647, 1);
  sqcRYGate(q, -0.10809895789792634, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3760047023565356, 2);
  sqcRYGate(q, 1.1116030677713962, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4332223460555233, 2);
  sqcRYGate(q, 2.769741373872387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1317397525634205, 0);
  sqcRYGate(q, 0.7966912489100075, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2570634583992764, 0);
  sqcRYGate(q, 0.21313948538553973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1162935637527305, 1);
  sqcRYGate(q, -1.2606068340285503, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.781938733197676, 1);
  sqcRYGate(q, -0.16907334762967619, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.9649404114712565, 2);
  sqcRYGate(q, -3.0569865747195815, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.137178768725446, 2);
  sqcRYGate(q, -0.2487044213750462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6563269319495912, 0);
  sqcRYGate(q, -0.9347562025857564, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.847356314285228, 0);
  sqcRYGate(q, 0.6980914733524699, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5390365365113631, 1);
  sqcRYGate(q, -1.5364619937934938, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3200026508573055, 1);
  sqcRYGate(q, -1.1043291035827678, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0248235871295766, 2);
  sqcRYGate(q, -1.8604419925394424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4618907297890216, 2);
  sqcRYGate(q, -2.35426391564153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8001509000289158, 0);
  sqcRYGate(q, 1.674660431166325, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0738799984608987, 0);
  sqcRYGate(q, -1.639315197767762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8413311895328032, 1);
  sqcRYGate(q, 2.8664194769892153, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.27067610304190953, 1);
  sqcRYGate(q, -2.2887178861271713, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8194610207415967, 2);
  sqcRYGate(q, -0.9168701194290283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.365516896514336, 2);
  sqcRYGate(q, -0.4820502959464577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.474581367676047, 0);
  sqcRYGate(q, 1.242564556152403, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7443369058110243, 0);
  sqcRYGate(q, -0.24152603893485472, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6212521350554099, 1);
  sqcRYGate(q, 1.2449505664999565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.7191338433894288, 1);
  sqcRYGate(q, -2.3364378718962224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.31723713914212714, 2);
  sqcRYGate(q, -0.4007868848980686, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.38040029105264317, 2);
  sqcRYGate(q, 0.6483394531414568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8725500125974888, 0);
  sqcRYGate(q, 1.0240591663128762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9512035151821339, 0);
  sqcRYGate(q, -2.210708205291491, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7858676827428532, 1);
  sqcRYGate(q, 3.1339343107819917, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.030462990684396, 1);
  sqcRYGate(q, 3.120856594880999, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7652937968173098, 2);
  sqcRYGate(q, 2.2484344221831836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8045428178785503, 2);
  sqcRYGate(q, -0.4560669010798027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4368561583891672, 0);
  sqcRYGate(q, -1.2655172582643068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41408818610142856, 0);
  sqcRYGate(q, -1.2864344974774884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.015992598456050697, 1);
  sqcRYGate(q, 2.637291145848667, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6952472009241846, 1);
  sqcRYGate(q, 1.8765963298556474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5324447547378122, 2);
  sqcRYGate(q, -1.884945242495605, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5547513513326487, 2);
  sqcRYGate(q, 0.8424464675564192, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.820363926170911, 0);
  sqcRYGate(q, -2.8889500211546992, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3688692357342997, 0);
  sqcRYGate(q, -0.12063043625079306, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1334933790660333, 1);
  sqcRYGate(q, 2.557714155263577, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.3926725062215883, 1);
  sqcRYGate(q, -2.276755413725043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0279035349590764, 2);
  sqcRYGate(q, 2.0935742907730273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8988166800517217, 2);
  sqcRYGate(q, 1.826097010558558, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1540136922653502, 0);
  sqcRYGate(q, 2.6058446992335393, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7076545882848886, 0);
  sqcRYGate(q, 2.1110291845003193, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7086214700687452, 1);
  sqcRYGate(q, 0.6881166039331043, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3523799470052207, 1);
  sqcRYGate(q, -1.0281216318635058, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.21442663271597517, 2);
  sqcRYGate(q, -0.11494575587872724, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6588140752332405, 2);
  sqcRYGate(q, -0.7759346229998327, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7065203437565177, 0);
  sqcRYGate(q, -0.3386904083128863, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.13172892973588263, 0);
  sqcRYGate(q, 2.2023744059883867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1595500646352671, 1);
  sqcRYGate(q, -1.685120614671376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.23848752740183, 1);
  sqcRYGate(q, 0.6165717658601215, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1197576304717014, 2);
  sqcRYGate(q, -0.7018483526701464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7353079040582187, 2);
  sqcRYGate(q, 2.5259030387797528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.806606014241657, 0);
  sqcRYGate(q, -2.1981633295609893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9928786800247105, 0);
  sqcRYGate(q, 0.5370974416908657, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4777947735529153, 1);
  sqcRYGate(q, 0.3568343630903277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.41720831246459156, 1);
  sqcRYGate(q, 0.08383396514262896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9634993994005816, 2);
  sqcRYGate(q, -2.115146403844068, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5218149449997016, 2);
  sqcRYGate(q, 0.5988801589476571, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6936849393976341, 0);
  sqcRYGate(q, -1.7336901009548598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4558547473452323, 0);
  sqcRYGate(q, 1.821305464394527, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7883324845194801, 1);
  sqcRYGate(q, -1.328118062163498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5579015807403227, 1);
  sqcRYGate(q, -2.985158507487821, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.04830670277866034, 2);
  sqcRYGate(q, -1.8349190288524704, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.036657718355351206, 2);
  sqcRYGate(q, -1.1599971919826153, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5697476794268184, 0);
  sqcRYGate(q, 1.6954905310909583, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.0593298593015246, 0);
  sqcRYGate(q, 2.9205200848373183, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2557923560339104, 1);
  sqcRYGate(q, 3.0170391621617867, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2476723352965093, 1);
  sqcRYGate(q, 2.415430693976839, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5965256926377482, 2);
  sqcRYGate(q, 0.9827293211639494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11663824215855367, 2);
  sqcRYGate(q, 1.7791141601020297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1257766583763642, 0);
  sqcRYGate(q, -1.864836475713546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8257799065030289, 0);
  sqcRYGate(q, -0.28793783956222746, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7352669209949179, 1);
  sqcRYGate(q, -3.038889642620476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6017146225379948, 1);
  sqcRYGate(q, -3.0105143843063646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9446314430399461, 2);
  sqcRYGate(q, 0.7712425003346536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2186250019994773, 2);
  sqcRYGate(q, 0.1994946498866742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5247840826650183, 0);
  sqcRYGate(q, -2.24226909234038, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2792147474747284, 0);
  sqcRYGate(q, -0.0835777552007835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.470801879915472, 1);
  sqcRYGate(q, -0.459931495985623, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.570272721477158, 1);
  sqcRYGate(q, -0.9954262047706178, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4008238821011565, 2);
  sqcRYGate(q, -1.2578583339032283, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8157738761231953, 2);
  sqcRYGate(q, 1.6885108894767267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.927330327321215, 0);
  sqcRYGate(q, -1.1968667110072886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26219909091575283, 0);
  sqcRYGate(q, 0.145286141144408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2182128692514418, 1);
  sqcRYGate(q, -0.49060329727349483, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.596250929871168, 1);
  sqcRYGate(q, -2.6868885981043986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7415616657414077, 2);
  sqcRYGate(q, -0.9726337279121555, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1080541134166755, 2);
  sqcRYGate(q, 1.941582164453193, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5614690304978014, 0);
  sqcRYGate(q, 2.538951639007804, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.812957748607784, 0);
  sqcRYGate(q, 1.0513152051505656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2098481694135375, 1);
  sqcRYGate(q, 1.322784924080259, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.279812702179223, 1);
  sqcRYGate(q, 2.747202863217318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6966316743989678, 2);
  sqcRYGate(q, -2.251389481477127, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7637629646142603, 2);
  sqcRYGate(q, -2.3070921322844136, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1374465066768682, 0);
  sqcRYGate(q, -1.71925494497037, 1);
  sqcRYGate(q, -1.2694725672459128, 2);
  sqcRYGate(q, 1.7817638170469252, 3);

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
