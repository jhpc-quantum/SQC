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

  sqcRYGate(q, -1.4658209820011292, 0);
  sqcRYGate(q, -3.0527467306914384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5987752832756117, 0);
  sqcRYGate(q, -2.458164918124622, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.002609258230949, 2);
  sqcRYGate(q, 1.6095469844459889, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.489968522342906, 2);
  sqcRYGate(q, 2.0041273071942545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.518271413997617, 0);
  sqcRYGate(q, -2.6260797111358603, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1748275193642508, 0);
  sqcRYGate(q, 1.2920928088499437, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0981796574196996, 1);
  sqcRYGate(q, 0.13292519519306226, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6666254678158352, 1);
  sqcRYGate(q, -2.5694466652085324, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5042598583269964, 0);
  sqcRYGate(q, -2.118544485549897, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0010563128584344, 0);
  sqcRYGate(q, 1.6989757311531823, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6870290426424392, 2);
  sqcRYGate(q, -0.9665858375205516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0165194225256595, 2);
  sqcRYGate(q, 2.6151990628920205, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1914729584047894, 0);
  sqcRYGate(q, 2.4632514883009886, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.36831866025513543, 0);
  sqcRYGate(q, 2.5287822628829946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6521702684847019, 1);
  sqcRYGate(q, 1.7218113431412254, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.518971869589036, 1);
  sqcRYGate(q, 1.3935045533059123, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.224786006210997, 0);
  sqcRYGate(q, -2.4923754268437066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.20423087774707, 0);
  sqcRYGate(q, -2.686348764730971, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2713556644973627, 2);
  sqcRYGate(q, 1.4971046217956006, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0553052138382273, 2);
  sqcRYGate(q, 2.3543482005007568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7461932106302692, 0);
  sqcRYGate(q, 0.09676697158945924, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.3260099067105795, 0);
  sqcRYGate(q, 2.2385020335529457, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2857892945762774, 1);
  sqcRYGate(q, 0.4708597391265376, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5334485010703345, 1);
  sqcRYGate(q, 1.8844487229490434, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.18873918126390346, 0);
  sqcRYGate(q, 0.10751834775858571, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5422790796135765, 0);
  sqcRYGate(q, 1.1214375757394275, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.552240292195851, 2);
  sqcRYGate(q, -0.39159146100174563, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.909246262140151, 2);
  sqcRYGate(q, -1.3972317655155713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1981592548840863, 0);
  sqcRYGate(q, -2.789999446668435, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3394621103996756, 0);
  sqcRYGate(q, -2.1685147845875123, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.49484832958407665, 1);
  sqcRYGate(q, -0.4400030756135773, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.40446577901052383, 1);
  sqcRYGate(q, -1.633833517778871, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1547753091104183, 0);
  sqcRYGate(q, -0.10780476616175136, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3820064653551234, 0);
  sqcRYGate(q, 1.025524933859125, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.850900857357774, 2);
  sqcRYGate(q, -0.8751214666409294, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3067864791559873, 2);
  sqcRYGate(q, 1.257998050441816, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.905015048428206, 0);
  sqcRYGate(q, -2.06085284246249, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7750345203665128, 0);
  sqcRYGate(q, 2.609468464021342, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.238499801627455, 1);
  sqcRYGate(q, 0.21496315077579897, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.38744857145785705, 1);
  sqcRYGate(q, -1.6312941405779675, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.34392420757881853, 0);
  sqcRYGate(q, -2.9726410858204484, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.1116743890432013, 0);
  sqcRYGate(q, 0.48098517062241886, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.583413207208647, 2);
  sqcRYGate(q, -1.2236892331253346, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.256281289658224, 2);
  sqcRYGate(q, 2.702730947308614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4046396547494946, 0);
  sqcRYGate(q, -1.5074618803879563, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.557770038415076, 0);
  sqcRYGate(q, -0.07656117617553004, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0473239865747352, 1);
  sqcRYGate(q, 1.4973753751243537, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.098637328540833, 1);
  sqcRYGate(q, -1.0382769443964908, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.5723998753902536, 0);
  sqcRYGate(q, -0.01676309680876025, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4746506216012674, 0);
  sqcRYGate(q, 1.149703578353658, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8385710885182136, 2);
  sqcRYGate(q, 0.6746290227461257, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.3024465004247787, 2);
  sqcRYGate(q, 0.1855976866024479, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4135850242645702, 0);
  sqcRYGate(q, -0.6850455533954873, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.1847412863248685, 0);
  sqcRYGate(q, -0.7087303236717384, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.079379357929467, 1);
  sqcRYGate(q, 1.3786463321579205, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5694831410450016, 1);
  sqcRYGate(q, -1.1796996730133509, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7952954992421226, 0);
  sqcRYGate(q, 1.2527670865672684, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.013139297758177015, 0);
  sqcRYGate(q, -0.3449692207219144, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.089069539121978, 2);
  sqcRYGate(q, 1.0577484431854576, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.32236116742408205, 2);
  sqcRYGate(q, -2.194858749625352, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.597102353147474, 0);
  sqcRYGate(q, 1.1359321871732484, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3539222735304073, 0);
  sqcRYGate(q, -0.8828372898084051, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3507300056541259, 1);
  sqcRYGate(q, -2.44491647081255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1135154386313206, 1);
  sqcRYGate(q, 2.788763264677774, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.6280017588297468, 0);
  sqcRYGate(q, -1.2689971764169599, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5995696379659723, 0);
  sqcRYGate(q, 1.7664838923223223, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8814609285561894, 2);
  sqcRYGate(q, 2.07287699369377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.581282219906547, 2);
  sqcRYGate(q, -0.1815984581119239, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6726489935261544, 0);
  sqcRYGate(q, 1.8243303227686252, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2916174035543007, 0);
  sqcRYGate(q, 0.06265744225827419, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.10366917562357436, 1);
  sqcRYGate(q, -2.727037019717203, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.401793597198112, 1);
  sqcRYGate(q, -2.6426514250515276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.25413237132338773, 0);
  sqcRYGate(q, -0.16910963775453994, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3432838184153931, 0);
  sqcRYGate(q, 0.5702083680304835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6656528045939587, 2);
  sqcRYGate(q, -2.3898767942302603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.155199708340536, 2);
  sqcRYGate(q, -3.0192444218814725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6129724262896297, 0);
  sqcRYGate(q, -1.538365697690553, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.497277197391397, 0);
  sqcRYGate(q, 2.0664300871720904, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5179880242924153, 1);
  sqcRYGate(q, 1.136322502641721, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.4107073195232042, 1);
  sqcRYGate(q, 0.0550278666009691, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.722303293332111, 0);
  sqcRYGate(q, -2.2271873669795665, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.36730476825067, 0);
  sqcRYGate(q, 0.16905189345406493, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.494528133090889, 2);
  sqcRYGate(q, 1.040585266722044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7342135450714019, 2);
  sqcRYGate(q, -1.3641321277961787, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.03251125114544042, 0);
  sqcRYGate(q, -3.08551076254743, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6725996713420166, 0);
  sqcRYGate(q, -2.347010351767358, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7764295049852943, 1);
  sqcRYGate(q, 0.37453596962175784, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.733113981063424, 1);
  sqcRYGate(q, -1.8663169022195891, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1018265329821144, 0);
  sqcRYGate(q, -2.1357879011279217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.775183480497271, 0);
  sqcRYGate(q, 1.2679977655616461, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.94046473828672, 2);
  sqcRYGate(q, -0.5442129708691477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7395452421876334, 2);
  sqcRYGate(q, 2.661967168254481, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.048533468415171, 0);
  sqcRYGate(q, 1.6614494076142332, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.371205721014759, 0);
  sqcRYGate(q, 1.366256651978773, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.051714244989832465, 1);
  sqcRYGate(q, 1.7435025969254976, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.1575047663227238, 1);
  sqcRYGate(q, -2.9151900756009126, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6958781588410554, 0);
  sqcRYGate(q, -1.6801810209078039, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.192084208152815, 0);
  sqcRYGate(q, -1.159225500708478, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.046201728395149425, 2);
  sqcRYGate(q, -1.8191524648501245, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1876125228960257, 2);
  sqcRYGate(q, -1.9988457957767989, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2707559691581265, 0);
  sqcRYGate(q, 2.659049275259715, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7839186224385803, 0);
  sqcRYGate(q, 1.3568453151653386, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.05610584765319793, 1);
  sqcRYGate(q, -0.6491064298169886, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.14284001215209116, 1);
  sqcRYGate(q, 3.0054575819016502, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.349619492843116, 0);
  sqcRYGate(q, 1.7402467740841534, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3897856850690316, 0);
  sqcRYGate(q, -2.788687114646892, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3677447584486391, 2);
  sqcRYGate(q, -3.1091363913319667, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1381232641254693, 2);
  sqcRYGate(q, -1.8451221015278583, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7993806025488992, 0);
  sqcRYGate(q, -2.5722691577524412, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1104598742092007, 0);
  sqcRYGate(q, -2.518331952639036, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.869106584134071, 1);
  sqcRYGate(q, 1.696604541506002, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4223177782970535, 1);
  sqcRYGate(q, 1.4765620203974557, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.138878284820673, 0);
  sqcRYGate(q, -2.489408915703369, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.836209273172552, 0);
  sqcRYGate(q, 3.1366129908536013, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4167230649297213, 2);
  sqcRYGate(q, 0.375908145009264, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.944032662636921, 2);
  sqcRYGate(q, 0.08842616237537788, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2082044418021667, 0);
  sqcRYGate(q, 1.7801972405021502, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.04702839188746566, 0);
  sqcRYGate(q, -0.7412046750639292, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2988865009519426, 1);
  sqcRYGate(q, -0.6176585428720714, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.022533317106307, 1);
  sqcRYGate(q, -1.8020228346618348, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.833485283006596, 0);
  sqcRYGate(q, 0.722651386594575, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11636322830770496, 0);
  sqcRYGate(q, -2.3214219851522366, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.398180023729689, 2);
  sqcRYGate(q, -3.064416085268639, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9242583322686336, 2);
  sqcRYGate(q, -1.9204411763765368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.122825042419909, 0);
  sqcRYGate(q, 0.43093286626401195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.344557600767798, 0);
  sqcRYGate(q, 2.4879577869018896, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6168829279441592, 1);
  sqcRYGate(q, -2.027673771115816, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1545164867950044, 1);
  sqcRYGate(q, 2.4994440160520064, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.587610516569266, 0);
  sqcRYGate(q, 1.8678438076308208, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.126569287067497, 0);
  sqcRYGate(q, 2.6486451255631605, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2522961535929067, 2);
  sqcRYGate(q, 1.3065266772175281, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8047890915109566, 2);
  sqcRYGate(q, 1.1638895027130023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9278901940629884, 0);
  sqcRYGate(q, -3.0489775526222487, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6045260190465629, 0);
  sqcRYGate(q, -1.3268712303709327, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.525382662674062, 1);
  sqcRYGate(q, -0.2928387903818095, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.05479421065996615, 1);
  sqcRYGate(q, -1.019523089210188, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9262101296694816, 0);
  sqcRYGate(q, 0.9996821115483593, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8162894455419241, 0);
  sqcRYGate(q, 1.5277378576681153, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.34850369540680404, 2);
  sqcRYGate(q, -2.6525847587909377, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.298468900588779, 2);
  sqcRYGate(q, -1.441385061327474, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.564737744802972, 0);
  sqcRYGate(q, 0.6132880908934972, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.79248200280144, 0);
  sqcRYGate(q, -2.9503003138562596, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5749606458140974, 1);
  sqcRYGate(q, -1.9291765036663913, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.334844671902209, 1);
  sqcRYGate(q, -1.2246416613758448, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2682365684713413, 0);
  sqcRYGate(q, -0.2796279681025444, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1468236553028561, 0);
  sqcRYGate(q, -2.5342077117969963, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4821035566905758, 2);
  sqcRYGate(q, 2.6974377036184674, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.873329384561902, 2);
  sqcRYGate(q, 2.6173414561187993, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2969039716874466, 0);
  sqcRYGate(q, -0.5124216815932909, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3032871661752115, 0);
  sqcRYGate(q, 0.12268364609468557, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.409469961330825, 1);
  sqcRYGate(q, 2.0726544235769198, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.11961872487148728, 1);
  sqcRYGate(q, -2.4854800103854338, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7736063758537655, 0);
  sqcRYGate(q, 2.6773904794171925, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3866742936540177, 0);
  sqcRYGate(q, -0.8704990926142295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1129098549802205, 2);
  sqcRYGate(q, -2.1961426678644385, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.527562505175836, 2);
  sqcRYGate(q, -3.046215689079918, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8919739860622506, 0);
  sqcRYGate(q, -0.5434102470173924, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6951132895404752, 0);
  sqcRYGate(q, -0.9027073542423476, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.925121800044264, 1);
  sqcRYGate(q, -2.6458694897163055, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9725194751924132, 1);
  sqcRYGate(q, 0.618807871684872, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.831617176640072, 0);
  sqcRYGate(q, 2.4059270768851677, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2592977942673018, 0);
  sqcRYGate(q, 0.6982028320631981, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.903721921810343, 2);
  sqcRYGate(q, 0.6503672217413897, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0685329669938408, 2);
  sqcRYGate(q, 1.8126101538185422, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6565113206508097, 0);
  sqcRYGate(q, -0.35141160615992745, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8874603495060702, 0);
  sqcRYGate(q, -0.17033362978988364, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4128292853203506, 1);
  sqcRYGate(q, 1.0222230493320028, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.11280061035547892, 1);
  sqcRYGate(q, 2.9974791993578593, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.740945983127531, 0);
  sqcRYGate(q, -1.2766556222400094, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.662449004096981, 0);
  sqcRYGate(q, 2.5578881360284695, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0097263204013533, 2);
  sqcRYGate(q, 1.2153350941610046, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7725166223580928, 2);
  sqcRYGate(q, -2.6097090569046566, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2955258917075028, 0);
  sqcRYGate(q, -0.050405377789807915, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.10898855196841506, 0);
  sqcRYGate(q, 0.9756868440983951, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.13553433125861408, 1);
  sqcRYGate(q, 2.2532557494262617, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9247548618242538, 1);
  sqcRYGate(q, 2.1073377921001883, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8175875286274836, 0);
  sqcRYGate(q, -2.8432930929179947, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.732190143497851, 0);
  sqcRYGate(q, 2.6350063204848415, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8468865850284486, 2);
  sqcRYGate(q, -2.9076900438563067, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1843557163172536, 2);
  sqcRYGate(q, 2.27065082994459, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.536157604724493, 0);
  sqcRYGate(q, -0.2841291664514788, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3831798731935345, 0);
  sqcRYGate(q, -0.1544616160098249, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0642660557448895, 1);
  sqcRYGate(q, 2.8447615746028543, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.2658181716316212, 1);
  sqcRYGate(q, 2.6106573049945125, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5256674078163452, 0);
  sqcRYGate(q, -2.8469007287865007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.9608830434591105, 0);
  sqcRYGate(q, 1.0727198346516449, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.065737097879759, 2);
  sqcRYGate(q, -0.5481141357938356, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.3604337174909213, 2);
  sqcRYGate(q, 2.2315448862315614, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.47977159616908, 0);
  sqcRYGate(q, 0.09134765244793473, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.761501111584411, 0);
  sqcRYGate(q, -2.101105714801217, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1370115891541044, 1);
  sqcRYGate(q, -1.7776095096715574, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3062528311561599, 1);
  sqcRYGate(q, -1.475360045049273, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1684584332607084, 0);
  sqcRYGate(q, 2.415248636253861, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2269163605175886, 0);
  sqcRYGate(q, -2.4514722013802857, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7674999488847583, 2);
  sqcRYGate(q, 0.5539916779401218, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5020711366858448, 2);
  sqcRYGate(q, -2.431312843593061, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.873868259060139, 0);
  sqcRYGate(q, -1.683004098117131, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5704225739258133, 0);
  sqcRYGate(q, 2.0510713852154345, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4639694569144082, 1);
  sqcRYGate(q, 1.1596653059674669, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.011645638719628, 1);
  sqcRYGate(q, 0.7656267823709062, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7662317335921616, 0);
  sqcRYGate(q, -0.8989198960565447, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2740127584610441, 0);
  sqcRYGate(q, 1.0765765539158976, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5392886366586414, 2);
  sqcRYGate(q, 0.2951343295061877, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3075865882157403, 2);
  sqcRYGate(q, 1.4800692460439402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1938417285878904, 0);
  sqcRYGate(q, -0.21544916869348363, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.2167963940942584, 0);
  sqcRYGate(q, -3.096125485083547, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.058244757367822, 1);
  sqcRYGate(q, -1.4992624816085174, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.430399451053143, 1);
  sqcRYGate(q, 0.9081077149941379, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.36581959446602624, 0);
  sqcRYGate(q, -0.9877365634284292, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.7685230401037466, 0);
  sqcRYGate(q, 2.536880387333655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.275599643526939, 2);
  sqcRYGate(q, 1.0153594155377368, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.985900491820564, 2);
  sqcRYGate(q, -2.6860262600969183, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5990267405228495, 0);
  sqcRYGate(q, -1.0727920928674752, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.2530809881316705, 0);
  sqcRYGate(q, -1.2875563058145678, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.1229361222778333, 1);
  sqcRYGate(q, 0.18143669475990623, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.5511867784106714, 1);
  sqcRYGate(q, -1.9914515981875835, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.044625720460545, 0);
  sqcRYGate(q, -2.276110849884323, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.068403304768339, 0);
  sqcRYGate(q, 2.2470313800128228, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.613936893559231, 2);
  sqcRYGate(q, -1.754816880522383, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4316280862522883, 2);
  sqcRYGate(q, -2.7467116735442483, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.410458453582354, 0);
  sqcRYGate(q, -1.4556533904171003, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.910667328944536, 0);
  sqcRYGate(q, -1.318673010942326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2258791702233112, 1);
  sqcRYGate(q, 1.9682751246984234, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1195881597323902, 1);
  sqcRYGate(q, -2.4745790179617555, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.37936495109710683, 0);
  sqcRYGate(q, -0.857564796042384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.9133478023225443, 0);
  sqcRYGate(q, 0.6091871473171313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.333993440290623, 2);
  sqcRYGate(q, 2.1381772935713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.853430519874098, 2);
  sqcRYGate(q, 2.9521937247591477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.204407165710881, 0);
  sqcRYGate(q, -2.21240818858941, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8536099534586823, 0);
  sqcRYGate(q, 2.6110147066913876, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6789741966245251, 1);
  sqcRYGate(q, 1.4158334377282618, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0756241632027854, 1);
  sqcRYGate(q, 1.7358026400327615, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.73838966293634, 0);
  sqcRYGate(q, 0.031700446839813705, 1);
  sqcRYGate(q, 0.5057205150069013, 2);
  sqcRYGate(q, -0.7983162639507958, 3);

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
