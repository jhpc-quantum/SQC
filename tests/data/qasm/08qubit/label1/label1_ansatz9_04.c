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

  sqcRYGate(q, 0.8047603534482588, 0);
  sqcRYGate(q, -1.0194541979758602, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.386109302359963, 0);
  sqcRYGate(q, -0.16715763819878582, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4346204009178205, 2);
  sqcRYGate(q, 1.0686608291006645, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5658943659477327, 2);
  sqcRYGate(q, -2.2187226009338175, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.9102025523923998, 4);
  sqcRYGate(q, 0.773913274865004, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3413208791536126, 4);
  sqcRYGate(q, 2.537398038768234, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.2740854116722513, 6);
  sqcRYGate(q, 0.687992126113234, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.1515926459937598, 6);
  sqcRYGate(q, 2.809629623107166, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.014261929836396568, 0);
  sqcRYGate(q, 2.059925244659341, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7128495708270712, 0);
  sqcRYGate(q, 2.7267699949811335, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4401303718358411, 2);
  sqcRYGate(q, 0.2554943749639922, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.574111745857552, 2);
  sqcRYGate(q, -0.915447340281399, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.2227370982708985, 4);
  sqcRYGate(q, 0.10298379133307468, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2963215281259661, 4);
  sqcRYGate(q, 1.955149773782283, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.424415407912824, 1);
  sqcRYGate(q, -2.015636798273145, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.085208801599898, 1);
  sqcRYGate(q, 1.9644405289483426, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1903829931066778, 3);
  sqcRYGate(q, -0.2883259434541357, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.4335311830096762, 3);
  sqcRYGate(q, -2.7801713622569806, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.342496995034961, 5);
  sqcRYGate(q, 1.573159525000138, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.4054064947719516, 5);
  sqcRYGate(q, -0.3235581429661698, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.1860257217716979, 0);
  sqcRYGate(q, -1.1498846795364575, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0980628938953763, 0);
  sqcRYGate(q, -0.10805542472844465, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8958893559850987, 1);
  sqcRYGate(q, -0.30011222474186044, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.9053772826955178, 1);
  sqcRYGate(q, -0.866973332419348, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.1592840014133543, 2);
  sqcRYGate(q, 2.5807095855071815, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.6749754217551072, 2);
  sqcRYGate(q, -1.4579676915650044, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -1.6770237800064631, 3);
  sqcRYGate(q, -2.2244785254362323, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.9007504912369619, 3);
  sqcRYGate(q, -2.4519234510296903, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.18204442081639804, 4);
  sqcRYGate(q, 1.6817081119849393, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.5217691094522561, 4);
  sqcRYGate(q, 1.3108738528946189, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.982100726545057, 5);
  sqcRYGate(q, -0.7876525641795125, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.927731705239536, 5);
  sqcRYGate(q, 2.702189963720964, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.1292511061230344, 0);
  sqcRYGate(q, 1.3242782223536735, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.47635375831705307, 0);
  sqcRYGate(q, -2.7693058066725267, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.0984446462904735, 2);
  sqcRYGate(q, 1.7597542428747248, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.559680311713656, 2);
  sqcRYGate(q, -1.2036367285541643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.1341883662020975, 4);
  sqcRYGate(q, -0.9295154552940066, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.1583753850360363, 4);
  sqcRYGate(q, -2.230063071172776, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5735120510930827, 6);
  sqcRYGate(q, -1.932237398285376, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4801244279363837, 6);
  sqcRYGate(q, -1.053711514106121, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.619835700849442, 0);
  sqcRYGate(q, 2.1212774291083827, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9174756816895835, 0);
  sqcRYGate(q, -2.9062713883491966, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5615314950379622, 2);
  sqcRYGate(q, -2.8942022259084546, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.9256350529045676, 2);
  sqcRYGate(q, 3.118572596825214, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.040658611718918, 4);
  sqcRYGate(q, -2.4922002457161816, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.6513761062998564, 4);
  sqcRYGate(q, 0.7958768433466153, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.8127726642389401, 1);
  sqcRYGate(q, 0.32772213776145787, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.714970797380132, 1);
  sqcRYGate(q, 3.061795224987153, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.8580861622204297, 3);
  sqcRYGate(q, -1.2876505693389009, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6686365271410075, 3);
  sqcRYGate(q, -1.763414373560926, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -1.644209885067437, 5);
  sqcRYGate(q, -1.2157957407524476, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.1437678886912357, 5);
  sqcRYGate(q, 0.7624274965744462, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3538253907448992, 0);
  sqcRYGate(q, -0.142511237132112, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.637291121711125, 0);
  sqcRYGate(q, 0.24246910531564783, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.9560360040057401, 1);
  sqcRYGate(q, -2.5363368651937654, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9102607920542667, 1);
  sqcRYGate(q, -0.5744758720886224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1149816008690063, 2);
  sqcRYGate(q, -2.4175160057643565, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.3177011639108898, 2);
  sqcRYGate(q, 1.2519293414974346, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.904999522500933, 3);
  sqcRYGate(q, 2.719041426911343, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4136198483574915, 3);
  sqcRYGate(q, 3.0782910358809317, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.3786285536418552, 4);
  sqcRYGate(q, 2.6449803195549353, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.39488028826557003, 4);
  sqcRYGate(q, -1.2440796824855116, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.3490143176150293, 5);
  sqcRYGate(q, 0.15150356260186282, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.3665814690113818, 5);
  sqcRYGate(q, 1.2460744838787032, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.40055140334542755, 0);
  sqcRYGate(q, -0.7350891695626613, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.04475496247518181, 0);
  sqcRYGate(q, 2.567927317940973, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3874516118745062, 2);
  sqcRYGate(q, -1.4366335532838177, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.46662410989341874, 2);
  sqcRYGate(q, -1.229227235047334, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.34073999912754704, 4);
  sqcRYGate(q, 2.773527755821622, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.1048949546661087, 4);
  sqcRYGate(q, 1.799995808536205, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.514880005428638, 6);
  sqcRYGate(q, -1.4618318926839857, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2204289928886904, 6);
  sqcRYGate(q, -2.9692851736470427, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.4561215067575441, 0);
  sqcRYGate(q, -0.6639850683165731, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.66466995765995, 0);
  sqcRYGate(q, 0.763371544618086, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3031861604899229, 2);
  sqcRYGate(q, 1.5429073391001287, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.3585445675466587, 2);
  sqcRYGate(q, -2.7501263958325155, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.915911310906908, 4);
  sqcRYGate(q, -1.601407490438267, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.017835879256494106, 4);
  sqcRYGate(q, 1.3987425583125461, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9484573888423253, 1);
  sqcRYGate(q, 2.824304267894505, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.3451080185656643, 1);
  sqcRYGate(q, 1.8341921340483385, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.819297088427336, 3);
  sqcRYGate(q, -2.062484573062182, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.10029148622954802, 3);
  sqcRYGate(q, 2.1124730279617685, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6265111630392964, 5);
  sqcRYGate(q, 1.6449411471231032, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.668581475794386, 5);
  sqcRYGate(q, -2.299950938214067, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.3394137516754134, 0);
  sqcRYGate(q, -2.3814436696652135, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0967407027524239, 0);
  sqcRYGate(q, -2.91266215450109, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.01937762187119141, 1);
  sqcRYGate(q, 1.180034537506039, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6836222804508285, 1);
  sqcRYGate(q, 0.46283063940854885, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3779324021851833, 2);
  sqcRYGate(q, -2.7242955602203427, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.3431156658907728, 2);
  sqcRYGate(q, -0.5646588467046909, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.1449915062889113, 3);
  sqcRYGate(q, -1.831816230721178, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.69703778108169, 3);
  sqcRYGate(q, 3.098962199538254, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.305897635264829, 4);
  sqcRYGate(q, 0.058632485387570786, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -2.277013510612, 4);
  sqcRYGate(q, -1.5805527959626646, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 1.4637433069233519, 5);
  sqcRYGate(q, -1.6346167319459355, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.06105391088190438, 5);
  sqcRYGate(q, -0.574657386781921, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.541823336668935, 0);
  sqcRYGate(q, -2.8668035879836373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.06305345998119627, 0);
  sqcRYGate(q, 2.324626125818624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.0158575000784937, 2);
  sqcRYGate(q, 2.9667540574116353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1266703276856704, 2);
  sqcRYGate(q, 3.0568466127818565, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.42142116478012526, 4);
  sqcRYGate(q, -1.5622693394564724, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6823823184393251, 4);
  sqcRYGate(q, -1.5682317862241721, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5474231870848871, 6);
  sqcRYGate(q, -2.212563165514681, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4226125428125629, 6);
  sqcRYGate(q, 0.9039930917002276, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3726748274262508, 0);
  sqcRYGate(q, -3.0147107883588884, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.08875500194251, 0);
  sqcRYGate(q, 1.1634022388183416, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7826369790214276, 2);
  sqcRYGate(q, -0.43930862775266216, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -2.285293386201089, 2);
  sqcRYGate(q, 2.3467874580157537, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.88413812155262, 4);
  sqcRYGate(q, -1.8727775847890138, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.170193903056127, 4);
  sqcRYGate(q, 2.565691925073158, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.113174642543491, 1);
  sqcRYGate(q, 1.5231451299301257, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2171802425321308, 1);
  sqcRYGate(q, -1.0521618798944008, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.9900183641881904, 3);
  sqcRYGate(q, 2.1826497779157403, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4785575832617317, 3);
  sqcRYGate(q, -1.2301241822638915, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -2.7107752844593382, 5);
  sqcRYGate(q, -3.0838658098054665, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.96719921606048, 5);
  sqcRYGate(q, 1.4209027149966709, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.9504199369180837, 0);
  sqcRYGate(q, -0.37663867833139886, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.399984708764653, 0);
  sqcRYGate(q, 2.847805715778657, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.7365534959867799, 1);
  sqcRYGate(q, 2.799299430818689, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7938268153400287, 1);
  sqcRYGate(q, -2.150908555332812, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8486306011357565, 2);
  sqcRYGate(q, -3.1072097727712618, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.0043998598928257, 2);
  sqcRYGate(q, 0.4322211359511021, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.3679158018798072, 3);
  sqcRYGate(q, 0.9768735330683489, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.4680493116150535, 3);
  sqcRYGate(q, 1.711168510147262, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.0523429491301486, 4);
  sqcRYGate(q, -2.2514328944046484, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -1.484081644980705, 4);
  sqcRYGate(q, -1.3579196118732213, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -3.1179684337387217, 5);
  sqcRYGate(q, 3.0787269131552604, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.8022608045561241, 5);
  sqcRYGate(q, -2.1672687940742765, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.11701509003041721, 0);
  sqcRYGate(q, 2.995848475374603, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1416112600735433, 0);
  sqcRYGate(q, -1.854120410005848, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3221654524787736, 2);
  sqcRYGate(q, 2.046556715077859, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.648605667760555, 2);
  sqcRYGate(q, -2.166403238089904, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1054707125639656, 4);
  sqcRYGate(q, -0.7769044678076504, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0995985264903394, 4);
  sqcRYGate(q, -2.964770121120908, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.0777948257029824, 6);
  sqcRYGate(q, -2.6815909621045035, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.707566840532953, 6);
  sqcRYGate(q, 1.6754804027413035, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.551637312405453, 0);
  sqcRYGate(q, -2.131262493355184, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4538895948607446, 0);
  sqcRYGate(q, -0.579058430424591, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6351743228059195, 2);
  sqcRYGate(q, 0.6702345494849313, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.9752131197831133, 2);
  sqcRYGate(q, -1.1149245956854923, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 2.1337447370740508, 4);
  sqcRYGate(q, -1.6525162327516263, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.2974144143849333, 4);
  sqcRYGate(q, 0.9852736185818864, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.6586144559616612, 1);
  sqcRYGate(q, -1.6504846826413084, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0744315588555926, 1);
  sqcRYGate(q, -1.3263085419672096, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.2798478159682322, 3);
  sqcRYGate(q, -2.0427189488258524, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.5897038820679184, 3);
  sqcRYGate(q, -2.947955990182658, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6100867068602316, 5);
  sqcRYGate(q, 0.3552584693004751, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -2.0591404723350273, 5);
  sqcRYGate(q, 2.4150847761370424, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.769887314569513, 0);
  sqcRYGate(q, 0.6255625030911195, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.06368160711232829, 0);
  sqcRYGate(q, 0.2891947396711191, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1170409912459247, 1);
  sqcRYGate(q, 0.3298378749640686, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.003983116752348, 1);
  sqcRYGate(q, 0.690979675257816, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.731567302879906, 2);
  sqcRYGate(q, -1.4416903461864459, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.7585999901639884, 2);
  sqcRYGate(q, -0.6483440810008991, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.0805410878227297, 3);
  sqcRYGate(q, -2.672440651340972, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.5924296744896815, 3);
  sqcRYGate(q, 2.2629567805779787, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.8153523826361724, 4);
  sqcRYGate(q, -3.004498387272214, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.734918928548234, 4);
  sqcRYGate(q, -0.8392433868648741, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 0.12897872926363796, 5);
  sqcRYGate(q, 2.068115671149811, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.3449834838642323, 5);
  sqcRYGate(q, -1.1408466671959392, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2373677763867361, 0);
  sqcRYGate(q, -0.2557865481541661, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5640186640002571, 0);
  sqcRYGate(q, -0.4109128265911218, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8721718302031016, 2);
  sqcRYGate(q, -0.27210411959760405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.841348882154413, 2);
  sqcRYGate(q, 0.2853255246198119, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.365149467593085, 4);
  sqcRYGate(q, 2.2748283119123998, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1333494935412811, 4);
  sqcRYGate(q, -0.20593082226835513, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.6402334815254492, 6);
  sqcRYGate(q, 1.4143778636085678, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.480399246394952, 6);
  sqcRYGate(q, -2.6268581639154385, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.1604416730100624, 0);
  sqcRYGate(q, -3.065460135889454, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.167898308974626, 0);
  sqcRYGate(q, 2.568558405026273, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.883263049032431, 2);
  sqcRYGate(q, -0.728193496207814, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.7959737897249772, 2);
  sqcRYGate(q, -1.9141746935783202, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4283021107671194, 4);
  sqcRYGate(q, 1.1057688714409657, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.0064518052975346, 4);
  sqcRYGate(q, 1.1295400244135765, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.5046497209146915, 1);
  sqcRYGate(q, 2.5119117626041514, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.3875164588765814, 1);
  sqcRYGate(q, 2.9289995473751533, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.9865770046866347, 3);
  sqcRYGate(q, -0.7059685864092994, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.6734621910537175, 3);
  sqcRYGate(q, -1.7697122512769081, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.5327048645655277, 5);
  sqcRYGate(q, -2.7012088440265916, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.259071537415463, 5);
  sqcRYGate(q, 0.6042985495169626, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.7283132609922579, 0);
  sqcRYGate(q, -2.406063478443818, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.3908265505224209, 0);
  sqcRYGate(q, 1.8469605459016003, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.7926419385515162, 1);
  sqcRYGate(q, 1.4466666454639232, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7523714589307193, 1);
  sqcRYGate(q, 0.4231589370019586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3485212822501185, 2);
  sqcRYGate(q, 1.0347685487627434, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 2.027494342551573, 2);
  sqcRYGate(q, -1.408358157600401, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 1.6258650466249096, 3);
  sqcRYGate(q, -2.8836703746131853, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.13489154708875972, 3);
  sqcRYGate(q, 0.1129676908562323, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.387867966375607, 4);
  sqcRYGate(q, 0.21245408177148123, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.058180657761254, 4);
  sqcRYGate(q, -0.9767820002307225, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.2252245021583779, 5);
  sqcRYGate(q, 1.928349488417779, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9043729605183737, 5);
  sqcRYGate(q, -1.8210633583470566, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.2050134996457729, 0);
  sqcRYGate(q, 2.8118554769704853, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.300134615640373, 0);
  sqcRYGate(q, -1.4675882741671566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6596566483982766, 2);
  sqcRYGate(q, 1.8905644119671017, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.0229743366327426, 2);
  sqcRYGate(q, -1.6827106785850432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6801786354225836, 4);
  sqcRYGate(q, -1.714498351442319, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.0889337268521615, 4);
  sqcRYGate(q, 2.3184085039379014, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.22408147367670775, 6);
  sqcRYGate(q, -1.4862533588195603, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.07902396283130209, 6);
  sqcRYGate(q, 1.7854759723156584, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.560558663181931, 0);
  sqcRYGate(q, -0.8430193035742075, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.0476959240443544, 0);
  sqcRYGate(q, -2.887934631267174, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.3255552844126388, 2);
  sqcRYGate(q, -1.2311695243790253, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.4360576865694205, 2);
  sqcRYGate(q, -3.0471871466376688, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2674217690816656, 4);
  sqcRYGate(q, -0.9578189236604535, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.0372505513421002, 4);
  sqcRYGate(q, 0.28302254983481845, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.17061942868755242, 1);
  sqcRYGate(q, 1.4414314338766907, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9774512658991865, 1);
  sqcRYGate(q, -1.3129425394567853, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3045747012670894, 3);
  sqcRYGate(q, 2.722639900329619, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.4515120668052823, 3);
  sqcRYGate(q, 0.673129896847823, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.047608981096751636, 5);
  sqcRYGate(q, 2.25302076792419, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -1.4533061776933998, 5);
  sqcRYGate(q, -0.7601734429350477, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6803540910399982, 0);
  sqcRYGate(q, -1.4931321889968794, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4533323843915666, 0);
  sqcRYGate(q, 1.2040683292446952, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.029623083756152, 1);
  sqcRYGate(q, 2.2818237609879306, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6673187063096493, 1);
  sqcRYGate(q, 1.1484059263930475, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.47404320077207074, 2);
  sqcRYGate(q, -1.5286135771597849, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, 0.8439813246779244, 2);
  sqcRYGate(q, -2.8971136807679985, 5);
  sqcCXGate(q, 2, 5);
  sqcRYGate(q, -2.1921464761591976, 3);
  sqcRYGate(q, 0.004926518014526471, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.8860635898151461, 3);
  sqcRYGate(q, 1.1553554688815595, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.143650095970683, 4);
  sqcRYGate(q, 2.2342657219078754, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, -0.26514407158725106, 4);
  sqcRYGate(q, -0.8926927424609195, 7);
  sqcCXGate(q, 4, 7);
  sqcRYGate(q, 2.3587365107672573, 5);
  sqcRYGate(q, 0.7674524238254951, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.8248829333609895, 5);
  sqcRYGate(q, 3.096430507168777, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.730422941379161, 0);
  sqcRYGate(q, 1.1868064047271618, 1);
  sqcRYGate(q, -1.3149034180894859, 2);
  sqcRYGate(q, -1.5743197495554615, 3);
  sqcRYGate(q, 0.50208500515953, 4);
  sqcRYGate(q, -0.2102336606033106, 5);
  sqcRYGate(q, 2.1362358375158816, 6);
  sqcRYGate(q, 0.6444833419521547, 7);

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
