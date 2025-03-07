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

  sqcRYGate(q, -0.037820208316555644, 0);
  sqcRZGate(q, 0.617810053970005, 0);
  sqcRYGate(q, -0.325982363479798, 1);
  sqcRZGate(q, 2.9006784036491706, 1);
  sqcRYGate(q, -3.1245223664494275, 2);
  sqcRZGate(q, -0.485007844760377, 2);
  sqcRYGate(q, -1.0339026516994532, 3);
  sqcRZGate(q, -1.6999409196923456, 3);
  sqcRYGate(q, -3.1414244469112758, 4);
  sqcRZGate(q, -0.7693294460729208, 4);
  sqcRYGate(q, -1.6286375557280124, 5);
  sqcRZGate(q, -1.545006978983503, 5);
  sqcRYGate(q, -1.4585420627400563, 6);
  sqcRZGate(q, 1.6153727992149256, 6);
  sqcRYGate(q, -1.4620567332109156, 7);
  sqcRZGate(q, 2.3370120648696044, 7);
  sqcRYGate(q, -0.5158329245529982, 8);
  sqcRZGate(q, -1.0848134505448872, 8);
  sqcRYGate(q, 1.7312905636105391, 9);
  sqcRZGate(q, 1.6870190384228003, 9);
  sqcRYGate(q, -1.2234694409877835, 10);
  sqcRZGate(q, 0.0038014097413839056, 10);
  sqcRYGate(q, -2.799777071592559, 11);
  sqcRZGate(q, 1.1207565831542274, 11);
  sqcRYGate(q, -2.5793354931206336, 12);
  sqcRZGate(q, -2.785890427505982, 12);
  sqcRYGate(q, 2.128632485886742, 13);
  sqcRZGate(q, -2.069690016877839, 13);
  sqcRYGate(q, -2.62219033963362, 14);
  sqcRZGate(q, -2.145586904210143, 14);
  sqcRYGate(q, 2.5569848539762203, 15);
  sqcRZGate(q, -2.720879769699132, 15);
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
  sqcRYGate(q, 0.19926496666076093, 0);
  sqcRZGate(q, 0.638711633572818, 0);
  sqcRYGate(q, -1.3861998018046764, 1);
  sqcRZGate(q, -1.6649706283803472, 1);
  sqcRYGate(q, 3.0843521495619335, 2);
  sqcRZGate(q, 2.782355507627619, 2);
  sqcRYGate(q, -1.127408929866977, 3);
  sqcRZGate(q, -2.1226582994419747, 3);
  sqcRYGate(q, 3.1410872072076286, 4);
  sqcRZGate(q, 2.67324317498948, 4);
  sqcRYGate(q, 2.7063937915624634, 5);
  sqcRZGate(q, -3.1400050678633504, 5);
  sqcRYGate(q, 1.6476531381405062, 6);
  sqcRZGate(q, 1.5637240532914944, 6);
  sqcRYGate(q, 0.011082626769836068, 7);
  sqcRZGate(q, 2.2980288475120894, 7);
  sqcRYGate(q, 3.1404061249095085, 8);
  sqcRZGate(q, 1.3599176181737114, 8);
  sqcRYGate(q, -0.020099581268731907, 9);
  sqcRZGate(q, 2.847145231101326, 9);
  sqcRYGate(q, -3.1401774715287565, 10);
  sqcRZGate(q, 3.1147186254033645, 10);
  sqcRYGate(q, -3.1408675012646277, 11);
  sqcRZGate(q, 2.1288936153633085, 11);
  sqcRYGate(q, -3.125022217855345, 12);
  sqcRZGate(q, 2.32394025523299, 12);
  sqcRYGate(q, -0.674603246772649, 13);
  sqcRZGate(q, -3.023814086466237, 13);
  sqcRYGate(q, -3.096380129453176, 14);
  sqcRZGate(q, 1.8042040142726155, 14);
  sqcRYGate(q, -2.652479977150978, 15);
  sqcRZGate(q, -1.7800294720991108, 15);
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
  sqcRYGate(q, -3.113506503745381, 0);
  sqcRZGate(q, 1.7514471694823155, 0);
  sqcRYGate(q, 0.30575872082977085, 1);
  sqcRZGate(q, 2.218469598319979, 1);
  sqcRYGate(q, -2.4368036431623326, 2);
  sqcRZGate(q, -0.018536517603664038, 2);
  sqcRYGate(q, -1.440823737951972, 3);
  sqcRZGate(q, 0.43530379708682665, 3);
  sqcRYGate(q, 0.02180217312504507, 4);
  sqcRZGate(q, -0.01814032682518807, 4);
  sqcRYGate(q, 0.8899919170362144, 5);
  sqcRZGate(q, -3.1403826522293823, 5);
  sqcRYGate(q, -3.0979118544439364, 6);
  sqcRZGate(q, -1.478489910968575, 6);
  sqcRYGate(q, 1.366833646633892, 7);
  sqcRZGate(q, 0.02734750575432443, 7);
  sqcRYGate(q, -1.9849386389061463, 8);
  sqcRZGate(q, -1.9037138367268005, 8);
  sqcRYGate(q, 0.7795610370263288, 9);
  sqcRZGate(q, -2.2253444696453606, 9);
  sqcRYGate(q, 2.7909427142137737, 10);
  sqcRZGate(q, 1.562464906087576, 10);
  sqcRYGate(q, 0.3945156799325257, 11);
  sqcRZGate(q, -2.8466216736981016, 11);
  sqcRYGate(q, 1.9590070572028, 12);
  sqcRZGate(q, -0.46755927495658445, 12);
  sqcRYGate(q, 0.6752405181595726, 13);
  sqcRZGate(q, -2.8790778451088683, 13);
  sqcRYGate(q, -2.604081335193728, 14);
  sqcRZGate(q, -1.420650526605208, 14);
  sqcRYGate(q, -1.5376053175003246, 15);
  sqcRZGate(q, -2.3616902601152887, 15);
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
  sqcRYGate(q, 2.9514479649466714, 0);
  sqcRZGate(q, 0.7347583979356059, 0);
  sqcRYGate(q, 2.981180324699721, 1);
  sqcRZGate(q, 0.3365344090528755, 1);
  sqcRYGate(q, 0.14711323595453035, 2);
  sqcRZGate(q, 2.163274711250434, 2);
  sqcRYGate(q, -1.4837619255342294, 3);
  sqcRZGate(q, 0.2224034884254511, 3);
  sqcRYGate(q, 1.5753821300307163, 4);
  sqcRZGate(q, 0.03313967138388029, 4);
  sqcRYGate(q, -2.6317204945962587, 5);
  sqcRZGate(q, 1.7496094978625332, 5);
  sqcRYGate(q, -3.044477032536053, 6);
  sqcRZGate(q, -0.7415291738573825, 6);
  sqcRYGate(q, 1.2534900957378012, 7);
  sqcRZGate(q, 3.135018419382692, 7);
  sqcRYGate(q, -0.3933375254644736, 8);
  sqcRZGate(q, 2.424529063323421, 8);
  sqcRYGate(q, 1.898894463343029, 9);
  sqcRZGate(q, -1.4423509080915826, 9);
  sqcRYGate(q, -1.2309703543504262, 10);
  sqcRZGate(q, 3.12365867518585, 10);
  sqcRYGate(q, -0.26467252224869625, 11);
  sqcRZGate(q, 2.5731572700824956, 11);
  sqcRYGate(q, 3.1374117511042443, 12);
  sqcRZGate(q, 0.8215239075254633, 12);
  sqcRYGate(q, -2.934444106905648, 13);
  sqcRZGate(q, -1.4623756162731176, 13);
  sqcRYGate(q, -1.3741404631649885, 14);
  sqcRZGate(q, -0.7036397184649266, 14);
  sqcRYGate(q, -3.0392951531290557, 15);
  sqcRZGate(q, 2.9178933251643384, 15);
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
  sqcRYGate(q, 0.042308141739201055, 0);
  sqcRZGate(q, 2.667638708669118, 0);
  sqcRYGate(q, -0.01128354844078494, 1);
  sqcRZGate(q, -1.988523182640409, 1);
  sqcRYGate(q, -0.5799309732406002, 2);
  sqcRZGate(q, -1.993040250614527, 2);
  sqcRYGate(q, -1.5725582693611264, 3);
  sqcRZGate(q, 1.579400517409102, 3);
  sqcRYGate(q, 1.3124333732066589, 4);
  sqcRZGate(q, -0.7121448325992998, 4);
  sqcRYGate(q, -0.0004132699191785605, 5);
  sqcRZGate(q, 1.3991624334900779, 5);
  sqcRYGate(q, 1.5471460382230862, 6);
  sqcRZGate(q, 1.6714297415105888, 6);
  sqcRYGate(q, -0.46923687868444297, 7);
  sqcRZGate(q, 1.0242052337858096, 7);
  sqcRYGate(q, 0.00040893590881498326, 8);
  sqcRZGate(q, 2.0905067103660215, 8);
  sqcRYGate(q, 3.140736310308003, 9);
  sqcRZGate(q, 1.352128555935625, 9);
  sqcRYGate(q, 0.009376355643206047, 10);
  sqcRZGate(q, -2.3813466496469755, 10);
  sqcRYGate(q, -0.6378719233281184, 11);
  sqcRZGate(q, -0.4517875292057083, 11);
  sqcRYGate(q, 0.04126203597489525, 12);
  sqcRZGate(q, 0.9344462840439807, 12);
  sqcRYGate(q, 1.928450882819615, 13);
  sqcRZGate(q, -3.0523641419266405, 13);
  sqcRYGate(q, 2.072116439997022, 14);
  sqcRZGate(q, 2.6584090096947377, 14);
  sqcRYGate(q, 2.580154479425853, 15);
  sqcRZGate(q, -2.064696107907744, 15);
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
  sqcRYGate(q, -1.8224915208392183, 0);
  sqcRZGate(q, 1.84602825237765, 0);
  sqcRYGate(q, 2.4888561977568906, 1);
  sqcRZGate(q, 2.596724572250718, 1);
  sqcRYGate(q, -3.0480302025520793, 2);
  sqcRZGate(q, 2.7633581310174025, 2);
  sqcRYGate(q, 0.005823661051428088, 3);
  sqcRZGate(q, -1.749021737907671, 3);
  sqcRYGate(q, 2.310031457229753, 4);
  sqcRZGate(q, 2.3345633383077806, 4);
  sqcRYGate(q, 0.015100799080145492, 5);
  sqcRZGate(q, 2.950098519076713, 5);
  sqcRYGate(q, -3.1384956827399426, 6);
  sqcRZGate(q, -3.0969096518145744, 6);
  sqcRYGate(q, 1.5894779886338712, 7);
  sqcRZGate(q, 3.0800835899186643, 7);
  sqcRYGate(q, -2.845784062184961, 8);
  sqcRZGate(q, -1.5747132506360515, 8);
  sqcRYGate(q, -1.8319776919435018, 9);
  sqcRZGate(q, -0.013223527366132082, 9);
  sqcRYGate(q, -0.004844908544028906, 10);
  sqcRZGate(q, -0.748256655584635, 10);
  sqcRYGate(q, 2.8953897327876157, 11);
  sqcRZGate(q, -1.9752392698927888, 11);
  sqcRYGate(q, -3.132837959899006, 12);
  sqcRZGate(q, -2.990252273064237, 12);
  sqcRYGate(q, -0.3413531130775933, 13);
  sqcRZGate(q, -2.003100822471935, 13);
  sqcRYGate(q, 1.6836395450069046, 14);
  sqcRZGate(q, 2.608857717361583, 14);
  sqcRYGate(q, -1.5595585048508482, 15);
  sqcRZGate(q, 2.255041342628963, 15);
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
  sqcRYGate(q, -0.022743468763383845, 0);
  sqcRZGate(q, -1.5133645285704636, 0);
  sqcRYGate(q, 2.2177482457569218, 1);
  sqcRZGate(q, -2.6010505828718276, 1);
  sqcRYGate(q, -0.6627503564440502, 2);
  sqcRZGate(q, 1.1653406074522037, 2);
  sqcRYGate(q, 3.1402629741801737, 3);
  sqcRZGate(q, 0.8009802913688633, 3);
  sqcRYGate(q, -1.785051205400305, 4);
  sqcRZGate(q, 1.5333290084674724, 4);
  sqcRYGate(q, -0.0002811347065794223, 5);
  sqcRZGate(q, -0.7677385802740462, 5);
  sqcRYGate(q, -1.497386444793694, 6);
  sqcRZGate(q, 0.5715752993850138, 6);
  sqcRYGate(q, -3.1406112738880023, 7);
  sqcRZGate(q, 1.4741020750354377, 7);
  sqcRYGate(q, 0.0036139133014039264, 8);
  sqcRZGate(q, 2.850214087311286, 8);
  sqcRYGate(q, -3.1357016545909824, 9);
  sqcRZGate(q, -2.6083377260336786, 9);
  sqcRYGate(q, 1.9290953953022738, 10);
  sqcRZGate(q, 0.005260039598324558, 10);
  sqcRYGate(q, 1.6494466956061813, 11);
  sqcRZGate(q, 0.3370714896339839, 11);
  sqcRYGate(q, 2.117331261639321, 12);
  sqcRZGate(q, -3.1295564140170584, 12);
  sqcRYGate(q, -0.1550083771082767, 13);
  sqcRZGate(q, -2.6892739173675335, 13);
  sqcRYGate(q, 1.7455074539954616, 14);
  sqcRZGate(q, -2.8349791449872934, 14);
  sqcRYGate(q, 0.728020608538535, 15);
  sqcRZGate(q, 2.0893750364411203, 15);
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
  sqcRYGate(q, -0.0975832242376578, 0);
  sqcRZGate(q, 1.2347893470292632, 0);
  sqcRYGate(q, 3.088598563238259, 1);
  sqcRZGate(q, 1.8470688951571015, 1);
  sqcRYGate(q, 0.8112441432692982, 2);
  sqcRZGate(q, 0.03188526550169701, 2);
  sqcRYGate(q, -3.133077609269087, 3);
  sqcRZGate(q, -0.37307467851970966, 3);
  sqcRYGate(q, -1.683189899818248, 4);
  sqcRZGate(q, 1.5151763156957188, 4);
  sqcRYGate(q, 3.141447398428339, 5);
  sqcRZGate(q, -0.9194351049452171, 5);
  sqcRYGate(q, 1.5559427334973726, 6);
  sqcRZGate(q, 2.8785811885883654, 6);
  sqcRYGate(q, -1.6831544166510328, 7);
  sqcRZGate(q, 2.4133765856882636, 7);
  sqcRYGate(q, -1.271543305867227, 8);
  sqcRZGate(q, 0.3834048809990909, 8);
  sqcRYGate(q, 0.25816483276971053, 9);
  sqcRZGate(q, 0.14523443476602083, 9);
  sqcRYGate(q, -0.15333857190143796, 10);
  sqcRZGate(q, 1.5319727625679689, 10);
  sqcRYGate(q, 2.062004355624325, 11);
  sqcRZGate(q, 0.0034233446552258172, 11);
  sqcRYGate(q, -2.188754698488994, 12);
  sqcRZGate(q, -3.140113034621597, 12);
  sqcRYGate(q, -3.1156846616627347, 13);
  sqcRZGate(q, -1.8509614685965081, 13);
  sqcRYGate(q, -0.9326958696946122, 14);
  sqcRZGate(q, -0.7499231425779593, 14);
  sqcRYGate(q, -2.5280884821385556, 15);
  sqcRZGate(q, -0.821222014872399, 15);
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
  sqcRYGate(q, -1.7158185864597773, 0);
  sqcRZGate(q, -2.096493544292869, 0);
  sqcRYGate(q, -1.6137405150164639, 1);
  sqcRZGate(q, -1.6742769728560623, 1);
  sqcRYGate(q, -1.7708835023054526, 2);
  sqcRZGate(q, -2.82192766316545, 2);
  sqcRYGate(q, -0.0115693892029185, 3);
  sqcRZGate(q, -1.425768809646766, 3);
  sqcRYGate(q, -2.988196447816207, 4);
  sqcRZGate(q, 0.3381940014201286, 4);
  sqcRYGate(q, -2.546156954749241, 5);
  sqcRZGate(q, 1.5757761899858815, 5);
  sqcRYGate(q, 0.6504509360647424, 6);
  sqcRZGate(q, -1.3666001548420197, 6);
  sqcRYGate(q, -1.1595068736359524, 7);
  sqcRZGate(q, -2.7713476650105773, 7);
  sqcRYGate(q, -1.55226327080611, 8);
  sqcRZGate(q, -0.03456351613938688, 8);
  sqcRYGate(q, -0.9119458018459639, 9);
  sqcRZGate(q, 3.0326282307786823, 9);
  sqcRYGate(q, -0.09317921723198275, 10);
  sqcRZGate(q, -2.274961461379114, 10);
  sqcRYGate(q, 1.5457418707491857, 11);
  sqcRZGate(q, -1.716189457218749, 11);
  sqcRYGate(q, 0.18105345836095577, 12);
  sqcRZGate(q, 3.1357737482336203, 12);
  sqcRYGate(q, -0.993415619511984, 13);
  sqcRZGate(q, -0.44261529864595, 13);
  sqcRYGate(q, -2.3721242380270735, 14);
  sqcRZGate(q, -2.3833253254595324, 14);
  sqcRYGate(q, -0.038216595748089326, 15);
  sqcRZGate(q, 0.7203182401484058, 15);
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
  sqcRYGate(q, 0.1674603030325554, 0);
  sqcRZGate(q, -2.7770857441268726, 0);
  sqcRYGate(q, -1.5670165021253837, 1);
  sqcRZGate(q, 0.4079337966754135, 1);
  sqcRYGate(q, 0.7201537641435134, 2);
  sqcRZGate(q, 1.4446289474442577, 2);
  sqcRYGate(q, 3.1297835254870874, 3);
  sqcRZGate(q, -0.5671562034815425, 3);
  sqcRYGate(q, -1.5789657559546475, 4);
  sqcRZGate(q, -0.0013837633878529157, 4);
  sqcRYGate(q, 0.0038992711214529407, 5);
  sqcRZGate(q, -1.5762397926687526, 5);
  sqcRYGate(q, -1.4176344744727067, 6);
  sqcRZGate(q, 8.659625499873869e-05, 6);
  sqcRYGate(q, 0.0008821711655864206, 7);
  sqcRZGate(q, 2.7729845636409602, 7);
  sqcRYGate(q, 3.132735021893634, 8);
  sqcRZGate(q, 1.299084438471306, 8);
  sqcRYGate(q, 3.140076766001866, 9);
  sqcRZGate(q, 2.3749530104309176, 9);
  sqcRYGate(q, -0.002297821110893383, 10);
  sqcRZGate(q, -2.4780250945304187, 10);
  sqcRYGate(q, -0.005886300499610461, 11);
  sqcRZGate(q, 2.724562614158399, 11);
  sqcRYGate(q, -1.4949902584862567, 12);
  sqcRZGate(q, -3.140430244682815, 12);
  sqcRYGate(q, -2.138383279784856, 13);
  sqcRZGate(q, -0.44609218583570875, 13);
  sqcRYGate(q, -1.8398480673083564, 14);
  sqcRZGate(q, -0.2526836388982412, 14);
  sqcRYGate(q, 1.3929315756369394, 15);
  sqcRZGate(q, -2.579102738097815, 15);
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
  sqcRYGate(q, -0.5363299801951762, 0);
  sqcRZGate(q, -1.7541802221182605, 0);
  sqcRYGate(q, -2.6355334637837156, 1);
  sqcRZGate(q, 2.635304156883641, 1);
  sqcRYGate(q, -3.123395271900728, 2);
  sqcRZGate(q, 1.54541784957682, 2);
  sqcRYGate(q, -0.011895336065142531, 3);
  sqcRZGate(q, 2.366255717030848, 3);
  sqcRYGate(q, 2.246801826441696, 4);
  sqcRZGate(q, 0.9004592319125527, 4);
  sqcRYGate(q, -1.567338323752283, 5);
  sqcRZGate(q, -0.035565380333995485, 5);
  sqcRYGate(q, 1.3635618397215403, 6);
  sqcRZGate(q, -3.141550399734489, 6);
  sqcRYGate(q, -1.9382422140110669, 7);
  sqcRZGate(q, 3.1338372009308535, 7);
  sqcRYGate(q, 0.08263175126757272, 8);
  sqcRZGate(q, 1.807977345198339, 8);
  sqcRYGate(q, 2.962005872087334, 9);
  sqcRZGate(q, 1.810356382455507, 9);
  sqcRYGate(q, -1.6152117992750428, 10);
  sqcRZGate(q, -2.799663985464045, 10);
  sqcRYGate(q, -1.805774769180796, 11);
  sqcRZGate(q, -2.961797608436519, 11);
  sqcRYGate(q, 1.7439831415487816, 12);
  sqcRZGate(q, 0.9521678656991412, 12);
  sqcRYGate(q, 3.086241159019588, 13);
  sqcRZGate(q, -0.20783939415978425, 13);
  sqcRYGate(q, 0.08417296043125846, 14);
  sqcRZGate(q, 0.2219297604765, 14);
  sqcRYGate(q, 0.08661588805502429, 15);
  sqcRZGate(q, 2.050532664072775, 15);
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
  sqcRYGate(q, -1.3366429343468937, 0);
  sqcRZGate(q, 2.9992404084212994, 0);
  sqcRYGate(q, 0.33081985602348674, 1);
  sqcRZGate(q, -2.7901369643474085, 1);
  sqcRYGate(q, -2.400758358616315, 2);
  sqcRZGate(q, -0.22822138281173296, 2);
  sqcRYGate(q, -1.7730232751439303, 3);
  sqcRZGate(q, 1.8543619175319281, 3);
  sqcRYGate(q, 2.983336321845888, 4);
  sqcRZGate(q, -2.120461665556981, 4);
  sqcRYGate(q, 0.3181870987237554, 5);
  sqcRZGate(q, -1.4914312883132979, 5);
  sqcRYGate(q, -1.5674390145875372, 6);
  sqcRZGate(q, 3.1415207041163717, 6);
  sqcRYGate(q, 0.05071076451496091, 7);
  sqcRZGate(q, -3.1083642517114436, 7);
  sqcRYGate(q, -1.5861355333710048, 8);
  sqcRZGate(q, 0.24951453515687755, 8);
  sqcRYGate(q, -0.0008920822442890497, 9);
  sqcRZGate(q, 0.5666057023467266, 9);
  sqcRYGate(q, -3.1375249049194482, 10);
  sqcRZGate(q, -2.1176789323656404, 10);
  sqcRYGate(q, 3.1384490726803773, 11);
  sqcRZGate(q, 0.830893352139869, 11);
  sqcRYGate(q, 3.1412133896218903, 12);
  sqcRZGate(q, -0.5244272087380654, 12);
  sqcRYGate(q, -1.361486314735336, 13);
  sqcRZGate(q, 1.8439012230235885, 13);
  sqcRYGate(q, -1.1839413339094238, 14);
  sqcRZGate(q, -1.059251001770468, 14);
  sqcRYGate(q, -2.6089933146510003, 15);
  sqcRZGate(q, -2.561333445757994, 15);
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
  sqcRYGate(q, 1.6191542343925898, 0);
  sqcRZGate(q, -0.07769493097009228, 0);
  sqcRYGate(q, -0.062388075924271646, 1);
  sqcRZGate(q, 0.6307503305698693, 1);
  sqcRYGate(q, -3.110719791755633, 2);
  sqcRZGate(q, 1.0655003962435527, 2);
  sqcRYGate(q, 3.1406076319495586, 3);
  sqcRZGate(q, 0.19394210254049, 3);
  sqcRYGate(q, -0.0024405481491239106, 4);
  sqcRZGate(q, 2.90034363686683, 4);
  sqcRYGate(q, -0.0061358003347148785, 5);
  sqcRZGate(q, 1.519140937447676, 5);
  sqcRYGate(q, 1.634652182896441, 6);
  sqcRZGate(q, 2.3265140749930127, 6);
  sqcRYGate(q, -0.44246359272432684, 7);
  sqcRZGate(q, -1.2380218623960904, 7);
  sqcRYGate(q, 0.0026960136845892413, 8);
  sqcRZGate(q, -0.25005500213472653, 8);
  sqcRYGate(q, 1.5855219684686588, 9);
  sqcRZGate(q, -3.1405311601862698, 9);
  sqcRYGate(q, 3.027681900313908, 10);
  sqcRZGate(q, 0.7702871151491807, 10);
  sqcRYGate(q, -2.090215399099401, 11);
  sqcRZGate(q, -0.0444689899791018, 11);
  sqcRYGate(q, -3.1333811205060655, 12);
  sqcRZGate(q, 0.6746996712093577, 12);
  sqcRYGate(q, -3.068152981063715, 13);
  sqcRZGate(q, 2.621350909165321, 13);
  sqcRYGate(q, 0.03617510684617074, 14);
  sqcRZGate(q, 1.0951118386061651, 14);
  sqcRYGate(q, -0.36686298612273893, 15);
  sqcRZGate(q, 0.8293897124472807, 15);
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
  sqcRYGate(q, -1.4262859343995071, 0);
  sqcRZGate(q, -1.8662279379190703, 0);
  sqcRYGate(q, 1.5918755687357886, 1);
  sqcRZGate(q, 2.264865460669103, 1);
  sqcRYGate(q, -3.0652074646517598, 2);
  sqcRZGate(q, -1.0051289886559127, 2);
  sqcRYGate(q, 1.729216790188037, 3);
  sqcRZGate(q, 1.7563612997529223, 3);
  sqcRYGate(q, 2.3153210430769793, 4);
  sqcRZGate(q, -0.169538794816825, 4);
  sqcRYGate(q, 1.645483805662525, 5);
  sqcRZGate(q, -3.1412871630940202, 5);
  sqcRYGate(q, 0.0007799915275628067, 6);
  sqcRZGate(q, 1.956368225847183, 6);
  sqcRYGate(q, 3.140297447422948, 7);
  sqcRZGate(q, 1.929511700076037, 7);
  sqcRYGate(q, 0.8177588471182735, 8);
  sqcRZGate(q, 0.0004959664236539041, 8);
  sqcRYGate(q, -1.566173849697015, 9);
  sqcRZGate(q, -1.6558235908819607, 9);
  sqcRYGate(q, 1.568034648499081, 10);
  sqcRZGate(q, 3.141447479603035, 10);
  sqcRYGate(q, 0.0026696328948948625, 11);
  sqcRZGate(q, -1.8335610321760045, 11);
  sqcRYGate(q, -0.0004521208013077427, 12);
  sqcRZGate(q, -2.1594136302268634, 12);
  sqcRYGate(q, 0.08506679926259865, 13);
  sqcRZGate(q, -0.6508940045138029, 13);
  sqcRYGate(q, 2.186648704748493, 14);
  sqcRZGate(q, -1.3384868934677494, 14);
  sqcRYGate(q, -0.3112052204339683, 15);
  sqcRZGate(q, 2.7368841374248443, 15);
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
  sqcRYGate(q, 1.4249408843898452, 0);
  sqcRZGate(q, 1.4095398054236157, 0);
  sqcRYGate(q, 2.803267957008286, 1);
  sqcRZGate(q, 2.450748199209536, 1);
  sqcRYGate(q, -0.3153888727648327, 2);
  sqcRZGate(q, 2.0719357169099357, 2);
  sqcRYGate(q, 2.601714401275575, 3);
  sqcRZGate(q, -0.0003016476838002546, 3);
  sqcRYGate(q, -0.3649949363426042, 4);
  sqcRZGate(q, -3.140818339889174, 4);
  sqcRYGate(q, -1.0486152817340597, 5);
  sqcRZGate(q, 0.031652782775168475, 5);
  sqcRYGate(q, -3.141046570988277, 6);
  sqcRZGate(q, -1.9826218180211024, 6);
  sqcRYGate(q, -1.5956026730439472, 7);
  sqcRZGate(q, -3.133109296880985, 7);
  sqcRYGate(q, -0.8781695751169892, 8);
  sqcRZGate(q, -0.02243916327407458, 8);
  sqcRYGate(q, -1.0256412266364812, 9);
  sqcRZGate(q, -0.47017318660505847, 9);
  sqcRYGate(q, -1.3796853639953344, 10);
  sqcRZGate(q, -2.5065612132756723, 10);
  sqcRYGate(q, 2.596345780354701, 11);
  sqcRZGate(q, -3.1411237187482834, 11);
  sqcRYGate(q, -2.8896118659150183, 12);
  sqcRZGate(q, 3.1333358469478902, 12);
  sqcRYGate(q, 2.6856583628269353, 13);
  sqcRZGate(q, -1.8338368339008884, 13);
  sqcRYGate(q, -3.095942686560515, 14);
  sqcRZGate(q, 0.976295049660191, 14);
  sqcRYGate(q, -3.0413973743508644, 15);
  sqcRZGate(q, 0.04961054592357624, 15);
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
  sqcRYGate(q, 1.5666433958953396, 0);
  sqcRZGate(q, -2.9631404945254793, 0);
  sqcRYGate(q, 0.006487130405379737, 1);
  sqcRZGate(q, 1.158155741159414, 1);
  sqcRYGate(q, -0.0027945840157839186, 2);
  sqcRZGate(q, -0.4968941760444188, 2);
  sqcRYGate(q, -1.4311366570152302, 3);
  sqcRZGate(q, -1.5682028566905009, 3);
  sqcRYGate(q, -2.3735682179608504, 4);
  sqcRZGate(q, 1.5707889271015605, 4);
  sqcRYGate(q, 3.064407807220798, 5);
  sqcRZGate(q, 1.6028987894164304, 5);
  sqcRYGate(q, -0.023938820568336103, 6);
  sqcRZGate(q, -1.5886422513832201, 6);
  sqcRYGate(q, -1.5771855635917058, 7);
  sqcRZGate(q, -1.5781496122615408, 7);
  sqcRYGate(q, -3.101516861899643, 8);
  sqcRZGate(q, -1.5931344706635304, 8);
  sqcRYGate(q, 0.0006123605162668372, 9);
  sqcRZGate(q, -2.508574113845584, 9);
  sqcRYGate(q, 0.00010131678584641485, 10);
  sqcRZGate(q, 0.9354941281177283, 10);
  sqcRYGate(q, -2.824721719561386, 11);
  sqcRZGate(q, -1.5702070087285724, 11);
  sqcRYGate(q, 1.541804975716138, 12);
  sqcRZGate(q, -1.5721860144408648, 12);
  sqcRYGate(q, -0.040205366292791034, 13);
  sqcRZGate(q, 0.3474730837178735, 13);
  sqcRYGate(q, -0.0019544130480933144, 14);
  sqcRZGate(q, 2.405003408782583, 14);
  sqcRYGate(q, -0.07368386087262253, 15);
  sqcRZGate(q, -2.73394458790427, 15);
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
  sqcRYGate(q, 2.3810432288408743, 0);
  sqcRZGate(q, 0.8651707638193207, 0);
  sqcRYGate(q, 0.04057045263117142, 1);
  sqcRZGate(q, -2.8585886601746755, 1);
  sqcRYGate(q, -1.5680385226128597, 2);
  sqcRZGate(q, 0.5557276955721225, 2);
  sqcRYGate(q, 1.57192300333567, 3);
  sqcRZGate(q, 0.4642036561397631, 3);
  sqcRYGate(q, 1.5710182631411174, 4);
  sqcRZGate(q, -2.565602212554613, 4);
  sqcRYGate(q, 1.5710133649737485, 5);
  sqcRZGate(q, -3.0662605004076444, 5);
  sqcRYGate(q, 1.570842447139852, 6);
  sqcRZGate(q, -2.4890193958747, 6);
  sqcRYGate(q, -1.5691810991079282, 7);
  sqcRZGate(q, 2.9203701512946902, 7);
  sqcRYGate(q, -1.5707685463962866, 8);
  sqcRZGate(q, -2.487938869789241, 8);
  sqcRYGate(q, -0.5515551757576115, 9);
  sqcRZGate(q, -1.690895108374981, 9);
  sqcRYGate(q, 1.5704731208817604, 10);
  sqcRZGate(q, 0.4553076713592892, 10);
  sqcRYGate(q, 1.5702165101427585, 11);
  sqcRZGate(q, -1.4875809881210174, 11);
  sqcRYGate(q, 1.5689089156362794, 12);
  sqcRZGate(q, 2.2314333922551173, 12);
  sqcRYGate(q, -1.571688162568618, 13);
  sqcRZGate(q, -1.4973988373464322, 13);
  sqcRYGate(q, 1.5992406680384788, 14);
  sqcRZGate(q, 2.247254271602209, 14);
  sqcRYGate(q, -1.3657466192619285, 15);
  sqcRZGate(q, -1.1701496207240378, 15);

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
