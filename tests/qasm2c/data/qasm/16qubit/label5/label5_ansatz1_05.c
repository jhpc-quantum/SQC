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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, 1.2200636312174795, 0);
  sqcRZGate(q, -2.9035100824399263, 0);
  sqcRYGate(q, -1.188024178801218, 1);
  sqcRZGate(q, -1.7305706478524296, 1);
  sqcRYGate(q, -0.0005800908332625343, 2);
  sqcRZGate(q, 1.7730339984597512, 2);
  sqcRYGate(q, -2.9540031791966723, 3);
  sqcRZGate(q, 1.0337898730558752, 3);
  sqcRYGate(q, 1.919722698059039, 4);
  sqcRZGate(q, 0.4866429991708036, 4);
  sqcRYGate(q, -1.7448913035260545, 5);
  sqcRZGate(q, 3.1338367779138476, 5);
  sqcRYGate(q, 1.5429131372694889, 6);
  sqcRZGate(q, -1.5550256461003886, 6);
  sqcRYGate(q, -1.5385200962847627, 7);
  sqcRZGate(q, 2.2797412816192484, 7);
  sqcRYGate(q, 2.8577411367762813, 8);
  sqcRZGate(q, -2.3318542152600967, 8);
  sqcRYGate(q, 1.54737261015591, 9);
  sqcRZGate(q, -1.600938590511821, 9);
  sqcRYGate(q, -0.6006183822220761, 10);
  sqcRZGate(q, -1.3107587308587538, 10);
  sqcRYGate(q, -3.1383300592149266, 11);
  sqcRZGate(q, 3.1349894768295354, 11);
  sqcRYGate(q, -1.5087653493261282, 12);
  sqcRZGate(q, 2.371502984781577, 12);
  sqcRYGate(q, 1.4174321029931045, 13);
  sqcRZGate(q, 1.6036609140754754, 13);
  sqcRYGate(q, 1.568539583555661, 14);
  sqcRZGate(q, -2.9997291604226386, 14);
  sqcRYGate(q, 1.5664315738198227, 15);
  sqcRZGate(q, 2.717086391104208, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 0.04175037531433612, 0);
  sqcRZGate(q, -1.2472516222918903, 0);
  sqcRYGate(q, 1.8603458810118294, 1);
  sqcRZGate(q, -2.1772761952632442, 1);
  sqcRYGate(q, -3.1365454655561753, 2);
  sqcRZGate(q, 2.9541812609526676, 2);
  sqcRYGate(q, -2.504976840659193, 3);
  sqcRZGate(q, 0.025707807668077967, 3);
  sqcRYGate(q, 0.040796984599310804, 4);
  sqcRZGate(q, 1.4575520484788098, 4);
  sqcRYGate(q, -0.868194947672352, 5);
  sqcRZGate(q, 0.015755310347623563, 5);
  sqcRYGate(q, 2.0612194704826035, 6);
  sqcRZGate(q, -1.1496748971974176, 6);
  sqcRYGate(q, -0.00889206094361246, 7);
  sqcRZGate(q, 1.1969502448361489, 7);
  sqcRYGate(q, 1.5706992850301291, 8);
  sqcRZGate(q, -0.097500462723068, 8);
  sqcRYGate(q, 0.7833937407942279, 9);
  sqcRZGate(q, 1.4267693258522265, 9);
  sqcRYGate(q, 3.050059107374464, 10);
  sqcRZGate(q, -0.8040242554288586, 10);
  sqcRYGate(q, -3.0147418725812902, 11);
  sqcRZGate(q, 1.1569810935030886, 11);
  sqcRYGate(q, 1.3528946155111778, 12);
  sqcRZGate(q, 1.7050349367332462, 12);
  sqcRYGate(q, -1.6017736401532356, 13);
  sqcRZGate(q, -2.018976645199185, 13);
  sqcRYGate(q, -1.5770818909908986, 14);
  sqcRZGate(q, 1.2192204249273189, 14);
  sqcRYGate(q, 1.714116166781329, 15);
  sqcRZGate(q, -2.673693186879013, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.467174402142026, 0);
  sqcRZGate(q, -2.088011137014079, 0);
  sqcRYGate(q, -1.2107287971821696, 1);
  sqcRZGate(q, -0.7458869888450987, 1);
  sqcRYGate(q, 1.4773459066460037, 2);
  sqcRZGate(q, -1.5306631440802052, 2);
  sqcRYGate(q, -1.731250458465635, 3);
  sqcRZGate(q, 1.9013600422845973, 3);
  sqcRYGate(q, 3.121932173814536, 4);
  sqcRZGate(q, -1.309513604728505, 4);
  sqcRYGate(q, -1.1947003111563044, 5);
  sqcRZGate(q, 3.139753986520498, 5);
  sqcRYGate(q, 0.06780679663353606, 6);
  sqcRZGate(q, 2.852916155497509, 6);
  sqcRYGate(q, 1.5746616733233099, 7);
  sqcRZGate(q, 1.565726820821036, 7);
  sqcRYGate(q, -1.3278229133748312, 8);
  sqcRZGate(q, 1.5321083854996225, 8);
  sqcRYGate(q, -0.00013036544473032908, 9);
  sqcRZGate(q, -2.995861662615251, 9);
  sqcRYGate(q, -0.503719146634138, 10);
  sqcRZGate(q, 2.220385838190886, 10);
  sqcRYGate(q, -0.08118422934797777, 11);
  sqcRZGate(q, 1.539009316954561, 11);
  sqcRYGate(q, 3.1255720855746554, 12);
  sqcRZGate(q, -0.9401427837946503, 12);
  sqcRYGate(q, -0.3449633014316831, 13);
  sqcRZGate(q, 1.106035231675592, 13);
  sqcRYGate(q, -0.04373224907186329, 14);
  sqcRZGate(q, -3.0257048096961974, 14);
  sqcRYGate(q, -1.234735253609646, 15);
  sqcRZGate(q, -2.148716502711686, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.23216523217636806, 0);
  sqcRZGate(q, -1.8420437886595762, 0);
  sqcRYGate(q, -3.0906882936910547, 1);
  sqcRZGate(q, 1.2832225566424853, 1);
  sqcRYGate(q, -1.402769127957014, 2);
  sqcRZGate(q, 1.7101972413640882, 2);
  sqcRYGate(q, -0.017137164838326946, 3);
  sqcRZGate(q, 2.3045911105862475, 3);
  sqcRYGate(q, 2.530849949506342, 4);
  sqcRZGate(q, 1.5679381261950656, 4);
  sqcRYGate(q, -2.2762890237332725, 5);
  sqcRZGate(q, -1.5767138354499919, 5);
  sqcRYGate(q, 1.5868991238512349, 6);
  sqcRZGate(q, 2.2877455592536675, 6);
  sqcRYGate(q, 1.5676223611912814, 7);
  sqcRZGate(q, -1.341749862694487, 7);
  sqcRYGate(q, -0.33133129018620716, 8);
  sqcRZGate(q, 0.03315260234829687, 8);
  sqcRYGate(q, -1.5658329904074533, 9);
  sqcRZGate(q, -1.4108905155537401, 9);
  sqcRYGate(q, 1.591336917729718, 10);
  sqcRZGate(q, 1.650166210711989, 10);
  sqcRYGate(q, -1.7029961506695814, 11);
  sqcRZGate(q, 0.02311993038723363, 11);
  sqcRYGate(q, 0.2527551533346074, 12);
  sqcRZGate(q, -2.828669907309263, 12);
  sqcRYGate(q, 3.1053861288343545, 13);
  sqcRZGate(q, -2.4755631988450633, 13);
  sqcRYGate(q, -0.033248925968964116, 14);
  sqcRZGate(q, -1.595331024640866, 14);
  sqcRYGate(q, -1.6463272366489101, 15);
  sqcRZGate(q, -2.5777527209348974, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.8756201750097148, 0);
  sqcRZGate(q, -0.5762049642623155, 0);
  sqcRYGate(q, -2.718432029520828, 1);
  sqcRZGate(q, -1.7247920877678296, 1);
  sqcRYGate(q, -1.6679572312982165, 2);
  sqcRZGate(q, 0.3334538436175958, 2);
  sqcRYGate(q, 1.1218951251812674, 3);
  sqcRZGate(q, 1.7754149169620137, 3);
  sqcRYGate(q, -1.5793059679705035, 4);
  sqcRZGate(q, -1.3948256095112035, 4);
  sqcRYGate(q, -1.5715853927985888, 5);
  sqcRZGate(q, -0.02244755818669653, 5);
  sqcRYGate(q, -0.0023728723423872616, 6);
  sqcRZGate(q, -0.7961240460245547, 6);
  sqcRYGate(q, -0.10772102687882362, 7);
  sqcRZGate(q, -1.796115790439181, 7);
  sqcRYGate(q, 1.572946056463568, 8);
  sqcRZGate(q, -1.5635421902610434, 8);
  sqcRYGate(q, -0.0022778389424595404, 9);
  sqcRZGate(q, -0.22065046327131732, 9);
  sqcRYGate(q, -2.5492307057058397, 10);
  sqcRZGate(q, -0.026145574341729372, 10);
  sqcRYGate(q, 3.1353312188002995, 11);
  sqcRZGate(q, -2.446775163105298, 11);
  sqcRYGate(q, -0.001260957183861322, 12);
  sqcRZGate(q, 1.7850204699352634, 12);
  sqcRYGate(q, -2.087148469272705, 13);
  sqcRZGate(q, -1.882367851933921, 13);
  sqcRYGate(q, 2.0357082795882104, 14);
  sqcRZGate(q, 2.2160362412487977, 14);
  sqcRYGate(q, -1.4834144045396886, 15);
  sqcRZGate(q, -2.2371042183403507, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.7259139254335327, 0);
  sqcRZGate(q, 2.0696998688312593, 0);
  sqcRYGate(q, 2.835157924068847, 1);
  sqcRZGate(q, -0.5495923327695048, 1);
  sqcRYGate(q, 3.0720274397187732, 2);
  sqcRZGate(q, 0.41833746225411766, 2);
  sqcRYGate(q, -3.132778577723755, 3);
  sqcRZGate(q, 0.5009626482741734, 3);
  sqcRYGate(q, 0.0027186211167292687, 4);
  sqcRZGate(q, -0.5871340594031701, 4);
  sqcRYGate(q, -1.5700997977463995, 5);
  sqcRZGate(q, -0.00045503810463980746, 5);
  sqcRYGate(q, 1.5702996539138467, 6);
  sqcRZGate(q, 1.5732690432097067, 6);
  sqcRYGate(q, 1.552346824235782, 7);
  sqcRZGate(q, 0.0010573756973457434, 7);
  sqcRYGate(q, -1.5672529095374328, 8);
  sqcRZGate(q, 0.3178618825921302, 8);
  sqcRYGate(q, -1.5746813428187731, 9);
  sqcRZGate(q, -2.6519887245267153, 9);
  sqcRYGate(q, 2.6966144058928383, 10);
  sqcRZGate(q, -1.5930863963582924, 10);
  sqcRYGate(q, -1.532498269284025, 11);
  sqcRZGate(q, -0.6306987944868068, 11);
  sqcRYGate(q, 1.4645197747804952, 12);
  sqcRZGate(q, 1.0658151720265856, 12);
  sqcRYGate(q, 0.07922455353609958, 13);
  sqcRZGate(q, -3.1127887149958693, 13);
  sqcRYGate(q, -0.06590900164998725, 14);
  sqcRZGate(q, -2.2962167520506647, 14);
  sqcRYGate(q, -1.3130701450021565, 15);
  sqcRZGate(q, 2.4277562442652285, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.7607224986534772, 0);
  sqcRZGate(q, -2.3715238864059898, 0);
  sqcRYGate(q, -1.7721391772847643, 1);
  sqcRZGate(q, -1.4791738521888433, 1);
  sqcRYGate(q, 0.10485409728538309, 2);
  sqcRZGate(q, 2.9163607250432233, 2);
  sqcRYGate(q, -0.9998875143241461, 3);
  sqcRZGate(q, -0.3811220152401775, 3);
  sqcRYGate(q, 0.32892886631912965, 4);
  sqcRZGate(q, -0.009962379164764655, 4);
  sqcRYGate(q, -1.4461446873098982, 5);
  sqcRZGate(q, -0.8103019659378595, 5);
  sqcRYGate(q, 1.5705347260598075, 6);
  sqcRZGate(q, 1.5635007035900035, 6);
  sqcRYGate(q, -1.5717104654099359, 7);
  sqcRZGate(q, -0.507567059041963, 7);
  sqcRYGate(q, 1.5364978749033824, 8);
  sqcRZGate(q, 0.43491356863109054, 8);
  sqcRYGate(q, -2.9694844777071503, 9);
  sqcRZGate(q, 2.041641172077006, 9);
  sqcRYGate(q, -1.60281826472071, 10);
  sqcRZGate(q, -2.7791687980856947, 10);
  sqcRYGate(q, -0.4228115124962164, 11);
  sqcRZGate(q, -0.7683495433258648, 11);
  sqcRYGate(q, 0.07097529226803694, 12);
  sqcRZGate(q, -1.770946890902472, 12);
  sqcRYGate(q, 1.4693526908913097, 13);
  sqcRZGate(q, 1.4016622974801676, 13);
  sqcRYGate(q, -1.143042811884006, 14);
  sqcRZGate(q, -2.323817010905975, 14);
  sqcRYGate(q, -2.580930493808656, 15);
  sqcRZGate(q, 1.3250530763615627, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 1.5340793077471633, 0);
  sqcRZGate(q, -2.776126004994105, 0);
  sqcRYGate(q, 1.5921071930375648, 1);
  sqcRZGate(q, -1.506435952940433, 1);
  sqcRYGate(q, 1.5710574135869588, 2);
  sqcRZGate(q, 0.0071397489270914605, 2);
  sqcRYGate(q, 0.0228275909255436, 3);
  sqcRZGate(q, 1.4247156303859565, 3);
  sqcRYGate(q, -0.5154520564594165, 4);
  sqcRZGate(q, 1.5717238467987251, 4);
  sqcRYGate(q, -3.138840908893955, 5);
  sqcRZGate(q, 0.7604797878509971, 5);
  sqcRYGate(q, 1.5719485635063588, 6);
  sqcRZGate(q, -1.605408302283628, 6);
  sqcRYGate(q, -0.003983438711294696, 7);
  sqcRZGate(q, 0.16146955942750107, 7);
  sqcRYGate(q, 3.118145632097144, 8);
  sqcRZGate(q, -3.134090936415443, 8);
  sqcRYGate(q, -0.12229999538983628, 9);
  sqcRZGate(q, -3.118467428797954, 9);
  sqcRYGate(q, -0.00675164468263123, 10);
  sqcRZGate(q, -0.3063037185720605, 10);
  sqcRYGate(q, 3.140391578172167, 11);
  sqcRZGate(q, -1.4210038482469833, 11);
  sqcRYGate(q, 3.1397590801502635, 12);
  sqcRZGate(q, 2.4549039851034564, 12);
  sqcRYGate(q, -3.139772559802411, 13);
  sqcRZGate(q, 1.592346881012442, 13);
  sqcRYGate(q, -0.005787649915306953, 14);
  sqcRZGate(q, -2.5768690622516335, 14);
  sqcRYGate(q, 2.8755104071506197, 15);
  sqcRZGate(q, 1.6580159689233192, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -1.544553744521095, 0);
  sqcRZGate(q, -1.3098897972859733, 0);
  sqcRYGate(q, -1.6885603488270156, 1);
  sqcRZGate(q, 1.5267866391462048, 1);
  sqcRYGate(q, -1.7344761986018888, 2);
  sqcRZGate(q, -1.1266219178130532, 2);
  sqcRYGate(q, -1.5733555192342656, 3);
  sqcRZGate(q, -1.605402884316275, 3);
  sqcRYGate(q, 1.5613162082784957, 4);
  sqcRZGate(q, 0.7782496286335698, 4);
  sqcRYGate(q, 1.5710853642055544, 5);
  sqcRZGate(q, -0.04651729703002161, 5);
  sqcRYGate(q, -0.008275584482535514, 6);
  sqcRZGate(q, 2.0570772735301857, 6);
  sqcRYGate(q, 0.0002886370062383242, 7);
  sqcRZGate(q, -1.2590074176216177, 7);
  sqcRYGate(q, 3.1037897547312117, 8);
  sqcRZGate(q, -1.5614730326480364, 8);
  sqcRYGate(q, -1.485582872355027, 9);
  sqcRZGate(q, -1.4578163163964843, 9);
  sqcRYGate(q, -3.109157468813244, 10);
  sqcRZGate(q, 0.49220502437472824, 10);
  sqcRYGate(q, -1.9144455784790821, 11);
  sqcRZGate(q, 1.2819831232188683, 11);
  sqcRYGate(q, 1.603086742356603, 12);
  sqcRZGate(q, -1.0697680049142586, 12);
  sqcRYGate(q, 1.4861401258611224, 13);
  sqcRZGate(q, 1.1952893200776176, 13);
  sqcRYGate(q, -3.1071367417209594, 14);
  sqcRZGate(q, 1.760558950965333, 14);
  sqcRYGate(q, -0.040017183230831144, 15);
  sqcRZGate(q, 0.22010685859402002, 15);

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
