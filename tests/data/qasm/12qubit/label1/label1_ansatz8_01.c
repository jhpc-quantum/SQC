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

  sqcRYGate(q, 1.9740223794159757, 0);
  sqcRYGate(q, -2.607914246932759, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9066416816503757, 0);
  sqcRYGate(q, 2.585456952298565, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9412252939651458, 2);
  sqcRYGate(q, -1.553184614556024, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1289306198391253, 2);
  sqcRYGate(q, 3.091064528780465, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8162525966851781, 4);
  sqcRYGate(q, -0.48060348441366685, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.4022882610383878, 4);
  sqcRYGate(q, -2.015931924366673, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.5738485653632397, 6);
  sqcRYGate(q, -0.2399661708031182, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1871531053785107, 6);
  sqcRYGate(q, 0.32765577644180865, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2354738818338644, 8);
  sqcRYGate(q, -1.0922956203272403, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.4029059769456698, 8);
  sqcRYGate(q, 0.6152661335025078, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.7149262246719827, 10);
  sqcRYGate(q, 0.37163518034735693, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.4547187967111948, 10);
  sqcRYGate(q, -1.9490249835530296, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.029438318918208292, 0);
  sqcRYGate(q, 0.44595338513803195, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.6302651952770009, 0);
  sqcRYGate(q, 1.4660207388490814, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.750971126190334, 2);
  sqcRYGate(q, 0.11683544121387532, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.3788029073015826, 2);
  sqcRYGate(q, 0.8722688850165383, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.2017659307957722, 4);
  sqcRYGate(q, 0.10324852931336274, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -2.808268248468582, 4);
  sqcRYGate(q, -2.1706826805076957, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.2284538496181389, 6);
  sqcRYGate(q, -2.5313650836825254, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -3.0523067359511193, 6);
  sqcRYGate(q, -0.11914942705979215, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.8924538229826617, 8);
  sqcRYGate(q, -0.40160927428536297, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.9767080019794632, 8);
  sqcRYGate(q, 3.135352758098492, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 2.4855512979002925, 1);
  sqcRYGate(q, -1.5228486740153215, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6442153592734756, 1);
  sqcRYGate(q, -1.5423409953129346, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.378000269258816, 3);
  sqcRYGate(q, -1.6573846697421377, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.9176931302755167, 3);
  sqcRYGate(q, -1.731464027235497, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.8982186498556652, 5);
  sqcRYGate(q, -2.2215049360717636, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.22620526553571035, 5);
  sqcRYGate(q, -1.3143719611466984, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.5466363531947538, 7);
  sqcRYGate(q, -0.4790517902026741, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -2.928634005555481, 7);
  sqcRYGate(q, -3.0777249613016724, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.114659601176236, 9);
  sqcRYGate(q, 0.26569246333320606, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.9301887039128824, 9);
  sqcRYGate(q, 0.1898750733716259, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.4879644480346367, 0);
  sqcRYGate(q, -2.429870449097021, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6044053467064355, 0);
  sqcRYGate(q, 2.946779930686644, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.427391060620388, 2);
  sqcRYGate(q, 2.133163672697699, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.09618578559288068, 2);
  sqcRYGate(q, -0.11569352299877343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6240284351299996, 4);
  sqcRYGate(q, 1.535404437014889, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.8041918925697056, 4);
  sqcRYGate(q, 2.5784010853796584, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.7765007539828792, 6);
  sqcRYGate(q, 0.9587706592922758, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8585599090882896, 6);
  sqcRYGate(q, 2.715664795219326, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.2723586388962076, 8);
  sqcRYGate(q, 2.76266888795207, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.0403329079842356, 8);
  sqcRYGate(q, -3.1286078099355485, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 1.6646623063531054, 10);
  sqcRYGate(q, 3.08290985899596, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 1.4650633328813807, 10);
  sqcRYGate(q, -2.6091327894905953, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 0.5380678161613641, 0);
  sqcRYGate(q, -0.5285080041706058, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7386084004380951, 0);
  sqcRYGate(q, -3.018798586868276, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7517712868186148, 2);
  sqcRYGate(q, -0.5842273060049923, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -0.010116042592488661, 2);
  sqcRYGate(q, 0.09742934067188222, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.9067785903225651, 4);
  sqcRYGate(q, -1.4306940681911717, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.9655581143253484, 4);
  sqcRYGate(q, -0.41953553397721377, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.864518105836904, 6);
  sqcRYGate(q, 0.5119077704989442, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1323210646665682, 6);
  sqcRYGate(q, -3.040817595534539, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -0.19375372142164426, 8);
  sqcRYGate(q, 2.41431518210198, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.4012641097994361, 8);
  sqcRYGate(q, 1.181924780002774, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -1.989903261412044, 1);
  sqcRYGate(q, 0.3558417873878154, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.1218752234705613, 1);
  sqcRYGate(q, -0.0012364235675896098, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2540109039442915, 3);
  sqcRYGate(q, -0.5043860628925647, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 0.25830716941402354, 3);
  sqcRYGate(q, -1.7960176019436196, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 2.948660785279725, 5);
  sqcRYGate(q, 0.34093537138798613, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.31179289898351925, 5);
  sqcRYGate(q, -2.942774715708337, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.6627050639513369, 7);
  sqcRYGate(q, 0.9665647087720464, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -0.6856610587963696, 7);
  sqcRYGate(q, -2.2392423699910573, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.497610486428047, 9);
  sqcRYGate(q, 2.3284869721065395, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -0.009726635491309922, 9);
  sqcRYGate(q, -2.253827164732166, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, -1.355168222746845, 0);
  sqcRYGate(q, 1.9800389557657418, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.12403663830547185, 0);
  sqcRYGate(q, -2.885005626395852, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8023972586660201, 2);
  sqcRYGate(q, 0.46397717300650854, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6601096563193387, 2);
  sqcRYGate(q, 1.246466201831901, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.22095555956928603, 4);
  sqcRYGate(q, 2.562208721455712, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.8266963015521815, 4);
  sqcRYGate(q, 1.6522300413608022, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.336649499465674, 6);
  sqcRYGate(q, -0.3931404857231957, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0954421556658698, 6);
  sqcRYGate(q, -3.1390631909396998, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5693466214870244, 8);
  sqcRYGate(q, 1.579734926632442, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.7931937797966436, 8);
  sqcRYGate(q, -3.1062847765873993, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.8960259358844578, 10);
  sqcRYGate(q, 0.36027033171545675, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -2.5695520470640276, 10);
  sqcRYGate(q, -2.4697102886400377, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -1.9586939149365183, 0);
  sqcRYGate(q, 0.8383493714349219, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4106707429124814, 0);
  sqcRYGate(q, 1.0892578369096357, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.25672219132521124, 2);
  sqcRYGate(q, -1.9250145281726179, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 0.07410551796320863, 2);
  sqcRYGate(q, -3.1365030357330386, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, 1.7290723713053353, 4);
  sqcRYGate(q, -0.3938044721710302, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -0.3015500808845601, 4);
  sqcRYGate(q, 1.819532378149895, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, -1.3847424728333486, 6);
  sqcRYGate(q, -0.7962775495985759, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 0.00794618782086155, 6);
  sqcRYGate(q, -3.136852226997536, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 2.560843293093957, 8);
  sqcRYGate(q, 2.7306113956348708, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, -0.34808531761551814, 8);
  sqcRYGate(q, 1.4425332107526678, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 0.318221942544292, 1);
  sqcRYGate(q, 3.080099446353525, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.06338164179123607, 1);
  sqcRYGate(q, 1.7465606022405078, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.282077956012281, 3);
  sqcRYGate(q, -1.8479830875727243, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.11921184835988452, 3);
  sqcRYGate(q, 3.125852909047126, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.6604509623867258, 5);
  sqcRYGate(q, 1.2693026822681464, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 0.07981262180620338, 5);
  sqcRYGate(q, 0.05374044703482639, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 1.381945361992785, 7);
  sqcRYGate(q, -0.3025070450690821, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.9184038390154727, 7);
  sqcRYGate(q, -0.1120008629192375, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 1.745724025290362, 9);
  sqcRYGate(q, -0.41906633503063784, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 0.0017041366291303817, 9);
  sqcRYGate(q, -1.318656022761872, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 2.2488284883695173, 0);
  sqcRYGate(q, 3.016339827784955, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0695597582024021, 0);
  sqcRYGate(q, 1.7095585868457384, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.032330471841166, 2);
  sqcRYGate(q, 1.234746610022869, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0525358128541082, 2);
  sqcRYGate(q, 2.5458260418765315, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.9273470345279105, 4);
  sqcRYGate(q, -1.3817187860189355, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.4126804294909459, 4);
  sqcRYGate(q, -1.5540642989885418, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.35442284966678, 6);
  sqcRYGate(q, 1.8114691286567712, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.8235998245052607, 6);
  sqcRYGate(q, -2.7936637540080564, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5702496884716526, 8);
  sqcRYGate(q, -1.6018236567696968, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, 0.3691428133013046, 8);
  sqcRYGate(q, -1.5765609926029187, 9);
  sqcCXGate(q, 8, 9);
  sqcRYGate(q, -0.7998144959921009, 10);
  sqcRYGate(q, -1.7239568259070932, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, 2.2450166132996663, 10);
  sqcRYGate(q, -2.7019402304422275, 11);
  sqcCXGate(q, 10, 11);
  sqcRYGate(q, -0.07390821618245681, 0);
  sqcRYGate(q, 2.428954398557739, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0048228667870047, 0);
  sqcRYGate(q, -2.996852369045748, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.09006714548616923, 2);
  sqcRYGate(q, 1.5060278704754175, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -3.0069062216999045, 2);
  sqcRYGate(q, 2.9821454160670373, 4);
  sqcCXGate(q, 2, 4);
  sqcRYGate(q, -1.3934455759661928, 4);
  sqcRYGate(q, 1.1864083904401903, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 0.06486197495753213, 4);
  sqcRYGate(q, 0.07255027956085157, 6);
  sqcCXGate(q, 4, 6);
  sqcRYGate(q, 2.5918836065834205, 6);
  sqcRYGate(q, 0.5514812967963296, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, 3.1192257068101776, 6);
  sqcRYGate(q, 0.00030369606203972666, 8);
  sqcCXGate(q, 6, 8);
  sqcRYGate(q, -2.5755205714467664, 8);
  sqcRYGate(q, 1.7368706481720202, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.556191865684506, 8);
  sqcRYGate(q, 1.1040609748062424, 10);
  sqcCXGate(q, 8, 10);
  sqcRYGate(q, 1.5591836155973458, 1);
  sqcRYGate(q, 3.090628285296549, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.9050062786520963, 1);
  sqcRYGate(q, 1.483153615273313, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.0520047783506183, 3);
  sqcRYGate(q, 1.7373478149092452, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, -0.07544399190855694, 3);
  sqcRYGate(q, 3.0935846332830215, 5);
  sqcCXGate(q, 3, 5);
  sqcRYGate(q, 1.8954465527397237, 5);
  sqcRYGate(q, 2.8118821853133786, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, -0.022266887171668692, 5);
  sqcRYGate(q, 3.0900115541273685, 7);
  sqcCXGate(q, 5, 7);
  sqcRYGate(q, 2.040400720442716, 7);
  sqcRYGate(q, -2.985125260881576, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, -3.0304724868624904, 7);
  sqcRYGate(q, -3.0673564669738824, 9);
  sqcCXGate(q, 7, 9);
  sqcRYGate(q, 0.1599683102468452, 9);
  sqcRYGate(q, -1.1937210983911057, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.5724201886474254, 9);
  sqcRYGate(q, -0.4283002320814404, 11);
  sqcCXGate(q, 9, 11);
  sqcRYGate(q, 1.534450415196038, 0);
  sqcRYGate(q, -1.5388557706408426, 1);
  sqcRYGate(q, 1.698894162591567, 2);
  sqcRYGate(q, -3.10462350104766, 3);
  sqcRYGate(q, 1.1392672838384172, 4);
  sqcRYGate(q, 0.609030958417898, 5);
  sqcRYGate(q, -2.2236051787651965, 6);
  sqcRYGate(q, 1.5886081505912593, 7);
  sqcRYGate(q, -1.5384891099126372, 8);
  sqcRYGate(q, 1.5611129650380327, 9);
  sqcRYGate(q, 1.5780684130021108, 10);
  sqcRYGate(q, 1.5556003181362463, 11);

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
