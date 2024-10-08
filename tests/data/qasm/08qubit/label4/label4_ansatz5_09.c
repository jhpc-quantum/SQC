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

  sqcRYGate(q, 0.01883484377794438, 0);
  sqcRYGate(q, 1.3659215033823495, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.278373939845527, 0);
  sqcRYGate(q, 0.6366921948780506, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4556946794413568, 2);
  sqcRYGate(q, -1.5899355758992852, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8010912375626984, 2);
  sqcRYGate(q, 2.3195656363634023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6530709350922397, 4);
  sqcRYGate(q, 1.6230353223582539, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.136742945859731, 4);
  sqcRYGate(q, -1.4882652526936866, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.1561711371924632, 6);
  sqcRYGate(q, 0.14892710388401598, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.0255423447430085, 6);
  sqcRYGate(q, 1.117281000474892, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0559123788990403, 1);
  sqcRYGate(q, -2.8953443374975, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.874143237866385, 1);
  sqcRYGate(q, 0.22339459076646961, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.561543732524335, 3);
  sqcRYGate(q, 0.1664494386586215, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.296054452174434, 3);
  sqcRYGate(q, 2.0101421370828545, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6014523740545603, 5);
  sqcRYGate(q, -0.34685674401608324, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.798037053067046, 5);
  sqcRYGate(q, -1.2265429038619278, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.9888140129352955, 0);
  sqcRYGate(q, 2.618465400301098, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.006596001788769055, 0);
  sqcRYGate(q, -0.44985825317833683, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.800749433128792, 2);
  sqcRYGate(q, 3.0201105945414892, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8734404893844667, 2);
  sqcRYGate(q, 0.336421449286358, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.0206873584648442, 4);
  sqcRYGate(q, -0.8661118113511306, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.2236225515939285, 4);
  sqcRYGate(q, 0.41492694970015714, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.5707405120239373, 6);
  sqcRYGate(q, -0.35040451900662006, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.1008585654806629, 6);
  sqcRYGate(q, 3.0242127503935374, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0316628341269345, 1);
  sqcRYGate(q, 1.8260471459761858, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.24405736178725615, 1);
  sqcRYGate(q, -1.1844662009428164, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.0835597787963982, 3);
  sqcRYGate(q, -0.2007173690671209, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.6926775901972377, 3);
  sqcRYGate(q, 0.9294296193135834, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.750930367029789, 5);
  sqcRYGate(q, 1.1826542632820838, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.66395675197606, 5);
  sqcRYGate(q, 0.46040544630344726, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.081173478669133, 0);
  sqcRYGate(q, -1.068766305149224, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.036358072895472, 0);
  sqcRYGate(q, 1.7784648254513833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5624299919824622, 2);
  sqcRYGate(q, -1.8950801101331598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7787645404412826, 2);
  sqcRYGate(q, -2.4704609855648725, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.318287466680217, 4);
  sqcRYGate(q, -1.5584051673041281, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.7062384196531546, 4);
  sqcRYGate(q, 0.9490855045779583, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.1186574560889877, 6);
  sqcRYGate(q, -2.8568785405670525, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.44216107956314143, 6);
  sqcRYGate(q, 0.0017752525619484471, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.5128814573440916, 1);
  sqcRYGate(q, 1.17690977329206, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6137856084116828, 1);
  sqcRYGate(q, -2.980776830949765, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9532513214633715, 3);
  sqcRYGate(q, 2.9345468566918385, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.374106223208429, 3);
  sqcRYGate(q, 0.4960348128705148, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.23916228672837822, 5);
  sqcRYGate(q, 3.004248353586266, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.44952059201126815, 5);
  sqcRYGate(q, -1.672110522191507, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.6271366014675213, 0);
  sqcRYGate(q, -2.8445103871912156, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.038087131783592, 0);
  sqcRYGate(q, -0.7233125066921342, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5954115747395528, 2);
  sqcRYGate(q, -1.900360178903382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0756347748398074, 2);
  sqcRYGate(q, 3.0634265283708544, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0747361487732485, 4);
  sqcRYGate(q, -0.24628848879329635, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.968844975443737, 4);
  sqcRYGate(q, -3.051128989488408, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.06776342910478128, 6);
  sqcRYGate(q, -1.5463919947870257, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4160455598122388, 6);
  sqcRYGate(q, 0.9803382736749944, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.483492123859824, 1);
  sqcRYGate(q, 0.4840003343245405, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.2630219062940091, 1);
  sqcRYGate(q, -1.8146284778073198, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2855449453156074, 3);
  sqcRYGate(q, -1.8314033582104212, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.804073405638583, 3);
  sqcRYGate(q, -0.7380857315338715, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.864478143307184, 5);
  sqcRYGate(q, 1.063566244140845, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.20711779366725835, 5);
  sqcRYGate(q, -2.4813201795595594, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.1729116426558832, 0);
  sqcRYGate(q, 2.810994275091676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.19089897186753557, 0);
  sqcRYGate(q, -0.9002521237221385, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7250254476308634, 2);
  sqcRYGate(q, 2.6120137350060255, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1514943641089515, 2);
  sqcRYGate(q, -0.5551681798684792, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.13428594262197624, 4);
  sqcRYGate(q, -1.0322101548673688, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.5929116448562102, 4);
  sqcRYGate(q, 1.4850070310031445, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.16406176817243948, 6);
  sqcRYGate(q, 2.4706750531327573, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.9613622167039146, 6);
  sqcRYGate(q, -2.103803495175697, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.0209665693087284, 1);
  sqcRYGate(q, 1.9175390779972474, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9790433611812936, 1);
  sqcRYGate(q, -0.948760712286611, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.965534865175504, 3);
  sqcRYGate(q, -0.5103228148039455, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.171126963576747, 3);
  sqcRYGate(q, 1.7586719853637096, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.702237856538953, 5);
  sqcRYGate(q, 1.6752905140879903, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.86943318203535, 5);
  sqcRYGate(q, -0.37000158232663694, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.14296446525679232, 0);
  sqcRYGate(q, 2.119980542134109, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.006184293279348552, 0);
  sqcRYGate(q, 1.0595888943369713, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8250418937339425, 2);
  sqcRYGate(q, 0.01793959509407276, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2479470714913488, 2);
  sqcRYGate(q, -0.0705735974062171, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.198575966626749, 4);
  sqcRYGate(q, -0.015411603298505742, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5516878253333877, 4);
  sqcRYGate(q, 0.6747825768775995, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.23133993809043304, 6);
  sqcRYGate(q, -1.8346981136468345, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.06747157673528482, 6);
  sqcRYGate(q, -0.02136878325242747, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.4038464917694453, 1);
  sqcRYGate(q, 0.030625142710951184, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7391433893685049, 1);
  sqcRYGate(q, 2.4643868851341506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4182481604142867, 3);
  sqcRYGate(q, -3.138129066659828, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.49622704527954564, 3);
  sqcRYGate(q, -1.6452698538700115, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.8103730459612108, 5);
  sqcRYGate(q, 2.1827390462800365, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.8591324961129743, 5);
  sqcRYGate(q, 2.867758262073744, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.7479489982492935, 0);
  sqcRYGate(q, 1.859261860778206, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.839950411890344, 0);
  sqcRYGate(q, 2.454363230919927, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0148349140941613, 2);
  sqcRYGate(q, 0.6414746481407273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5301309770056394, 2);
  sqcRYGate(q, 2.3568921851737232, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.507071905200783, 4);
  sqcRYGate(q, 1.2018579843892878, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.03686447683663996, 4);
  sqcRYGate(q, -1.9831862222099765, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.076762960196152, 6);
  sqcRYGate(q, 2.3451113412315636, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.4285916210295837, 6);
  sqcRYGate(q, 3.1198741963825327, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.2514056220412226, 1);
  sqcRYGate(q, 2.6863166748532814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.843829859711856, 1);
  sqcRYGate(q, -2.9601867343733046, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0046483331580227, 3);
  sqcRYGate(q, 0.13603655085939212, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.908436711390667, 3);
  sqcRYGate(q, 1.0667592032931157, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.7767844144606304, 5);
  sqcRYGate(q, -0.26119258329997536, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.9887912179454057, 5);
  sqcRYGate(q, -1.54821945747877, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6110106866443554, 0);
  sqcRYGate(q, -1.5143483201333607, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1897816357571274, 0);
  sqcRYGate(q, -0.7718157580145464, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.1045553189546693, 2);
  sqcRYGate(q, -1.799495677216849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.738845455515549, 2);
  sqcRYGate(q, -1.2877848021542373, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4860813735616034, 4);
  sqcRYGate(q, 2.6642997753931406, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.16245114260790236, 4);
  sqcRYGate(q, -0.7501436398128565, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5708135238161498, 6);
  sqcRYGate(q, 2.10363873068858, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.8633121469120173, 6);
  sqcRYGate(q, 2.4222370105612883, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.6074840874670904, 1);
  sqcRYGate(q, -2.2486432361229953, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.641444518575802, 1);
  sqcRYGate(q, 2.6525370465569256, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.3009432563768155, 3);
  sqcRYGate(q, -2.288111169189066, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.9654996900197843, 3);
  sqcRYGate(q, 1.4257661106679853, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.39202978283103374, 5);
  sqcRYGate(q, 0.00785834653299925, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.62263623636817, 5);
  sqcRYGate(q, 0.9756577866623113, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.23005288812612848, 0);
  sqcRYGate(q, -0.5166771634020888, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7573467343669428, 0);
  sqcRYGate(q, -0.5693369019352515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8622650192071015, 2);
  sqcRYGate(q, -0.5167194972609472, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4057448033863827, 2);
  sqcRYGate(q, 0.3600085686537939, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9506483179528747, 4);
  sqcRYGate(q, 0.009654160782944054, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.6230644812729418, 4);
  sqcRYGate(q, 0.392294091494029, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3788808243597424, 6);
  sqcRYGate(q, 2.906923931072558, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.8221060604931643, 6);
  sqcRYGate(q, -2.5393464316460013, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.42556036362234106, 1);
  sqcRYGate(q, -1.0732152784999214, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4159736547493813, 1);
  sqcRYGate(q, 1.0048672022379916, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6577862162717465, 3);
  sqcRYGate(q, 0.5387444498360164, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 1.623117748975969, 3);
  sqcRYGate(q, 1.4580384317698079, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.044970017001992, 5);
  sqcRYGate(q, -0.19746156152082328, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 2.060520527267207, 5);
  sqcRYGate(q, -0.9147353323698271, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.9872714788387782, 0);
  sqcRYGate(q, 1.9173345054520876, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6804819825783585, 0);
  sqcRYGate(q, -2.5804450284539087, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.0736832117403879, 2);
  sqcRYGate(q, 2.3112804411511436, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2697757695921235, 2);
  sqcRYGate(q, -2.0666630153616246, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22163240631443648, 4);
  sqcRYGate(q, 0.912944576316604, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.23360714580954234, 4);
  sqcRYGate(q, 1.187603337942968, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -2.3883911702005163, 6);
  sqcRYGate(q, 0.7837839667585634, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2051406632996198, 6);
  sqcRYGate(q, -2.605484764991729, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.351433278478145, 1);
  sqcRYGate(q, 0.1172729749415442, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.796150712818501, 1);
  sqcRYGate(q, 0.4761387712038694, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45189156262386554, 3);
  sqcRYGate(q, 0.4057679277605706, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.744969967088998, 3);
  sqcRYGate(q, -0.3253219619873944, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.7860483059118932, 5);
  sqcRYGate(q, 1.841547614578234, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.2859442870391353, 5);
  sqcRYGate(q, -2.9126224779548413, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.6606488819322935, 0);
  sqcRYGate(q, -0.961449537659739, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4447020355965385, 0);
  sqcRYGate(q, 2.9415561919922313, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.971622410230356, 2);
  sqcRYGate(q, -0.11052591533249569, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.842233634119577, 2);
  sqcRYGate(q, 0.41926667869316775, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.602168857338327, 4);
  sqcRYGate(q, -3.0087213008891007, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.8778422547007886, 4);
  sqcRYGate(q, -2.026141829385643, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 2.3215268688640474, 6);
  sqcRYGate(q, -0.8492208280944489, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -1.7814540112690662, 6);
  sqcRYGate(q, -1.7287745999187722, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.2894836481082126, 1);
  sqcRYGate(q, 2.2222198466629037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.812240355643361, 1);
  sqcRYGate(q, -1.154881110496265, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.2704841420333057, 3);
  sqcRYGate(q, 0.6087970812494072, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5132303717053075, 3);
  sqcRYGate(q, 2.536105286283895, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.3540219095273107, 5);
  sqcRYGate(q, 1.4613676659414798, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.5361469551540292, 5);
  sqcRYGate(q, 2.501846976509703, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.347212162068417, 0);
  sqcRYGate(q, -1.6135328704646055, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.753538582673175, 0);
  sqcRYGate(q, -1.7721524981459167, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.46617177220096195, 2);
  sqcRYGate(q, 2.407333534705951, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8617702887293703, 2);
  sqcRYGate(q, -0.5677282168328348, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8766061380255072, 4);
  sqcRYGate(q, -0.8064993794064389, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.8080531807994912, 4);
  sqcRYGate(q, 2.25431527350718, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3180796746357895, 6);
  sqcRYGate(q, 2.5905923579572683, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.4113993778389773, 6);
  sqcRYGate(q, -2.778952146530876, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.494082158298585, 1);
  sqcRYGate(q, -0.9530211823374737, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7864658654084675, 1);
  sqcRYGate(q, 1.5794505921538766, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7730206482954232, 3);
  sqcRYGate(q, -0.3166842639867786, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.1122405248949727, 3);
  sqcRYGate(q, -1.5270850627205288, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.557553522502136, 5);
  sqcRYGate(q, 2.2285588309887343, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.4840844361623322, 5);
  sqcRYGate(q, -2.1516086347501084, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.9218023891187634, 0);
  sqcRYGate(q, 1.5695548143737035, 1);
  sqcRYGate(q, -0.30838384752859876, 2);
  sqcRYGate(q, 0.11787045876340188, 3);
  sqcRYGate(q, -0.4366689998850992, 4);
  sqcRYGate(q, -2.602786629460493, 5);
  sqcRYGate(q, 0.12792933131520892, 6);
  sqcRYGate(q, 0.17382608112610945, 7);

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
