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

  sqcRYGate(q, 3.081668914768976, 0);
  sqcRYGate(q, -0.14102598680130107, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.322097236253593, 0);
  sqcRYGate(q, -1.6630224849560369, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2692897528669054, 2);
  sqcRYGate(q, -0.6590687479495001, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1359166630921589, 2);
  sqcRYGate(q, -1.965896741242677, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.54388866978739, 0);
  sqcRYGate(q, 1.7781966232465205, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6300352816300885, 0);
  sqcRYGate(q, 2.3291118926602237, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7142200961580303, 1);
  sqcRYGate(q, 2.1110262429061413, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8119715418650042, 1);
  sqcRYGate(q, 0.605960356489815, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.641937658145433, 0);
  sqcRYGate(q, -0.7795818510675785, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.726187064092567, 0);
  sqcRYGate(q, 1.1580984329433825, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3465893747995805, 1);
  sqcRYGate(q, -0.04055655961374871, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.14531226211415, 1);
  sqcRYGate(q, 0.5146628128210864, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.121382471211737, 0);
  sqcRYGate(q, 1.1807223062653958, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.666592022764654, 0);
  sqcRYGate(q, 2.8202253682845115, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9007945256279688, 2);
  sqcRYGate(q, 1.178755275792149, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.856916768295451, 2);
  sqcRYGate(q, -0.5874647676801414, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.5514793446696578, 0);
  sqcRYGate(q, -0.6250598646765448, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1870338555444016, 0);
  sqcRYGate(q, -1.7850806196728088, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.9109940215457164, 1);
  sqcRYGate(q, 2.5549384515315356, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8556841079141421, 1);
  sqcRYGate(q, -1.8736693018150785, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.21953769573261983, 0);
  sqcRYGate(q, -2.649979267043924, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.998061264195612, 0);
  sqcRYGate(q, -2.753975092223314, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0873609460694125, 1);
  sqcRYGate(q, 2.47762393975319, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6403095690045897, 1);
  sqcRYGate(q, -0.8447202595662083, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.976265827904302, 0);
  sqcRYGate(q, 3.112402398416961, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.45319490156483155, 0);
  sqcRYGate(q, -1.7858258775869653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7214675528180345, 2);
  sqcRYGate(q, 2.8056322105241147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0054219090240464, 2);
  sqcRYGate(q, 1.4857789441673113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9375686106547247, 0);
  sqcRYGate(q, -2.5339388099250466, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4766497509417063, 0);
  sqcRYGate(q, -0.6404481199835459, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.4691945344458044, 1);
  sqcRYGate(q, -0.8916192000330554, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7310734050689176, 1);
  sqcRYGate(q, 2.3192201428750465, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6145832851878783, 0);
  sqcRYGate(q, 1.3261635349399894, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.901729284089833, 0);
  sqcRYGate(q, -1.0695714876569162, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.42362326535453426, 1);
  sqcRYGate(q, -3.0800378286905055, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0268511363345514, 1);
  sqcRYGate(q, 1.1687606610186252, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.134694123356021, 0);
  sqcRYGate(q, -1.083534257040089, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.15190746779033404, 0);
  sqcRYGate(q, -0.7548872544497316, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.43324308603596956, 2);
  sqcRYGate(q, 0.6691843672030044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8016520069396716, 2);
  sqcRYGate(q, 2.4186723088637407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1094915553968283, 0);
  sqcRYGate(q, -2.7829335837349496, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.0852452590758546, 0);
  sqcRYGate(q, -0.5354146695220809, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.938969253538577, 1);
  sqcRYGate(q, 3.124931233273206, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8190290573285106, 1);
  sqcRYGate(q, -1.990611390788887, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8711488148846247, 0);
  sqcRYGate(q, -1.3276484332792826, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4829973323280639, 0);
  sqcRYGate(q, 1.0796617673221798, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.3971798585617243, 1);
  sqcRYGate(q, 2.5659650611197358, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9755533040577378, 1);
  sqcRYGate(q, 1.5042915809075659, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.5671658217189286, 0);
  sqcRYGate(q, 0.5116437611776785, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4906362259727537, 0);
  sqcRYGate(q, -0.04530227781357343, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0752322924145368, 2);
  sqcRYGate(q, -0.5936490807932131, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1411267685075102, 2);
  sqcRYGate(q, -2.417364894854401, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.14365687138712532, 0);
  sqcRYGate(q, 1.9496067275043387, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.647716696909625, 0);
  sqcRYGate(q, 2.680291995049315, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8232444362883793, 1);
  sqcRYGate(q, -1.4820643424040076, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.169245548056939, 1);
  sqcRYGate(q, -0.060759678984199546, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.05663163317119935, 0);
  sqcRYGate(q, 0.26339772532147787, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7988457463920122, 0);
  sqcRYGate(q, 2.596689041707215, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.141741627396984, 1);
  sqcRYGate(q, 1.1594145479146176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8454909308197944, 1);
  sqcRYGate(q, 1.2600537241249201, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.356754557722336, 0);
  sqcRYGate(q, -1.67886404839063, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5707544776385687, 0);
  sqcRYGate(q, -2.8559023614282943, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1302172802806254, 2);
  sqcRYGate(q, -2.6765268233964115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7325292154602892, 2);
  sqcRYGate(q, -0.7119695725131344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.949621139246966, 0);
  sqcRYGate(q, -2.1956535612120938, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.836829763104802, 0);
  sqcRYGate(q, 0.2353179932655263, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1837287006850135, 1);
  sqcRYGate(q, 0.023888894563538265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2824641382863531, 1);
  sqcRYGate(q, 2.416897358819162, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.341068266558966, 0);
  sqcRYGate(q, 2.159846841960532, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.0201694861931863, 0);
  sqcRYGate(q, -0.5894610916221725, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.09706984246147295, 1);
  sqcRYGate(q, 3.0313163145227704, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3497130047436436, 1);
  sqcRYGate(q, -2.7221484296544185, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4137161264128002, 0);
  sqcRYGate(q, -2.505139981828029, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2557084491142003, 0);
  sqcRYGate(q, -0.18520349330118435, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9099597087772744, 2);
  sqcRYGate(q, 1.8164134115304318, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7588104861356426, 2);
  sqcRYGate(q, 2.8717619103305796, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09773008289139717, 0);
  sqcRYGate(q, 0.39037866657464737, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.426958510912413, 0);
  sqcRYGate(q, 0.9977704902181737, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.646615349618312, 1);
  sqcRYGate(q, 0.886164891588942, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4663167135985349, 1);
  sqcRYGate(q, 1.1763925649750604, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8470420184617931, 0);
  sqcRYGate(q, -1.7543678369402051, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7958840662870074, 0);
  sqcRYGate(q, -2.7855859686221986, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.28114819190994517, 1);
  sqcRYGate(q, 1.5292025218033318, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.985172664592609, 1);
  sqcRYGate(q, -2.7939301392825535, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11442422269579298, 0);
  sqcRYGate(q, -2.2107673117171736, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6917444076621053, 0);
  sqcRYGate(q, 1.5113053817674835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9806855522457543, 2);
  sqcRYGate(q, -1.7077831724713706, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3591103688548252, 2);
  sqcRYGate(q, 0.835291289435072, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.354407257688652, 0);
  sqcRYGate(q, -3.016282472339652, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.4106328357105387, 0);
  sqcRYGate(q, 1.6994263001079537, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.090869947550094, 1);
  sqcRYGate(q, -1.6988116589529838, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.404185057001202, 1);
  sqcRYGate(q, 0.08311240988709567, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.13026210036708613, 0);
  sqcRYGate(q, -1.5032245729474747, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.18960902598982501, 0);
  sqcRYGate(q, -2.3036503023100163, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8911700237053373, 1);
  sqcRYGate(q, -1.2261565977361866, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.09151824948983746, 1);
  sqcRYGate(q, -0.32802519071394615, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.006107273318693735, 0);
  sqcRYGate(q, -1.4925758984623378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5952276974874904, 0);
  sqcRYGate(q, 2.692125181297559, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.00220772462606, 2);
  sqcRYGate(q, -0.7077551577901133, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7788282391267911, 2);
  sqcRYGate(q, 2.1477276699745484, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.880625204305566, 0);
  sqcRYGate(q, 0.9600336493845232, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1898943195624887, 0);
  sqcRYGate(q, 1.121556405072619, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10076205483902889, 1);
  sqcRYGate(q, -2.214722122032865, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.344222031671309, 1);
  sqcRYGate(q, 1.3159766382588238, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8024235327885767, 0);
  sqcRYGate(q, -0.479733441994386, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.46483995111883625, 0);
  sqcRYGate(q, 2.995333378598372, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4061982438399676, 1);
  sqcRYGate(q, -2.6081689685811287, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6821462910360605, 1);
  sqcRYGate(q, -1.9996349288535693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.315933985143257, 0);
  sqcRYGate(q, -1.5173077239535415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4506394227129389, 0);
  sqcRYGate(q, -0.5219824352078692, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.02144668213617822, 2);
  sqcRYGate(q, -1.782659140810984, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0874146470089396, 2);
  sqcRYGate(q, -1.8162316223916593, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.028866080615761, 0);
  sqcRYGate(q, 1.3939035692328954, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.943510281158976, 0);
  sqcRYGate(q, 1.465699173788587, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.575675182875633, 1);
  sqcRYGate(q, -2.2748854697680265, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2929755517781483, 1);
  sqcRYGate(q, 1.9847486421259628, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.47051053968658, 0);
  sqcRYGate(q, 1.0063522550674877, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.08743524442415218, 0);
  sqcRYGate(q, -1.5674622445735567, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5674106586240386, 1);
  sqcRYGate(q, 1.5905320815743795, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.825012024534986, 1);
  sqcRYGate(q, 1.7784970373668978, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10140294922738344, 0);
  sqcRYGate(q, -1.8514470273969919, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.818806086860927, 0);
  sqcRYGate(q, 2.5982845536809482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7303359159539778, 2);
  sqcRYGate(q, -0.9224449509193138, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.939416059954489, 2);
  sqcRYGate(q, 0.8043335540037333, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.905587561031247, 0);
  sqcRYGate(q, -2.528816443419832, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.147330271132624, 0);
  sqcRYGate(q, 0.5773234883666118, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1863632517634464, 1);
  sqcRYGate(q, -1.5520604744507775, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4479475271568436, 1);
  sqcRYGate(q, -2.3017603125867536, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5943975844748248, 0);
  sqcRYGate(q, 2.908133905795204, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.477345160731819, 0);
  sqcRYGate(q, -2.9427149558072223, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.895298476986858, 1);
  sqcRYGate(q, -0.6343201024216677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6895531896549656, 1);
  sqcRYGate(q, 1.96969314081404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.921792803004, 0);
  sqcRYGate(q, 0.6581749496104834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7052664171867493, 0);
  sqcRYGate(q, 2.8451478827459864, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8815676634619045, 2);
  sqcRYGate(q, 2.282020807440995, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5701314173739633, 2);
  sqcRYGate(q, 0.3886876024929106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.44650719602890815, 0);
  sqcRYGate(q, -1.6824763671843848, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7124369646910261, 0);
  sqcRYGate(q, -0.8127301816874573, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7516567901614244, 1);
  sqcRYGate(q, -3.1338764087202944, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6192623017004972, 1);
  sqcRYGate(q, -0.9588836465377331, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5938529218210045, 0);
  sqcRYGate(q, 3.0835328909124, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.6988766434673432, 0);
  sqcRYGate(q, -0.9103402057574331, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.554225236013004, 1);
  sqcRYGate(q, 2.2002212700821895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0691290168628147, 1);
  sqcRYGate(q, -1.7955729255187114, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9261207031932601, 0);
  sqcRYGate(q, -1.690478574699854, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2604811424773938, 0);
  sqcRYGate(q, -1.008692781206408, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9271586096874191, 2);
  sqcRYGate(q, -0.2956303876448056, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6131858295124903, 2);
  sqcRYGate(q, -1.110145806343591, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.23236339660149888, 0);
  sqcRYGate(q, 2.8465776448233866, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1025500942128135, 0);
  sqcRYGate(q, -2.808802365444765, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.943768023346268, 1);
  sqcRYGate(q, -0.04644181788978186, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9945849140010963, 1);
  sqcRYGate(q, -1.16059858890429, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.876963157846717, 0);
  sqcRYGate(q, -2.9009408444982543, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2409905621627093, 0);
  sqcRYGate(q, 2.7182450505017877, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.45601770766668, 1);
  sqcRYGate(q, 0.9767785167469573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.802153469852952, 1);
  sqcRYGate(q, 1.642924916296983, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2348966183024936, 0);
  sqcRYGate(q, -2.548025388202662, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.44239170362697, 0);
  sqcRYGate(q, -2.7542805661527057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.136417411027648, 2);
  sqcRYGate(q, -0.1982918691141986, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0142342229142942, 2);
  sqcRYGate(q, 1.295972961373021, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5922058130139943, 0);
  sqcRYGate(q, -2.9429529077521956, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.687371540182503, 0);
  sqcRYGate(q, -2.7781680562888407, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.081742579359245, 1);
  sqcRYGate(q, 3.019073722759263, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.317005729999704, 1);
  sqcRYGate(q, -0.8199649618556313, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5799627573755886, 0);
  sqcRYGate(q, -2.981888256409883, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5297385411323815, 0);
  sqcRYGate(q, 1.7033453669115737, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7437340054366884, 1);
  sqcRYGate(q, -1.7114574814440555, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5916908094404836, 1);
  sqcRYGate(q, 0.4288507223708544, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.744350129696972, 0);
  sqcRYGate(q, 1.905514614881203, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.245249418368151, 0);
  sqcRYGate(q, 1.9707153614936768, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2152503171357765, 2);
  sqcRYGate(q, -2.6150129336424075, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5927250223009164, 2);
  sqcRYGate(q, 0.6610465047644415, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0984952383813609, 0);
  sqcRYGate(q, -1.339068767573351, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8176194272523534, 0);
  sqcRYGate(q, -2.504291097552748, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3872442891358396, 1);
  sqcRYGate(q, -0.4127241179016459, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4436373689102746, 1);
  sqcRYGate(q, -2.90245856073344, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.959556248817708, 0);
  sqcRYGate(q, -1.9015209903919121, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.318282276017472, 0);
  sqcRYGate(q, 1.0342569542042992, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.9562395907977967, 1);
  sqcRYGate(q, 0.861549742209152, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8264775044974435, 1);
  sqcRYGate(q, 0.8190301915694633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.1491240727747405, 0);
  sqcRYGate(q, 1.9117122472125245, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.106838229259147, 0);
  sqcRYGate(q, -2.397191757426742, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5975457267112196, 2);
  sqcRYGate(q, 2.275729291769829, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9843578723111506, 2);
  sqcRYGate(q, 1.1977637205090526, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3249887264726372, 0);
  sqcRYGate(q, -2.4918149691724683, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5134437877151559, 0);
  sqcRYGate(q, 0.18336603298813614, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0889459950564992, 1);
  sqcRYGate(q, 2.964240304854088, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5027450402132576, 1);
  sqcRYGate(q, -1.03128565388996, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1675155394970753, 0);
  sqcRYGate(q, -2.349495844461852, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4780259387007912, 0);
  sqcRYGate(q, -1.341808654505117, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.01968116063686, 1);
  sqcRYGate(q, -2.0401833168320405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3775286512714606, 1);
  sqcRYGate(q, -0.29999580700515205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4191071185401958, 0);
  sqcRYGate(q, -0.1601823488884424, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4770719782873845, 0);
  sqcRYGate(q, 2.3386254311229813, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.30703074249082896, 2);
  sqcRYGate(q, -0.449325519069407, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4062202215635322, 2);
  sqcRYGate(q, -0.5536241019996702, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.748304764461955, 0);
  sqcRYGate(q, 1.6626292737336972, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9110976568000733, 0);
  sqcRYGate(q, 1.271068260228084, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.713618325524353, 1);
  sqcRYGate(q, 2.8999148812971263, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4367790573979057, 1);
  sqcRYGate(q, 0.6644984148734377, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.8257037328903456, 0);
  sqcRYGate(q, 1.4241834943793004, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7030154428412292, 0);
  sqcRYGate(q, -0.19644371624394805, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7518553676486401, 1);
  sqcRYGate(q, 1.6219419974311349, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6157632899860177, 1);
  sqcRYGate(q, -0.6359296190892102, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4217143942176635, 0);
  sqcRYGate(q, 1.1752682681690803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.17435769276720953, 0);
  sqcRYGate(q, 2.2989815266835114, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5050491738148435, 2);
  sqcRYGate(q, 1.6587584465267542, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20428051999034988, 2);
  sqcRYGate(q, 2.6639546326075836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6424283821878598, 0);
  sqcRYGate(q, -1.6690845375776293, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.46439605445656085, 0);
  sqcRYGate(q, 0.4817161099818416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.41296044434160795, 1);
  sqcRYGate(q, 0.6948319118607458, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.449960740560794, 1);
  sqcRYGate(q, -2.1703179290132164, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7925026015274461, 0);
  sqcRYGate(q, 0.5885453848260199, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.011070154574981393, 0);
  sqcRYGate(q, 0.8785140618730064, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.216110838375899, 1);
  sqcRYGate(q, 1.1103048883036806, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9947496341541138, 1);
  sqcRYGate(q, -1.9160776817700957, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1684651030769426, 0);
  sqcRYGate(q, -3.0067700130446653, 1);
  sqcRYGate(q, 1.7897220247538475, 2);
  sqcRYGate(q, 2.474676303316372, 3);

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
