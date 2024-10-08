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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, -0.09181644081134088, 0);
  sqcRYGate(q, 1.4800411541553151, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4089162482563195, 0);
  sqcRYGate(q, -3.0692823254543877, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.012410858130061266, 0);
  sqcRYGate(q, 2.2464472373409166, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.1529485592511293, 0);
  sqcRYGate(q, -1.6733188402832202, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3194359152391596, 0);
  sqcRYGate(q, -1.0571066078758953, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.9226941300002016, 0);
  sqcRYGate(q, 1.7198551244825726, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4847044105907807, 1);
  sqcRYGate(q, 1.4552405527555212, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.5697742928030203, 1);
  sqcRYGate(q, 0.6554468665806772, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7592589066363615, 1);
  sqcRYGate(q, 0.692004723916554, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1107417827094244, 1);
  sqcRYGate(q, 0.14431110805446057, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2474209877363664, 2);
  sqcRYGate(q, 1.2096186118007832, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.20592448468914618, 2);
  sqcRYGate(q, -2.1223261168037713, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2683367664327303, 0);
  sqcRYGate(q, -1.2856043050229307, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.129870573656496, 0);
  sqcRYGate(q, 0.11174422094982028, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.09354513046713553, 0);
  sqcRYGate(q, 0.3891409851281331, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.039509316771123, 0);
  sqcRYGate(q, 0.35609699599180455, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0808777733866486, 0);
  sqcRYGate(q, 3.128050688669752, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9630048298175087, 0);
  sqcRYGate(q, 0.6879930322358572, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.41658975324987413, 1);
  sqcRYGate(q, -0.10317872338570933, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.11802222418180044, 1);
  sqcRYGate(q, -1.9763177061098014, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6002889864202532, 1);
  sqcRYGate(q, -0.741976209559907, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.454327157135027, 1);
  sqcRYGate(q, 3.024996713231379, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.30960838168237537, 2);
  sqcRYGate(q, 0.5879280388991662, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6028535713503071, 2);
  sqcRYGate(q, -1.0909629807022538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1662687137015246, 0);
  sqcRYGate(q, 3.001320330089007, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2154769016706446, 0);
  sqcRYGate(q, 0.9176206987731834, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1609694644078563, 0);
  sqcRYGate(q, 1.1044578639481708, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3288184772004512, 0);
  sqcRYGate(q, -0.9637024868785872, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.957465914983731, 0);
  sqcRYGate(q, -0.3531188485106931, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.021115568649646477, 0);
  sqcRYGate(q, -2.9194604606748173, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3617527465701555, 1);
  sqcRYGate(q, -2.530399930919412, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.031880919288625, 1);
  sqcRYGate(q, 2.5165310596566273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0089322796049545, 1);
  sqcRYGate(q, -0.7812426011356317, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.842765851334189, 1);
  sqcRYGate(q, 2.3791975887379735, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.460801168551871, 2);
  sqcRYGate(q, 0.30228167483532514, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.360001838186956, 2);
  sqcRYGate(q, -2.8937257871616278, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.1256313319252604, 0);
  sqcRYGate(q, -0.9596759446154073, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0592266739628893, 0);
  sqcRYGate(q, 2.6821659224280934, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7019761013154708, 0);
  sqcRYGate(q, -1.2823214192976689, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5616711184076824, 0);
  sqcRYGate(q, 0.692294080939857, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6471481687709808, 0);
  sqcRYGate(q, 1.0317852738487918, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6999241037916375, 0);
  sqcRYGate(q, 2.5716327521686617, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.096609327327777, 1);
  sqcRYGate(q, -2.4506224681200397, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8387450906179694, 1);
  sqcRYGate(q, 2.0326775374800157, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.21922871691874704, 1);
  sqcRYGate(q, 0.19495176124045924, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7517259109885925, 1);
  sqcRYGate(q, 1.8989529904138234, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.6220942987731117, 2);
  sqcRYGate(q, 2.315414881876806, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3925707313253692, 2);
  sqcRYGate(q, -2.8782478035559924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9681348657533728, 0);
  sqcRYGate(q, 2.0816367269463845, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8905638410362917, 0);
  sqcRYGate(q, -1.6550804202480567, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5175717460662597, 0);
  sqcRYGate(q, -2.7370739501455073, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7037145766459714, 0);
  sqcRYGate(q, 1.8033814458480624, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6334525866213943, 0);
  sqcRYGate(q, -0.6168227695061237, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.665336058680002, 0);
  sqcRYGate(q, 2.9527808227348418, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.040106137976502, 1);
  sqcRYGate(q, 1.485177194887249, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.6451972807648116, 1);
  sqcRYGate(q, 2.326086671296253, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.587092523662411, 1);
  sqcRYGate(q, 0.4338897670771389, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.127845492694461, 1);
  sqcRYGate(q, -1.45247704158364, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5240843597467744, 2);
  sqcRYGate(q, 2.3879952311097106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.458535209311309, 2);
  sqcRYGate(q, -0.9767293563197038, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.489648545770116, 0);
  sqcRYGate(q, -0.22405528919436613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4310687895052256, 0);
  sqcRYGate(q, 0.14320644649847747, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1307769872939764, 0);
  sqcRYGate(q, 1.0913910770726967, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8365235895501764, 0);
  sqcRYGate(q, 1.0306699639436434, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6911614847886458, 0);
  sqcRYGate(q, -0.8973627378976897, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.295493368157856, 0);
  sqcRYGate(q, 1.5821421131057347, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.4495967120617976, 1);
  sqcRYGate(q, 2.75437729314057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0527655123576398, 1);
  sqcRYGate(q, -1.6777681516429794, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1001841204706502, 1);
  sqcRYGate(q, -1.9785721061624681, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.15186346095304554, 1);
  sqcRYGate(q, -0.45596976976333753, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4927049906403167, 2);
  sqcRYGate(q, -0.6573597599180522, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2306169339509025, 2);
  sqcRYGate(q, 1.2572173296324096, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9645089796182358, 0);
  sqcRYGate(q, 2.167773125952018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6520770349042855, 0);
  sqcRYGate(q, 2.993647539268915, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.975601126800301, 0);
  sqcRYGate(q, -1.7450377636035674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.9602996628523482, 0);
  sqcRYGate(q, -0.8035854874375365, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.687852678893873, 0);
  sqcRYGate(q, 2.3620878391597784, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.3031738323886475, 0);
  sqcRYGate(q, 2.292215327833031, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.20121650966741858, 1);
  sqcRYGate(q, -3.072082459815315, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9700457811158492, 1);
  sqcRYGate(q, -1.3296531271717835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.0670088531997024, 1);
  sqcRYGate(q, -0.8908647149118804, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.435779797735768, 1);
  sqcRYGate(q, -2.5082737716364796, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1502732389369852, 2);
  sqcRYGate(q, 0.1020880365641279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3967918551877667, 2);
  sqcRYGate(q, 2.9820537905392754, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.619238808636684, 0);
  sqcRYGate(q, 1.4290465432348158, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2429879319106467, 0);
  sqcRYGate(q, -1.8082331030446221, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.6826528098858615, 0);
  sqcRYGate(q, 0.5922962701782195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.17418455102846137, 0);
  sqcRYGate(q, 2.5831668047661833, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8427273741692958, 0);
  sqcRYGate(q, 1.3914794358803866, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.10548485555698138, 0);
  sqcRYGate(q, 0.7915918929175288, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.512826454009622, 1);
  sqcRYGate(q, -1.0543577861932025, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6778773919037295, 1);
  sqcRYGate(q, -0.4280024433139031, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6818254465376814, 1);
  sqcRYGate(q, 0.93341831203597, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.160102566935562, 1);
  sqcRYGate(q, 3.0369595509380294, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3214158291670683, 2);
  sqcRYGate(q, -1.9006291314624342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1090268557119463, 2);
  sqcRYGate(q, -1.832597609785044, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8745006841926972, 0);
  sqcRYGate(q, -1.0333792866913363, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.34484407134558914, 0);
  sqcRYGate(q, -0.007073688810664611, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.868666829841056, 0);
  sqcRYGate(q, -1.5432850051413078, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.3418100522823147, 0);
  sqcRYGate(q, -0.46384462429691187, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.065657574754326, 0);
  sqcRYGate(q, -2.2401165118531265, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5673785826292947, 0);
  sqcRYGate(q, 1.6155087081932393, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.81029074356908, 1);
  sqcRYGate(q, -2.2911617157283106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8589618538743613, 1);
  sqcRYGate(q, 1.8842036803800273, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8535922015387342, 1);
  sqcRYGate(q, -0.6756529232379865, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6425653918102658, 1);
  sqcRYGate(q, -1.3104135815117468, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.241138054156625, 2);
  sqcRYGate(q, -1.2786516614781287, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.461374280465997, 2);
  sqcRYGate(q, -2.8816557575349444, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5782811003890432, 0);
  sqcRYGate(q, -1.1636078578146218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.311577904194491, 0);
  sqcRYGate(q, -2.469618833922686, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3674334286193712, 0);
  sqcRYGate(q, 0.5061780805178433, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0164150265247642, 0);
  sqcRYGate(q, 2.5990344989821184, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.9692590452643852, 0);
  sqcRYGate(q, 1.597607930834436, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.568606271416732, 0);
  sqcRYGate(q, -1.3109638802334675, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6602711772436693, 1);
  sqcRYGate(q, 2.019334014832901, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1501025507253688, 1);
  sqcRYGate(q, -1.3314831202462631, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6234205020507546, 1);
  sqcRYGate(q, 0.3400326597370791, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.6292652414049256, 1);
  sqcRYGate(q, 0.5397701034953453, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8769609171971817, 2);
  sqcRYGate(q, -2.1256756202060227, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.978892479846894, 2);
  sqcRYGate(q, 2.118208726816378, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4159573278458684, 0);
  sqcRYGate(q, -2.3173039386032404, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1486911260502914, 0);
  sqcRYGate(q, 1.5936869527860937, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.16256992330457, 0);
  sqcRYGate(q, 3.116650332230659, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7458190939851677, 0);
  sqcRYGate(q, -0.12676552497214374, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.6187697380129467, 0);
  sqcRYGate(q, -0.09054130778890633, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.061411706530518, 0);
  sqcRYGate(q, -0.6057448566989105, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.138244337273613, 1);
  sqcRYGate(q, 2.984545395679538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1325950516129444, 1);
  sqcRYGate(q, -2.7752051020351525, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0188641405945267, 1);
  sqcRYGate(q, -2.0767375270412605, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0963107273146107, 1);
  sqcRYGate(q, -3.0358341274942053, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.06476021705625742, 2);
  sqcRYGate(q, -0.48184474071957156, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.628735912604558, 2);
  sqcRYGate(q, 1.304636120502967, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7777932420899996, 0);
  sqcRYGate(q, 1.0842485004074087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6806772828903727, 0);
  sqcRYGate(q, 3.0135104199645086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6269380698121869, 0);
  sqcRYGate(q, -1.8983538157020252, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.04749419456974864, 0);
  sqcRYGate(q, 1.3754454773539901, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.166072230583974, 0);
  sqcRYGate(q, 2.1277653181131795, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7840835614923014, 0);
  sqcRYGate(q, -0.7558299635322934, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.33375501843610184, 1);
  sqcRYGate(q, 0.24711657755958644, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7186987598569257, 1);
  sqcRYGate(q, 1.0109905920800397, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6308508684249352, 1);
  sqcRYGate(q, -1.5915867596676385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.540885997165499, 1);
  sqcRYGate(q, 0.3555062768770734, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.20578555943746668, 2);
  sqcRYGate(q, 1.2648312322273814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.25727272103592, 2);
  sqcRYGate(q, 2.0619228350885708, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9779856720123106, 0);
  sqcRYGate(q, 2.547240240337235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.800456961683472, 0);
  sqcRYGate(q, -2.5389336726754106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.345767055246041, 0);
  sqcRYGate(q, -1.9374861102035816, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5346793704169572, 0);
  sqcRYGate(q, -0.785285511764453, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7801467895345776, 0);
  sqcRYGate(q, -0.8064196125235119, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.2903526745219214, 0);
  sqcRYGate(q, -2.2599865060557844, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.0934608167786455, 1);
  sqcRYGate(q, 1.3081844244819187, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5519433665622264, 1);
  sqcRYGate(q, -0.9406327695524478, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8378818360245126, 1);
  sqcRYGate(q, 2.046302265301725, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5965020033646183, 1);
  sqcRYGate(q, -1.839049597459941, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.3254305568965674, 2);
  sqcRYGate(q, -1.5393577944658405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.389630721297237, 2);
  sqcRYGate(q, 1.7232085101266608, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6274215620579338, 0);
  sqcRYGate(q, 1.6179725219793692, 1);
  sqcRYGate(q, -2.063028642127514, 2);
  sqcRYGate(q, -3.0581473005228843, 3);

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
