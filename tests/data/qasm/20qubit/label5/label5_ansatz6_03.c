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

  sqcRYGate(q, 0.7764955893060047, 0);
  sqcRYGate(q, 1.8047392235839368, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8233780846034104, 0);
  sqcRYGate(q, 2.279937949389733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6238807085271787, 1);
  sqcRYGate(q, 2.0449125230496246, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4636282389665496, 1);
  sqcRYGate(q, 1.4131725633103702, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1765462955864203, 2);
  sqcRYGate(q, -0.15132203628243526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3610795293413203, 2);
  sqcRYGate(q, 2.8749975474115392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0693534246452587, 3);
  sqcRYGate(q, -0.9428604935198407, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.7885337318161902, 3);
  sqcRYGate(q, 1.810887168726686, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.4741748280987808, 4);
  sqcRYGate(q, -1.323240762868732, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.859988388331819, 4);
  sqcRYGate(q, 1.6363649986797484, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2609012583064603, 5);
  sqcRYGate(q, -2.9405888990191342, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -3.120356882789313, 5);
  sqcRYGate(q, -0.9842944002393398, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4822777944073031, 6);
  sqcRYGate(q, -2.1686634091732806, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.933469176241926, 6);
  sqcRYGate(q, 0.10005392265211023, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.645269959178367, 7);
  sqcRYGate(q, -1.4140660737129849, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8788591475912408, 7);
  sqcRYGate(q, -2.0027321512319465, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.3495418546268725, 8);
  sqcRYGate(q, -2.6804379021270166, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.3976885820075866, 8);
  sqcRYGate(q, 0.012478928524169968, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 2.558352739081911, 9);
  sqcRYGate(q, -3.114305871709659, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.9647607714161428, 9);
  sqcRYGate(q, -2.1111042663962913, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.6405631365251003, 10);
  sqcRYGate(q, 0.3382863670789522, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.70872904979986, 10);
  sqcRYGate(q, -0.928565481607387, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.6567530710884437, 11);
  sqcRYGate(q, -2.8653343423420847, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.4516885364116376, 11);
  sqcRYGate(q, 1.329114298554004, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.3068876007709701, 12);
  sqcRYGate(q, 3.0108735718924584, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.7969301024560185, 12);
  sqcRYGate(q, 1.4594129111508358, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 0.7878686965470258, 13);
  sqcRYGate(q, 0.2120542262539092, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.2840531603592131, 13);
  sqcRYGate(q, -1.4123328959612036, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 2.313151251077159, 14);
  sqcRYGate(q, 0.08392196251967583, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.160300283373065, 14);
  sqcRYGate(q, -2.1586628677933497, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5373575915242086, 15);
  sqcRYGate(q, 2.392460901448052, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.6677670692093822, 15);
  sqcRYGate(q, -2.332432996508136, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.8333465592154683, 16);
  sqcRYGate(q, 0.6729003455057967, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.9513340975017806, 16);
  sqcRYGate(q, 2.1901679159993375, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 2.8077014563673486, 17);
  sqcRYGate(q, -1.561000017783017, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.4418537109801333, 17);
  sqcRYGate(q, 1.7756142070917609, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.2883892848048673, 18);
  sqcRYGate(q, 3.0295915732021865, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 1.2976197908610025, 18);
  sqcRYGate(q, -2.2872956500506345, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.9502703635338787, 0);
  sqcRYGate(q, 0.6680909510330015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7703230245445505, 0);
  sqcRYGate(q, 0.26300458380115893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.22472373449178562, 1);
  sqcRYGate(q, -1.992126514096988, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8431775885006279, 1);
  sqcRYGate(q, 2.2205729669645033, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6801952184761841, 2);
  sqcRYGate(q, 0.7478479006959458, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.01658149508225115, 2);
  sqcRYGate(q, 3.1192078181598992, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.787265982989552, 3);
  sqcRYGate(q, 2.728647725851436, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.11044584033312473, 3);
  sqcRYGate(q, 2.9636809058019593, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.01795480855537, 4);
  sqcRYGate(q, -1.5357833526609925, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7371560068209004, 4);
  sqcRYGate(q, -0.5295941934055528, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.4616988238976742, 5);
  sqcRYGate(q, 1.6300285742344256, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.008903192413987071, 5);
  sqcRYGate(q, -0.07222588701474386, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0241464594604204, 6);
  sqcRYGate(q, 0.754101931981321, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.382121386655326, 6);
  sqcRYGate(q, -2.1214994535759164, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1650391462902698, 7);
  sqcRYGate(q, 0.3652465991429011, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -1.8049432393668785, 7);
  sqcRYGate(q, -2.7792986021022403, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.8848409594204516, 8);
  sqcRYGate(q, 1.5430528562050025, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.3462938525023898, 8);
  sqcRYGate(q, -0.008530159323494322, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5571655661194281, 9);
  sqcRYGate(q, -1.5718346376505512, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -2.017806424138875, 9);
  sqcRYGate(q, 0.35585937909517, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.6025498643735079, 10);
  sqcRYGate(q, -1.5853770987719527, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.3916049307835046, 10);
  sqcRYGate(q, -1.1679144036689335, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.5423698425408139, 11);
  sqcRYGate(q, -0.9391309951253374, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 3.113194628989435, 11);
  sqcRYGate(q, -1.0850968663280591, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -0.9182270386310359, 12);
  sqcRYGate(q, 2.0751256169916865, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.12493799443305408, 12);
  sqcRYGate(q, 1.3956798292898187, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -2.088010604411939, 13);
  sqcRYGate(q, 1.6382761658769978, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -0.03567555436225278, 13);
  sqcRYGate(q, 0.9289554590359496, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.625156569509227, 14);
  sqcRYGate(q, -1.5621441393722124, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 2.8162273896316603, 14);
  sqcRYGate(q, 0.8755881639988732, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5631696859297732, 15);
  sqcRYGate(q, -1.5418506614663343, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 2.45461288156438, 15);
  sqcRYGate(q, 1.9303945502011253, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.5525473724424967, 16);
  sqcRYGate(q, -1.6415108557327978, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -3.0353618330554277, 16);
  sqcRYGate(q, 1.903745473208551, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.4725287550456, 17);
  sqcRYGate(q, 1.6164612375203258, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.5464481415020237, 17);
  sqcRYGate(q, 1.3091431769754203, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 1.5976789573937022, 18);
  sqcRYGate(q, 1.1960083742951948, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.955184919049549, 18);
  sqcRYGate(q, -2.695159871186345, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.2474709125717436, 0);
  sqcRYGate(q, -0.8468520428662524, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1886398167526466, 0);
  sqcRYGate(q, -1.3323476365118418, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1296079903170222, 1);
  sqcRYGate(q, 1.126258396372636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.076849009011444, 1);
  sqcRYGate(q, -0.030877456725298735, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5688679271661501, 2);
  sqcRYGate(q, 2.22976459756814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.01699260231268873, 2);
  sqcRYGate(q, -0.029787114265464435, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1792458058471249, 3);
  sqcRYGate(q, 2.876021617653557, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8386699377310052, 3);
  sqcRYGate(q, 2.2252618730047042, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5686395189466203, 4);
  sqcRYGate(q, 0.18764838768461115, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5472775090977962, 4);
  sqcRYGate(q, 1.3713703202333472, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.093151860564804, 5);
  sqcRYGate(q, 1.7501801682598295, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9189974487680939, 5);
  sqcRYGate(q, 1.3974138964126341, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.27765225977511465, 6);
  sqcRYGate(q, 1.0771188496222166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9646950307563256, 6);
  sqcRYGate(q, -3.1247016915444856, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5841091776675027, 7);
  sqcRYGate(q, -0.26327737726305717, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 0.9460831393699216, 7);
  sqcRYGate(q, -0.5965315544464773, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5665665580433412, 8);
  sqcRYGate(q, 1.5922243652081989, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7329545009355243, 8);
  sqcRYGate(q, 0.9600352765516593, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5713905867495215, 9);
  sqcRYGate(q, -1.5695528197556017, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.07652455533424, 9);
  sqcRYGate(q, -2.1989916554866724, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.570908053491513, 10);
  sqcRYGate(q, -1.458477608176194, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 3.0739523526549393, 10);
  sqcRYGate(q, -0.8586246607451518, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.6837908575271632, 11);
  sqcRYGate(q, 1.160424113034934, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -3.1155644860179987, 11);
  sqcRYGate(q, 1.8611084973215086, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.9782058696882867, 12);
  sqcRYGate(q, 1.3976462182349412, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -0.2203022028358978, 12);
  sqcRYGate(q, -2.006063130875961, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.7570141305192193, 13);
  sqcRYGate(q, 1.5448942719305798, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 3.1296298703284293, 13);
  sqcRYGate(q, -1.8439736857282911, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5329289985192778, 14);
  sqcRYGate(q, 1.5983327282484572, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 0.17061042610700827, 14);
  sqcRYGate(q, -1.5589934893038542, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -2.5022059780491017, 15);
  sqcRYGate(q, 0.17120153654463638, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.0058821382335683126, 15);
  sqcRYGate(q, 0.0006419673930366798, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.6713837263932055, 16);
  sqcRYGate(q, 1.569675516135164, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -1.609455002632985, 16);
  sqcRYGate(q, -0.021829885462668126, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.578429780606048, 17);
  sqcRYGate(q, -1.1359517762961655, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.023882368268788774, 17);
  sqcRYGate(q, 2.453250561523417, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.786164473866415, 18);
  sqcRYGate(q, -0.8391535970221762, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.6666284049338589, 18);
  sqcRYGate(q, -0.31596747218295074, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -2.002560364760093, 0);
  sqcRYGate(q, -0.5131007803881965, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0840819787623586, 0);
  sqcRYGate(q, 0.685478482691469, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.00426497135168, 1);
  sqcRYGate(q, 0.8703574494522179, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6093627186785628, 1);
  sqcRYGate(q, -2.0517919129372197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.692488418461833, 2);
  sqcRYGate(q, -1.5928600005862572, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.04133664745822685, 2);
  sqcRYGate(q, 0.018748412024570442, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9464379629182673, 3);
  sqcRYGate(q, 0.2878823444844203, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0138289271149903, 3);
  sqcRYGate(q, -3.083994583880933, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6607772753282104, 4);
  sqcRYGate(q, -2.8859320934792168, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.00031911281902338826, 4);
  sqcRYGate(q, -3.1023708518495376, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.7559063909722723, 5);
  sqcRYGate(q, -0.28550877887384807, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.0821809193287528, 5);
  sqcRYGate(q, -1.4290535020987756, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5542120781562332, 6);
  sqcRYGate(q, 3.043382588158347, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.135892256233403, 6);
  sqcRYGate(q, 1.979815806378175, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0248155023462244, 7);
  sqcRYGate(q, -3.1205961299445457, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.0049227314858084625, 7);
  sqcRYGate(q, -1.6567920602308774, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.121778260003665, 8);
  sqcRYGate(q, 1.5688059105177712, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.6480328420697274, 8);
  sqcRYGate(q, 1.422504516042796, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5760294186679553, 9);
  sqcRYGate(q, -1.6047728840162128, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 3.004644335670829, 9);
  sqcRYGate(q, 2.014328800167135, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 1.5407103111563112, 10);
  sqcRYGate(q, -1.5716476386123248, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.0874037580998746, 10);
  sqcRYGate(q, -2.3697842265583513, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.572651773885009, 11);
  sqcRYGate(q, -1.5896827652579861, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.6008501081225548, 11);
  sqcRYGate(q, -1.6156510650089748, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.568827147156119, 12);
  sqcRYGate(q, -1.564741501635928, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.3904429556703948, 12);
  sqcRYGate(q, -1.1815091489380456, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.5691802187804242, 13);
  sqcRYGate(q, -1.5734600202287021, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.9129265327745077, 13);
  sqcRYGate(q, 1.8601461511625688, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, -1.5702082827121524, 14);
  sqcRYGate(q, -0.6659881648679795, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.6942583956811683, 14);
  sqcRYGate(q, -1.8527112016880427, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5745120709793312, 15);
  sqcRYGate(q, -2.4143566587292042, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -1.4346532901824336, 15);
  sqcRYGate(q, 2.523132080029331, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5727526470942654, 16);
  sqcRYGate(q, -1.5662604763365648, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5582565678322542, 16);
  sqcRYGate(q, 1.444796715121118, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.26373472804959525, 17);
  sqcRYGate(q, -1.8615241625986672, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.561171048874735, 17);
  sqcRYGate(q, 0.0197890643915537, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -1.5619365759355608, 18);
  sqcRYGate(q, -1.622270950748944, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 0.16294342500539175, 18);
  sqcRYGate(q, -2.2953688115229154, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 3.0513640578729735, 0);
  sqcRYGate(q, -1.8649120691329024, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5958839582467477, 0);
  sqcRYGate(q, -0.50550441294358, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6585938738515091, 1);
  sqcRYGate(q, 1.9810427556465662, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19339516056712114, 1);
  sqcRYGate(q, -0.02637942518851023, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6004282009133005, 2);
  sqcRYGate(q, -2.209677451629102, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2753910413879916, 2);
  sqcRYGate(q, -0.5960600700129491, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.573264021480063, 3);
  sqcRYGate(q, -0.07550409110880853, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.21950258107255888, 3);
  sqcRYGate(q, -1.1116254898955082, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5971044224534472, 4);
  sqcRYGate(q, 0.12406153104758744, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0230819813487284, 4);
  sqcRYGate(q, -1.9333498328128123, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5751212811573307, 5);
  sqcRYGate(q, -1.5893591375456468, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.11881425731206807, 5);
  sqcRYGate(q, 2.079422129235793, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5942913979966031, 6);
  sqcRYGate(q, -1.5688821230200887, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.020888748456869, 6);
  sqcRYGate(q, -0.6929429499560397, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.570042175606492, 7);
  sqcRYGate(q, 1.5731752390599292, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -0.8200984174030388, 7);
  sqcRYGate(q, 0.9490333964801856, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 3.126147394733642, 8);
  sqcRYGate(q, -1.5650947857313255, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.38174121147028556, 8);
  sqcRYGate(q, 3.140197491907036, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.5798616170721675, 9);
  sqcRYGate(q, 2.7413000886119585, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -3.141045681512192, 9);
  sqcRYGate(q, 2.067597105617988, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 2.7420390198544067, 10);
  sqcRYGate(q, -1.5727478168641262, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.3750629361139213, 10);
  sqcRYGate(q, 1.5084884306056567, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.195221684717369, 11);
  sqcRYGate(q, -1.5694614438473655, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.9704186229422669, 11);
  sqcRYGate(q, -3.135864076143028, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5685960058562425, 12);
  sqcRYGate(q, -1.5687011956350398, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.0242814752787919, 12);
  sqcRYGate(q, -2.022815021901942, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.9818937466684758, 13);
  sqcRYGate(q, 1.5702422025843514, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.4249955707174058, 13);
  sqcRYGate(q, -0.01625354533708201, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5729677724451943, 14);
  sqcRYGate(q, -1.5802318769384376, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.7153556961337681, 14);
  sqcRYGate(q, -1.9083400943785556, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.690298533563923, 15);
  sqcRYGate(q, -1.5649778427571457, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 0.7107164455499236, 15);
  sqcRYGate(q, 3.1241157730109608, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.7773233693928208, 16);
  sqcRYGate(q, 0.25453604222639437, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -2.076945337337185, 16);
  sqcRYGate(q, -0.003717662206935995, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5694243874879996, 17);
  sqcRYGate(q, 2.9214715253815937, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -0.01539532855431903, 17);
  sqcRYGate(q, -1.0086161785109489, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, -2.942628721334483, 18);
  sqcRYGate(q, 2.848458260485181, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.7054410538419043, 18);
  sqcRYGate(q, -0.6675867758316141, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.3975321840080523, 0);
  sqcRYGate(q, 2.7217961854702626, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9871719218095213, 0);
  sqcRYGate(q, -1.3877347005093128, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1006543205316484, 1);
  sqcRYGate(q, -1.6718980510467158, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.07426616627715532, 1);
  sqcRYGate(q, -3.0903031175845515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5198911467544, 2);
  sqcRYGate(q, -0.6178714506624513, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0066720582530423655, 2);
  sqcRYGate(q, 1.1607828452453441, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.525686079900517, 3);
  sqcRYGate(q, 1.5691904852020402, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.947778857796679, 3);
  sqcRYGate(q, -0.8915516793801572, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5650939575273588, 4);
  sqcRYGate(q, -1.5701856165835615, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0498443368381603, 4);
  sqcRYGate(q, -2.1481812674906546, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5721522957880776, 5);
  sqcRYGate(q, -1.5689768647311582, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8795953644674803, 5);
  sqcRYGate(q, -2.635811491661283, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.5824788095064117, 6);
  sqcRYGate(q, -1.5711518863084466, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4913886065127988, 6);
  sqcRYGate(q, 0.35035776183318995, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.5703583504119702, 7);
  sqcRYGate(q, 3.129575187055714, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, -2.1854451985265477, 7);
  sqcRYGate(q, 2.3656405075567286, 8);
  sqcCXGate(q, 7, 8);
  sqcRYGate(q, 1.5740714762051655, 8);
  sqcRYGate(q, 1.565432909551821, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -1.434435322158734, 8);
  sqcRYGate(q, -1.6233296907557715, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.5714453173955238, 9);
  sqcRYGate(q, -1.5700604651999805, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, -1.733337455988996, 9);
  sqcRYGate(q, -1.980127742285967, 10);
  sqcCXGate(q, 9, 10);
  sqcRYGate(q, 0.15097000871415012, 10);
  sqcRYGate(q, -2.203858944108017, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.3361097330951726, 10);
  sqcRYGate(q, -0.006228657159795148, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.607430342132653, 11);
  sqcRYGate(q, -1.5764517847472588, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, -1.9878709587985979, 11);
  sqcRYGate(q, 2.9839505699174436, 12);
  sqcCXGate(q, 11, 12);
  sqcRYGate(q, 1.5652400552708576, 12);
  sqcRYGate(q, -1.1605088864311972, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, -1.9493627817844823, 12);
  sqcRYGate(q, 1.5199689583340896, 13);
  sqcCXGate(q, 12, 13);
  sqcRYGate(q, 1.5712123013806876, 13);
  sqcRYGate(q, -1.571938291430588, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.6323706680185897, 13);
  sqcRYGate(q, -1.4895473912958455, 14);
  sqcCXGate(q, 13, 14);
  sqcRYGate(q, 1.5760430219222645, 14);
  sqcRYGate(q, 1.4535409710736658, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, 1.1000605577420597, 14);
  sqcRYGate(q, -2.3023165129014505, 15);
  sqcCXGate(q, 14, 15);
  sqcRYGate(q, -1.5720728498705494, 15);
  sqcRYGate(q, 2.773296898419505, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, -2.488179367200208, 15);
  sqcRYGate(q, 0.9422991175841213, 16);
  sqcCXGate(q, 15, 16);
  sqcRYGate(q, 1.5597913975734403, 16);
  sqcRYGate(q, 1.5756959012182206, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, -0.962584431229824, 16);
  sqcRYGate(q, -2.63880447299678, 17);
  sqcCXGate(q, 16, 17);
  sqcRYGate(q, 1.5278099012098454, 17);
  sqcRYGate(q, 0.6726347125822366, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 0.04637348742712967, 17);
  sqcRYGate(q, 2.6859148557297208, 18);
  sqcCXGate(q, 17, 18);
  sqcRYGate(q, 2.498777119942069, 18);
  sqcRYGate(q, 0.1514632295877506, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, 2.132440457523873, 18);
  sqcRYGate(q, 1.833641891670248, 19);
  sqcCXGate(q, 18, 19);
  sqcRYGate(q, -1.7237763090873177, 0);
  sqcRYGate(q, 1.7666726880216026, 1);
  sqcRYGate(q, -1.5685506698569742, 2);
  sqcRYGate(q, -1.5690150140960952, 3);
  sqcRYGate(q, 1.5652650493782012, 4);
  sqcRYGate(q, 1.575241295252765, 5);
  sqcRYGate(q, -1.5601886323618053, 6);
  sqcRYGate(q, 1.5782605857384915, 7);
  sqcRYGate(q, -1.5726191323967846, 8);
  sqcRYGate(q, -1.5722016547503532, 9);
  sqcRYGate(q, -0.1567631781972875, 10);
  sqcRYGate(q, 1.5429821480248636, 11);
  sqcRYGate(q, 1.5711858964184569, 12);
  sqcRYGate(q, -1.5710055341860818, 13);
  sqcRYGate(q, -1.5710093589062888, 14);
  sqcRYGate(q, 1.5681367006593543, 15);
  sqcRYGate(q, -1.5828632183723201, 16);
  sqcRYGate(q, -1.6148693222248438, 17);
  sqcRYGate(q, 1.584073852975707, 18);
  sqcRYGate(q, 1.7277663099988798, 19);

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
