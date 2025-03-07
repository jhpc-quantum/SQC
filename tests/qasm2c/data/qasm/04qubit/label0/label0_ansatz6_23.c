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

  sqcRYGate(q, 0.29382384360974356, 0);
  sqcRYGate(q, 2.203458397921132, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6198181619804652, 0);
  sqcRYGate(q, 2.801117807949201, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.375698589928069, 1);
  sqcRYGate(q, -1.9203602041480128, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1335222503292677, 1);
  sqcRYGate(q, 1.815762366322498, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7365552455068238, 2);
  sqcRYGate(q, -1.8701224907778569, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.156075513732958, 2);
  sqcRYGate(q, 0.2683557214459036, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.5168583955744623, 0);
  sqcRYGate(q, -0.18196340070338535, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.2251147279560306, 0);
  sqcRYGate(q, -1.855440625615566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9640689020574904, 1);
  sqcRYGate(q, -1.5236255533223693, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.472314391966223, 1);
  sqcRYGate(q, -0.7365794092397854, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.9561868363174475, 2);
  sqcRYGate(q, -1.6054357762260536, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5738865999968796, 2);
  sqcRYGate(q, -0.5909917764780603, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3365660128998567, 0);
  sqcRYGate(q, -0.9318884976126381, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1996548664642726, 0);
  sqcRYGate(q, -0.36200629419507196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8899311507146959, 1);
  sqcRYGate(q, 2.3602924461233266, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.972157448022887, 1);
  sqcRYGate(q, -2.9333526833689563, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7982345277363998, 2);
  sqcRYGate(q, -2.99634877210639, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.717118394157444, 2);
  sqcRYGate(q, 0.5297381070958957, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5946488534262433, 0);
  sqcRYGate(q, 1.0426541872927562, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2312710729196787, 0);
  sqcRYGate(q, 2.47010644730871, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5888037163418982, 1);
  sqcRYGate(q, -2.0762300845342176, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.7146907460579814, 1);
  sqcRYGate(q, 0.3659505857684646, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.614808769571276, 2);
  sqcRYGate(q, 1.1759186871004275, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4130993322598062, 2);
  sqcRYGate(q, -1.1943510212916615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6179811441121963, 0);
  sqcRYGate(q, -0.30935856362755676, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8001696117411253, 0);
  sqcRYGate(q, -0.9763988198510456, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5951301065890884, 1);
  sqcRYGate(q, 2.0068671512925853, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.525246787648112, 1);
  sqcRYGate(q, 0.46211815916600596, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2034839384985747, 2);
  sqcRYGate(q, 2.2198765273947343, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.264652762144852, 2);
  sqcRYGate(q, 0.45996064375010665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.4410608724400595, 0);
  sqcRYGate(q, -0.5334129817450546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.0012622594025775, 0);
  sqcRYGate(q, -0.9330320708588974, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.217228115560479, 1);
  sqcRYGate(q, -1.6195943620899538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1660426861758273, 1);
  sqcRYGate(q, -2.3193712010629537, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5870750976630531, 2);
  sqcRYGate(q, 1.9511123985743808, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6445012915854418, 2);
  sqcRYGate(q, 0.11182345498269562, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1876726679586334, 0);
  sqcRYGate(q, -2.877717969574471, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5258678649596797, 0);
  sqcRYGate(q, 3.0531370270492793, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8935543081678299, 1);
  sqcRYGate(q, -2.7363021454069285, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7441505107728714, 1);
  sqcRYGate(q, 2.2376697135765973, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6804891422546762, 2);
  sqcRYGate(q, -1.4634539533549937, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2978168336866456, 2);
  sqcRYGate(q, 0.8249659026549256, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7451942222244146, 0);
  sqcRYGate(q, -2.161170897387005, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7022997777278417, 0);
  sqcRYGate(q, -0.9409785759371427, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.057878570817219, 1);
  sqcRYGate(q, 0.18680077525286595, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.8699823605880592, 1);
  sqcRYGate(q, -0.0907323761286225, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3356220457298839, 2);
  sqcRYGate(q, 1.6966565941314462, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.6289716066643396, 2);
  sqcRYGate(q, -2.753450207480684, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2229526943851248, 0);
  sqcRYGate(q, 0.38355559175406057, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4887734417823433, 0);
  sqcRYGate(q, 0.7749234699290124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.008435431185782606, 1);
  sqcRYGate(q, -2.3136295519710277, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8523948816752043, 1);
  sqcRYGate(q, 2.505171122690989, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5156862536435307, 2);
  sqcRYGate(q, 0.8594779618364456, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.104751255650152, 2);
  sqcRYGate(q, -1.38905829715869, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7442516143986015, 0);
  sqcRYGate(q, 2.6025439484810646, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8255972289354006, 0);
  sqcRYGate(q, 0.6951965943112244, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.051118770176101336, 1);
  sqcRYGate(q, 0.8333845145853048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.005591551334314, 1);
  sqcRYGate(q, 3.1108035206098514, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.30049900665417706, 2);
  sqcRYGate(q, 0.1511932746461424, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.11789408045785, 2);
  sqcRYGate(q, 2.2022027683285033, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3961368387737325, 0);
  sqcRYGate(q, -2.565519893340353, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.9354748678301945, 0);
  sqcRYGate(q, -2.095726452242154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.539959086841108, 1);
  sqcRYGate(q, 0.6350118307660395, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.685606474941061, 1);
  sqcRYGate(q, 0.703224557920799, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.804028616846649, 2);
  sqcRYGate(q, -2.6045491240000516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9878803359312425, 2);
  sqcRYGate(q, 2.4530354053132912, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.96876233677387, 0);
  sqcRYGate(q, -0.619702691849846, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7289941371812922, 0);
  sqcRYGate(q, 1.9711483293008003, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7918910813569077, 1);
  sqcRYGate(q, 1.2500498980643133, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.1434560442927788, 1);
  sqcRYGate(q, 2.179470330052057, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.4896824533564281, 2);
  sqcRYGate(q, 0.20065527369744274, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8602363534564743, 2);
  sqcRYGate(q, 0.10420860717003402, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2733493481878666, 0);
  sqcRYGate(q, -1.9829414230069422, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.3361379168928074, 0);
  sqcRYGate(q, -2.669104587960847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5451615513931936, 1);
  sqcRYGate(q, -0.06184510878014482, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07824324412767115, 1);
  sqcRYGate(q, -2.8659917848967127, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7475171479745627, 2);
  sqcRYGate(q, -1.125572116724965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.8132490813886915, 2);
  sqcRYGate(q, -2.719309383675161, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.0032133873995111835, 0);
  sqcRYGate(q, 2.7272253183568655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2307808555950444, 0);
  sqcRYGate(q, -1.4722699688358327, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.7954228567829679, 1);
  sqcRYGate(q, -2.665856671150201, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.4109872818822713, 1);
  sqcRYGate(q, 0.2866335766429984, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.10428408842767745, 2);
  sqcRYGate(q, -1.672569398398359, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.1757660036783193, 2);
  sqcRYGate(q, -2.150842424280823, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5305213236929339, 0);
  sqcRYGate(q, 0.48374142416225097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0484451011293627, 0);
  sqcRYGate(q, 2.945798388427776, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8729974001455026, 1);
  sqcRYGate(q, -2.3037018314019413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8803106541743277, 1);
  sqcRYGate(q, 0.2869139161413312, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.3426493671696988, 2);
  sqcRYGate(q, 1.3421061911731735, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.6394216649070943, 2);
  sqcRYGate(q, -0.007797041986255876, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.005158239688619837, 0);
  sqcRYGate(q, -0.16765761893878833, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9047738839758712, 0);
  sqcRYGate(q, -0.3512681196482164, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.295988428017818, 1);
  sqcRYGate(q, -0.0335100000654851, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.07985911970343901, 1);
  sqcRYGate(q, -1.8146241436149027, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.114509839121094, 2);
  sqcRYGate(q, 1.2465795927570547, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.1618373805471058, 2);
  sqcRYGate(q, -0.8960760220542117, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2784042270214782, 0);
  sqcRYGate(q, 0.14923405759464803, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5283669010705423, 0);
  sqcRYGate(q, 0.9586506498179949, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.007048208511574, 1);
  sqcRYGate(q, -2.691523968792725, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4281490276702409, 1);
  sqcRYGate(q, 1.031229949785037, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6880375100049917, 2);
  sqcRYGate(q, 0.3578464290031477, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.989323832646459, 2);
  sqcRYGate(q, 2.358717044961947, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8018434107108936, 0);
  sqcRYGate(q, -2.7377046595267545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.069748942391631, 0);
  sqcRYGate(q, -2.295433940100482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5075563753731159, 1);
  sqcRYGate(q, -2.5259744143929677, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3468676592294575, 1);
  sqcRYGate(q, -1.2505080743941681, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.05607143330612896, 2);
  sqcRYGate(q, -0.7720427319439206, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3612090848693175, 2);
  sqcRYGate(q, 2.697839311192923, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4501351164936923, 0);
  sqcRYGate(q, -1.972851646456598, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.21339853051244462, 0);
  sqcRYGate(q, -2.302851777971324, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4884489838089614, 1);
  sqcRYGate(q, -1.3527425057378224, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1930138480872925, 1);
  sqcRYGate(q, 1.3977261997334598, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.020562997159805262, 2);
  sqcRYGate(q, 1.1904905725035027, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6355036523575657, 2);
  sqcRYGate(q, -1.1947763583450113, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.063329011422983, 0);
  sqcRYGate(q, 2.0396130978547027, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3301791100194208, 0);
  sqcRYGate(q, -2.2626043193100016, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.5371384095829947, 1);
  sqcRYGate(q, 1.658778206566895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.1266701989586103, 1);
  sqcRYGate(q, 0.8447377775487506, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7772765647994406, 2);
  sqcRYGate(q, -2.237717618665121, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.353252619904701, 2);
  sqcRYGate(q, 1.5966991598356095, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9009656736084242, 0);
  sqcRYGate(q, -1.7499040075717869, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.2901777156575908, 0);
  sqcRYGate(q, 2.482559318485124, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.375758516325913, 1);
  sqcRYGate(q, -0.9441327215503756, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1554812840253375, 1);
  sqcRYGate(q, 1.377371701677868, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4937881826278503, 2);
  sqcRYGate(q, 1.0875815154058837, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9640536193849272, 2);
  sqcRYGate(q, -0.6716202463694207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.06318242421796594, 0);
  sqcRYGate(q, 2.1866462880497215, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4050332603591773, 0);
  sqcRYGate(q, 2.1706520997560492, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.0909003095770475, 1);
  sqcRYGate(q, 1.8295011219083812, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.0267419774116258, 1);
  sqcRYGate(q, 2.5742257303544767, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.059368154934127, 2);
  sqcRYGate(q, 2.1587712619285853, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.9033768470239129, 2);
  sqcRYGate(q, 0.954029572013325, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2311260761024938, 0);
  sqcRYGate(q, 0.09013300356095572, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0222505826702224, 0);
  sqcRYGate(q, 0.7931631159735106, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.821836781190674, 1);
  sqcRYGate(q, 2.9218992742036334, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8948975558629473, 1);
  sqcRYGate(q, 2.1072586274194416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5757952007679723, 2);
  sqcRYGate(q, -2.0165896220757267, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8481145350006276, 2);
  sqcRYGate(q, 2.1337031201875387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.480448878825487, 0);
  sqcRYGate(q, -2.490259151557321, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.054679161135388, 0);
  sqcRYGate(q, 1.110520430032268, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 3.007449197755674, 1);
  sqcRYGate(q, 2.0462156883468534, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1004522040227618, 1);
  sqcRYGate(q, 0.6048120809660444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0272651112497613, 2);
  sqcRYGate(q, 1.1114489608973088, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.074263495120686, 2);
  sqcRYGate(q, -0.8375122812964279, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.394956361138276, 0);
  sqcRYGate(q, 0.40234134343497185, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5834299232388713, 0);
  sqcRYGate(q, 2.2325759470036104, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6903106503053877, 1);
  sqcRYGate(q, 3.1336800278030137, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.876114770698745, 1);
  sqcRYGate(q, 1.7206361471990295, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2914064781861434, 2);
  sqcRYGate(q, 0.7307666418226922, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.524779447347862, 2);
  sqcRYGate(q, -2.351106844618539, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7466468348429252, 0);
  sqcRYGate(q, -2.804420613042911, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -3.1167039130584238, 0);
  sqcRYGate(q, -0.5862089510283641, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9312267589715884, 1);
  sqcRYGate(q, -0.902214987434325, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.1404267790090254, 1);
  sqcRYGate(q, -2.8488965112848423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.113331746953504, 2);
  sqcRYGate(q, -1.4023163287483753, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.757917676051707, 2);
  sqcRYGate(q, 2.8676618675662615, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9837627546390157, 0);
  sqcRYGate(q, -1.3847362437630593, 1);
  sqcRYGate(q, 0.28109519548763195, 2);
  sqcRYGate(q, 0.5764501596268151, 3);

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
