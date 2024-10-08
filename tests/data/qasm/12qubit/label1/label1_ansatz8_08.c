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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 0.6106110061388235, 0);
  sqcRYGate(q, -1.1784209431428687, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0524722220005276, 0);
  sqcRYGate(q, 0.260099351415155, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.835976444208372, 2);
  sqcRYGate(q, -2.2018014257379903, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.917917298536849, 2);
  sqcRYGate(q, -0.186044544841091, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.081588059792522, 4);
  sqcRYGate(q, 1.2136407263045528, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.393077930344034, 4);
  sqcRYGate(q, -0.206509554650963, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.23555059182899374, 6);
  sqcRYGate(q, -1.3634098663434113, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1716386516485497, 6);
  sqcRYGate(q, -1.2470504026426452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.008701650868912, 8);
  sqcRYGate(q, -2.6645568593982647, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.5402426123962316, 8);
  sqcRYGate(q, 2.950899102327563, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.0792967692745825, 10);
  sqcRYGate(q, 0.5144784459668479, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.525767667394039, 10);
  sqcRYGate(q, 0.7163503306926288, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6032725957856098, 0);
  sqcRYGate(q, -1.620641498053541, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.090025014501888, 0);
  sqcRYGate(q, -2.039833951829756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8742592591942708, 2);
  sqcRYGate(q, 2.4239859762919873, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.60843211207429, 2);
  sqcRYGate(q, -2.6295714111029707, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7020759540807144, 4);
  sqcRYGate(q, -0.015233494480073863, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.0471541841844307, 4);
  sqcRYGate(q, 2.0526256901348283, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.8620253798675943, 6);
  sqcRYGate(q, -2.5893908235947776, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 6.71202389061428e-05, 6);
  sqcRYGate(q, 3.1414497630539957, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.110824493809765, 8);
  sqcRYGate(q, 2.291044772804156, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.131655340173267, 8);
  sqcRYGate(q, -0.23530100727664482, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.030089782160622, 1);
  sqcRYGate(q, 1.1305807983442566, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.036063694783164, 1);
  sqcRYGate(q, 1.1368930311378036, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.25748161964091393, 3);
  sqcRYGate(q, -1.1046588420882015, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.6235195206250697, 3);
  sqcRYGate(q, 0.2658937683664542, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.0474105689454323, 5);
  sqcRYGate(q, -2.922004216875449, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6654481157585366, 5);
  sqcRYGate(q, 2.6684599399592135, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.171102244520941, 7);
  sqcRYGate(q, 0.27834537176909935, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.141041525069499, 7);
  sqcRYGate(q, 3.141050160473719, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.1917426403059466, 9);
  sqcRYGate(q, 1.0884528610174486, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.4986817442581684, 9);
  sqcRYGate(q, -2.7161448126809056, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.8644939061276506, 0);
  sqcRYGate(q, -1.933689398965068, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7121680302907736, 0);
  sqcRYGate(q, -0.8367995131392298, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9325713666071005, 2);
  sqcRYGate(q, -0.9842910621868494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6906875671330197, 2);
  sqcRYGate(q, 0.4530594343726557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9425523213130744, 4);
  sqcRYGate(q, 2.2049281219810752, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.24491918287416153, 4);
  sqcRYGate(q, -0.20453592923747976, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0901078386261744, 6);
  sqcRYGate(q, -0.8956035300130755, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.992186517849935, 6);
  sqcRYGate(q, -2.92570359835806, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5626677901699324, 8);
  sqcRYGate(q, 0.28058921630988315, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.552782877897672, 8);
  sqcRYGate(q, 1.0487449272805482, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -3.0586708159377958, 10);
  sqcRYGate(q, 2.1377578319402115, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6488943915948342, 10);
  sqcRYGate(q, 1.35843077119263, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -3.062105655472247, 0);
  sqcRYGate(q, -1.0906725166805302, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.812886580584991, 0);
  sqcRYGate(q, 2.656174915447709, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.44664924536658623, 2);
  sqcRYGate(q, 1.4132336937227579, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.270605644737114, 2);
  sqcRYGate(q, 2.1898408581585267, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.611103947512877, 4);
  sqcRYGate(q, 1.1331172255341548, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.121595452160359, 4);
  sqcRYGate(q, -2.462923830325627, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.988786632143574, 6);
  sqcRYGate(q, -0.9188461363064204, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.1383616499637896, 6);
  sqcRYGate(q, -0.00027366350054351007, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.700928639976783, 8);
  sqcRYGate(q, 2.9941852451218844, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.012417137326522287, 8);
  sqcRYGate(q, 0.22199737041861312, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.8821926046859678, 1);
  sqcRYGate(q, 0.4342423079744569, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.967234489513885, 1);
  sqcRYGate(q, 0.08973763691245472, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8166415869154688, 3);
  sqcRYGate(q, -0.21665182586097478, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.30872055904990947, 3);
  sqcRYGate(q, -1.2657658796995275, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5560811533335048, 5);
  sqcRYGate(q, -1.4004771860136422, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.2872481436002995, 5);
  sqcRYGate(q, 0.6418625233021433, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1467332182033845, 7);
  sqcRYGate(q, -2.7296730175629125, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.002187711401577958, 7);
  sqcRYGate(q, 0.0008388172656481777, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.7844280694861911, 9);
  sqcRYGate(q, -1.2932168074327028, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.1340158539796557, 9);
  sqcRYGate(q, 0.108164560503379, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.7096534981555918, 0);
  sqcRYGate(q, -2.4534888232250616, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5539774178921365, 0);
  sqcRYGate(q, -0.559284744052418, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5699829112714119, 2);
  sqcRYGate(q, 2.5152892595770813, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.634117115373746, 2);
  sqcRYGate(q, -1.61738900330631, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1085872471384697, 4);
  sqcRYGate(q, -1.0709861005013759, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7582114715474635, 4);
  sqcRYGate(q, -2.6915380698504925, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4833622495569294, 6);
  sqcRYGate(q, 1.4069683682807168, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3206650483114712, 6);
  sqcRYGate(q, 1.188580944682115, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.2570506004515821, 8);
  sqcRYGate(q, 2.801455666441985, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.0375281153974134, 8);
  sqcRYGate(q, 1.8979783946826199, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.995156417164498, 10);
  sqcRYGate(q, -1.126455992895644, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.428248258323027, 10);
  sqcRYGate(q, 0.2952288165077821, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.09990368583224907, 0);
  sqcRYGate(q, -0.9686739920211168, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.075471773875948, 0);
  sqcRYGate(q, -2.5040934200670724, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.106179647987052, 2);
  sqcRYGate(q, 2.9502796153675224, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0971087508734225, 2);
  sqcRYGate(q, 0.15143054710676296, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4574078448343784, 4);
  sqcRYGate(q, -0.31976656126136493, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.938498886821548, 4);
  sqcRYGate(q, 0.7577636696069829, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.4183841007443849, 6);
  sqcRYGate(q, 2.874708381524156, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.1372669007962632, 6);
  sqcRYGate(q, -3.140303845855034, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.6836234912964194, 8);
  sqcRYGate(q, 0.03658774692801359, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.010902807730032826, 8);
  sqcRYGate(q, -2.2974273746713925, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.8224812437403717, 1);
  sqcRYGate(q, -2.3138263576252593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.492969542648151, 1);
  sqcRYGate(q, -2.421677677571367, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8662524105877539, 3);
  sqcRYGate(q, 2.4391713066762573, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.944517519934007, 3);
  sqcRYGate(q, -2.5719976780425453, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9060564530400388, 5);
  sqcRYGate(q, 2.1209807650098824, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.12886903535637373, 5);
  sqcRYGate(q, 2.9831666743866023, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7515826298390369, 7);
  sqcRYGate(q, -3.1079744031174537, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.0034650749711960917, 7);
  sqcRYGate(q, -3.141441606950485, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.8671555306055065, 9);
  sqcRYGate(q, 0.36472448387912654, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.1810939653904611, 9);
  sqcRYGate(q, -2.8959919224695585, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.34526250116068447, 0);
  sqcRYGate(q, -2.5499572653536218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6358668096129207, 0);
  sqcRYGate(q, -1.2861311290568866, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.007433575385041635, 2);
  sqcRYGate(q, 1.2121873666044163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5724970144880872, 2);
  sqcRYGate(q, 1.9543278421313222, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1026010321725237, 4);
  sqcRYGate(q, 1.3247885650841975, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9068080430255545, 4);
  sqcRYGate(q, 0.2576275218575758, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0897541915251647, 6);
  sqcRYGate(q, -1.9764979936541722, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.7213569188328322, 6);
  sqcRYGate(q, -3.0704663316153256, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3248017988066574, 8);
  sqcRYGate(q, -1.1311787494521728, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.0848327364649455, 8);
  sqcRYGate(q, -3.035315872882209, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.3248162553119442, 10);
  sqcRYGate(q, -2.7610756009197392, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.4212025271414401, 10);
  sqcRYGate(q, 3.0972344445559803, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.504619656800355, 0);
  sqcRYGate(q, -2.9688050374747226, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.322286237975998, 0);
  sqcRYGate(q, 0.40959882242246254, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6094815491075107, 2);
  sqcRYGate(q, 2.0021588660488967, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 3.120241701533937, 2);
  sqcRYGate(q, 2.64678946375361, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.535528727326401, 4);
  sqcRYGate(q, 1.6606281519344257, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.07210847508360113, 4);
  sqcRYGate(q, -0.3942072346119305, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8652283002172974, 6);
  sqcRYGate(q, -0.32430432230581663, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.0033325268285765213, 6);
  sqcRYGate(q, 3.1404016273110553, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.4269055163834024, 8);
  sqcRYGate(q, 1.3427287813524114, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.0869192108111143, 8);
  sqcRYGate(q, 1.5024965621228175, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.8572828956660683, 1);
  sqcRYGate(q, 0.3113045417561082, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4326436640687077, 1);
  sqcRYGate(q, 0.46821167975190836, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.902056823934605, 3);
  sqcRYGate(q, 0.3209151963983339, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.2981931480808803, 3);
  sqcRYGate(q, 2.643699074779932, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.1518411134591535, 5);
  sqcRYGate(q, 1.6328101218728053, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5821375083374463, 5);
  sqcRYGate(q, 0.09949796038729167, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.8428282435941492, 7);
  sqcRYGate(q, -2.7278982521312805, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.062570714543771, 7);
  sqcRYGate(q, 0.006876887309289259, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.4322491641590585, 9);
  sqcRYGate(q, 0.42744859148474657, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.20439091503416582, 9);
  sqcRYGate(q, -2.6110712746648432, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.76468576302025, 0);
  sqcRYGate(q, 1.4781960807462038, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.995562521731581, 0);
  sqcRYGate(q, -2.544409440262646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0176205451960811, 2);
  sqcRYGate(q, -0.1578563911418135, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.854408642460125, 2);
  sqcRYGate(q, -0.3741300222286003, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6879508389135012, 4);
  sqcRYGate(q, 1.9781579445704234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.957831598731809, 4);
  sqcRYGate(q, -1.2143950392232172, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3901732583145812, 6);
  sqcRYGate(q, 2.5606267205616233, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.126511797143667, 6);
  sqcRYGate(q, -2.835249004463849, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.208029739799918, 8);
  sqcRYGate(q, 2.217974489687034, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.866086120697626, 8);
  sqcRYGate(q, 0.7946481470849135, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.9759881602209476, 10);
  sqcRYGate(q, 1.7300588165730464, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5066300927579716, 10);
  sqcRYGate(q, 0.49801887750061097, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.2454106934111522, 0);
  sqcRYGate(q, -1.8381172585684273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5938267430750885, 0);
  sqcRYGate(q, -1.479455330772735, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.671051763820137, 2);
  sqcRYGate(q, 2.468493260784776, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.821313098491448, 2);
  sqcRYGate(q, 2.8078138894025746, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.5585602207808216, 4);
  sqcRYGate(q, -1.3594946456594648, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.45517809467647297, 4);
  sqcRYGate(q, -0.11904495943676885, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.555374322626661, 6);
  sqcRYGate(q, -1.74867057389966, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1379312636557914, 6);
  sqcRYGate(q, 1.7519533592721706, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.568051758852536, 8);
  sqcRYGate(q, -2.7156761690980886, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 3.096206354912861, 8);
  sqcRYGate(q, 3.0741354857499754, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.7153881122801149, 1);
  sqcRYGate(q, -2.491771406677189, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5365125930933594, 1);
  sqcRYGate(q, 2.5814081836384437, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8826723499768288, 3);
  sqcRYGate(q, -0.5063689837771059, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.244022663580434, 3);
  sqcRYGate(q, -0.6163893323954598, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.108817447920125, 5);
  sqcRYGate(q, 2.382368058926784, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1186107534163803, 5);
  sqcRYGate(q, 0.04649379657706368, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.628154774682559, 7);
  sqcRYGate(q, 0.7872597201597901, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.0003321055860157074, 7);
  sqcRYGate(q, -3.100291114280306, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.9549516772612714, 9);
  sqcRYGate(q, -2.607909291499329, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.9729444925570467, 9);
  sqcRYGate(q, 1.1818402708785722, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -2.9451345612680986, 0);
  sqcRYGate(q, 0.35070492105188256, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6558219459202075, 0);
  sqcRYGate(q, -0.4101756481993464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.541653891450763, 2);
  sqcRYGate(q, -2.5142310324890045, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.21193667644419706, 2);
  sqcRYGate(q, -2.410251854035099, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8201832727772939, 4);
  sqcRYGate(q, 1.6323377326715405, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0002870940164489606, 4);
  sqcRYGate(q, -0.616243636386809, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7873547256986745, 6);
  sqcRYGate(q, -0.31004405266414214, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.1407651510509282, 6);
  sqcRYGate(q, -0.0007725859601274531, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9496022762053429, 8);
  sqcRYGate(q, 0.7287004388303906, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3675860725533935, 8);
  sqcRYGate(q, -1.5693351309350843, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.9512043627230176, 10);
  sqcRYGate(q, 1.9854768698701453, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.2718521429049827, 10);
  sqcRYGate(q, 3.0228029606881908, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.642968973970554, 0);
  sqcRYGate(q, 1.4552070844395777, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.204232925562839, 0);
  sqcRYGate(q, -0.4080788137120546, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.2399462760710565, 2);
  sqcRYGate(q, -0.3952684625391586, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.4921497512900186, 2);
  sqcRYGate(q, 2.393230362041589, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.073960858852766, 4);
  sqcRYGate(q, 0.7815259155469528, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.4608659935625514, 4);
  sqcRYGate(q, -0.00050370969891933, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.20172307610418733, 6);
  sqcRYGate(q, -1.5657317468573153, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.5192342848855007, 6);
  sqcRYGate(q, 1.5127689637946755, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.9550326707375678, 8);
  sqcRYGate(q, 2.0425693213411344, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.11223579244822357, 8);
  sqcRYGate(q, -0.10148499226794432, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.1493828088389253, 1);
  sqcRYGate(q, 1.930978843603009, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11437259028661978, 1);
  sqcRYGate(q, 1.268281530776531, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.735766479748072, 3);
  sqcRYGate(q, -1.1130024136736034, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 3.0742952945093354, 3);
  sqcRYGate(q, 2.5760044895926324, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.765439651281044, 5);
  sqcRYGate(q, -1.8940915618186447, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.0527705747219018, 5);
  sqcRYGate(q, -0.020483687545040024, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -3.0134264327269586, 7);
  sqcRYGate(q, 2.3764376200374215, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 3.0892261763688014, 7);
  sqcRYGate(q, 3.077658894504217, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.8211339655935804, 9);
  sqcRYGate(q, 1.7300918810658275, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.050272923838533, 9);
  sqcRYGate(q, -3.1306024880550782, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.3638267689184858, 0);
  sqcRYGate(q, -0.9515155207745671, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.095555229396076, 0);
  sqcRYGate(q, -2.2450634373941165, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0994825133583461, 2);
  sqcRYGate(q, 1.4021604315489058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.020048823883686, 2);
  sqcRYGate(q, 1.5509872466784587, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9516824311651337, 4);
  sqcRYGate(q, -2.5875947661769776, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.4570457755634418, 4);
  sqcRYGate(q, 1.1209473231578768, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.19555533972159278, 6);
  sqcRYGate(q, 0.4823386731130994, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5927411992903688, 6);
  sqcRYGate(q, 1.5962807282855256, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.5502553912568147, 8);
  sqcRYGate(q, -0.20990897960307817, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.1466182477450775, 8);
  sqcRYGate(q, 0.025648914906234666, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6083447912183289, 10);
  sqcRYGate(q, 1.81256036126655, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.848628196193397, 10);
  sqcRYGate(q, -1.672721064018799, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.5591013527882202, 0);
  sqcRYGate(q, 1.759217211971488, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1993634270723168, 0);
  sqcRYGate(q, -2.327429218716631, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.05684193960989781, 2);
  sqcRYGate(q, -1.2683732663765304, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.945428904545575, 2);
  sqcRYGate(q, 1.9888329272077723, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.1790752411567185, 4);
  sqcRYGate(q, -3.100342467887618, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.01248010581048101, 4);
  sqcRYGate(q, -0.002256105727672238, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8306720341262311, 6);
  sqcRYGate(q, -1.1977734532377209, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.15689616235845208, 6);
  sqcRYGate(q, 0.5888045497541219, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.7095806388669148, 8);
  sqcRYGate(q, -0.015701794110939353, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.9512952537422619, 8);
  sqcRYGate(q, 3.1291446785478203, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.933036632573447, 1);
  sqcRYGate(q, 0.18608666031000354, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.561150924116654, 1);
  sqcRYGate(q, 1.529266483960054, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4710239482070695, 3);
  sqcRYGate(q, 1.585189814778174, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.441799427670284, 3);
  sqcRYGate(q, -1.1024710034713712, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5602254856515172, 5);
  sqcRYGate(q, 1.5495424624197485, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1415257091103483, 5);
  sqcRYGate(q, -0.0001097249125034949, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.8851062598692185, 7);
  sqcRYGate(q, -0.5943703934046684, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.6436523068463973, 7);
  sqcRYGate(q, -1.6035469721992737, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.6699214140526155, 9);
  sqcRYGate(q, -0.16245478244360978, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.9164827633282913, 9);
  sqcRYGate(q, -2.4055556398107876, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.9487153719208617, 0);
  sqcRYGate(q, -1.7018482899803973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6800236719411643, 0);
  sqcRYGate(q, 2.0227872841986794, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.976969416212171, 2);
  sqcRYGate(q, 1.5373813766438806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.667063132218658, 2);
  sqcRYGate(q, -2.4988496675580194, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9283539028945056, 4);
  sqcRYGate(q, -3.1165385709029745, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.7195888546588058, 4);
  sqcRYGate(q, 0.8941069390687273, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5379265920660465, 6);
  sqcRYGate(q, -0.8151450593381835, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.790231806788979, 6);
  sqcRYGate(q, -1.491827130480254, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.6730911047829677, 8);
  sqcRYGate(q, 1.613680351402919, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.11070042373597122, 8);
  sqcRYGate(q, -3.066254788914859, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.119878556376273, 10);
  sqcRYGate(q, -0.6136447644039515, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.5504948504278586, 10);
  sqcRYGate(q, -1.5704143126616499, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.0447812157724456, 0);
  sqcRYGate(q, 1.3379524067353357, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.691218038179839, 0);
  sqcRYGate(q, -0.49869849860581705, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4008606693643104, 2);
  sqcRYGate(q, -3.0945757603434414, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.24934015628108483, 2);
  sqcRYGate(q, 1.1865230510738596, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4723710482189798, 4);
  sqcRYGate(q, 3.1382537249800606, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.140806980452283, 4);
  sqcRYGate(q, 0.0005863139637597997, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.711440555118165, 6);
  sqcRYGate(q, -0.29189125057105336, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -1.081066529156386, 6);
  sqcRYGate(q, 0.6764499959387118, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.901663185679995, 8);
  sqcRYGate(q, 1.7512867185691512, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.0939634956158533, 8);
  sqcRYGate(q, -0.07361505475901087, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.158279212036964, 1);
  sqcRYGate(q, -2.8320142538897297, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9220629021485371, 1);
  sqcRYGate(q, 1.1893191463355528, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2838362494112824, 3);
  sqcRYGate(q, -2.3847510614358045, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5985861891399903, 3);
  sqcRYGate(q, -1.8173549852782491, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.9938070876531955, 5);
  sqcRYGate(q, 1.5433260983560964, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.138600251964567, 5);
  sqcRYGate(q, 0.0003385073580570719, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.47853176931783853, 7);
  sqcRYGate(q, -2.0156195945067985, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.720936762096124, 7);
  sqcRYGate(q, 3.111001848753415, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.7626846451533553, 9);
  sqcRYGate(q, -0.7475667779330548, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.1234067581798564, 9);
  sqcRYGate(q, 0.012319502884355805, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.508867119458646, 0);
  sqcRYGate(q, 2.894069968388654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3724073021140848, 0);
  sqcRYGate(q, -1.488763235149347, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3329881594227464, 2);
  sqcRYGate(q, -0.5930248607704467, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2456763742777897, 2);
  sqcRYGate(q, -3.104952247041661, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5690332056784895, 4);
  sqcRYGate(q, -1.4466861662216686, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7523813307365437, 4);
  sqcRYGate(q, -2.7266275743888406, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.009566155966507, 6);
  sqcRYGate(q, -1.2116177024445554, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.16174263124507, 6);
  sqcRYGate(q, -1.3547839124943728, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5991585631093914, 8);
  sqcRYGate(q, -1.6300770935588522, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 3.1202415166341724, 8);
  sqcRYGate(q, -1.6499205208741998, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.012736838248742, 10);
  sqcRYGate(q, 0.713989088526118, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.127468610237005, 10);
  sqcRYGate(q, -3.0592816794824063, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.7417211227880687, 0);
  sqcRYGate(q, -1.7059160608506396, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.07960983742003151, 0);
  sqcRYGate(q, -1.5282078636776535, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0881190736711914, 2);
  sqcRYGate(q, 0.20899935524393823, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.6129143884939765, 2);
  sqcRYGate(q, 1.3629582258080308, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9749486093199415, 4);
  sqcRYGate(q, -1.6737911385967514, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 3.14139322020939, 4);
  sqcRYGate(q, 0.001888325024531845, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.8871143455746484, 6);
  sqcRYGate(q, 1.645214904645548, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 1.8136831250976686, 6);
  sqcRYGate(q, 3.0920622901143138, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.6486185522702304, 8);
  sqcRYGate(q, 0.29799888626163545, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.8344773616821284, 8);
  sqcRYGate(q, 2.4046676522040307, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -2.923706222482563, 1);
  sqcRYGate(q, -2.6949967696964805, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8530344233243268, 1);
  sqcRYGate(q, 2.7322941676563293, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.012225356737736177, 3);
  sqcRYGate(q, -0.5652254104230368, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.6508762470593739, 3);
  sqcRYGate(q, 2.8496343631298804, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.742248590085424, 5);
  sqcRYGate(q, -0.41569840354078197, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.0018107875479747785, 5);
  sqcRYGate(q, 0.00025397830755156356, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.258326200012646, 7);
  sqcRYGate(q, -0.37926140473373615, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.7133610878391614, 7);
  sqcRYGate(q, 2.9996082667297785, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -1.6897565951772728, 9);
  sqcRYGate(q, -2.4176746329970054, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.0109688746563057, 9);
  sqcRYGate(q, 0.02513347274906952, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.8456747376049094, 0);
  sqcRYGate(q, 0.8092754534974391, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8871106674250212, 0);
  sqcRYGate(q, -0.4434486152568611, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.41417887394621233, 2);
  sqcRYGate(q, -0.09271714547311243, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9996006476320536, 2);
  sqcRYGate(q, -2.5182951848735162, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5641914031429984, 4);
  sqcRYGate(q, 0.47358554943681863, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0854247151677585, 4);
  sqcRYGate(q, 2.052948815488082, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3783080691473844, 6);
  sqcRYGate(q, 2.250823190501798, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5131008979473561, 6);
  sqcRYGate(q, 1.718191494320183, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.8250484210915703, 8);
  sqcRYGate(q, 0.9801684070255767, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6080650757653965, 8);
  sqcRYGate(q, -1.4991592875512625, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -2.170629026888812, 10);
  sqcRYGate(q, 0.016388934012152134, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3579079840407278, 10);
  sqcRYGate(q, -1.6648870850025403, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.6973998473350576, 0);
  sqcRYGate(q, -0.02258239709127796, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1213925306925283, 0);
  sqcRYGate(q, 1.8103239437778869, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9363032374902525, 2);
  sqcRYGate(q, -1.3111799884436846, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.8043825684417261, 2);
  sqcRYGate(q, 1.9887679480279583, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.084520247990566, 4);
  sqcRYGate(q, 2.6841904695117456, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.00039689171574307545, 4);
  sqcRYGate(q, 0.006189572824968423, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.1428390050713393, 6);
  sqcRYGate(q, 0.21437392733321164, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1147541041571496, 6);
  sqcRYGate(q, 0.007142069499993912, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.712397956364241, 8);
  sqcRYGate(q, 0.6848380070893487, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -3.0254242553291015, 8);
  sqcRYGate(q, -0.03502983099210599, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.4282688590894854, 1);
  sqcRYGate(q, 0.9669644787529937, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9614662203974477, 1);
  sqcRYGate(q, -0.9532045853278657, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7429688675089734, 3);
  sqcRYGate(q, -3.006652648600631, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.667986030809843, 3);
  sqcRYGate(q, 1.1709090415820131, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.3239958738492414, 5);
  sqcRYGate(q, -0.8672900373188742, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.0038581531498493326, 5);
  sqcRYGate(q, 3.138149454784986, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.3799131374981233, 7);
  sqcRYGate(q, -0.8457384611690419, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.15847310396319345, 7);
  sqcRYGate(q, -0.003095732940431972, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 2.7956256887612456, 9);
  sqcRYGate(q, -1.5156601838949257, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.8301905791620707, 9);
  sqcRYGate(q, -3.0517248646942723, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 3.083404407889349, 0);
  sqcRYGate(q, 2.081044082586428, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.681305189180504, 0);
  sqcRYGate(q, 0.7087071732214787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.00386859538897, 2);
  sqcRYGate(q, 2.849624875168733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5526027689333133, 2);
  sqcRYGate(q, 1.2104104403554947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8774371994815942, 4);
  sqcRYGate(q, 1.6119542622197625, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.562564745537364, 4);
  sqcRYGate(q, -2.903608908387647, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0991561010633117, 6);
  sqcRYGate(q, 0.3007330250482605, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9098977625838836, 6);
  sqcRYGate(q, 1.6974844703600958, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7639463147114618, 8);
  sqcRYGate(q, 2.5938504726537124, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.462282682055591, 8);
  sqcRYGate(q, -1.7842155387447063, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.1608335925007411, 10);
  sqcRYGate(q, -0.9061870588337113, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4856647900741606, 10);
  sqcRYGate(q, 1.7166340889465594, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.426671845024658, 0);
  sqcRYGate(q, -2.2411784345808266, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.55346894087634, 0);
  sqcRYGate(q, 0.7989119387460446, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4434799839292562, 2);
  sqcRYGate(q, -2.8673337010361872, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.207339606907886, 2);
  sqcRYGate(q, -2.773035532282274, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0022976368552663, 4);
  sqcRYGate(q, -1.8500624206408316, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -3.126948609118882, 4);
  sqcRYGate(q, 0.015022878782215305, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.6683508695844941, 6);
  sqcRYGate(q, -1.4492258801014999, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1227383049898245, 6);
  sqcRYGate(q, -0.009110236214509904, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.587083586898445, 8);
  sqcRYGate(q, 2.9676496774028602, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.18870631912148667, 8);
  sqcRYGate(q, 3.063210407927152, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.330427906359502, 1);
  sqcRYGate(q, 1.3063015276204375, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9080938502211104, 1);
  sqcRYGate(q, -1.3386749579691237, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7464721444033956, 3);
  sqcRYGate(q, -0.767109352912929, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.1815423532361287, 3);
  sqcRYGate(q, 1.536821438873453, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.1916357118936708, 5);
  sqcRYGate(q, -2.563848817498374, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 3.1093145072658324, 5);
  sqcRYGate(q, -3.1160816949185226, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.7598300175275, 7);
  sqcRYGate(q, 1.1397155563069497, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.036143887210160854, 7);
  sqcRYGate(q, -3.029531196701191, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.38312919592646905, 9);
  sqcRYGate(q, -2.5259560073184577, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -3.077107758373417, 9);
  sqcRYGate(q, 0.004574688180668751, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.5270657567957882, 0);
  sqcRYGate(q, 0.5374317442108757, 1);
  sqcRYGate(q, -0.501410869624139, 2);
  sqcRYGate(q, -2.8715134124258697, 3);
  sqcRYGate(q, -2.499248434471821, 4);
  sqcRYGate(q, -1.8941664535437024, 5);
  sqcRYGate(q, -2.3681266654497457, 6);
  sqcRYGate(q, 1.4957002137574245, 7);
  sqcRYGate(q, 1.926834432382348, 8);
  sqcRYGate(q, -2.793984818986338, 9);
  sqcRYGate(q, -2.714122870769246, 10);
  sqcRYGate(q, -0.17037863783802587, 11);

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
