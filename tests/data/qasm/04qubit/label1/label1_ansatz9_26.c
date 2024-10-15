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

  sqcRYGate(q, 1.7898071680822454, 0);
  sqcRYGate(q, 0.8952029502786158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4368225853331076, 0);
  sqcRYGate(q, 0.11380464218143743, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.056681326196247, 2);
  sqcRYGate(q, -2.0588539233019683, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4630774613579748, 2);
  sqcRYGate(q, 2.950623051762981, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8243555705607393, 0);
  sqcRYGate(q, 1.452216328200054, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.799061499284413, 0);
  sqcRYGate(q, 0.5950698294561044, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5607443001453989, 1);
  sqcRYGate(q, 0.2091790819953987, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.074652151169945, 1);
  sqcRYGate(q, 3.027106079155474, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.179586523698898, 0);
  sqcRYGate(q, -2.7401127317796545, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7884042282439223, 0);
  sqcRYGate(q, -1.7801112512576882, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5857577221628851, 1);
  sqcRYGate(q, 1.743142799588033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0446826587736657, 1);
  sqcRYGate(q, -1.9112229945823374, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3803514644517856, 0);
  sqcRYGate(q, 2.7852031458829787, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7044557128715816, 0);
  sqcRYGate(q, 0.8275329470301785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9784903529465065, 2);
  sqcRYGate(q, 2.1929851590747225, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8366098074517581, 2);
  sqcRYGate(q, 0.22702607568553823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.302753908576118, 0);
  sqcRYGate(q, -0.5801582433824786, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6979928309026633, 0);
  sqcRYGate(q, -2.107107117996291, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.4182310646317133, 1);
  sqcRYGate(q, 2.472754707108422, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.63259291573221, 1);
  sqcRYGate(q, 1.802852476488141, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8082218648542936, 0);
  sqcRYGate(q, -0.17692695438659886, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.02520788759885797, 0);
  sqcRYGate(q, 0.9446966969661457, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.07419883492498257, 1);
  sqcRYGate(q, -3.058476544162301, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9104161861867555, 1);
  sqcRYGate(q, -2.878635306795456, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1581640065912047, 0);
  sqcRYGate(q, -1.8163674407754118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2723893840793012, 0);
  sqcRYGate(q, -0.05505199361812018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.141188770319247, 2);
  sqcRYGate(q, 1.8053190777594432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7216450623952446, 2);
  sqcRYGate(q, 1.0192546907571067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.755492415546795, 0);
  sqcRYGate(q, 0.5546019368327264, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7245371722381726, 0);
  sqcRYGate(q, 1.7569246365176983, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9629203060357683, 1);
  sqcRYGate(q, 0.9214089608218528, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5534022678293022, 1);
  sqcRYGate(q, 0.3108801413047324, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7710837949491998, 0);
  sqcRYGate(q, -1.4774124190176288, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3841224442369395, 0);
  sqcRYGate(q, 0.47825563092954315, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.12194110599585331, 1);
  sqcRYGate(q, -0.9994359418676741, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7089151785373968, 1);
  sqcRYGate(q, -2.1012545486002625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.812727387613954, 0);
  sqcRYGate(q, -1.3293363467332435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9361220167391133, 0);
  sqcRYGate(q, 2.363282374446914, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1218252574617678, 2);
  sqcRYGate(q, -2.001234517262789, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5315666126123932, 2);
  sqcRYGate(q, -1.7888764897367846, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2510226209758244, 0);
  sqcRYGate(q, 2.154282628209139, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1018897269236305, 0);
  sqcRYGate(q, 2.735658730675045, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4517669307904049, 1);
  sqcRYGate(q, -2.080181130270848, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.707366284610391, 1);
  sqcRYGate(q, 1.3501915777482993, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8013000632854892, 0);
  sqcRYGate(q, -2.5438174689593733, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6926969358890975, 0);
  sqcRYGate(q, 1.2866544303397731, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0442027665469338, 1);
  sqcRYGate(q, 1.3670206884694593, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0671864044206003, 1);
  sqcRYGate(q, 2.5366110321922677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.064357742955405, 0);
  sqcRYGate(q, -2.927733497137101, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2142535597064645, 0);
  sqcRYGate(q, -0.9304002755837883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3321133756746644, 2);
  sqcRYGate(q, 2.765487312626317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2929543554345013, 2);
  sqcRYGate(q, 0.739167053253765, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.177364712503091, 0);
  sqcRYGate(q, 2.999824124558207, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2844965198648919, 0);
  sqcRYGate(q, 1.4373261287621348, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3024357861418246, 1);
  sqcRYGate(q, 1.7730561995202665, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.059232632804917945, 1);
  sqcRYGate(q, 0.4871489624889014, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5728943784648832, 0);
  sqcRYGate(q, 0.11788938111961696, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6741409971010004, 0);
  sqcRYGate(q, 0.745651936269638, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.45444297564801955, 1);
  sqcRYGate(q, -2.3086031905035047, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.021453990841712844, 1);
  sqcRYGate(q, 1.1848583208989314, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1719639466309142, 0);
  sqcRYGate(q, 2.1732489548135865, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.763068840819621, 0);
  sqcRYGate(q, 3.0210949881937674, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.059164524874527, 2);
  sqcRYGate(q, 2.3832700093228305, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.15366995215500268, 2);
  sqcRYGate(q, -1.8936877522051008, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9690367646105443, 0);
  sqcRYGate(q, -0.7490364320257534, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.20201848947557147, 0);
  sqcRYGate(q, -2.9718833184812667, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4438561746390335, 1);
  sqcRYGate(q, 0.9404616569554762, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8304981302828742, 1);
  sqcRYGate(q, 0.271443977747235, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.500679186671193, 0);
  sqcRYGate(q, 1.2278094455765531, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8158398815012469, 0);
  sqcRYGate(q, -3.0904094733492364, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6546305908601804, 1);
  sqcRYGate(q, 0.9155579266070848, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1583886838196173, 1);
  sqcRYGate(q, -2.1872752920360616, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10276286789538602, 0);
  sqcRYGate(q, 1.5601776486278305, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.209396452515539, 0);
  sqcRYGate(q, -1.1495027427792364, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.978483472641285, 2);
  sqcRYGate(q, -0.7764608911080503, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0934524974066093, 2);
  sqcRYGate(q, -2.9955804301551954, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7208145366082638, 0);
  sqcRYGate(q, -2.1935873930965357, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1510124608913226, 0);
  sqcRYGate(q, 1.0704434865209203, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3752889802737567, 1);
  sqcRYGate(q, -0.5973395143708489, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9806724689124708, 1);
  sqcRYGate(q, -2.51137490786613, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0038601611536002, 0);
  sqcRYGate(q, -0.8267072249658154, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.004488309865571694, 0);
  sqcRYGate(q, 2.200328151155553, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6738393374325655, 1);
  sqcRYGate(q, -0.3126072206339776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.912679473941622, 1);
  sqcRYGate(q, -2.417194165803443, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.45236896391793024, 0);
  sqcRYGate(q, 2.2054882611124658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.59527802096457, 0);
  sqcRYGate(q, -1.789447072111341, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5124498933887007, 2);
  sqcRYGate(q, -1.709200329445849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.40106517642747813, 2);
  sqcRYGate(q, 2.969228854483186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8870078026938373, 0);
  sqcRYGate(q, -1.2759412781763875, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5393615738988187, 0);
  sqcRYGate(q, 1.5836237277971756, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6517377230390102, 1);
  sqcRYGate(q, 2.2746196687274542, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7579355472544824, 1);
  sqcRYGate(q, -2.337596612380514, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4604270390665723, 0);
  sqcRYGate(q, -1.9441987484383088, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2107605018469672, 0);
  sqcRYGate(q, -1.3537928803996337, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5820156076683727, 1);
  sqcRYGate(q, -3.087294663850256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0511778198816617, 1);
  sqcRYGate(q, -0.8514286087742768, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6880045667529798, 0);
  sqcRYGate(q, 1.4489149903035656, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1113759990455692, 0);
  sqcRYGate(q, -0.04924319090710537, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.840799070893651, 2);
  sqcRYGate(q, 1.975614260228399, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.106403299075864, 2);
  sqcRYGate(q, -0.5843063399934771, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.4307988677142522, 0);
  sqcRYGate(q, -0.6705025507607817, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9744775028720025, 0);
  sqcRYGate(q, -2.190045219397141, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5341921973677879, 1);
  sqcRYGate(q, -1.8249928076613533, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2917037754721128, 1);
  sqcRYGate(q, 1.1531761689850457, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0109115318021025, 0);
  sqcRYGate(q, 2.0854991356712573, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5586500455554335, 0);
  sqcRYGate(q, 0.05866806388779988, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3844216514825196, 1);
  sqcRYGate(q, -2.9382620826548562, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1181113326925156, 1);
  sqcRYGate(q, 2.1762443833644465, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0667568632823814, 0);
  sqcRYGate(q, -0.1359170153856842, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.16710421953665, 0);
  sqcRYGate(q, -2.308979715874741, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.628646785521761, 2);
  sqcRYGate(q, 0.08962763140014385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7459253796679235, 2);
  sqcRYGate(q, -0.7675211461214451, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.556535077703618, 0);
  sqcRYGate(q, -1.6683336389331274, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3941459116527274, 0);
  sqcRYGate(q, -1.4317363603160445, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7660073838773105, 1);
  sqcRYGate(q, -0.4088756999700871, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.8256256184630226, 1);
  sqcRYGate(q, 1.9843858871890083, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.02890314897477353, 0);
  sqcRYGate(q, 1.7360139612105148, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8140058085010925, 0);
  sqcRYGate(q, -1.7535108407965714, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.038137905152569, 1);
  sqcRYGate(q, 1.4068004787910615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1142451551563126, 1);
  sqcRYGate(q, -2.075681427467371, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6871168674051473, 0);
  sqcRYGate(q, -1.6626238596479257, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9017247817378777, 0);
  sqcRYGate(q, -1.826431377043412, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9469084183880203, 2);
  sqcRYGate(q, -2.5970361045644688, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.764035281506664, 2);
  sqcRYGate(q, 1.0453282391501364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9436051702023014, 0);
  sqcRYGate(q, -1.025258196796023, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5850888995769834, 0);
  sqcRYGate(q, 1.4134378189397943, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.18641815827343888, 1);
  sqcRYGate(q, 1.9879031419680437, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0663469542606396, 1);
  sqcRYGate(q, 2.7568632321183686, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.854617016990859, 0);
  sqcRYGate(q, 2.3155783477580894, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2525436917023942, 0);
  sqcRYGate(q, 1.988103277584871, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1592265734339517, 1);
  sqcRYGate(q, 2.638141411444127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5460829613162979, 1);
  sqcRYGate(q, 3.0378675525921874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2984415315089814, 0);
  sqcRYGate(q, 0.2625281265146171, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3898199739176125, 0);
  sqcRYGate(q, -1.2620633314752205, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5011670568761413, 2);
  sqcRYGate(q, 2.4424508376109832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.914799047365069, 2);
  sqcRYGate(q, 1.4318659051944824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7934249339130006, 0);
  sqcRYGate(q, -2.96192464247471, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8899918504627684, 0);
  sqcRYGate(q, -0.5890881314208628, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.10969460945305469, 1);
  sqcRYGate(q, 0.442912093501917, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.9228959864754485, 1);
  sqcRYGate(q, 2.7922433639928737, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.342202579157032, 0);
  sqcRYGate(q, -0.4458302435814452, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8842770283933089, 0);
  sqcRYGate(q, -2.0352394517307144, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.012675642943914, 1);
  sqcRYGate(q, -2.2155978659263607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.907285273870226, 1);
  sqcRYGate(q, -1.1886248738654208, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.409677762544209, 0);
  sqcRYGate(q, 2.7284381692205097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.565571250937432, 0);
  sqcRYGate(q, 2.8460872352093327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6814670262507514, 2);
  sqcRYGate(q, 2.971009744550303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0040311797762556, 2);
  sqcRYGate(q, 1.0413961095584976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3675849199698, 0);
  sqcRYGate(q, 0.3926557139761151, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.11902902845742337, 0);
  sqcRYGate(q, 0.3117153244831332, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4782881956610865, 1);
  sqcRYGate(q, -0.24614912817248072, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1429562679990717, 1);
  sqcRYGate(q, -1.1421958857017707, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0319310618691384, 0);
  sqcRYGate(q, 0.5330571518359193, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.2734368476696143, 0);
  sqcRYGate(q, -1.4219463292442232, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8611539879062136, 1);
  sqcRYGate(q, -2.0362703922262764, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.35564381120602206, 1);
  sqcRYGate(q, 0.8229524251923435, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.772651887010549, 0);
  sqcRYGate(q, 0.4437018746714934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8244215688629575, 0);
  sqcRYGate(q, -0.3003756942254965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.11127095875463289, 2);
  sqcRYGate(q, 2.5130019300877486, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8162462184643839, 2);
  sqcRYGate(q, 0.2929991021512448, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.328288892772615, 0);
  sqcRYGate(q, 2.380518762732655, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6366927257320162, 0);
  sqcRYGate(q, -2.658695767038279, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.865064571494038, 1);
  sqcRYGate(q, -3.1366861495698446, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4357890547569385, 1);
  sqcRYGate(q, 1.8803564761837483, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.05342258326740499, 0);
  sqcRYGate(q, 0.954897238405108, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0391211070775244, 0);
  sqcRYGate(q, -0.6739243148410285, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4008180265458057, 1);
  sqcRYGate(q, 2.7817104962366104, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6429199738641417, 1);
  sqcRYGate(q, 1.3168010185123944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5655845757468302, 0);
  sqcRYGate(q, 2.873516218516221, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2787821012795675, 0);
  sqcRYGate(q, -1.9457612974763443, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8309537287885398, 2);
  sqcRYGate(q, 1.9239885903779577, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9796926538064556, 2);
  sqcRYGate(q, -1.5914572371920186, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1789174736134571, 0);
  sqcRYGate(q, -1.4479306160935028, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7084198171653497, 0);
  sqcRYGate(q, -0.6508937493227354, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0574097727668397, 1);
  sqcRYGate(q, -0.3653292528524128, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.81811893003431, 1);
  sqcRYGate(q, 0.3625158504075499, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9049538191807276, 0);
  sqcRYGate(q, 1.7847825737804026, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.236044834851029, 0);
  sqcRYGate(q, 2.8981570742901592, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.4539539359605467, 1);
  sqcRYGate(q, 0.14045567392207214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7733709460509928, 1);
  sqcRYGate(q, -2.5033066251080527, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.434082818029239, 0);
  sqcRYGate(q, 1.7275439472651462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4782804785627506, 0);
  sqcRYGate(q, 2.9198772353245555, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.555078073705905, 2);
  sqcRYGate(q, 2.5682852581985642, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9562176948264299, 2);
  sqcRYGate(q, -0.7321794192669215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1507254267931843, 0);
  sqcRYGate(q, 2.8329417159094894, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.072463274763572, 0);
  sqcRYGate(q, 1.8431183884646678, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6273846208299636, 1);
  sqcRYGate(q, -0.9227579779745055, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7129423053787423, 1);
  sqcRYGate(q, -3.1263035441126696, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.8022721787652283, 0);
  sqcRYGate(q, -0.9440770882876216, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7967197585093269, 0);
  sqcRYGate(q, 1.7191579027305135, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.6791086706605958, 1);
  sqcRYGate(q, 3.0245659569531607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0117453446751843, 1);
  sqcRYGate(q, 3.0537025058439027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0938556149782936, 0);
  sqcRYGate(q, 0.7177651514077334, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.390328249681483, 0);
  sqcRYGate(q, 1.7194712132044714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5922322033176455, 2);
  sqcRYGate(q, 2.160126404466924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.668382689073935, 2);
  sqcRYGate(q, -1.1220553233753758, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4194128445104917, 0);
  sqcRYGate(q, -3.108367341611976, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8515149036745826, 0);
  sqcRYGate(q, -2.1425441115907375, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.513382908888729, 1);
  sqcRYGate(q, -2.6007703799933184, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2130684743420397, 1);
  sqcRYGate(q, 2.435770777106999, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.259057774904897, 0);
  sqcRYGate(q, 0.9435856819432726, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5478176726868593, 0);
  sqcRYGate(q, -1.1532514813321395, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.466638751506423, 1);
  sqcRYGate(q, 1.206635060246823, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.843590652884214, 1);
  sqcRYGate(q, -0.6308260294937114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.002520124908111, 0);
  sqcRYGate(q, 2.3883417484953546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.977486507093811, 0);
  sqcRYGate(q, -2.3873499782020806, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1059345224597905, 2);
  sqcRYGate(q, -0.5359183177704926, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.382751238160519, 2);
  sqcRYGate(q, 2.0142046862240743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8547674541272527, 0);
  sqcRYGate(q, 3.0341021309908047, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2771829057319006, 0);
  sqcRYGate(q, -2.7457450404194352, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6004271862026325, 1);
  sqcRYGate(q, 1.5172974114371813, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4671325514913287, 1);
  sqcRYGate(q, 1.5626338012853835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.32949841617204895, 0);
  sqcRYGate(q, 0.8094197774966395, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.186353949883908, 0);
  sqcRYGate(q, 1.6267520914315012, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0906353630249308, 1);
  sqcRYGate(q, 3.0540787751197302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.9073109577166342, 1);
  sqcRYGate(q, 1.809040928683575, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5480712733772544, 0);
  sqcRYGate(q, 3.0451411088876035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7996553909749419, 0);
  sqcRYGate(q, 2.3148103131433406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0780075214727125, 2);
  sqcRYGate(q, 2.433548313436676, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0375729925258668, 2);
  sqcRYGate(q, -0.3380825289965524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8941461956284679, 0);
  sqcRYGate(q, -0.236971650494322, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9916487821301025, 0);
  sqcRYGate(q, -0.35089437527437095, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9861715923888825, 1);
  sqcRYGate(q, -1.7289038623657864, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9280238331288615, 1);
  sqcRYGate(q, 2.275493079328114, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6453171469424044, 0);
  sqcRYGate(q, -0.24919103938194367, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.067998421575074, 0);
  sqcRYGate(q, -1.588088654929459, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.841101931988516, 1);
  sqcRYGate(q, -0.5079541657496094, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6997636432751504, 1);
  sqcRYGate(q, 0.5413973381681494, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8943521901950096, 0);
  sqcRYGate(q, 2.140245141312455, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6451542902930605, 0);
  sqcRYGate(q, -2.0049781033764655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.871915237193877, 2);
  sqcRYGate(q, -2.756596015059601, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.686485033746064, 2);
  sqcRYGate(q, 0.1769957728802236, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.893143109203599, 0);
  sqcRYGate(q, 2.8305244064031645, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.812524821254756, 0);
  sqcRYGate(q, -1.8105301532266873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3138495838552016, 1);
  sqcRYGate(q, -0.7435404574548858, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3807840186847344, 1);
  sqcRYGate(q, -1.3246055377756805, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.115020649401336, 0);
  sqcRYGate(q, 0.668016097394358, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7572683575433232, 0);
  sqcRYGate(q, 2.0442316160431138, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0632075307536164, 1);
  sqcRYGate(q, -3.102127854003603, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8955151760961364, 1);
  sqcRYGate(q, 0.268340125270444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0023502562429987, 0);
  sqcRYGate(q, -2.2949730908348758, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0903964886222335, 0);
  sqcRYGate(q, -1.5677088464264388, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.937346783996198, 2);
  sqcRYGate(q, 2.733621896990058, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.101269509726081, 2);
  sqcRYGate(q, 0.4520838602201542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4005154973727745, 0);
  sqcRYGate(q, 2.3283106779609897, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4904346958849495, 0);
  sqcRYGate(q, -2.7676784208745118, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.825479094781627, 1);
  sqcRYGate(q, -2.483920307962546, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.610773740837243, 1);
  sqcRYGate(q, 0.927477995575404, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4347742043535181, 0);
  sqcRYGate(q, 2.3031034220364974, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.8660230332533727, 0);
  sqcRYGate(q, 0.5600948153244961, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9401040773946683, 1);
  sqcRYGate(q, -1.0402636332343933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.548270677764271, 1);
  sqcRYGate(q, 1.9619848866277385, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.46803617053557733, 0);
  sqcRYGate(q, 1.102024172322058, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.373549553914482, 0);
  sqcRYGate(q, -2.341717475962723, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.872129346797827, 2);
  sqcRYGate(q, 2.774683361819883, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8121733142970784, 2);
  sqcRYGate(q, -2.170535838609733, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -6.213629590357495e-05, 0);
  sqcRYGate(q, 0.06951168996649393, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.615160679461429, 0);
  sqcRYGate(q, 2.222926334327237, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3296950051634444, 1);
  sqcRYGate(q, -2.370544099483893, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4482213687557699, 1);
  sqcRYGate(q, 0.34210580418659275, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.510500078173585, 0);
  sqcRYGate(q, 1.4812961385376662, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.4362941972756696, 0);
  sqcRYGate(q, -1.3181187460231167, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8040607639896642, 1);
  sqcRYGate(q, -2.0287257791732927, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5588043920292297, 1);
  sqcRYGate(q, 0.46955019808789267, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5496648281973373, 0);
  sqcRYGate(q, 2.468645222205719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.625703144467147, 0);
  sqcRYGate(q, 2.737081728869486, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.30617767266870644, 2);
  sqcRYGate(q, 1.8039546330075824, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8585630824079263, 2);
  sqcRYGate(q, -1.8468747642734122, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9205439663359547, 0);
  sqcRYGate(q, -1.837237071427392, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9975713366045293, 0);
  sqcRYGate(q, -1.2609636243473863, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.815719641406513, 1);
  sqcRYGate(q, -1.8832722400341453, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3285775628942953, 1);
  sqcRYGate(q, 1.6263426683297233, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1159806630165594, 0);
  sqcRYGate(q, -1.320736463490372, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.918435546385338, 0);
  sqcRYGate(q, 2.2658518974397754, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7066547766670084, 1);
  sqcRYGate(q, 1.8772645813642135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2199675290902068, 1);
  sqcRYGate(q, 0.045805581018457886, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0331586470667093, 0);
  sqcRYGate(q, -1.587078529923689, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2719720857832773, 0);
  sqcRYGate(q, -2.602348735556352, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8145746957027642, 2);
  sqcRYGate(q, -0.4475862197858974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.186944497019262, 2);
  sqcRYGate(q, -0.3555778798699656, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2884030955994348, 0);
  sqcRYGate(q, 1.3605737796307302, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7841645502096803, 0);
  sqcRYGate(q, 2.4408390861672955, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.31556134255145546, 1);
  sqcRYGate(q, 1.3480100861077686, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7300054525820383, 1);
  sqcRYGate(q, 2.993460181055315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3702386116787113, 0);
  sqcRYGate(q, 2.7953557645531175, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7893494295324472, 0);
  sqcRYGate(q, -0.44706560020112274, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.33971899395094063, 1);
  sqcRYGate(q, 1.0544459550841303, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7089092810852096, 1);
  sqcRYGate(q, 1.237908365471661, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.148256520163644, 0);
  sqcRYGate(q, 1.566729149418439, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0590141077520423, 0);
  sqcRYGate(q, -0.4515059542031143, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7165545977246168, 2);
  sqcRYGate(q, -1.9902755984891707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4233415173980273, 2);
  sqcRYGate(q, -2.6936405672929378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0598042784801005, 0);
  sqcRYGate(q, -1.3422766526846324, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1050290087478327, 0);
  sqcRYGate(q, -2.151295935793575, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.952515649503947, 1);
  sqcRYGate(q, 0.6492802778523226, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4248297122247685, 1);
  sqcRYGate(q, -0.21198912804756542, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4600882179608545, 0);
  sqcRYGate(q, 0.13779298053032374, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0358633780871722, 0);
  sqcRYGate(q, -2.826377771283052, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.215559460424618, 1);
  sqcRYGate(q, 2.74516060194946, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6009507990033954, 1);
  sqcRYGate(q, 2.534837059045476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0170052503472542, 0);
  sqcRYGate(q, 2.311399944735576, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08211255285364238, 0);
  sqcRYGate(q, 1.4574350789062653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4417735941738012, 2);
  sqcRYGate(q, 2.5177041931916233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.706952357468522, 2);
  sqcRYGate(q, -2.4164984950592574, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.32963820115604037, 0);
  sqcRYGate(q, -1.8790492331026805, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0715168771389654, 0);
  sqcRYGate(q, 1.4444784333657517, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.892336751787691, 1);
  sqcRYGate(q, 1.096833513583894, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3382930184108121, 1);
  sqcRYGate(q, -0.12975537824725247, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.573856557313783, 0);
  sqcRYGate(q, -0.9346113124758705, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9443285693594672, 0);
  sqcRYGate(q, -2.2574744235245863, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.038038985809546, 1);
  sqcRYGate(q, -2.433216692813992, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.47209789580657263, 1);
  sqcRYGate(q, -1.1878979009819837, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2232027977861781, 0);
  sqcRYGate(q, -0.6701621720649333, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12267002490655621, 0);
  sqcRYGate(q, 0.06609666719562453, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9359562564724548, 2);
  sqcRYGate(q, -2.463745289253238, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7589022714164048, 2);
  sqcRYGate(q, -3.1089423769066364, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1014413179075042, 0);
  sqcRYGate(q, 0.6251247194761387, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2848968070672474, 0);
  sqcRYGate(q, 2.591164978690222, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2358528305665395, 1);
  sqcRYGate(q, -1.3453048448431657, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2504210888685896, 1);
  sqcRYGate(q, -1.1502000483808077, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4141721592519234, 0);
  sqcRYGate(q, -2.769256088350081, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.832331119747125, 0);
  sqcRYGate(q, 0.24441514952506718, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0956595921834293, 1);
  sqcRYGate(q, 1.7817383050697861, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.460484875061503, 1);
  sqcRYGate(q, -0.9483369583673134, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3386152105976952, 0);
  sqcRYGate(q, 2.713900636266719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0659143809139677, 0);
  sqcRYGate(q, -2.4836812920508673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1642254006371252, 2);
  sqcRYGate(q, -2.31535288931747, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7382293777179547, 2);
  sqcRYGate(q, 0.9388942183606777, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.40249709622876223, 0);
  sqcRYGate(q, 0.9828273229609596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1062978237436019, 0);
  sqcRYGate(q, 0.29901616303819223, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.32076833805021493, 1);
  sqcRYGate(q, -2.538332800855838, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.7229281790775535, 1);
  sqcRYGate(q, 1.2844182993068776, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.765215877981647, 0);
  sqcRYGate(q, -1.903938682634581, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.616473771977273, 0);
  sqcRYGate(q, 1.2494251886301744, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.853899472263854, 1);
  sqcRYGate(q, -3.090878231551136, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7626810579192966, 1);
  sqcRYGate(q, -0.8706103408911581, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.1913053544961634, 0);
  sqcRYGate(q, 2.290123312523691, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2009003786970467, 0);
  sqcRYGate(q, 2.2608988619979673, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7541702779953674, 2);
  sqcRYGate(q, -0.6036414059197743, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.603565367466744, 2);
  sqcRYGate(q, 1.8776102462345525, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.49751040571754857, 0);
  sqcRYGate(q, 0.25079913418563216, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.810814203237799, 0);
  sqcRYGate(q, -0.9809406752688383, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.6646962831588437, 1);
  sqcRYGate(q, -0.8870578004854566, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3561900158700992, 1);
  sqcRYGate(q, -1.8589837332077308, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.09604177473884462, 0);
  sqcRYGate(q, 3.0617302958614667, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.015439036286954, 0);
  sqcRYGate(q, 0.828467199886358, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.187947491542963, 1);
  sqcRYGate(q, -1.7644025161508097, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.832361480698658, 1);
  sqcRYGate(q, 1.0197640651702211, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.04338109708561877, 0);
  sqcRYGate(q, 2.391828610584154, 1);
  sqcRYGate(q, 2.2733200823242745, 2);
  sqcRYGate(q, -1.2883636750709915, 3);

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
