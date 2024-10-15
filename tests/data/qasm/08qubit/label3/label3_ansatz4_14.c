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

  sqcRYGate(q, -1.572797153776822, 0);
  sqcRZGate(q, 1.666543241816029, 0);
  sqcRYGate(q, -1.5473411631025353, 1);
  sqcRZGate(q, -0.6157296989919728, 1);
  sqcRYGate(q, -0.0559549027644044, 2);
  sqcRZGate(q, -1.2912997045287353, 2);
  sqcRYGate(q, -2.8791887137066463, 3);
  sqcRZGate(q, 3.076523351254192, 3);
  sqcRYGate(q, 2.83830222077182, 4);
  sqcRZGate(q, 2.260242519381732, 4);
  sqcRYGate(q, -1.740875622738872, 5);
  sqcRZGate(q, -0.07457579830220683, 5);
  sqcRYGate(q, 2.8948872129949623, 6);
  sqcRZGate(q, 0.9750642874562985, 6);
  sqcRYGate(q, 0.45568253180389856, 7);
  sqcRZGate(q, -0.5075305710512596, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.6353836345563382, 0);
  sqcRZGate(q, 0.5557530674071556, 0);
  sqcRYGate(q, 1.5546590678265726, 1);
  sqcRZGate(q, 2.007502236356986, 1);
  sqcRYGate(q, 2.402892930224982, 2);
  sqcRZGate(q, -0.903357979237672, 2);
  sqcRYGate(q, 1.2157907372874925, 3);
  sqcRZGate(q, 2.9235111450539994, 3);
  sqcRYGate(q, -2.3157366715085064, 4);
  sqcRZGate(q, -0.7247126785916019, 4);
  sqcRYGate(q, -1.9990118892343425, 5);
  sqcRZGate(q, -0.5414478579476613, 5);
  sqcRYGate(q, 0.8458231384857545, 6);
  sqcRZGate(q, 2.2312903120048317, 6);
  sqcRYGate(q, -0.1262361495690737, 7);
  sqcRZGate(q, 3.08246407657083, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.7927143174609665, 0);
  sqcRZGate(q, -1.3408492203882503, 0);
  sqcRYGate(q, 2.718370154724537, 1);
  sqcRZGate(q, -0.4314411448548066, 1);
  sqcRYGate(q, -1.1573723960359281, 2);
  sqcRZGate(q, 1.7650834848634611, 2);
  sqcRYGate(q, -1.0512536824500565, 3);
  sqcRZGate(q, -2.215950118303051, 3);
  sqcRYGate(q, 1.7868546761568656, 4);
  sqcRZGate(q, 2.5355609326563626, 4);
  sqcRYGate(q, 1.5627721518790478, 5);
  sqcRZGate(q, -0.7140195525918882, 5);
  sqcRYGate(q, -1.376486914919032, 6);
  sqcRZGate(q, 2.648552715093102, 6);
  sqcRYGate(q, -1.768134734879041, 7);
  sqcRZGate(q, 0.15641938350296414, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.264116447977676, 0);
  sqcRZGate(q, -1.1921110529491088, 0);
  sqcRYGate(q, 2.1191352606752725, 1);
  sqcRZGate(q, -1.9088748636620947, 1);
  sqcRYGate(q, -1.9904165573931243, 2);
  sqcRZGate(q, -2.703744428177835, 2);
  sqcRYGate(q, 1.9023960888739353, 3);
  sqcRZGate(q, -0.6381643192583666, 3);
  sqcRYGate(q, -2.108949271526492, 4);
  sqcRZGate(q, 2.2747194986662898, 4);
  sqcRYGate(q, -2.6479539937828407, 5);
  sqcRZGate(q, -2.014240049768532, 5);
  sqcRYGate(q, 2.508531932808654, 6);
  sqcRZGate(q, -2.6123152885372845, 6);
  sqcRYGate(q, 1.7507574729664066, 7);
  sqcRZGate(q, 2.4114140545306175, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.34842541776058134, 0);
  sqcRZGate(q, -1.645267381564807, 0);
  sqcRYGate(q, -2.9610496316372994, 1);
  sqcRZGate(q, -1.7880213798575215, 1);
  sqcRYGate(q, 2.925759956178853, 2);
  sqcRZGate(q, 1.1226019583678368, 2);
  sqcRYGate(q, 0.08782305065363209, 3);
  sqcRZGate(q, -2.482557511773398, 3);
  sqcRYGate(q, -3.007268894620354, 4);
  sqcRZGate(q, -2.2615927967743157, 4);
  sqcRYGate(q, 1.6611443394939878, 5);
  sqcRZGate(q, -1.5236201236528162, 5);
  sqcRYGate(q, 1.8716326064010458, 6);
  sqcRZGate(q, -1.2317575957658062, 6);
  sqcRYGate(q, -2.1578012978991463, 7);
  sqcRZGate(q, -0.9583219236169043, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.5860763367423028, 0);
  sqcRZGate(q, -2.9093952290921212, 0);
  sqcRYGate(q, -2.17991933028825, 1);
  sqcRZGate(q, 0.6185423924444629, 1);
  sqcRYGate(q, -0.3172098339936253, 2);
  sqcRZGate(q, -1.441976065757479, 2);
  sqcRYGate(q, 2.184915070057481, 3);
  sqcRZGate(q, 0.5270538710449378, 3);
  sqcRYGate(q, -0.4633070051818553, 4);
  sqcRZGate(q, -2.1716225016792783, 4);
  sqcRYGate(q, -1.6531363020775316, 5);
  sqcRZGate(q, -0.44498333223588477, 5);
  sqcRYGate(q, -3.0249143945341577, 6);
  sqcRZGate(q, -0.5810834633133579, 6);
  sqcRYGate(q, 1.2749268764658455, 7);
  sqcRZGate(q, 1.9923119062599817, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.0207843809806358, 0);
  sqcRZGate(q, 1.5968585637561032, 0);
  sqcRYGate(q, -1.7289147237933224, 1);
  sqcRZGate(q, 2.58028134135521, 1);
  sqcRYGate(q, 0.06060240549345153, 2);
  sqcRZGate(q, -1.3986406806098906, 2);
  sqcRYGate(q, -2.725972684438864, 3);
  sqcRZGate(q, 2.125021957745723, 3);
  sqcRYGate(q, 1.8141241601775855, 4);
  sqcRZGate(q, -1.269500814165939, 4);
  sqcRYGate(q, 2.024897222944994, 5);
  sqcRZGate(q, 0.9403210132359858, 5);
  sqcRYGate(q, -0.39097263636863566, 6);
  sqcRZGate(q, 0.47618672367980963, 6);
  sqcRYGate(q, 3.110978649053456, 7);
  sqcRZGate(q, -1.7286661736842837, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.085816699721022, 0);
  sqcRZGate(q, 1.1533927487176179, 0);
  sqcRYGate(q, -0.37466801958661006, 1);
  sqcRZGate(q, 0.6398944531138815, 1);
  sqcRYGate(q, -0.6279533312545911, 2);
  sqcRZGate(q, 2.433578786045453, 2);
  sqcRYGate(q, 1.7450932734697102, 3);
  sqcRZGate(q, 2.533159760168752, 3);
  sqcRYGate(q, 3.1161817372562735, 4);
  sqcRZGate(q, 0.6315115647112308, 4);
  sqcRYGate(q, -0.8768283801751569, 5);
  sqcRZGate(q, -0.2826606236734453, 5);
  sqcRYGate(q, 1.6115468913407929, 6);
  sqcRZGate(q, -0.8369343971054423, 6);
  sqcRYGate(q, 1.4974020055402528, 7);
  sqcRZGate(q, 0.49834308807348154, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.1066642956534816, 0);
  sqcRZGate(q, -2.156744080996507, 0);
  sqcRYGate(q, -0.9795753551581345, 1);
  sqcRZGate(q, -1.5887272893123061, 1);
  sqcRYGate(q, 0.15983762429222462, 2);
  sqcRZGate(q, -1.378825984328937, 2);
  sqcRYGate(q, 2.841499411253571, 3);
  sqcRZGate(q, -0.8663745051280164, 3);
  sqcRYGate(q, 2.1658023307125793, 4);
  sqcRZGate(q, -2.085076013564067, 4);
  sqcRYGate(q, -1.933178528324466, 5);
  sqcRZGate(q, 0.9079562797848437, 5);
  sqcRYGate(q, 1.0370074621037935, 6);
  sqcRZGate(q, 1.039650033086815, 6);
  sqcRYGate(q, -2.925364524141309, 7);
  sqcRZGate(q, -0.9063004285345082, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.884984416300179, 0);
  sqcRZGate(q, -2.1871191090153532, 0);
  sqcRYGate(q, -1.6425144377287477, 1);
  sqcRZGate(q, -1.0061810934775108, 1);
  sqcRYGate(q, -1.7501316211499074, 2);
  sqcRZGate(q, -2.5438514210402516, 2);
  sqcRYGate(q, 1.2192342861555154, 3);
  sqcRZGate(q, -2.199404605211721, 3);
  sqcRYGate(q, -2.9311034732158574, 4);
  sqcRZGate(q, -1.2497375708523863, 4);
  sqcRYGate(q, 0.5707554432949795, 5);
  sqcRZGate(q, -1.173615971035228, 5);
  sqcRYGate(q, 0.8989799244366816, 6);
  sqcRZGate(q, 1.5382151825317654, 6);
  sqcRYGate(q, -1.356698499495117, 7);
  sqcRZGate(q, -1.2034169905027623, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.081838422270053, 0);
  sqcRZGate(q, -1.4354013001566786, 0);
  sqcRYGate(q, -2.8847147697593956, 1);
  sqcRZGate(q, -1.6366480720323862, 1);
  sqcRYGate(q, -0.31339290091775673, 2);
  sqcRZGate(q, 0.5792493425747702, 2);
  sqcRYGate(q, 0.9594811992754808, 3);
  sqcRZGate(q, -2.304709769730519, 3);
  sqcRYGate(q, 1.7748078918250345, 4);
  sqcRZGate(q, 1.7524338292366344, 4);
  sqcRYGate(q, 0.3891053308047811, 5);
  sqcRZGate(q, -1.5149203216751905, 5);
  sqcRYGate(q, -2.287815247706736, 6);
  sqcRZGate(q, -2.6579770540696623, 6);
  sqcRYGate(q, -0.8610682848201681, 7);
  sqcRZGate(q, 2.049583825972533, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.4063295519509218, 0);
  sqcRZGate(q, -3.0553464066748126, 0);
  sqcRYGate(q, 1.413767327740357, 1);
  sqcRZGate(q, -3.097522127974604, 1);
  sqcRYGate(q, 2.4140180179019395, 2);
  sqcRZGate(q, 1.7279615986847574, 2);
  sqcRYGate(q, 2.8208708905130826, 3);
  sqcRZGate(q, -2.488469523261261, 3);
  sqcRYGate(q, -2.3388728882640963, 4);
  sqcRZGate(q, -1.4739058234747553, 4);
  sqcRYGate(q, -1.2201377016019288, 5);
  sqcRZGate(q, 0.10039390633990929, 5);
  sqcRYGate(q, -0.9216379881956421, 6);
  sqcRZGate(q, 2.5105589576037945, 6);
  sqcRYGate(q, -2.9252906297598593, 7);
  sqcRZGate(q, 2.1428057970621186, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.802709058615224, 0);
  sqcRZGate(q, -1.6305974631384643, 0);
  sqcRYGate(q, -1.300179341471277, 1);
  sqcRZGate(q, 0.08477793742755586, 1);
  sqcRYGate(q, -0.7367512286546951, 2);
  sqcRZGate(q, 2.7494349672514296, 2);
  sqcRYGate(q, 2.4100233510940186, 3);
  sqcRZGate(q, -1.3668470788860705, 3);
  sqcRYGate(q, 0.5077712875384551, 4);
  sqcRZGate(q, -2.105493534499221, 4);
  sqcRYGate(q, 3.001894228639093, 5);
  sqcRZGate(q, 0.18371383744591874, 5);
  sqcRYGate(q, 1.6531888613775088, 6);
  sqcRZGate(q, 1.5027131674040586, 6);
  sqcRYGate(q, -1.3805925481892336, 7);
  sqcRZGate(q, -1.137835091391512, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -3.0381365886533755, 0);
  sqcRZGate(q, -0.14280442386390846, 0);
  sqcRYGate(q, 1.562207131965929, 1);
  sqcRZGate(q, -2.992724233256164, 1);
  sqcRYGate(q, -0.992251083887891, 2);
  sqcRZGate(q, 0.5533522550788185, 2);
  sqcRYGate(q, -2.672402055440831, 3);
  sqcRZGate(q, -0.8760590627563783, 3);
  sqcRYGate(q, 0.565710565968705, 4);
  sqcRZGate(q, 1.0198466915639186, 4);
  sqcRYGate(q, 2.003041250798419, 5);
  sqcRZGate(q, -1.0637782636871167, 5);
  sqcRYGate(q, -2.1623271783166027, 6);
  sqcRZGate(q, 2.0293673419449227, 6);
  sqcRYGate(q, 1.2974774331747865, 7);
  sqcRZGate(q, 3.019491199108611, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.8547066909098883, 0);
  sqcRZGate(q, -1.6760161690631197, 0);
  sqcRYGate(q, 1.4999194370285265, 1);
  sqcRZGate(q, 2.727669705913128, 1);
  sqcRYGate(q, 1.6329719156130356, 2);
  sqcRZGate(q, -2.779455677191505, 2);
  sqcRYGate(q, -1.4907282005601594, 3);
  sqcRZGate(q, -1.5600219740288686, 3);
  sqcRYGate(q, 0.4696288736852965, 4);
  sqcRZGate(q, 1.856071167209232, 4);
  sqcRYGate(q, -0.7186578082253253, 5);
  sqcRZGate(q, -2.4902994402193186, 5);
  sqcRYGate(q, 0.9008256227466342, 6);
  sqcRZGate(q, 1.5584379070096874, 6);
  sqcRYGate(q, -0.7484933332995176, 7);
  sqcRZGate(q, 0.7807567010714194, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.8075416519499836, 0);
  sqcRZGate(q, 1.4687232239845853, 0);
  sqcRYGate(q, 3.056267419064417, 1);
  sqcRZGate(q, 1.8642037997560512, 1);
  sqcRYGate(q, 0.17331317519070222, 2);
  sqcRZGate(q, 2.8200548781781025, 2);
  sqcRYGate(q, -1.5453232617379222, 3);
  sqcRZGate(q, 1.4010244699958774, 3);
  sqcRYGate(q, -2.7145033105051923, 4);
  sqcRZGate(q, 1.7084913984247112, 4);
  sqcRYGate(q, 2.2863462571793, 5);
  sqcRZGate(q, 2.007160335853975, 5);
  sqcRYGate(q, 2.369785545146462, 6);
  sqcRZGate(q, 0.4055652449176464, 6);
  sqcRYGate(q, -1.3682215059182121, 7);
  sqcRZGate(q, 1.3391317061422532, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.629403698288518, 0);
  sqcRZGate(q, 0.2923038194004781, 0);
  sqcRYGate(q, 1.37683200033074, 1);
  sqcRZGate(q, 0.2517251866738526, 1);
  sqcRYGate(q, -1.8287971670713041, 2);
  sqcRZGate(q, -1.8323044892272857, 2);
  sqcRYGate(q, -1.7264393273242744, 3);
  sqcRZGate(q, 2.7674843556856903, 3);
  sqcRYGate(q, 0.018374392458053636, 4);
  sqcRZGate(q, 3.0708198719510342, 4);
  sqcRYGate(q, -3.1266747538779156, 5);
  sqcRZGate(q, 2.9620018219233217, 5);
  sqcRYGate(q, 0.8048096188532406, 6);
  sqcRZGate(q, -0.7093528544337436, 6);
  sqcRYGate(q, 1.1265676450303599, 7);
  sqcRZGate(q, 0.7068023355428572, 7);
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
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.1398577226092534, 0);
  sqcRZGate(q, 2.754453351736466, 0);
  sqcRYGate(q, 1.8766209319959941, 1);
  sqcRZGate(q, 1.1700425269577766, 1);
  sqcRYGate(q, -1.341310866320786, 2);
  sqcRZGate(q, -0.4835624842588713, 2);
  sqcRYGate(q, -0.3704909920264212, 3);
  sqcRZGate(q, 2.9748089720333186, 3);
  sqcRYGate(q, 0.36395880140301656, 4);
  sqcRZGate(q, 1.9645286889676763, 4);
  sqcRYGate(q, 1.2968974428733584, 5);
  sqcRZGate(q, -1.1978169606377609, 5);
  sqcRYGate(q, -1.8033445105665675, 6);
  sqcRZGate(q, -0.272277644076488, 6);
  sqcRYGate(q, -0.7671778700128051, 7);
  sqcRZGate(q, 1.0943167382396837, 7);

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
