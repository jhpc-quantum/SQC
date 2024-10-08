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

  sqcRYGate(q, 1.261617528018846, 0);
  sqcRZGate(q, 0.6851691151257029, 0);
  sqcRYGate(q, -2.970211114931003, 1);
  sqcRZGate(q, -1.1296108856251283, 1);
  sqcRYGate(q, 3.0084389796020456, 2);
  sqcRZGate(q, 2.818084146250801, 2);
  sqcRYGate(q, 0.5526827001154473, 3);
  sqcRZGate(q, 1.1229459198847482, 3);
  sqcRYGate(q, -3.0180271952865785, 4);
  sqcRZGate(q, 1.3866098215759717, 4);
  sqcRYGate(q, -1.1954057216163003, 5);
  sqcRZGate(q, -1.0714942916200625, 5);
  sqcRYGate(q, 0.50843672844448, 6);
  sqcRZGate(q, -0.10266529355563137, 6);
  sqcRYGate(q, 1.549363291096065, 7);
  sqcRZGate(q, -0.77590238621492, 7);
  sqcRYGate(q, -2.0585256289683835, 8);
  sqcRZGate(q, -3.1096623238261896, 8);
  sqcRYGate(q, 1.5889488366876483, 9);
  sqcRZGate(q, -0.023242180301925264, 9);
  sqcRYGate(q, -1.602831201843939, 10);
  sqcRZGate(q, 0.16817262948022813, 10);
  sqcRYGate(q, -1.4547918284457788, 11);
  sqcRZGate(q, 0.03645122138518798, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.0371854843346244, 0);
  sqcRZGate(q, 2.425506527492613, 0);
  sqcRYGate(q, -0.07488755773561451, 1);
  sqcRZGate(q, 2.631796741960578, 1);
  sqcRYGate(q, 3.1177192261399154, 2);
  sqcRZGate(q, -3.006692378149322, 2);
  sqcRYGate(q, -0.980866320794119, 3);
  sqcRZGate(q, -2.8338581899101993, 3);
  sqcRYGate(q, -2.6811579549030666, 4);
  sqcRZGate(q, 0.27506800611976706, 4);
  sqcRYGate(q, -2.444480799821987, 5);
  sqcRZGate(q, -2.9816587479206693, 5);
  sqcRYGate(q, -1.62880311867917, 6);
  sqcRZGate(q, -0.7295633026256435, 6);
  sqcRYGate(q, -0.08676879701379225, 7);
  sqcRZGate(q, 2.4946765808273383, 7);
  sqcRYGate(q, -1.207141093717996, 8);
  sqcRZGate(q, -2.1852885215039324, 8);
  sqcRYGate(q, -3.0675165131373836, 9);
  sqcRZGate(q, -0.11233661746896574, 9);
  sqcRYGate(q, -3.083449130302937, 10);
  sqcRZGate(q, 2.9149930483104303, 10);
  sqcRYGate(q, -1.2269405515210803, 11);
  sqcRZGate(q, 0.23041009585254457, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.44077116575213277, 0);
  sqcRZGate(q, 1.5226144176740766, 0);
  sqcRYGate(q, -0.7044857137214402, 1);
  sqcRZGate(q, 0.5741876638039648, 1);
  sqcRYGate(q, -1.626575903135497, 2);
  sqcRZGate(q, 1.7803934778059167, 2);
  sqcRYGate(q, -3.0526094058536253, 3);
  sqcRZGate(q, 2.787117715084974, 3);
  sqcRYGate(q, -0.02660788523669133, 4);
  sqcRZGate(q, 2.7484569179621556, 4);
  sqcRYGate(q, -0.003932116229339299, 5);
  sqcRZGate(q, 0.40359404272942706, 5);
  sqcRYGate(q, 1.5755671144035746, 6);
  sqcRZGate(q, 0.09629969948464812, 6);
  sqcRYGate(q, 1.1564127801066384, 7);
  sqcRZGate(q, -0.01221306760227492, 7);
  sqcRYGate(q, 1.2196053418054147, 8);
  sqcRZGate(q, 2.2997417610893223, 8);
  sqcRYGate(q, 0.05171250754102541, 9);
  sqcRZGate(q, 1.6196486460832507, 9);
  sqcRYGate(q, 1.5653317677324514, 10);
  sqcRZGate(q, 0.08634027987315385, 10);
  sqcRYGate(q, -1.6102853646305482, 11);
  sqcRZGate(q, 2.040686631531613, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.316284557184498, 0);
  sqcRZGate(q, 2.414707942013223, 0);
  sqcRYGate(q, 1.4410760891295586, 1);
  sqcRZGate(q, -0.02339060389605674, 1);
  sqcRYGate(q, 0.014643706560356408, 2);
  sqcRZGate(q, 1.3710939411150265, 2);
  sqcRYGate(q, -1.6209064654008483, 3);
  sqcRZGate(q, 0.4686307816197983, 3);
  sqcRYGate(q, -2.9673786273925495, 4);
  sqcRZGate(q, 1.6930510962503411, 4);
  sqcRYGate(q, -1.6820384985426902, 5);
  sqcRZGate(q, -2.7563637860736447, 5);
  sqcRYGate(q, 2.4031694448160907, 6);
  sqcRZGate(q, -3.0896569086754044, 6);
  sqcRYGate(q, 3.092764978133462, 7);
  sqcRZGate(q, -3.0351061481337083, 7);
  sqcRYGate(q, 0.9211487195442095, 8);
  sqcRZGate(q, -1.5720411921430126, 8);
  sqcRYGate(q, -3.0873176342708426, 9);
  sqcRZGate(q, -3.0093371160209004, 9);
  sqcRYGate(q, 3.0730829713029464, 10);
  sqcRZGate(q, -2.6280173789515704, 10);
  sqcRYGate(q, 1.4798007011961065, 11);
  sqcRZGate(q, 1.5083930060712527, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 3.1395688384711153, 0);
  sqcRZGate(q, 2.901354158327363, 0);
  sqcRYGate(q, 0.2613288967497791, 1);
  sqcRZGate(q, 0.016057319737111442, 1);
  sqcRYGate(q, -1.7520725775068824, 2);
  sqcRZGate(q, 0.02075208415255503, 2);
  sqcRYGate(q, -0.027216972969239247, 3);
  sqcRZGate(q, -0.40696634353717887, 3);
  sqcRYGate(q, -1.5774539711356754, 4);
  sqcRZGate(q, -0.002578703069286092, 4);
  sqcRYGate(q, 3.103651842105359, 5);
  sqcRZGate(q, 0.15096573232963104, 5);
  sqcRYGate(q, -0.5508186950586439, 6);
  sqcRZGate(q, 0.553752847088398, 6);
  sqcRYGate(q, 0.16679497904593354, 7);
  sqcRZGate(q, 3.010000415316187, 7);
  sqcRYGate(q, 0.9801805070709039, 8);
  sqcRZGate(q, -1.768472325883946, 8);
  sqcRYGate(q, -3.076921255599903, 9);
  sqcRZGate(q, 0.13044478590355893, 9);
  sqcRYGate(q, 2.116960055761167, 10);
  sqcRZGate(q, -2.4043635171542252, 10);
  sqcRYGate(q, 1.4809536691386915, 11);
  sqcRZGate(q, -2.8810199164622317, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.5817388683282423, 0);
  sqcRZGate(q, -0.3833268072189318, 0);
  sqcRYGate(q, -0.8820781308559198, 1);
  sqcRZGate(q, 2.170875905125129, 1);
  sqcRYGate(q, -1.7189137823189995, 2);
  sqcRZGate(q, 1.748092601770496, 2);
  sqcRYGate(q, 0.604277802060806, 3);
  sqcRZGate(q, -1.0107357054212047, 3);
  sqcRYGate(q, -0.21365647408840704, 4);
  sqcRZGate(q, 0.004395944377554696, 4);
  sqcRYGate(q, -1.177665228831099, 5);
  sqcRZGate(q, 3.14117638846349, 5);
  sqcRYGate(q, 2.2672636473833383, 6);
  sqcRZGate(q, -2.7596770845086467, 6);
  sqcRYGate(q, 0.8058550037437961, 7);
  sqcRZGate(q, -1.8563898535514203, 7);
  sqcRYGate(q, -0.6558280299055399, 8);
  sqcRZGate(q, 2.1235746146542827, 8);
  sqcRYGate(q, -1.6185931091295171, 9);
  sqcRZGate(q, 3.016418182042337, 9);
  sqcRYGate(q, -0.20883919991356503, 10);
  sqcRZGate(q, -1.3812948838053938, 10);
  sqcRYGate(q, 1.8563501579096044, 11);
  sqcRZGate(q, -1.7619112418978036, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.940157770910834, 0);
  sqcRZGate(q, -0.9736639494009873, 0);
  sqcRYGate(q, -0.2825148611098491, 1);
  sqcRZGate(q, -1.235984886218798, 1);
  sqcRYGate(q, 1.5110576021106987, 2);
  sqcRZGate(q, 1.564797164406636, 2);
  sqcRYGate(q, 3.139439400851871, 3);
  sqcRZGate(q, -0.9829806246911789, 3);
  sqcRYGate(q, -1.573987624056477, 4);
  sqcRZGate(q, 1.6176229555397834, 4);
  sqcRYGate(q, 1.5948030612245665, 5);
  sqcRZGate(q, -3.141246913238257, 5);
  sqcRYGate(q, 1.659978722013026, 6);
  sqcRZGate(q, 1.021581037944939, 6);
  sqcRYGate(q, 0.029881924292015864, 7);
  sqcRZGate(q, 1.868881480068402, 7);
  sqcRYGate(q, -1.6726204571189809, 8);
  sqcRZGate(q, -1.6535431246694035, 8);
  sqcRYGate(q, 0.3281362585414682, 9);
  sqcRZGate(q, -2.0974223284457874, 9);
  sqcRYGate(q, -2.7112788722704897, 10);
  sqcRZGate(q, -1.49527064649305, 10);
  sqcRYGate(q, 0.19050115231244288, 11);
  sqcRZGate(q, 2.227443876263758, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 0.9550297980127168, 0);
  sqcRZGate(q, -2.1141055417619397, 0);
  sqcRYGate(q, -0.01590688529778994, 1);
  sqcRZGate(q, 2.1522011147534936, 1);
  sqcRYGate(q, 1.5938736192126024, 2);
  sqcRZGate(q, 0.06342242370324273, 2);
  sqcRYGate(q, 2.5264999185052885, 3);
  sqcRZGate(q, -1.5382969987028705, 3);
  sqcRYGate(q, -1.6698843439061237, 4);
  sqcRZGate(q, 0.46265647259075676, 4);
  sqcRYGate(q, 1.6220875400491224, 5);
  sqcRZGate(q, -0.3882947685003995, 5);
  sqcRYGate(q, -3.1355116781457575, 6);
  sqcRZGate(q, 1.029048347507086, 6);
  sqcRYGate(q, -0.6037770931445721, 7);
  sqcRZGate(q, 0.0017620341733382006, 7);
  sqcRYGate(q, -3.136089498273095, 8);
  sqcRZGate(q, 1.487433676358741, 8);
  sqcRYGate(q, 0.0023396723669313435, 9);
  sqcRZGate(q, 1.7093602943811748, 9);
  sqcRYGate(q, -2.871102412763814, 10);
  sqcRZGate(q, -1.875429466247778, 10);
  sqcRYGate(q, 0.08297732128606772, 11);
  sqcRZGate(q, -0.3247704111288141, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.6862807193119809, 0);
  sqcRZGate(q, 1.6354382796664553, 0);
  sqcRYGate(q, -1.6334909964676465, 1);
  sqcRZGate(q, 1.6090803280664887, 1);
  sqcRYGate(q, 0.22126532026421764, 2);
  sqcRZGate(q, 1.4937836460255705, 2);
  sqcRYGate(q, 3.07053159078426, 3);
  sqcRZGate(q, -1.5621083621777931, 3);
  sqcRYGate(q, -3.1243547403865928, 4);
  sqcRZGate(q, -2.0523021445507648, 4);
  sqcRYGate(q, -3.1349869436934727, 5);
  sqcRZGate(q, -0.3883946143727881, 5);
  sqcRYGate(q, 1.57304081852232, 6);
  sqcRZGate(q, -3.132408402359028, 6);
  sqcRYGate(q, 2.459966575753497, 7);
  sqcRZGate(q, -1.5734942382440886, 7);
  sqcRYGate(q, 1.5632429271249446, 8);
  sqcRZGate(q, 0.7299674350886052, 8);
  sqcRYGate(q, -0.06498882810409068, 9);
  sqcRZGate(q, 0.5132036030694858, 9);
  sqcRYGate(q, 1.180031995197729, 10);
  sqcRZGate(q, 2.3611074281067737, 10);
  sqcRYGate(q, -1.3685944634795657, 11);
  sqcRZGate(q, -0.18102685504336513, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.5698085488336342, 0);
  sqcRZGate(q, 3.0111945165600433, 0);
  sqcRYGate(q, -3.1381036246618503, 1);
  sqcRZGate(q, 2.019642930527965, 1);
  sqcRYGate(q, 1.579345689713733, 2);
  sqcRZGate(q, -0.03728670366557729, 2);
  sqcRYGate(q, -1.5551000280006169, 3);
  sqcRZGate(q, -1.5875849341926531, 3);
  sqcRYGate(q, -1.6266065495137907, 4);
  sqcRZGate(q, -3.047877112747344, 4);
  sqcRYGate(q, 1.6986795040822027, 5);
  sqcRZGate(q, -1.5714644253940717, 5);
  sqcRYGate(q, -1.5986937428505401, 6);
  sqcRZGate(q, -1.579746342355315, 6);
  sqcRYGate(q, 3.1414610036573904, 7);
  sqcRZGate(q, 3.135237846342698, 7);
  sqcRYGate(q, -0.01696823782332604, 8);
  sqcRZGate(q, 0.828590986196801, 8);
  sqcRYGate(q, -1.6080148308109896, 9);
  sqcRZGate(q, -1.5710682818704989, 9);
  sqcRYGate(q, -1.5821387769913746, 10);
  sqcRZGate(q, -1.5171604854706835, 10);
  sqcRYGate(q, -1.5323557822342067, 11);
  sqcRZGate(q, 1.5693235990273333, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 2.869426467751727, 0);
  sqcRZGate(q, -2.268730976849624, 0);
  sqcRYGate(q, 0.0008494036632441718, 1);
  sqcRZGate(q, -2.5352293937819383, 1);
  sqcRYGate(q, -1.5795895678389407, 2);
  sqcRZGate(q, 2.0808617529469915, 2);
  sqcRYGate(q, 1.5721070529200716, 3);
  sqcRZGate(q, -2.1322669868339394, 3);
  sqcRYGate(q, -1.5706399209261643, 4);
  sqcRZGate(q, 2.5486940156938873, 4);
  sqcRYGate(q, 1.5693562441925186, 5);
  sqcRZGate(q, -0.5430980864241173, 5);
  sqcRYGate(q, 1.5659996735711712, 6);
  sqcRZGate(q, 2.6180036218884086, 6);
  sqcRYGate(q, -1.5707680072799048, 7);
  sqcRZGate(q, 1.0237200730640001, 7);
  sqcRYGate(q, -1.560830657693308, 8);
  sqcRZGate(q, -1.3925692835375953, 8);
  sqcRYGate(q, -1.5731133414857874, 9);
  sqcRZGate(q, -2.0881794267556293, 9);
  sqcRYGate(q, -1.5779714262066165, 10);
  sqcRZGate(q, 1.0695339899056169, 10);
  sqcRYGate(q, 1.5394665274411339, 11);
  sqcRZGate(q, -0.7034656153469013, 11);

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
