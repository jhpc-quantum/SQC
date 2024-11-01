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

  sqcRYGate(q, 0.6400568217065069, 0);
  sqcRYGate(q, 2.18528105644184, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4703762496551203, 0);
  sqcRYGate(q, 2.618923189923425, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1566522549103162, 1);
  sqcRYGate(q, 0.2968445388725627, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6168485505989301, 1);
  sqcRYGate(q, -1.5955946187612275, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.005333725458283922, 2);
  sqcRYGate(q, -1.3658132505120095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7645532156321133, 2);
  sqcRYGate(q, 1.015644362426693, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7700174027488682, 3);
  sqcRYGate(q, 1.4400119039555284, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.0608116006289745, 3);
  sqcRYGate(q, -1.9805730024605335, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9667651967374692, 4);
  sqcRYGate(q, 3.070247919414048, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.749050064143363, 4);
  sqcRYGate(q, -0.7976192794451471, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.6856263297506695, 5);
  sqcRYGate(q, 2.8642528252741406, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.231196174644222, 5);
  sqcRYGate(q, -1.0182571835055736, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5258048268376264, 6);
  sqcRYGate(q, 2.6224847818604466, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5381358968620967, 6);
  sqcRYGate(q, 0.20305572655292273, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2304710215337848, 0);
  sqcRYGate(q, -0.8194078328386725, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.266662585296394, 0);
  sqcRYGate(q, -1.5442908639706294, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9440460058835924, 1);
  sqcRYGate(q, -0.3203914343614355, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3431951240435423, 1);
  sqcRYGate(q, 2.8230400948542247, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0207256160119804, 2);
  sqcRYGate(q, -0.022356010484060742, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.327728602539525, 2);
  sqcRYGate(q, -2.1545493486908347, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.25566711959637, 3);
  sqcRYGate(q, -3.1347628113370702, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.637690330623807, 3);
  sqcRYGate(q, 1.9010365461817775, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6527181400002, 4);
  sqcRYGate(q, -0.20296184497519057, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5017394370451241, 4);
  sqcRYGate(q, 2.363064258659968, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3373476822071354, 5);
  sqcRYGate(q, 1.8034392831479462, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.837378142608086, 5);
  sqcRYGate(q, -3.060763861204442, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3938682191625995, 6);
  sqcRYGate(q, 0.8192065020737632, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.5068158798725713, 6);
  sqcRYGate(q, 1.6212707409718483, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.609414125258892, 0);
  sqcRYGate(q, -0.28445284412317795, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9261706422518969, 0);
  sqcRYGate(q, 0.9004846100551984, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6801951014750989, 1);
  sqcRYGate(q, -2.7014393493161624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.715350535231972, 1);
  sqcRYGate(q, -0.09403526430853394, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8270058964555496, 2);
  sqcRYGate(q, -2.3740901225889823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9384460935081593, 2);
  sqcRYGate(q, -2.1413153010058217, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.257206183529557, 3);
  sqcRYGate(q, -2.0170200870194464, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.2773290308463329, 3);
  sqcRYGate(q, -2.376756285117431, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.2989284175196367, 4);
  sqcRYGate(q, -1.4929850682654022, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2041684692129717, 4);
  sqcRYGate(q, 2.5058233231656795, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8730473762187497, 5);
  sqcRYGate(q, -1.1202544850805005, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.184742821046287, 5);
  sqcRYGate(q, 0.6012296407311566, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.890401285317851, 6);
  sqcRYGate(q, -2.6721605160447677, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.09481791273867, 6);
  sqcRYGate(q, -0.21053589165942607, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.3258056133375349, 0);
  sqcRYGate(q, -1.654455768659397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0893306188254854, 0);
  sqcRYGate(q, 0.11053764208245762, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.0202094982622607, 1);
  sqcRYGate(q, 1.696325813713499, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2105472281470206, 1);
  sqcRYGate(q, -3.0985070176437914, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.769819933036616, 2);
  sqcRYGate(q, 2.2213136917869285, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8638452174585245, 2);
  sqcRYGate(q, 0.2651859626121051, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6242064450439777, 3);
  sqcRYGate(q, -2.8074473624750182, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6309164479880214, 3);
  sqcRYGate(q, 0.3970566920836181, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.27808748901904, 4);
  sqcRYGate(q, 0.6366521607513063, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.751975299810397, 4);
  sqcRYGate(q, 1.6854855935563888, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3206622741405039, 5);
  sqcRYGate(q, -2.3358232416096585, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.7083155780827122, 5);
  sqcRYGate(q, 1.5364617370158433, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6469964276637774, 6);
  sqcRYGate(q, -2.3446037311459356, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.04670284455724, 6);
  sqcRYGate(q, 1.6036139469106463, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8530153608116318, 0);
  sqcRYGate(q, 2.1527121456761007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3683985776364178, 0);
  sqcRYGate(q, 0.2223501381413396, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3490604135404869, 1);
  sqcRYGate(q, 0.31324977688178546, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2495030602784567, 1);
  sqcRYGate(q, 2.4689001238803794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.894682280880402, 2);
  sqcRYGate(q, 1.846302830119762, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.15710664026981808, 2);
  sqcRYGate(q, -0.5655937584946978, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.431816639089684, 3);
  sqcRYGate(q, -0.8868199273909364, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0260269459641083, 3);
  sqcRYGate(q, 1.2873914758832372, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.34276542718322467, 4);
  sqcRYGate(q, 0.5144327708623054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.2283900990593644, 4);
  sqcRYGate(q, 0.8223476220219856, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5017734277742312, 5);
  sqcRYGate(q, 2.540727927268021, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.964047977934602, 5);
  sqcRYGate(q, -1.113413921957818, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6085650926588992, 6);
  sqcRYGate(q, 1.3815520834615234, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8249347138249927, 6);
  sqcRYGate(q, -2.833917686696982, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8935631969986755, 0);
  sqcRYGate(q, 2.4423843036016883, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.15833194010623122, 0);
  sqcRYGate(q, 2.9840462301007187, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8262877390049579, 1);
  sqcRYGate(q, 1.0086574325176114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.348462286572279, 1);
  sqcRYGate(q, 1.3899431091150944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6681453047850416, 2);
  sqcRYGate(q, -2.8823799125143843, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.564869804455526, 2);
  sqcRYGate(q, -2.4059786017384557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8494850655716464, 3);
  sqcRYGate(q, -0.6514354639265657, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.4995075775914219, 3);
  sqcRYGate(q, 1.325416730624216, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.2991040657866099, 4);
  sqcRYGate(q, 1.82883173015657, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7096902872914237, 4);
  sqcRYGate(q, -0.20235480622400281, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.11598674985537015, 5);
  sqcRYGate(q, 2.1258814947477345, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6389989470802204, 5);
  sqcRYGate(q, -0.5364236094497006, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.060977207405018, 6);
  sqcRYGate(q, 1.8752759302559774, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4488853722051953, 6);
  sqcRYGate(q, 0.3768782934246637, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.031024295457034338, 0);
  sqcRYGate(q, -2.650907446554418, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8567125919123955, 0);
  sqcRYGate(q, 1.0116871068574884, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7847709573702464, 1);
  sqcRYGate(q, 2.35819289164376, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4700302203669553, 1);
  sqcRYGate(q, 2.4083843288952966, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7029077213234105, 2);
  sqcRYGate(q, 3.1412522470685293, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.429264920864325, 2);
  sqcRYGate(q, -1.2477784093731776, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4445249062923171, 3);
  sqcRYGate(q, 1.9028676996670042, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.16531386436424, 3);
  sqcRYGate(q, -2.871755921996005, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3662629807995854, 4);
  sqcRYGate(q, 2.9569256003820743, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.2095228176957793, 4);
  sqcRYGate(q, -2.6565614009799114, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6782099897401581, 5);
  sqcRYGate(q, 2.568417865270954, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.117361427094448, 5);
  sqcRYGate(q, 0.7325913677449307, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.3172688529043568, 6);
  sqcRYGate(q, -1.383746790926439, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4067719322177048, 6);
  sqcRYGate(q, 0.024459716639487334, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9395324967308978, 0);
  sqcRYGate(q, 1.8613308742230847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.514171951801379, 0);
  sqcRYGate(q, 0.7483998234863529, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.634843436809876, 1);
  sqcRYGate(q, -2.3794918329425427, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.054318361502231, 1);
  sqcRYGate(q, 0.8310159438186197, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.443037190259617, 2);
  sqcRYGate(q, 2.0488412176486595, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5540906712709162, 2);
  sqcRYGate(q, -3.125224425846784, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20478929092694373, 3);
  sqcRYGate(q, 0.7892906904876741, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.186078831436739, 3);
  sqcRYGate(q, -0.18751696923495972, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1309804351450268, 4);
  sqcRYGate(q, 1.4625152036131037, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.9234561672023425, 4);
  sqcRYGate(q, 2.2717731384187694, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5272539195801902, 5);
  sqcRYGate(q, 1.8574817683465459, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.30684138276214146, 5);
  sqcRYGate(q, -2.3311114922679197, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0957295393142354, 6);
  sqcRYGate(q, -1.064797227538394, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.6272167028455535, 6);
  sqcRYGate(q, -0.5775161759788243, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5136855004307483, 0);
  sqcRYGate(q, -0.5868937594864778, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.26167636251872095, 0);
  sqcRYGate(q, 0.4571561610825888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.7652200046159423, 1);
  sqcRYGate(q, 0.16194067980432084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.762442600320265, 1);
  sqcRYGate(q, -2.469713523783751, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8407166593144108, 2);
  sqcRYGate(q, 2.075191141450484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.1658027674054876, 2);
  sqcRYGate(q, 0.9092645470521636, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3912373654655545, 3);
  sqcRYGate(q, 1.6234124057724237, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6936318866705289, 3);
  sqcRYGate(q, -0.08206677598068435, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.0977857407593756, 4);
  sqcRYGate(q, 0.847237840238086, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9604495713268184, 4);
  sqcRYGate(q, 1.2715588013711578, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.9857000461557757, 5);
  sqcRYGate(q, -2.1217243245757076, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.4426524294206349, 5);
  sqcRYGate(q, -1.7175350763594028, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7704168991471612, 6);
  sqcRYGate(q, -0.8900842874641004, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8311408669104209, 6);
  sqcRYGate(q, -2.5178162581515218, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.21152336189504695, 0);
  sqcRYGate(q, 2.9481270120933605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3059479534216587, 0);
  sqcRYGate(q, 0.5200545633169684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.333133219749926, 1);
  sqcRYGate(q, 0.7328938529260856, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6770984932621973, 1);
  sqcRYGate(q, -0.8020177367391231, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2433008346154075, 2);
  sqcRYGate(q, 2.7983249688377643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9856157548025095, 2);
  sqcRYGate(q, 1.6777372490059976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0551716032840472, 3);
  sqcRYGate(q, 1.600139450026368, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8406343940146592, 3);
  sqcRYGate(q, -2.7345813873252443, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.10956921860328972, 4);
  sqcRYGate(q, -1.7057334261039454, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8393621889624336, 4);
  sqcRYGate(q, 1.2599310545720293, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6170397558373759, 5);
  sqcRYGate(q, 0.3158826188428341, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3470153229380415, 5);
  sqcRYGate(q, -1.9617898318498133, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7815630754570044, 6);
  sqcRYGate(q, -2.328755807058021, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9631686220915976, 6);
  sqcRYGate(q, -3.058137769560022, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9476957411312164, 0);
  sqcRYGate(q, 1.524487868344801, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5223171902730495, 0);
  sqcRYGate(q, -0.3306656692427937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9124331370673637, 1);
  sqcRYGate(q, -2.793857907290959, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3194516112545673, 1);
  sqcRYGate(q, 2.2389750901606, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6673846969877192, 2);
  sqcRYGate(q, -2.6274034638854618, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6953026526869296, 2);
  sqcRYGate(q, 0.31960675358144464, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2331155517956436, 3);
  sqcRYGate(q, -1.0227614255498907, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.5663285399651601, 3);
  sqcRYGate(q, 0.8555152860179286, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.314665819241939, 4);
  sqcRYGate(q, 2.1253964009105415, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.3296291465659537, 4);
  sqcRYGate(q, 1.9684835148484185, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.4734192690485839, 5);
  sqcRYGate(q, 0.0977920878541294, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.9434767696635387, 5);
  sqcRYGate(q, 0.7229481941008825, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.2188245388444841, 6);
  sqcRYGate(q, -2.3010085291349576, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.8703323656261919, 6);
  sqcRYGate(q, -0.43009634590055157, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.845480395085697, 0);
  sqcRYGate(q, 0.22604238951637962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8370449867061693, 0);
  sqcRYGate(q, -0.7237472235777201, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8050435674568037, 1);
  sqcRYGate(q, 1.5961607099998485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5965972984221873, 1);
  sqcRYGate(q, -2.415587094292251, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0932926458646315, 2);
  sqcRYGate(q, -1.1765017075321573, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.842101341580817, 2);
  sqcRYGate(q, 0.21857954600207297, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5872295977293, 3);
  sqcRYGate(q, -0.9607045988465558, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.7754971330684706, 3);
  sqcRYGate(q, -2.670275037797524, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1682846521443135, 4);
  sqcRYGate(q, -2.135663240083468, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.036788379482902, 4);
  sqcRYGate(q, 3.0100396662129807, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.27359888794000986, 5);
  sqcRYGate(q, 0.2299861374706832, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.831783900912682, 5);
  sqcRYGate(q, -1.4988560754635982, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.017556437679612458, 6);
  sqcRYGate(q, -2.3093526426540847, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.1095151654708267, 6);
  sqcRYGate(q, 1.3299730336796343, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.9174021048134418, 0);
  sqcRYGate(q, 0.06292826003767557, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.500725170086483, 0);
  sqcRYGate(q, -2.266919375608027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.18643065606607934, 1);
  sqcRYGate(q, 2.462045269870776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.730335147346603, 1);
  sqcRYGate(q, -0.4219283075629683, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7125991176210463, 2);
  sqcRYGate(q, 2.3771055086643083, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5631001066234694, 2);
  sqcRYGate(q, -0.4676605650127304, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7629791484559743, 3);
  sqcRYGate(q, 1.6046211043631515, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.6613490162575215, 3);
  sqcRYGate(q, 1.4478421623368463, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4885341676231931, 4);
  sqcRYGate(q, 0.41188838247792464, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0112247918427766, 4);
  sqcRYGate(q, 0.012752003028578152, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8647880142630175, 5);
  sqcRYGate(q, 2.1650326990477864, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7979226756677176, 5);
  sqcRYGate(q, 0.8059565212223525, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3007788146984445, 6);
  sqcRYGate(q, -1.759133451808916, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9230798977802954, 6);
  sqcRYGate(q, -2.937226186495656, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.3933950778543398, 0);
  sqcRYGate(q, 0.22660384272635614, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.43976888628489214, 0);
  sqcRYGate(q, -1.2435924444038216, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.947795742842516, 1);
  sqcRYGate(q, 1.0503593694141613, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7366048784285595, 1);
  sqcRYGate(q, -1.0144983568914399, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0589112519985404, 2);
  sqcRYGate(q, 2.2490022329127024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3044024628373694, 2);
  sqcRYGate(q, 2.8480753159270185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8876018764811705, 3);
  sqcRYGate(q, -0.03806757678467106, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9937537788946944, 3);
  sqcRYGate(q, 2.2096317859709362, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4934124818561156, 4);
  sqcRYGate(q, 1.1334361105543258, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.9199749433233483, 4);
  sqcRYGate(q, -0.7151434180202724, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.6557039527866717, 5);
  sqcRYGate(q, 1.7864423601311448, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.1021846975316623, 5);
  sqcRYGate(q, 3.0112936235661034, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.0984166411448473, 6);
  sqcRYGate(q, -0.966313119716546, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0179680757090053, 6);
  sqcRYGate(q, 2.055715235373427, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.6844835985306568, 0);
  sqcRYGate(q, -2.1107678040886864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3076238854313593, 0);
  sqcRYGate(q, 1.9858515964239736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4819161347065557, 1);
  sqcRYGate(q, -3.0184235082296347, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.49993016766679, 1);
  sqcRYGate(q, -2.838328742779857, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3974712438414303, 2);
  sqcRYGate(q, -0.6187889855726301, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.41356902510077503, 2);
  sqcRYGate(q, 2.703231545952895, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9666188522320827, 3);
  sqcRYGate(q, 2.565733092495684, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.37578582926214754, 3);
  sqcRYGate(q, 1.0704022560064572, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.275126165926082, 4);
  sqcRYGate(q, -0.9182823158788462, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8140385655237693, 4);
  sqcRYGate(q, 0.1433410930362875, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5820618270507936, 5);
  sqcRYGate(q, -2.4089928846006723, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.258312566706868, 5);
  sqcRYGate(q, 0.921600261882273, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.7571937265217197, 6);
  sqcRYGate(q, -2.8776536386490195, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2845938062015736, 6);
  sqcRYGate(q, -2.329145827507853, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.41867400654900333, 0);
  sqcRYGate(q, -1.8681119380875861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.911556236653617, 0);
  sqcRYGate(q, 0.17866829256239836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2122916426977683, 1);
  sqcRYGate(q, -2.8447547002973566, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3870399423780742, 1);
  sqcRYGate(q, -2.8064799588953986, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.14689747235371023, 2);
  sqcRYGate(q, 2.0345062826406477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8427599647142814, 2);
  sqcRYGate(q, -0.1469584066677228, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8493538702817325, 3);
  sqcRYGate(q, -1.4053225672526715, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.093111868497005, 3);
  sqcRYGate(q, 1.43623267457948, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.2833083985990499, 4);
  sqcRYGate(q, -2.2084268585856206, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0661311684722254, 4);
  sqcRYGate(q, 0.8041199607520765, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.0972128721502485, 5);
  sqcRYGate(q, 2.0408151113691986, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.4038686763091475, 5);
  sqcRYGate(q, -1.0649492532242508, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.938161420356013, 6);
  sqcRYGate(q, -2.7533496669649464, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -3.0254682875369925, 6);
  sqcRYGate(q, 2.0680879136160524, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7696577941535518, 0);
  sqcRYGate(q, -2.44705357499679, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1337378975142935, 0);
  sqcRYGate(q, 1.8263082991190451, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6034095329022322, 1);
  sqcRYGate(q, 2.8046030191151834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2604450227274153, 1);
  sqcRYGate(q, 0.29418796682150294, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0388123615803555, 2);
  sqcRYGate(q, -2.1423232933043215, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.264074978773853, 2);
  sqcRYGate(q, 2.0794069085786937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3128311157765213, 3);
  sqcRYGate(q, 2.9984167058149547, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.39825535147056623, 3);
  sqcRYGate(q, -3.0239444874967596, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8318723176949705, 4);
  sqcRYGate(q, -2.669172641442514, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.7926358496353996, 4);
  sqcRYGate(q, 2.423163253206623, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.5386032143914514, 5);
  sqcRYGate(q, 0.13828925061278743, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.5258377429951944, 5);
  sqcRYGate(q, -0.5115097302419076, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7825628576816691, 6);
  sqcRYGate(q, 2.2244184005342813, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5309313646287473, 6);
  sqcRYGate(q, -0.5309638420347609, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2653602247989866, 0);
  sqcRYGate(q, 0.010091824637827719, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.335564962655803, 0);
  sqcRYGate(q, -1.632975141103337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.9005320040365903, 1);
  sqcRYGate(q, -0.8654886521541911, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.761730202244936, 1);
  sqcRYGate(q, 1.1439078728087155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6985490225309725, 2);
  sqcRYGate(q, 1.8322867296139798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.38729056313034455, 2);
  sqcRYGate(q, 0.9588043597063161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.23057011955693, 3);
  sqcRYGate(q, -0.3836240644899416, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -3.0925856317561573, 3);
  sqcRYGate(q, -2.081790023751674, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.5062483287855192, 4);
  sqcRYGate(q, 1.7379643129273985, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.0984913009264674, 4);
  sqcRYGate(q, -0.038373864182968585, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3414051200798487, 5);
  sqcRYGate(q, -1.3679847065924216, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5360745132189653, 5);
  sqcRYGate(q, 0.9331162469657546, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.763245911551058, 6);
  sqcRYGate(q, 2.1970519524745677, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.571266333504596, 6);
  sqcRYGate(q, -0.5528374684222452, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4167030012000652, 0);
  sqcRYGate(q, -2.031261977307831, 1);
  sqcRYGate(q, -2.5447419479480637, 2);
  sqcRYGate(q, -2.7786395395810692, 3);
  sqcRYGate(q, 1.6695186695696884, 4);
  sqcRYGate(q, -2.0376454381901485, 5);
  sqcRYGate(q, -1.7983296449820312, 6);
  sqcRYGate(q, -2.004112520603006, 7);

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
