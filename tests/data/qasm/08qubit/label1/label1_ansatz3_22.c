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

  sqcRYGate(q, -1.9086819471017844, 0);
  sqcRZGate(q, 0.31043698727726315, 0);
  sqcRYGate(q, 2.109142009197729, 1);
  sqcRZGate(q, -1.010025257897639, 1);
  sqcRYGate(q, -1.9609160764588394, 2);
  sqcRZGate(q, -2.2891488164073746, 2);
  sqcRYGate(q, -0.9718545767486068, 3);
  sqcRZGate(q, -1.5451147918545232, 3);
  sqcRYGate(q, 1.5997252873169856, 4);
  sqcRZGate(q, -1.1323226125980073, 4);
  sqcRYGate(q, 2.5508560140324215, 5);
  sqcRZGate(q, -0.9186333808845685, 5);
  sqcRYGate(q, -0.33034151482998464, 6);
  sqcRZGate(q, -1.9481307614803889, 6);
  sqcRYGate(q, -2.109601711119267, 7);
  sqcRZGate(q, 0.060853338750602504, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.560304585408157, 0);
  sqcRZGate(q, 2.555366275359525, 0);
  sqcRYGate(q, 1.5478432430359748, 1);
  sqcRZGate(q, -0.4184849521165254, 1);
  sqcRYGate(q, 2.082123028816444, 2);
  sqcRZGate(q, -1.8358581258313826, 2);
  sqcRYGate(q, 1.949931339751386, 3);
  sqcRZGate(q, 0.7437080927343279, 3);
  sqcRYGate(q, -2.4889930788929475, 4);
  sqcRZGate(q, 0.5671294750226571, 4);
  sqcRYGate(q, 2.8017068222485717, 5);
  sqcRZGate(q, -1.2344111880963222, 5);
  sqcRYGate(q, 0.8332700314339903, 6);
  sqcRZGate(q, -0.8270227170052452, 6);
  sqcRYGate(q, -0.9443530124962143, 7);
  sqcRZGate(q, -2.3847465888380324, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.5062274472916135, 0);
  sqcRZGate(q, -3.0434705422999153, 0);
  sqcRYGate(q, -0.8172404988282098, 1);
  sqcRZGate(q, 1.7181976110452917, 1);
  sqcRYGate(q, -0.42474180276706236, 2);
  sqcRZGate(q, 2.00440207134894, 2);
  sqcRYGate(q, 1.2291756804066363, 3);
  sqcRZGate(q, 2.582015432370045, 3);
  sqcRYGate(q, -3.029699647405227, 4);
  sqcRZGate(q, -2.463791590630169, 4);
  sqcRYGate(q, 0.18945273107896377, 5);
  sqcRZGate(q, 2.969066465117285, 5);
  sqcRYGate(q, 1.6903557023224556, 6);
  sqcRZGate(q, 0.24696344458331065, 6);
  sqcRYGate(q, 0.8274002883478015, 7);
  sqcRZGate(q, -0.3999528191456099, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.6743424619473268, 0);
  sqcRZGate(q, 0.31089139466702037, 0);
  sqcRYGate(q, 1.052375336914461, 1);
  sqcRZGate(q, 0.6590642706200339, 1);
  sqcRYGate(q, -0.5040335048140555, 2);
  sqcRZGate(q, 1.077842051801513, 2);
  sqcRYGate(q, -0.5446596828756365, 3);
  sqcRZGate(q, -1.900651674937735, 3);
  sqcRYGate(q, -0.5001735937703582, 4);
  sqcRZGate(q, 0.1704947859723106, 4);
  sqcRYGate(q, -0.14159641365606868, 5);
  sqcRZGate(q, 0.013950775245748538, 5);
  sqcRYGate(q, -0.5168956340113855, 6);
  sqcRZGate(q, -1.5633089656625556, 6);
  sqcRYGate(q, 0.3977050162754985, 7);
  sqcRZGate(q, 1.4062897079788594, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.8864198583618672, 0);
  sqcRZGate(q, -2.329285600192052, 0);
  sqcRYGate(q, 2.064532543548358, 1);
  sqcRZGate(q, -2.4332443437844526, 1);
  sqcRYGate(q, -0.7733568622056755, 2);
  sqcRZGate(q, -0.5057859029552558, 2);
  sqcRYGate(q, 1.4182625160793556, 3);
  sqcRZGate(q, -1.0588392874332742, 3);
  sqcRYGate(q, -0.7339251433148464, 4);
  sqcRZGate(q, -2.782156530313315, 4);
  sqcRYGate(q, 2.1102178938719787, 5);
  sqcRZGate(q, -1.956050263091, 5);
  sqcRYGate(q, -2.5756095596430506, 6);
  sqcRZGate(q, 2.7347384224363185, 6);
  sqcRYGate(q, -1.5340912839876264, 7);
  sqcRZGate(q, 1.1437043101598725, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.7532965416905615, 0);
  sqcRZGate(q, -1.2481505816773293, 0);
  sqcRYGate(q, -0.09520662667650814, 1);
  sqcRZGate(q, 0.9945175855976627, 1);
  sqcRYGate(q, 0.763171972226124, 2);
  sqcRZGate(q, -2.8251423534885065, 2);
  sqcRYGate(q, -2.423196149917578, 3);
  sqcRZGate(q, 1.7588809128381553, 3);
  sqcRYGate(q, -0.39310691251777313, 4);
  sqcRZGate(q, 2.5512184422436612, 4);
  sqcRYGate(q, -0.8851890956565915, 5);
  sqcRZGate(q, -2.959056168026674, 5);
  sqcRYGate(q, -0.010547514929859503, 6);
  sqcRZGate(q, 2.7707645476935525, 6);
  sqcRYGate(q, -1.2218110578180321, 7);
  sqcRZGate(q, 1.374324275133014, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.8229118521844243, 0);
  sqcRZGate(q, -1.4302154940338856, 0);
  sqcRYGate(q, -2.2197201786830596, 1);
  sqcRZGate(q, -2.35856521333343, 1);
  sqcRYGate(q, 1.8884895296647604, 2);
  sqcRZGate(q, -1.2390771111274246, 2);
  sqcRYGate(q, -2.366349978606339, 3);
  sqcRZGate(q, 2.0915814493655964, 3);
  sqcRYGate(q, -2.1145251631809963, 4);
  sqcRZGate(q, -0.7424944174211445, 4);
  sqcRYGate(q, -2.2603429034161184, 5);
  sqcRZGate(q, -0.6347452748929365, 5);
  sqcRYGate(q, 0.32451027990691417, 6);
  sqcRZGate(q, -0.9505099262893149, 6);
  sqcRYGate(q, 1.1581443580235051, 7);
  sqcRZGate(q, 1.4713938671332993, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.3132208789007187, 0);
  sqcRZGate(q, 2.342581706031952, 0);
  sqcRYGate(q, 0.30750636942396753, 1);
  sqcRZGate(q, -1.3432503998918044, 1);
  sqcRYGate(q, -1.3053675743907895, 2);
  sqcRZGate(q, 2.8047658121678083, 2);
  sqcRYGate(q, 3.109178300948638, 3);
  sqcRZGate(q, -0.09769590864457899, 3);
  sqcRYGate(q, -1.4999650803537339, 4);
  sqcRZGate(q, 0.5247592039378656, 4);
  sqcRYGate(q, -0.42483144386683946, 5);
  sqcRZGate(q, -0.5882171489989902, 5);
  sqcRYGate(q, 2.111948257762858, 6);
  sqcRZGate(q, 0.9940655173409769, 6);
  sqcRYGate(q, -2.5057624043414677, 7);
  sqcRZGate(q, -0.8867768234817968, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.306604745479578, 0);
  sqcRZGate(q, 2.6530744710365237, 0);
  sqcRYGate(q, 1.0829582198031025, 1);
  sqcRZGate(q, -0.5701950668255612, 1);
  sqcRYGate(q, 2.368844266918131, 2);
  sqcRZGate(q, -1.1440366552613046, 2);
  sqcRYGate(q, -1.8609107267540044, 3);
  sqcRZGate(q, 1.4371157312959149, 3);
  sqcRYGate(q, 1.6704941293654771, 4);
  sqcRZGate(q, -2.209808675692253, 4);
  sqcRYGate(q, -1.978559659032065, 5);
  sqcRZGate(q, -1.379093077832082, 5);
  sqcRYGate(q, 0.3955576642340901, 6);
  sqcRZGate(q, 1.1287239925991983, 6);
  sqcRYGate(q, -0.574685101031616, 7);
  sqcRZGate(q, -2.937708521693161, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.25624853075234894, 0);
  sqcRZGate(q, -1.4507408091670069, 0);
  sqcRYGate(q, 0.47568718536376053, 1);
  sqcRZGate(q, 0.9820275797148845, 1);
  sqcRYGate(q, -1.8012024416547956, 2);
  sqcRZGate(q, -1.6934921178893374, 2);
  sqcRYGate(q, -2.8549381461739345, 3);
  sqcRZGate(q, -1.2033606802818593, 3);
  sqcRYGate(q, 2.3968925991079186, 4);
  sqcRZGate(q, 1.6413101520516997, 4);
  sqcRYGate(q, 2.285380612955142, 5);
  sqcRZGate(q, 1.9695861682699498, 5);
  sqcRYGate(q, 2.934230553330736, 6);
  sqcRZGate(q, -1.9155690389102327, 6);
  sqcRYGate(q, 1.4876645744161987, 7);
  sqcRZGate(q, 0.9507835312674189, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.0618480218608672, 0);
  sqcRZGate(q, 0.7982106932107903, 0);
  sqcRYGate(q, 0.9440558076244132, 1);
  sqcRZGate(q, 2.3144556034175636, 1);
  sqcRYGate(q, -1.044074004971102, 2);
  sqcRZGate(q, -2.298282757128125, 2);
  sqcRYGate(q, -1.0475040545405345, 3);
  sqcRZGate(q, 1.6113225815334746, 3);
  sqcRYGate(q, -1.4061516512733547, 4);
  sqcRZGate(q, -0.6804310214749147, 4);
  sqcRYGate(q, -2.4143431670831803, 5);
  sqcRZGate(q, 2.572875477473289, 5);
  sqcRYGate(q, -2.6689462987297112, 6);
  sqcRZGate(q, 2.3341776451631504, 6);
  sqcRYGate(q, -2.0180516628386798, 7);
  sqcRZGate(q, -1.547467532765716, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.9645658710140141, 0);
  sqcRZGate(q, 1.8265535515530988, 0);
  sqcRYGate(q, -1.1723166403526326, 1);
  sqcRZGate(q, -1.1267245492308458, 1);
  sqcRYGate(q, -1.1162785722472708, 2);
  sqcRZGate(q, -1.5619246962449607, 2);
  sqcRYGate(q, 0.5611935711945124, 3);
  sqcRZGate(q, 2.1772159056929965, 3);
  sqcRYGate(q, 0.9629637435587305, 4);
  sqcRZGate(q, -0.5821052896055994, 4);
  sqcRYGate(q, 0.5490693198044365, 5);
  sqcRZGate(q, 2.4720909221883915, 5);
  sqcRYGate(q, -0.40000753512808085, 6);
  sqcRZGate(q, -1.6301258887193724, 6);
  sqcRYGate(q, -0.7527306069234481, 7);
  sqcRZGate(q, -2.2511112847226054, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.5461240176760462, 0);
  sqcRZGate(q, 2.618783090883814, 0);
  sqcRYGate(q, -2.4314255792742965, 1);
  sqcRZGate(q, -0.4228626174872172, 1);
  sqcRYGate(q, 0.444987066725699, 2);
  sqcRZGate(q, 2.4058612470064054, 2);
  sqcRYGate(q, 1.6869147379839822, 3);
  sqcRZGate(q, 2.1852087403338363, 3);
  sqcRYGate(q, -1.672719142888858, 4);
  sqcRZGate(q, -2.72883394259412, 4);
  sqcRYGate(q, -1.775051111475637, 5);
  sqcRZGate(q, -0.2863306351462867, 5);
  sqcRYGate(q, 2.346174626902768, 6);
  sqcRZGate(q, 2.6773682832785872, 6);
  sqcRYGate(q, -0.7789131781505986, 7);
  sqcRZGate(q, -0.517477471746858, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.7271050561562173, 0);
  sqcRZGate(q, 0.3413736729331536, 0);
  sqcRYGate(q, -1.0184152682355831, 1);
  sqcRZGate(q, -0.8870391848191892, 1);
  sqcRYGate(q, -1.916251084266034, 2);
  sqcRZGate(q, -2.2827179213123294, 2);
  sqcRYGate(q, 2.716043162115822, 3);
  sqcRZGate(q, 0.8116460285113921, 3);
  sqcRYGate(q, 2.9128436920911773, 4);
  sqcRZGate(q, 1.1607578130619416, 4);
  sqcRYGate(q, 0.6090100613949065, 5);
  sqcRZGate(q, 1.5049514020206503, 5);
  sqcRYGate(q, -0.22297751528596013, 6);
  sqcRZGate(q, 1.8113579206578863, 6);
  sqcRYGate(q, 2.7027796050181627, 7);
  sqcRZGate(q, 0.12533661284332726, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.8379746958344896, 0);
  sqcRZGate(q, -1.381696652184824, 0);
  sqcRYGate(q, 0.5332110044651962, 1);
  sqcRZGate(q, 2.925728359905692, 1);
  sqcRYGate(q, 0.39973415508173016, 2);
  sqcRZGate(q, 0.04690971291664073, 2);
  sqcRYGate(q, -2.1937182544613343, 3);
  sqcRZGate(q, 2.1082421120089254, 3);
  sqcRYGate(q, 1.2907143398454985, 4);
  sqcRZGate(q, -2.9284731975213085, 4);
  sqcRYGate(q, 0.5853465769543824, 5);
  sqcRZGate(q, 0.3656008035743045, 5);
  sqcRYGate(q, 1.7685669381156341, 6);
  sqcRZGate(q, -0.21132782194517322, 6);
  sqcRYGate(q, 2.3971013600766646, 7);
  sqcRZGate(q, -1.3107181470818576, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.36614357964082583, 0);
  sqcRZGate(q, 0.24434671548030806, 0);
  sqcRYGate(q, -1.656845608321618, 1);
  sqcRZGate(q, 0.17005955077175194, 1);
  sqcRYGate(q, -1.8213737748457035, 2);
  sqcRZGate(q, -1.3305579198992614, 2);
  sqcRYGate(q, 2.8239096972242934, 3);
  sqcRZGate(q, -0.21712064016493834, 3);
  sqcRYGate(q, 0.4538571378175101, 4);
  sqcRZGate(q, 2.2675666120285243, 4);
  sqcRYGate(q, -2.4013773126648643, 5);
  sqcRZGate(q, 0.7198096739605325, 5);
  sqcRYGate(q, 0.8144817572262104, 6);
  sqcRZGate(q, -2.6318615556928466, 6);
  sqcRYGate(q, -1.0639248791212204, 7);
  sqcRZGate(q, -1.6462682177294379, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.41550092420653617, 0);
  sqcRZGate(q, 0.2719112405389286, 0);
  sqcRYGate(q, 2.5165594061555634, 1);
  sqcRZGate(q, 0.011146278141245197, 1);
  sqcRYGate(q, 2.9550686438068268, 2);
  sqcRZGate(q, -0.498020471416888, 2);
  sqcRYGate(q, -1.306316723803702, 3);
  sqcRZGate(q, 0.3175310835541058, 3);
  sqcRYGate(q, 1.5225408128196118, 4);
  sqcRZGate(q, -2.2734738320425887, 4);
  sqcRYGate(q, -0.5530378493119286, 5);
  sqcRZGate(q, -2.4447749240905927, 5);
  sqcRYGate(q, 1.3548301247306178, 6);
  sqcRZGate(q, -0.030058638460951602, 6);
  sqcRYGate(q, -2.0537371483347577, 7);
  sqcRZGate(q, -1.7985821320412672, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.4003445083449755, 0);
  sqcRZGate(q, -1.3768961225372565, 0);
  sqcRYGate(q, 1.8817018214843246, 1);
  sqcRZGate(q, -0.06315984674603392, 1);
  sqcRYGate(q, 0.8004342772074438, 2);
  sqcRZGate(q, -0.8126575168319023, 2);
  sqcRYGate(q, 0.272283513159878, 3);
  sqcRZGate(q, 1.908639439300852, 3);
  sqcRYGate(q, -0.854713180005709, 4);
  sqcRZGate(q, 2.97162477246524, 4);
  sqcRYGate(q, -0.8171133997610215, 5);
  sqcRZGate(q, 2.0101529398602986, 5);
  sqcRYGate(q, -2.7857917358317072, 6);
  sqcRZGate(q, -1.062339186780858, 6);
  sqcRYGate(q, 2.1091430591261844, 7);
  sqcRZGate(q, -1.3848681212977532, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.4126586870387104, 0);
  sqcRZGate(q, -2.142860592466765, 0);
  sqcRYGate(q, -1.9732812357015286, 1);
  sqcRZGate(q, 2.055009296889179, 1);
  sqcRYGate(q, -2.464672114025286, 2);
  sqcRZGate(q, 0.84800424470858, 2);
  sqcRYGate(q, -2.1715729593537976, 3);
  sqcRZGate(q, 1.8551389941004044, 3);
  sqcRYGate(q, 2.1529717465330505, 4);
  sqcRZGate(q, -0.26027008248961003, 4);
  sqcRYGate(q, -1.8442467668563474, 5);
  sqcRZGate(q, 1.619495462509222, 5);
  sqcRYGate(q, 2.1191769010300936, 6);
  sqcRZGate(q, 2.686371466187771, 6);
  sqcRYGate(q, -2.008176044854979, 7);
  sqcRZGate(q, 2.271544475885296, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.3586288677965772, 0);
  sqcRZGate(q, -0.8075718255850964, 0);
  sqcRYGate(q, 2.2101486601170706, 1);
  sqcRZGate(q, -1.4154679044415905, 1);
  sqcRYGate(q, 1.7074528823389232, 2);
  sqcRZGate(q, -1.2871245595685794, 2);
  sqcRYGate(q, -2.0673972798778326, 3);
  sqcRZGate(q, 0.43854493595055183, 3);
  sqcRYGate(q, -2.097487072495019, 4);
  sqcRZGate(q, -0.9251053206772797, 4);
  sqcRYGate(q, 2.7692718715734186, 5);
  sqcRZGate(q, -2.2291998539862488, 5);
  sqcRYGate(q, 2.547359471752061, 6);
  sqcRZGate(q, -1.9775692309345938, 6);
  sqcRYGate(q, -2.414364470825718, 7);
  sqcRZGate(q, 2.835771424928345, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.9216958301615472, 0);
  sqcRZGate(q, -0.5579551930557659, 0);
  sqcRYGate(q, 2.4804258093912432, 1);
  sqcRZGate(q, 2.6316043207325026, 1);
  sqcRYGate(q, -2.392489836194526, 2);
  sqcRZGate(q, 2.6878695281015896, 2);
  sqcRYGate(q, 1.0076467017929227, 3);
  sqcRZGate(q, -0.6829392957408068, 3);
  sqcRYGate(q, 2.5372328592686517, 4);
  sqcRZGate(q, 1.9125557081090019, 4);
  sqcRYGate(q, -0.554937564812688, 5);
  sqcRZGate(q, 2.167693628102173, 5);
  sqcRYGate(q, 1.3694017267786949, 6);
  sqcRZGate(q, -2.555379538752457, 6);
  sqcRYGate(q, 1.6946283057735945, 7);
  sqcRZGate(q, -0.3928272935047135, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.725243593491957, 0);
  sqcRZGate(q, 0.5699953643939288, 0);
  sqcRYGate(q, 1.7398347288162714, 1);
  sqcRZGate(q, 2.0556800812065568, 1);
  sqcRYGate(q, -2.549224220703141, 2);
  sqcRZGate(q, -2.142793138577853, 2);
  sqcRYGate(q, 1.2240593213756077, 3);
  sqcRZGate(q, -0.7439744507878894, 3);
  sqcRYGate(q, -0.40463581433820217, 4);
  sqcRZGate(q, 1.007539353320735, 4);
  sqcRYGate(q, 2.7030513272159484, 5);
  sqcRZGate(q, 0.8299016118286154, 5);
  sqcRYGate(q, -2.65697018481152, 6);
  sqcRZGate(q, -2.2367787913691095, 6);
  sqcRYGate(q, 1.6793146641942833, 7);
  sqcRZGate(q, -0.5120037702954449, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.9334316414883874, 0);
  sqcRZGate(q, -1.7609705717967885, 0);
  sqcRYGate(q, -2.686367402503175, 1);
  sqcRZGate(q, 1.8962448293501049, 1);
  sqcRYGate(q, -0.45375489060467267, 2);
  sqcRZGate(q, 1.639948207136488, 2);
  sqcRYGate(q, 0.1027539813647822, 3);
  sqcRZGate(q, -0.274337905946032, 3);
  sqcRYGate(q, -0.1911852106148535, 4);
  sqcRZGate(q, 0.45368880615658486, 4);
  sqcRYGate(q, -2.1681931906786893, 5);
  sqcRZGate(q, 1.6449690614803303, 5);
  sqcRYGate(q, 2.3247092886952374, 6);
  sqcRZGate(q, -2.540006895857908, 6);
  sqcRYGate(q, -1.1687179327587103, 7);
  sqcRZGate(q, -1.124245763047317, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.4194179935055766, 0);
  sqcRZGate(q, -0.6836869933524646, 0);
  sqcRYGate(q, 1.4244553797429829, 1);
  sqcRZGate(q, 3.05744416272024, 1);
  sqcRYGate(q, 1.9566209985483232, 2);
  sqcRZGate(q, 0.3759758283033117, 2);
  sqcRYGate(q, -1.8306571589489318, 3);
  sqcRZGate(q, 2.968146357386407, 3);
  sqcRYGate(q, -1.2686911927899533, 4);
  sqcRZGate(q, 1.4793860609726583, 4);
  sqcRYGate(q, -0.6060595037204708, 5);
  sqcRZGate(q, 2.8119107759498325, 5);
  sqcRYGate(q, 0.629129658773918, 6);
  sqcRZGate(q, -1.373148049512848, 6);
  sqcRYGate(q, 2.299972782645715, 7);
  sqcRZGate(q, -1.7546101850534441, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.6384794928138797, 0);
  sqcRZGate(q, 0.49860926983142523, 0);
  sqcRYGate(q, -2.738125023219426, 1);
  sqcRZGate(q, 1.102615456383269, 1);
  sqcRYGate(q, 2.384279653482626, 2);
  sqcRZGate(q, 0.8907328910257853, 2);
  sqcRYGate(q, 1.1644021566956386, 3);
  sqcRZGate(q, 3.1068241162941463, 3);
  sqcRYGate(q, 0.18956196604648112, 4);
  sqcRZGate(q, 2.9619951281984154, 4);
  sqcRYGate(q, 2.5727326268087864, 5);
  sqcRZGate(q, -1.975262062874994, 5);
  sqcRYGate(q, -2.528915458058913, 6);
  sqcRZGate(q, 2.851828924715528, 6);
  sqcRYGate(q, -2.503847529994461, 7);
  sqcRZGate(q, -3.0112638258044893, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 3.024955493153768, 0);
  sqcRZGate(q, -0.6602272755207936, 0);
  sqcRYGate(q, 0.895139137183265, 1);
  sqcRZGate(q, 2.5898262618419294, 1);
  sqcRYGate(q, -1.9999015003182343, 2);
  sqcRZGate(q, 0.47647077666759147, 2);
  sqcRYGate(q, 2.8042631122652493, 3);
  sqcRZGate(q, -0.05354192222325605, 3);
  sqcRYGate(q, -2.253572636682688, 4);
  sqcRZGate(q, -2.598379928092146, 4);
  sqcRYGate(q, -2.60858102114639, 5);
  sqcRZGate(q, 2.076917063578151, 5);
  sqcRYGate(q, -2.025105995143682, 6);
  sqcRZGate(q, 1.7141414080975401, 6);
  sqcRYGate(q, 1.7593697378306539, 7);
  sqcRZGate(q, -2.936168545692598, 7);

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
